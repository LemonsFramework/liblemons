#include "global.h"

#include <AL/al.h>
#include <AL/alc.h>
#include <AL/efx.h>

#define FUNC_NAME(n) HL_NAME(openal_##n)

//////////////////////////////////////////////////////////////////////////////////////////
// al
//////////////////////////////////////////////////////////////////////////////////////////
// state management

HL_PRIM void FUNC_NAME(al_enable)(int capability) {
	alEnable(capability);
}

HL_PRIM void FUNC_NAME(al_disable)(int capability) {
	alDisable(capability);
}

HL_PRIM bool FUNC_NAME(al_is_enabled)(int capability) {
	return alIsEnabled(capability) == 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
// context state management

HL_PRIM void FUNC_NAME(al_doppler_factor)(float value) {
	alDopplerFactor(value);
}

HL_PRIM void FUNC_NAME(al_doppler_velocity)(float value) {
	alDopplerVelocity(value);
}

HL_PRIM void FUNC_NAME(al_speed_of_sound)(float value) {
	alSpeedOfSound(value);
}

HL_PRIM void FUNC_NAME(al_distance_model)(int distanceModel) {
	alDistanceModel(distanceModel);
}

//////////////////////////////////////////////////////////////////////////////////////////
// context state querying

HL_PRIM vbyte* FUNC_NAME(al_get_string)(int param) {
	return (vbyte*)alGetString(param);
}

HL_PRIM vbyte* FUNC_NAME(al_get_booleanv)(int param) {
	return (vbyte*)alGetString(param);
}

//////////////////////////////////////////////////////////////////////////////////////////
// alc
//////////////////////////////////////////////////////////////////////////////////////////
// context management

HL_PRIM ALCcontext* FUNC_NAME(alc_create_context)(ALCdevice* device, vbyte* attributes) {
	return alcCreateContext(device, (ALCint*)attributes);
}

HL_PRIM bool FUNC_NAME(alc_make_context_current)(ALCcontext* context) {
	return alcMakeContextCurrent(context) == 1;
}

HL_PRIM void FUNC_NAME(alc_process_context)(ALCcontext* context) {
	alcProcessContext(context);
}

HL_PRIM void FUNC_NAME(alc_destroy_context)(ALCcontext* context) {
	alcDestroyContext(context);
}

HL_PRIM ALCcontext* FUNC_NAME(alc_get_current_context)() {
	return alcGetCurrentContext();
}

HL_PRIM ALCdevice* FUNC_NAME(alc_get_contexts_device)(ALCcontext* context) {
	return alcGetContextsDevice(context);
}

//////////////////////////////////////////////////////////////////////////////////////////
// context management

HL_PRIM ALCdevice* FUNC_NAME(alc_open_device)(vstring* devicename) {
	return alcOpenDevice(hl_to_utf8(devicename->bytes));
}

HL_PRIM bool FUNC_NAME(alc_close_device)(ALCdevice* device) {
	return alcCloseDevice(device) == 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
// error stuff

HL_PRIM int FUNC_NAME(alc_get_error)(ALCdevice* device) {
	return (int)alcGetError(device);
}

//////////////////////////////////////////////////////////////////////////////////////////
// extensions

HL_PRIM bool FUNC_NAME(alc_is_extension_present)(ALCdevice* device, vstring* extname) {
	return alcIsExtensionPresent(device, hl_to_utf8(extname->bytes)) == 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
// query

HL_PRIM vbyte* FUNC_NAME(alc_get_string)(ALCdevice* device, int param) {
	return (vbyte*)alcGetString(device, param);
}

HL_PRIM void FUNC_NAME(alc_get_integerv)(ALCdevice* device, int param, int size, int* values) {
	alcGetIntegerv(device, param, size, values);
}

// todo: capture apis




#define _ALCCONTEXT _ABSTRACT(ALCcontext*)
#define _ALCDEVICE _ABSTRACT(ALCdevice*)

DEFINE_PRIM(_ALCCONTEXT, openal_alc_create_context, _ALCDEVICE _BYTES)