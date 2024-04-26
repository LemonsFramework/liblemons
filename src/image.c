#include "global.h"

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#define FUNC_NAME(n) HL_NAME(image_##n)

// todo: resizing and writing

typedef struct _LemonsImage LemonsImage;
struct _LemonsImage {
	void(*finalize)(LemonsImage*);
	int width;
	int height;
	int channels;
	vbyte* bytes;
};

static void image_finalize(LemonsImage* image) {
	image->width = 0;
	image->height = 0;
	image->channels = 0;
	stbi_image_free(image->bytes);
	image->bytes = NULL;
}


static LemonsImage* createImage() {
	stbi_set_flip_vertically_on_load(true);
	LemonsImage* image = (LemonsImage*)hl_gc_alloc_finalizer(sizeof(LemonsImage));
	image->finalize = image_finalize;
	return image;
}

HL_PRIM LemonsImage* FUNC_NAME(create_from_bytes)(vbyte* data, int length) {
	LemonsImage* image = createImage();
	image->bytes = stbi_load_from_memory(data, length, &image->width, &image->height, &image->channels, 4);
	return image;
}

HL_PRIM LemonsImage* FUNC_NAME(create_from_file)(vstring* filename) {
	LemonsImage* image = createImage();
	image->bytes = stbi_load(hl_to_utf8(filename->bytes), &image->width, &image->height, &image->channels, 4);
	return image;
}

HL_PRIM void FUNC_NAME(get_image_info)(LemonsImage* image, int* width, int* height, int* channels) {
	*width = image->width;
	*height = image->height;
	*channels = image->channels;
}

HL_PRIM vbyte* FUNC_NAME(get_image_data)(LemonsImage* image) {
	return image->bytes;
}

#define _IMAGE _ABSTRACT(LemonsImage*)

DEFINE_PRIM(_IMAGE, image_create_from_bytes, _BYTES _I32);
DEFINE_PRIM(_IMAGE, image_create_from_file, _STRING);
DEFINE_PRIM(_VOID, image_get_image_info, _IMAGE _REF(_I32) _REF(_I32) _REF(_I32));
DEFINE_PRIM(_BYTES, image_get_image_data, _IMAGE);
