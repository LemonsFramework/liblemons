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
	GLuint buf = 0;
	glGenBuffers(1, &buf);
	return buf;
}

HL_PRIM int FUNC_NAME(gl_gen_framebuffers)() {
	GLuint buf = 0;
	glGenFramebuffers(1, &buf);
	return buf;
}

HL_PRIM int FUNC_NAME(gl_gen_program_pipelines)() {
	GLuint pipe = 0;
	glGenProgramPipelines(1, &pipe);
	return pipe;
}

HL_PRIM int FUNC_NAME(gl_gen_queries)() {
	GLuint queer = 0;
	glGenQueries(1, &queer);
	return queer;
}

HL_PRIM int FUNC_NAME(gl_gen_renderbuffers)() {
	GLuint rend = 0;
	glGenRenderbuffers(1, &rend);
	return rend;
}

HL_PRIM int FUNC_NAME(gl_gen_samplers)() {
	GLuint samplers = 0;
	glGenSamplers(1, &samplers);
	return samplers;
}

HL_PRIM int FUNC_NAME(gl_gen_textures)() {
	GLuint textures = 0;
	glGenTextures(1, &textures);
	return textures;
}

HL_PRIM int FUNC_NAME(gl_gen_transform_feedbacks)() {
	GLuint ids = 0;
	glGenTransformFeedbacks(1, &ids);
	return ids;
}

HL_PRIM int FUNC_NAME(gl_gen_vertex_arrays)() {
	GLuint arrays = 0;
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

HL_PRIM void FUNC_NAME(gl_shader_source)(GLuint shader, vstring* string) {
	char* gay = hl_to_utf8(string->bytes);
	return glShaderSource(shader, 1, &gay, NULL);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_pointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, int offset) {
	return glVertexAttribPointer(index, size, type, normalized, stride, (void*)(intptr_t)offset);
}

HL_PRIM void FUNC_NAME(gl_buffer_data)(GLenum target, int size, vbyte *data, GLenum usage) {
	return glBufferData(target, size, data, usage);
}

HL_PRIM void FUNC_NAME(gl_draw_elements)(GLenum mode, GLsizei count, GLenum type, int start) {
	return glDrawElements(mode, count, type, (void*)(intptr_t)start);
}

DEFINE_PRIM(_VOID, PRIM_NAME(gl_shader_source), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_pointer), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_buffer_data), _I32 _I32 _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements), _I32 _I32 _I32 _I32);

HL_PRIM void FUNC_NAME(gl_uniform1d)(GLint location, GLdouble x) {
	return glUniform1d(location, x);
}

HL_PRIM void FUNC_NAME(gl_uniform1f)(GLint location, GLfloat v0) {
	return glUniform1f(location, v0);
}

HL_PRIM void FUNC_NAME(gl_uniform1i)(GLint location, GLint v0) {
	return glUniform1i(location, v0);
}

HL_PRIM void FUNC_NAME(gl_uniform1ui)(GLint location, GLuint v0) {
	return glUniform1ui(location, v0);
}

HL_PRIM void FUNC_NAME(gl_uniform2d)(GLint location, GLdouble x, GLdouble y) {
	return glUniform2d(location, x, y);
}

HL_PRIM void FUNC_NAME(gl_uniform2f)(GLint location, GLfloat v0, GLfloat v1) {
	return glUniform2f(location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_uniform2i)(GLint location, GLint v0, GLint v1) {
	return glUniform2i(location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_uniform2ui)(GLint location, GLuint v0, GLuint v1) {
	return glUniform2ui(location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_uniform3d)(GLint location, GLdouble x, GLdouble y, GLdouble z) {
	return glUniform3d(location, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_uniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
	return glUniform3f(location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_uniform3i)(GLint location, GLint v0, GLint v1, GLint v2) {
	return glUniform3i(location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_uniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2) {
	return glUniform3ui(location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_uniform4d)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
	return glUniform4d(location, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_uniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
	return glUniform4f(location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_uniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
	return glUniform4i(location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_uniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
	return glUniform4ui(location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix2dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix2dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix2fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix2fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix2x3dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix2x3dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix2x3fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix2x3fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix2x4dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix2x4dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix2x4fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix2x4fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix3dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix3dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix3fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix3fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix3x2dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix3x2dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix3x2fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix3x2fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix3x4dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix3x4dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix3x4fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix3x4fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix4dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix4dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix4fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix4fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix4x2dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix4x2dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix4x2fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix4x2fv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix4x3dv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix4x3dv(location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_uniform_matrix4x3fv)(GLint location, int count, GLboolean transpose, vbyte* value) {
	return glUniformMatrix4x3fv(location, count, transpose, value);
}

HL_PRIM GLint FUNC_NAME(gl_get_uniform_location)(GLuint program, vstring *name) {
	char* gay = hl_to_utf8(name->bytes);
	return glGetUniformLocation(program, gay);
}

DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1d), _I32 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1f), _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1i), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2d), _I32 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2f), _I32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2i), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3d), _I32 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3f), _I32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3i), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4d), _I32 _F64 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4f), _I32 _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4i), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4ui), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x3dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x3fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x4dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x4fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x2dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x2fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x4dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x4fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x2dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x2fv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x3dv), _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x3fv), _I32 _I32 _I32 _BYTES);

DEFINE_PRIM(_I32, PRIM_NAME(gl_get_uniform_location), _I32 _STRING);