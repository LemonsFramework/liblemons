#include "global.h"

#include <stb_vorbis.c>

#define DR_FLAC_IMPLEMENTATION
#include <dr_flac.h>

#define DR_WAV_IMPLEMENTATION
#include <dr_wav.h>

#define FUNC_NAME(n) HL_NAME(sound_##n)


typedef struct _LemonsSound LemonsSound;
struct _LemonsSound {
	void (*finalize)(LemonsSound*);
	void (*seek)(LemonsSound*, int);
	int (*read)(LemonsSound*, char*, int);
	int sampleRate;
	int channels;
	void* handle;
	varray* comments;
};


//////////////////////////////////////////////////////////////////////////////////////////
// ogg specific functions

static void seek_ogg(LemonsSound* sound, int sample) {
	stb_vorbis_seek((stb_vorbis*)sound->handle, sample);
}

// not sure if this function works, testing needed but i dont really have any way of doing that rn
static int read_ogg(LemonsSound* sound, char* out, int length) {
	return stb_vorbis_get_samples_short_interleaved((stb_vorbis*)sound->handle, sound->channels, (short*)out, length * sound->channels);
}

static void finalize_ogg(LemonsSound* sound) {
	stb_vorbis_close((stb_vorbis*)sound->handle);
	sound->handle = NULL;
	sound->comments = NULL;
	sound->channels = 0;
	sound->sampleRate = 0;
}

HL_PRIM LemonsSound* FUNC_NAME(create_from_ogg)(vbyte* data, int length) {
	LemonsSound* sound = (LemonsSound*)hl_gc_alloc_finalizer(sizeof(LemonsSound));
	sound->finalize = finalize_ogg;

	int error = 0;

	stb_vorbis* soundThing = stb_vorbis_open_memory(data, length, &error, NULL);
	sound->handle = (void*)&*soundThing; // this looks fucking stupid but it works

	if (error > 0) {
		hl_fatal1("vorbis open error!!!!! error code: %d", error);
		return NULL;
	}

	stb_vorbis_info info = stb_vorbis_get_info(soundThing);
	sound->sampleRate = (int)info.sample_rate;
	sound->channels = info.channels;

	stb_vorbis_seek_start(soundThing);

	sound->seek = seek_ogg;
	sound->read = read_ogg;

	stb_vorbis_comment commentStruct = stb_vorbis_get_comment(soundThing);

	varray* array = hl_alloc_array(&hlt_bytes, commentStruct.comment_list_length);

	for (int i = 0; i < commentStruct.comment_list_length; i++) {
		int size = sizeof(char*) * (strlen(commentStruct.comment_list[i]) + 1);
		hl_aptr(array, vbyte*)[i] = hl_copy_bytes((vbyte*)commentStruct.comment_list[i], size);
	}

	sound->comments = array;

	return sound;
}

//////////////////////////////////////////////////////////////////////////////////////////
// flac specific functions

static void finalize_flac(LemonsSound* sound) {
	drflac_close((drflac*)sound->handle);
	sound->handle = NULL;
	sound->comments = NULL;
	sound->channels = 0;
	sound->sampleRate = 0;
}

static void seek_flac(LemonsSound* sound, int sample) {
	drflac_seek_to_pcm_frame((drflac*)sound->handle, sample);
}

static int read_flac(LemonsSound* sound, char* out, int length) {
	return (int)drflac_read_pcm_frames_s16((drflac*)sound->handle, length * sound->channels, (short*)out);
}

static void flac_metadata(void* pUserData, drflac_metadata* meta) {
	if (meta->type != DRFLAC_METADATA_BLOCK_TYPE_VORBIS_COMMENT) return;

	LemonsSound* sound = (LemonsSound*)pUserData;

	int count = meta->data.vorbis_comment.commentCount;

	varray* array = hl_alloc_array(&hlt_bytes, count);

	drflac_vorbis_comment_iterator iter;
	drflac_init_vorbis_comment_iterator(&iter, count, meta->data.vorbis_comment.pComments);

	int commentLength;
    const char* pComment;
	int curComment = 0;

    while ((pComment = drflac_next_vorbis_comment(&iter, &commentLength)) != NULL)
		hl_aptr(array, vbyte*)[curComment++] = hl_copy_bytes(pComment, commentLength);

	sound->comments = array;
}

HL_PRIM LemonsSound* FUNC_NAME(create_from_flac)(vbyte* data, int length) {
	LemonsSound* sound = (LemonsSound*)hl_gc_alloc_finalizer(sizeof(LemonsSound));
	sound->finalize = finalize_flac;

	drflac* soundThing = drflac_open_memory_with_metadata(data, length, flac_metadata, (void*)&*sound, NULL);
	sound->handle = (void*)&*soundThing;

	sound->sampleRate = soundThing->sampleRate;
	sound->channels = soundThing->channels;

	sound->seek = seek_flac;
	sound->read = read_flac;

	return sound;
}


//////////////////////////////////////////////////////////////////////////////////////////
// wav/aiff/any format thats based on the iff format for audio specific functions

static void finalize_wav(LemonsSound* sound) {
	drwav* stupid = sound->handle;
	drwav_uninit(stupid);
	sound->handle = NULL;
	sound->comments = NULL;
	sound->channels = 0;
	sound->sampleRate = 0;
}

static void seek_wav(LemonsSound* sound, int sample) {
	drwav_seek_to_pcm_frame((drwav*)sound->handle, sample);
}

static int read_wav(LemonsSound* sound, char* out, int length) {
	return (int)drwav_read_pcm_frames_s16((drwav*)sound->handle, length * sound->channels, (short*)out);
}

HL_PRIM LemonsSound* FUNC_NAME(create_from_wav)(vbyte* data, int length) {
	LemonsSound* sound = (LemonsSound*)hl_gc_alloc_finalizer(sizeof(LemonsSound));
	sound->finalize = finalize_wav;

	drwav soundThing;

	int error = drwav_init_memory(&soundThing, data, length, NULL);
	sound->handle = (void*)&soundThing;

	sound->sampleRate = soundThing.sampleRate;
	sound->channels = soundThing.channels;

	sound->seek = seek_wav;
	sound->read = read_wav;

	return sound;
}



//////////////////////////////////////////////////////////////////////////////////////////
// getter stuff


HL_PRIM void FUNC_NAME(seek)(LemonsSound* sound, int sample) {
	sound->seek(sound, sample);
}

HL_PRIM int FUNC_NAME(read)(LemonsSound* sound, vbyte* out, int length) {
	return sound->read(sound, out, length);
}

HL_PRIM void FUNC_NAME(get_data)(LemonsSound* sound, int* sampleRate, int* channels) {
	*sampleRate = sound->sampleRate;
	*channels = sound->channels;
}

HL_PRIM varray* FUNC_NAME(get_comments)(LemonsSound* sound) {
	return sound->comments;
}

#define _SOUND _ABSTRACT(LemonsSound*)

DEFINE_PRIM(_SOUND, sound_create_from_ogg, _BYTES _I32);
DEFINE_PRIM(_SOUND, sound_create_from_flac, _BYTES _I32);
DEFINE_PRIM(_SOUND, sound_create_from_wav, _BYTES _I32);
DEFINE_PRIM(_VOID, sound_seek, _SOUND _I32);
DEFINE_PRIM(_I32, sound_read, _SOUND _BYTES _I32);
DEFINE_PRIM(_VOID, sound_get_data, _SOUND _REF(_I32) _REF(_I32));
DEFINE_PRIM(_ARR, sound_get_comments, _SOUND);