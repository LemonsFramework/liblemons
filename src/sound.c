#include "global.h"

#include <stb_vorbis.c>

#define DR_FLAC_IMPLEMENTATION
#include <dr_flac.h>

#define FUNC_NAME(n) HL_NAME(sound_##n)


typedef struct _LemonsSound LemonsSound;
struct _LemonsSound {
	void (*finalize)(LemonsSound*);
	void (*seek)(LemonsSound*, int);
	varray* (*getComments)(LemonsSound*);
	int (*read)(LemonsSound*, char*, int);
	int sampleRate;
	int channels;
	void* handle;
};


//////////////////////////////////////////////////////////////////////////////////////////
// ogg specific functions

static varray* comments_ogg(LemonsSound* sound) {
	stb_vorbis* vorbius = (stb_vorbis*)sound->handle;
	stb_vorbis_comment commentStruct = stb_vorbis_get_comment(vorbius);

	varray* array = hl_alloc_array(&hlt_bytes, commentStruct.comment_list_length);

	for (int i = 0; i < commentStruct.comment_list_length; i++) {
		int size = sizeof(char*) * (strlen(commentStruct.comment_list[i]) + 1);
		hl_aptr(array, vbyte*)[i] = hl_copy_bytes((vbyte*)commentStruct.comment_list[i], size);
	}

	return array;
}

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
	sound->getComments = comments_ogg;

	return sound;
}

//////////////////////////////////////////////////////////////////////////////////////////
// flac specific functions

// todo: metadata stuff for getting comments

static void finalize_flac(LemonsSound* sound) {
	drflac_close((drflac*)sound->handle);
	sound->handle = NULL;
	sound->channels = 0;
	sound->sampleRate = 0;
}

static void seek_flac(LemonsSound* sound, int sample) {
	drflac_seek_to_pcm_frame((drflac*)sound->handle, sample);
}

static int read_flac(LemonsSound* sound, char* out, int length) {
	return drflac_read_pcm_frames_s16((drflac*)sound->handle, length * sound->channels, (short*)out);
}

static int flac_metadata(void* pUserData, drflac_metadata* pMetadata) {
}

HL_PRIM LemonsSound* FUNC_NAME(create_from_flac)(vbyte* data, int length) {
	LemonsSound* sound = (LemonsSound*)hl_gc_alloc_finalizer(sizeof(LemonsSound));
	sound->finalize = finalize_flac;

	drflac* soundThing = drflac_open_memory_with_metadata(data, length, flac_metadata, NULL, NULL);
	sound->handle = (void*)&*soundThing;

	sound->sampleRate = soundThing->sampleRate;
	sound->channels = soundThing->channels;

	sound->seek = seek_flac;
	sound->read = read_flac;

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
	return sound->getComments(sound);
}

#define _SOUND _ABSTRACT(LemonsSound*)

DEFINE_PRIM(_SOUND, sound_create_from_ogg, _BYTES _I32);
DEFINE_PRIM(_SOUND, sound_create_from_flac, _BYTES _I32);
DEFINE_PRIM(_VOID, sound_seek, _SOUND _I32);
DEFINE_PRIM(_I32, sound_read, _SOUND _BYTES _I32);
DEFINE_PRIM(_VOID, sound_get_data, _SOUND _REF(_I32) _REF(_I32));
DEFINE_PRIM(_ARR, sound_get_comments, _SOUND);