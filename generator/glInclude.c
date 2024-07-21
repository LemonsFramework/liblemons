static vclosure *debugFunc;

// IM RETARDEDDDDD
static void onDebugData(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message, const void *userParam) {
	vdynamic arg;
	vdynamic argTwo;
	vdynamic argThree;
	vdynamic argFour;
	vdynamic argFive;
	vdynamic argSix;
	arg.t = &hlt_i32;
	arg.t = &hlt_i32;
	arg.t = &hlt_i32;
	arg.t = &hlt_i32;
	arg.t = &hlt_i32;
	arg.t = &hlt_bytes;
	arg.v.i = source;
	arg.v.i = type;
	arg.v.i = id;
	arg.v.i = severity;
	arg.v.i = length;
	arg.v.bytes = message;

	vdynamic* args[6] = { &arg, &argTwo, &argThree, &argFour, &argFive, &argSix };
	hl_dyn_call(debugFunc, args, 6);
}

HL_PRIM int FUNC_NAME(glad_load_gl)() {
	return gladLoadGL(glfwGetProcAddress);
}

DEFINE_PRIM(_I32, PRIM_NAME(glad_load_gl), _NO_ARG);

HL_PRIM int FUNC_NAME(gl_gen_buffers)() {
	GLuint buf;
	glGenBuffers(1, &buf);
	return buf;
}

HL_PRIM int FUNC_NAME(gl_gen_framebuffers)() {
	GLuint buf;
	glGenFramebuffers(1, &buf);
	return buf;
}

HL_PRIM int FUNC_NAME(gl_gen_program_pipelines)() {
	GLuint pipe;
	glGenProgramPipelines(1, &pipe);
	return pipe;
}

HL_PRIM int FUNC_NAME(gl_gen_queries)() {
	GLuint queer;
	glGenQueries(1, &queer);
	return queer;
}

HL_PRIM int FUNC_NAME(gl_gen_renderbuffers)() {
	GLuint rend;
	glGenRenderbuffers(1, &rend);
	return queer;
}

HL_PRIM int FUNC_NAME(gl_gen_samplers)() {
	GLuint samplers;
	glGenSamplers(1, &samplers);
	return samplers;
}

HL_PRIM int FUNC_NAME(gl_gen_textures)() {
	GLuint textures;
	glGenTextures(1, &textures);
	return textures;
}

HL_PRIM int FUNC_NAME(gl_gen_transform_feedbacks)() {
	GLuint ids;
	glGenTransformFeedbacks(1, &ids);
	return ids;
}

HL_PRIM int FUNC_NAME(gl_gen_vertex_arrays)() {
	GLuint arrays;
	glGenVertexArrays(1, &arrays);
	return arrays;
}

HL_PRIM void FUNC_NAME(gl_generate_mipmap)(GLenum target) {
	return glGenerateMipmap(target);
}


DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_buffers), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_framebuffers), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_program_pipelines), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_queries), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_renderbuffers), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_samplers), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_textures), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_transform_feedbacks), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_gen_vertex_arrays), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_generate_mipmap), _I32);
