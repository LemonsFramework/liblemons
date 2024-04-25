#include "global.h"

#include <AL/al.h>
#include <AL/alc.h>
#include <AL/efx.h>

#define FUNC_NAME(n) HL_NAME(openal_##n)

HL_PRIM ALCcontext* HL_NAME(openal_alc_create_context)(ALCdevice* device, vbyte* attributes) {
	return alcCreateContext(device, (ALCint*)attributes);
}

#define _ALCCONTEXT _ABSTRACT(ALCcontext*)
#define _ALCDEVICE _ABSTRACT(ALCdevice*)

DEFINE_PRIM(_ALCCONTEXT, openal_alc_create_context, _ALCDEVICE _BYTES)