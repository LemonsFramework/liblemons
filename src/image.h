typedef struct _LemonsImage LemonsImage;
struct _LemonsImage {
	void(*finalize)(LemonsImage*);
	int width;
	int height;
	int channels;
	vbyte* bytes;
};