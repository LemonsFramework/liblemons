/*
	Generated with liblemons' GLADGenerator https://github.com/LemonsFramework/liblemons
*/

#pragma warning(disable:4098) // disable void return warning
#pragma warning(disable:4133) // disable uchar* to (const) GLchar* warning
#pragma warning(disable:4090) // disable const warning thing

#include "global.h"

#define GLAD_GL_IMPLEMENTATION
#include <glad/gl.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#define FUNC_NAME(n) HL_NAME(gl_##n)
#define PRIM_NAME(n) gl_##n
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


HL_PRIM void FUNC_NAME(gl_active_shader_program)(GLuint pipeline, GLuint program) {
	return glActiveShaderProgram(pipeline, program);
}

HL_PRIM void FUNC_NAME(gl_active_texture)(GLenum texture) {
	return glActiveTexture(texture);
}

HL_PRIM void FUNC_NAME(gl_attach_shader)(GLuint program, GLuint shader) {
	return glAttachShader(program, shader);
}

HL_PRIM void FUNC_NAME(gl_begin_conditional_render)(GLuint id, GLenum mode) {
	return glBeginConditionalRender(id, mode);
}

HL_PRIM void FUNC_NAME(gl_begin_query)(GLenum target, GLuint id) {
	return glBeginQuery(target, id);
}

HL_PRIM void FUNC_NAME(gl_begin_query_indexed)(GLenum target, GLuint index, GLuint id) {
	return glBeginQueryIndexed(target, index, id);
}

HL_PRIM void FUNC_NAME(gl_begin_transform_feedback)(GLenum primitiveMode) {
	return glBeginTransformFeedback(primitiveMode);
}

HL_PRIM void FUNC_NAME(gl_bind_attrib_location)(GLuint program, GLuint index, vstring *name) {
	return glBindAttribLocation(program, index, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_bind_buffer)(GLenum target, GLuint buffer) {
	return glBindBuffer(target, buffer);
}

HL_PRIM void FUNC_NAME(gl_bind_buffer_base)(GLenum target, GLuint index, GLuint buffer) {
	return glBindBufferBase(target, index, buffer);
}

HL_PRIM void FUNC_NAME(gl_bind_buffer_range)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
	return glBindBufferRange(target, index, buffer, offset, size);
}

HL_PRIM void FUNC_NAME(gl_bind_buffers_base)(GLenum target, GLuint first, GLsizei count, GLuint *buffers) {
	return glBindBuffersBase(target, first, count, buffers);
}

HL_PRIM void FUNC_NAME(gl_bind_buffers_range)(GLenum target, GLuint first, GLsizei count, GLuint *buffers, varray *offsets, varray *sizes) {
	return glBindBuffersRange(target, first, count, buffers, hl_aptr(offsets, GLintptr), hl_aptr(sizes, GLsizeiptr));
}

HL_PRIM void FUNC_NAME(gl_bind_frag_data_location)(GLuint program, GLuint color, vstring *name) {
	return glBindFragDataLocation(program, color, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_bind_frag_data_location_indexed)(GLuint program, GLuint colorNumber, GLuint index, vstring *name) {
	return glBindFragDataLocationIndexed(program, colorNumber, index, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_bind_framebuffer)(GLenum target, GLuint framebuffer) {
	return glBindFramebuffer(target, framebuffer);
}

HL_PRIM void FUNC_NAME(gl_bind_image_texture)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
	return glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

HL_PRIM void FUNC_NAME(gl_bind_image_textures)(GLuint first, GLsizei count, GLuint *textures) {
	return glBindImageTextures(first, count, textures);
}

HL_PRIM void FUNC_NAME(gl_bind_program_pipeline)(GLuint pipeline) {
	return glBindProgramPipeline(pipeline);
}

HL_PRIM void FUNC_NAME(gl_bind_renderbuffer)(GLenum target, GLuint renderbuffer) {
	return glBindRenderbuffer(target, renderbuffer);
}

HL_PRIM void FUNC_NAME(gl_bind_sampler)(GLuint unit, GLuint sampler) {
	return glBindSampler(unit, sampler);
}

HL_PRIM void FUNC_NAME(gl_bind_samplers)(GLuint first, GLsizei count, GLuint *samplers) {
	return glBindSamplers(first, count, samplers);
}

HL_PRIM void FUNC_NAME(gl_bind_texture)(GLenum target, GLuint texture) {
	return glBindTexture(target, texture);
}

HL_PRIM void FUNC_NAME(gl_bind_textures)(GLuint first, GLsizei count, GLuint *textures) {
	return glBindTextures(first, count, textures);
}

HL_PRIM void FUNC_NAME(gl_bind_transform_feedback)(GLenum target, GLuint id) {
	return glBindTransformFeedback(target, id);
}

HL_PRIM void FUNC_NAME(gl_bind_vertex_array)(GLuint array) {
	return glBindVertexArray(array);
}

HL_PRIM void FUNC_NAME(gl_bind_vertex_buffer)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
	return glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

HL_PRIM void FUNC_NAME(gl_bind_vertex_buffers)(GLuint first, GLsizei count, GLuint *buffers, varray *offsets, GLsizei *strides) {
	return glBindVertexBuffers(first, count, buffers, hl_aptr(offsets, GLintptr), strides);
}

HL_PRIM void FUNC_NAME(gl_blend_color)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
	return glBlendColor(red, green, blue, alpha);
}

HL_PRIM void FUNC_NAME(gl_blend_equation)(GLenum mode) {
	return glBlendEquation(mode);
}

HL_PRIM void FUNC_NAME(gl_blend_equation_separate)(GLenum modeRGB, GLenum modeAlpha) {
	return glBlendEquationSeparate(modeRGB, modeAlpha);
}

HL_PRIM void FUNC_NAME(gl_blend_equation_separatei)(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
	return glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

HL_PRIM void FUNC_NAME(gl_blend_equationi)(GLuint buf, GLenum mode) {
	return glBlendEquationi(buf, mode);
}

HL_PRIM void FUNC_NAME(gl_blend_func)(GLenum sfactor, GLenum dfactor) {
	return glBlendFunc(sfactor, dfactor);
}

HL_PRIM void FUNC_NAME(gl_blend_func_separate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
	return glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

HL_PRIM void FUNC_NAME(gl_blend_func_separatei)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
	return glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

HL_PRIM void FUNC_NAME(gl_blend_funci)(GLuint buf, GLenum src, GLenum dst) {
	return glBlendFunci(buf, src, dst);
}

HL_PRIM void FUNC_NAME(gl_blit_framebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
	return glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

HL_PRIM void FUNC_NAME(gl_buffer_storage)(GLenum target, GLsizeiptr size, vbyte *data, GLbitfield flags) {
	return glBufferStorage(target, size, data, flags);
}

HL_PRIM void FUNC_NAME(gl_buffer_sub_data)(GLenum target, GLintptr offset, GLsizeiptr size, vbyte *data) {
	return glBufferSubData(target, offset, size, data);
}

HL_PRIM GLenum FUNC_NAME(gl_check_framebuffer_status)(GLenum target) {
	return glCheckFramebufferStatus(target);
}

HL_PRIM void FUNC_NAME(gl_clamp_color)(GLenum target, GLenum clamp) {
	return glClampColor(target, clamp);
}

HL_PRIM void FUNC_NAME(gl_clear)(GLbitfield mask) {
	return glClear(mask);
}

HL_PRIM void FUNC_NAME(gl_clear_buffer_data)(GLenum target, GLenum internalformat, GLenum format, GLenum type, vbyte *data) {
	return glClearBufferData(target, internalformat, format, type, data);
}

HL_PRIM void FUNC_NAME(gl_clear_buffer_sub_data)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, vbyte *data) {
	return glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

HL_PRIM void FUNC_NAME(gl_clear_bufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
	return glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

HL_PRIM void FUNC_NAME(gl_clear_bufferfv)(GLenum buffer, GLint drawbuffer, GLfloat *value) {
	return glClearBufferfv(buffer, drawbuffer, value);
}

HL_PRIM void FUNC_NAME(gl_clear_bufferiv)(GLenum buffer, GLint drawbuffer, GLint *value) {
	return glClearBufferiv(buffer, drawbuffer, value);
}

HL_PRIM void FUNC_NAME(gl_clear_bufferuiv)(GLenum buffer, GLint drawbuffer, GLuint *value) {
	return glClearBufferuiv(buffer, drawbuffer, value);
}

HL_PRIM void FUNC_NAME(gl_clear_color)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
	return glClearColor(red, green, blue, alpha);
}

HL_PRIM void FUNC_NAME(gl_clear_depth)(GLdouble depth) {
	return glClearDepth(depth);
}

HL_PRIM void FUNC_NAME(gl_clear_depthf)(GLfloat d) {
	return glClearDepthf(d);
}

HL_PRIM void FUNC_NAME(gl_clear_stencil)(GLint s) {
	return glClearStencil(s);
}

HL_PRIM void FUNC_NAME(gl_clear_tex_image)(GLuint texture, GLint level, GLenum format, GLenum type, vbyte *data) {
	return glClearTexImage(texture, level, format, type, data);
}

HL_PRIM void FUNC_NAME(gl_clear_tex_sub_image)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, vbyte *data) {
	return glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

HL_PRIM GLenum FUNC_NAME(gl_client_wait_sync)(GLsync sync, GLbitfield flags, GLuint64 timeout) {
	return glClientWaitSync(sync, flags, timeout);
}

HL_PRIM void FUNC_NAME(gl_color_mask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
	return glColorMask(red, green, blue, alpha);
}

HL_PRIM void FUNC_NAME(gl_color_maski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
	return glColorMaski(index, r, g, b, a);
}

HL_PRIM void FUNC_NAME(gl_color_p3ui)(GLenum type, GLuint color) {
	return glColorP3ui(type, color);
}

HL_PRIM void FUNC_NAME(gl_color_p3uiv)(GLenum type, GLuint *color) {
	return glColorP3uiv(type, color);
}

HL_PRIM void FUNC_NAME(gl_color_p4ui)(GLenum type, GLuint color) {
	return glColorP4ui(type, color);
}

HL_PRIM void FUNC_NAME(gl_color_p4uiv)(GLenum type, GLuint *color) {
	return glColorP4uiv(type, color);
}

HL_PRIM void FUNC_NAME(gl_compile_shader)(GLuint shader) {
	return glCompileShader(shader);
}

HL_PRIM void FUNC_NAME(gl_compressed_tex_image1_d)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, vbyte *data) {
	return glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

HL_PRIM void FUNC_NAME(gl_compressed_tex_image2_d)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, vbyte *data) {
	return glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

HL_PRIM void FUNC_NAME(gl_compressed_tex_image3_d)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, vbyte *data) {
	return glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

HL_PRIM void FUNC_NAME(gl_compressed_tex_sub_image1_d)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, vbyte *data) {
	return glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

HL_PRIM void FUNC_NAME(gl_compressed_tex_sub_image2_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, vbyte *data) {
	return glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

HL_PRIM void FUNC_NAME(gl_compressed_tex_sub_image3_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, vbyte *data) {
	return glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

HL_PRIM void FUNC_NAME(gl_copy_buffer_sub_data)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
	return glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

HL_PRIM void FUNC_NAME(gl_copy_image_sub_data)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
	return glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

HL_PRIM void FUNC_NAME(gl_copy_tex_image1_d)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
	return glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

HL_PRIM void FUNC_NAME(gl_copy_tex_image2_d)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
	return glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

HL_PRIM void FUNC_NAME(gl_copy_tex_sub_image1_d)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
	return glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

HL_PRIM void FUNC_NAME(gl_copy_tex_sub_image2_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
	return glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

HL_PRIM void FUNC_NAME(gl_copy_tex_sub_image3_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
	return glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

HL_PRIM GLuint FUNC_NAME(gl_create_program)() {
	return glCreateProgram();
}

HL_PRIM GLuint FUNC_NAME(gl_create_shader)(GLenum type) {
	return glCreateShader(type);
}

HL_PRIM GLuint FUNC_NAME(gl_create_shader_programv)(GLenum type, GLsizei count, varray *strings) {
	return glCreateShaderProgramv(type, count, hl_aptr(strings, GLchar *));
}

HL_PRIM void FUNC_NAME(gl_cull_face)(GLenum mode) {
	return glCullFace(mode);
}

HL_PRIM void FUNC_NAME(gl_debug_message_callback)(vclosure *callback, vbyte *userParam) {
	hl_add_root(&callback);
	debugFunc = callback;
	return glDebugMessageCallback(onDebugData, userParam);
}

HL_PRIM void FUNC_NAME(gl_debug_message_control)(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled) {
	return glDebugMessageControl(source, type, severity, count, ids, enabled);
}

HL_PRIM void FUNC_NAME(gl_debug_message_insert)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, vstring *buf) {
	return glDebugMessageInsert(source, type, id, severity, length, buf->bytes);
}

HL_PRIM void FUNC_NAME(gl_delete_buffers)(GLsizei n, GLuint *buffers) {
	return glDeleteBuffers(n, buffers);
}

HL_PRIM void FUNC_NAME(gl_delete_framebuffers)(GLsizei n, GLuint *framebuffers) {
	return glDeleteFramebuffers(n, framebuffers);
}

HL_PRIM void FUNC_NAME(gl_delete_program)(GLuint program) {
	return glDeleteProgram(program);
}

HL_PRIM void FUNC_NAME(gl_delete_program_pipelines)(GLsizei n, GLuint *pipelines) {
	return glDeleteProgramPipelines(n, pipelines);
}

HL_PRIM void FUNC_NAME(gl_delete_queries)(GLsizei n, GLuint *ids) {
	return glDeleteQueries(n, ids);
}

HL_PRIM void FUNC_NAME(gl_delete_renderbuffers)(GLsizei n, GLuint *renderbuffers) {
	return glDeleteRenderbuffers(n, renderbuffers);
}

HL_PRIM void FUNC_NAME(gl_delete_samplers)(GLsizei count, GLuint *samplers) {
	return glDeleteSamplers(count, samplers);
}

HL_PRIM void FUNC_NAME(gl_delete_shader)(GLuint shader) {
	return glDeleteShader(shader);
}

HL_PRIM void FUNC_NAME(gl_delete_sync)(GLsync sync) {
	return glDeleteSync(sync);
}

HL_PRIM void FUNC_NAME(gl_delete_textures)(GLsizei n, GLuint *textures) {
	return glDeleteTextures(n, textures);
}

HL_PRIM void FUNC_NAME(gl_delete_transform_feedbacks)(GLsizei n, GLuint *ids) {
	return glDeleteTransformFeedbacks(n, ids);
}

HL_PRIM void FUNC_NAME(gl_delete_vertex_arrays)(GLsizei n, GLuint *arrays) {
	return glDeleteVertexArrays(n, arrays);
}

HL_PRIM void FUNC_NAME(gl_depth_func)(GLenum func) {
	return glDepthFunc(func);
}

HL_PRIM void FUNC_NAME(gl_depth_mask)(GLboolean flag) {
	return glDepthMask(flag);
}

HL_PRIM void FUNC_NAME(gl_depth_range)(GLdouble n, GLdouble f) {
	return glDepthRange(n, f);
}

HL_PRIM void FUNC_NAME(gl_depth_range_arrayv)(GLuint first, GLsizei count, GLdouble *v) {
	return glDepthRangeArrayv(first, count, v);
}

HL_PRIM void FUNC_NAME(gl_depth_range_indexed)(GLuint index, GLdouble n, GLdouble f) {
	return glDepthRangeIndexed(index, n, f);
}

HL_PRIM void FUNC_NAME(gl_depth_rangef)(GLfloat n, GLfloat f) {
	return glDepthRangef(n, f);
}

HL_PRIM void FUNC_NAME(gl_detach_shader)(GLuint program, GLuint shader) {
	return glDetachShader(program, shader);
}

HL_PRIM void FUNC_NAME(gl_disable)(GLenum cap) {
	return glDisable(cap);
}

HL_PRIM void FUNC_NAME(gl_disable_vertex_attrib_array)(GLuint index) {
	return glDisableVertexAttribArray(index);
}

HL_PRIM void FUNC_NAME(gl_disablei)(GLenum target, GLuint index) {
	return glDisablei(target, index);
}

HL_PRIM void FUNC_NAME(gl_dispatch_compute)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
	return glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

HL_PRIM void FUNC_NAME(gl_dispatch_compute_indirect)(GLintptr indirect) {
	return glDispatchComputeIndirect(indirect);
}

HL_PRIM void FUNC_NAME(gl_draw_arrays)(GLenum mode, GLint first, GLsizei count) {
	return glDrawArrays(mode, first, count);
}

HL_PRIM void FUNC_NAME(gl_draw_arrays_indirect)(GLenum mode, vbyte *indirect) {
	return glDrawArraysIndirect(mode, indirect);
}

HL_PRIM void FUNC_NAME(gl_draw_arrays_instanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
	return glDrawArraysInstanced(mode, first, count, instancecount);
}

HL_PRIM void FUNC_NAME(gl_draw_arrays_instanced_base_instance)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
	return glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

HL_PRIM void FUNC_NAME(gl_draw_buffer)(GLenum buf) {
	return glDrawBuffer(buf);
}

HL_PRIM void FUNC_NAME(gl_draw_buffers)(GLsizei n, GLenum *bufs) {
	return glDrawBuffers(n, bufs);
}

HL_PRIM void FUNC_NAME(gl_draw_elements_base_vertex)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLint basevertex) {
	return glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

HL_PRIM void FUNC_NAME(gl_draw_elements_indirect)(GLenum mode, GLenum type, vbyte *indirect) {
	return glDrawElementsIndirect(mode, type, indirect);
}

HL_PRIM void FUNC_NAME(gl_draw_elements_instanced)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount) {
	return glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

HL_PRIM void FUNC_NAME(gl_draw_elements_instanced_base_instance)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount, GLuint baseinstance) {
	return glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

HL_PRIM void FUNC_NAME(gl_draw_elements_instanced_base_vertex)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount, GLint basevertex) {
	return glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

HL_PRIM void FUNC_NAME(gl_draw_elements_instanced_base_vertex_base_instance)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
	return glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

HL_PRIM void FUNC_NAME(gl_draw_range_elements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, vbyte *indices) {
	return glDrawRangeElements(mode, start, end, count, type, indices);
}

HL_PRIM void FUNC_NAME(gl_draw_range_elements_base_vertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, vbyte *indices, GLint basevertex) {
	return glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

HL_PRIM void FUNC_NAME(gl_draw_transform_feedback)(GLenum mode, GLuint id) {
	return glDrawTransformFeedback(mode, id);
}

HL_PRIM void FUNC_NAME(gl_draw_transform_feedback_instanced)(GLenum mode, GLuint id, GLsizei instancecount) {
	return glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

HL_PRIM void FUNC_NAME(gl_draw_transform_feedback_stream)(GLenum mode, GLuint id, GLuint stream) {
	return glDrawTransformFeedbackStream(mode, id, stream);
}

HL_PRIM void FUNC_NAME(gl_draw_transform_feedback_stream_instanced)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) {
	return glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

HL_PRIM void FUNC_NAME(gl_enable)(GLenum cap) {
	return glEnable(cap);
}

HL_PRIM void FUNC_NAME(gl_enable_vertex_attrib_array)(GLuint index) {
	return glEnableVertexAttribArray(index);
}

HL_PRIM void FUNC_NAME(gl_enablei)(GLenum target, GLuint index) {
	return glEnablei(target, index);
}

HL_PRIM void FUNC_NAME(gl_end_conditional_render)() {
	return glEndConditionalRender();
}

HL_PRIM void FUNC_NAME(gl_end_query)(GLenum target) {
	return glEndQuery(target);
}

HL_PRIM void FUNC_NAME(gl_end_query_indexed)(GLenum target, GLuint index) {
	return glEndQueryIndexed(target, index);
}

HL_PRIM void FUNC_NAME(gl_end_transform_feedback)() {
	return glEndTransformFeedback();
}

HL_PRIM GLsync FUNC_NAME(gl_fence_sync)(GLenum condition, GLbitfield flags) {
	return glFenceSync(condition, flags);
}

HL_PRIM void FUNC_NAME(gl_finish)() {
	return glFinish();
}

HL_PRIM void FUNC_NAME(gl_flush)() {
	return glFlush();
}

HL_PRIM void FUNC_NAME(gl_flush_mapped_buffer_range)(GLenum target, GLintptr offset, GLsizeiptr length) {
	return glFlushMappedBufferRange(target, offset, length);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_parameteri)(GLenum target, GLenum pname, GLint param) {
	return glFramebufferParameteri(target, pname, param);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_renderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
	return glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_texture)(GLenum target, GLenum attachment, GLuint texture, GLint level) {
	return glFramebufferTexture(target, attachment, texture, level);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_texture1_d)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
	return glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_texture2_d)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
	return glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_texture3_d)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
	return glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

HL_PRIM void FUNC_NAME(gl_framebuffer_texture_layer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
	return glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

HL_PRIM void FUNC_NAME(gl_front_face)(GLenum mode) {
	return glFrontFace(mode);
}

HL_PRIM void FUNC_NAME(gl_get_active_atomic_counter_bufferiv)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) {
	return glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_active_attrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, vstring *name) {
	return glGetActiveAttrib(program, index, bufSize, length, size, type, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_active_subroutine_name)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, vstring *name) {
	return glGetActiveSubroutineName(program, shadertype, index, bufSize, length, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_active_subroutine_uniform_name)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, vstring *name) {
	return glGetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_active_subroutine_uniformiv)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) {
	return glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

HL_PRIM void FUNC_NAME(gl_get_active_uniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, vstring *name) {
	return glGetActiveUniform(program, index, bufSize, length, size, type, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_active_uniform_block_name)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, vstring *uniformBlockName) {
	return glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_active_uniform_blockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) {
	return glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_active_uniform_name)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, vstring *uniformName) {
	return glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_active_uniformsiv)(GLuint program, GLsizei uniformCount, GLuint *uniformIndices, GLenum pname, GLint *params) {
	return glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_attached_shaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) {
	return glGetAttachedShaders(program, maxCount, count, shaders);
}

HL_PRIM GLint FUNC_NAME(gl_get_attrib_location)(GLuint program, vstring *name) {
	return glGetAttribLocation(program, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_booleani_v)(GLenum target, GLuint index, GLboolean *data) {
	return glGetBooleani_v(target, index, data);
}

HL_PRIM void FUNC_NAME(gl_get_booleanv)(GLenum pname, GLboolean *data) {
	return glGetBooleanv(pname, data);
}

HL_PRIM void FUNC_NAME(gl_get_buffer_parameteri64v)(GLenum target, GLenum pname, GLint64 *params) {
	return glGetBufferParameteri64v(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_buffer_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetBufferParameteriv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_buffer_pointerv)(GLenum target, GLenum pname, vbyte **params) {
	return glGetBufferPointerv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_buffer_sub_data)(GLenum target, GLintptr offset, GLsizeiptr size, vbyte *data) {
	return glGetBufferSubData(target, offset, size, data);
}

HL_PRIM void FUNC_NAME(gl_get_compressed_tex_image)(GLenum target, GLint level, vbyte *img) {
	return glGetCompressedTexImage(target, level, img);
}

HL_PRIM GLuint FUNC_NAME(gl_get_debug_message_log)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, vstring *messageLog) {
	return glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_doublei_v)(GLenum target, GLuint index, GLdouble *data) {
	return glGetDoublei_v(target, index, data);
}

HL_PRIM void FUNC_NAME(gl_get_doublev)(GLenum pname, GLdouble *data) {
	return glGetDoublev(pname, data);
}

HL_PRIM GLenum FUNC_NAME(gl_get_error)() {
	return glGetError();
}

HL_PRIM void FUNC_NAME(gl_get_floati_v)(GLenum target, GLuint index, GLfloat *data) {
	return glGetFloati_v(target, index, data);
}

HL_PRIM void FUNC_NAME(gl_get_floatv)(GLenum pname, GLfloat *data) {
	return glGetFloatv(pname, data);
}

HL_PRIM GLint FUNC_NAME(gl_get_frag_data_index)(GLuint program, vstring *name) {
	return glGetFragDataIndex(program, name->bytes);
}

HL_PRIM GLint FUNC_NAME(gl_get_frag_data_location)(GLuint program, vstring *name) {
	return glGetFragDataLocation(program, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_framebuffer_attachment_parameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params) {
	return glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_framebuffer_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetFramebufferParameteriv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_integer64i_v)(GLenum target, GLuint index, GLint64 *data) {
	return glGetInteger64i_v(target, index, data);
}

HL_PRIM void FUNC_NAME(gl_get_integer64v)(GLenum pname, GLint64 *data) {
	return glGetInteger64v(pname, data);
}

HL_PRIM void FUNC_NAME(gl_get_integeri_v)(GLenum target, GLuint index, GLint *data) {
	return glGetIntegeri_v(target, index, data);
}

HL_PRIM void FUNC_NAME(gl_get_integerv)(GLenum pname, GLint *data) {
	return glGetIntegerv(pname, data);
}

HL_PRIM void FUNC_NAME(gl_get_internalformati64v)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params) {
	return glGetInternalformati64v(target, internalformat, pname, count, params);
}

HL_PRIM void FUNC_NAME(gl_get_internalformativ)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params) {
	return glGetInternalformativ(target, internalformat, pname, count, params);
}

HL_PRIM void FUNC_NAME(gl_get_multisamplefv)(GLenum pname, GLuint index, GLfloat *val) {
	return glGetMultisamplefv(pname, index, val);
}

HL_PRIM void FUNC_NAME(gl_get_object_label)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, vstring *label) {
	return glGetObjectLabel(identifier, name, bufSize, length, label->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_object_ptr_label)(vbyte *ptr, GLsizei bufSize, GLsizei *length, vstring *label) {
	return glGetObjectPtrLabel(ptr, bufSize, length, label->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_pointerv)(GLenum pname, vbyte **params) {
	return glGetPointerv(pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_program_binary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, vbyte *binary) {
	return glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

HL_PRIM void FUNC_NAME(gl_get_program_info_log)(GLuint program, GLsizei bufSize, GLsizei *length, vstring *infoLog) {
	return glGetProgramInfoLog(program, bufSize, length, infoLog->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_program_interfaceiv)(GLuint program, GLenum programInterface, GLenum pname, GLint *params) {
	return glGetProgramInterfaceiv(program, programInterface, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_program_pipeline_info_log)(GLuint pipeline, GLsizei bufSize, GLsizei *length, vstring *infoLog) {
	return glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_program_pipelineiv)(GLuint pipeline, GLenum pname, GLint *params) {
	return glGetProgramPipelineiv(pipeline, pname, params);
}

HL_PRIM GLuint FUNC_NAME(gl_get_program_resource_index)(GLuint program, GLenum programInterface, vstring *name) {
	return glGetProgramResourceIndex(program, programInterface, name->bytes);
}

HL_PRIM GLint FUNC_NAME(gl_get_program_resource_location)(GLuint program, GLenum programInterface, vstring *name) {
	return glGetProgramResourceLocation(program, programInterface, name->bytes);
}

HL_PRIM GLint FUNC_NAME(gl_get_program_resource_location_index)(GLuint program, GLenum programInterface, vstring *name) {
	return glGetProgramResourceLocationIndex(program, programInterface, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_program_resource_name)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, vstring *name) {
	return glGetProgramResourceName(program, programInterface, index, bufSize, length, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_program_resourceiv)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum *props, GLsizei count, GLsizei *length, GLint *params) {
	return glGetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
}

HL_PRIM void FUNC_NAME(gl_get_program_stageiv)(GLuint program, GLenum shadertype, GLenum pname, GLint *values) {
	return glGetProgramStageiv(program, shadertype, pname, values);
}

HL_PRIM void FUNC_NAME(gl_get_programiv)(GLuint program, GLenum pname, GLint *params) {
	return glGetProgramiv(program, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_query_indexediv)(GLenum target, GLuint index, GLenum pname, GLint *params) {
	return glGetQueryIndexediv(target, index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_query_objecti64v)(GLuint id, GLenum pname, GLint64 *params) {
	return glGetQueryObjecti64v(id, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_query_objectiv)(GLuint id, GLenum pname, GLint *params) {
	return glGetQueryObjectiv(id, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_query_objectui64v)(GLuint id, GLenum pname, GLuint64 *params) {
	return glGetQueryObjectui64v(id, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_query_objectuiv)(GLuint id, GLenum pname, GLuint *params) {
	return glGetQueryObjectuiv(id, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_queryiv)(GLenum target, GLenum pname, GLint *params) {
	return glGetQueryiv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_renderbuffer_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetRenderbufferParameteriv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_sampler_parameter_iiv)(GLuint sampler, GLenum pname, GLint *params) {
	return glGetSamplerParameterIiv(sampler, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_sampler_parameter_iuiv)(GLuint sampler, GLenum pname, GLuint *params) {
	return glGetSamplerParameterIuiv(sampler, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_sampler_parameterfv)(GLuint sampler, GLenum pname, GLfloat *params) {
	return glGetSamplerParameterfv(sampler, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_sampler_parameteriv)(GLuint sampler, GLenum pname, GLint *params) {
	return glGetSamplerParameteriv(sampler, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_shader_info_log)(GLuint shader, GLsizei bufSize, GLsizei *length, vstring *infoLog) {
	return glGetShaderInfoLog(shader, bufSize, length, infoLog->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_shader_precision_format)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) {
	return glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

HL_PRIM void FUNC_NAME(gl_get_shader_source)(GLuint shader, GLsizei bufSize, GLsizei *length, vstring *source) {
	return glGetShaderSource(shader, bufSize, length, source->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_shaderiv)(GLuint shader, GLenum pname, GLint *params) {
	return glGetShaderiv(shader, pname, params);
}

HL_PRIM GLubyte *FUNC_NAME(gl_get_string)(GLenum name) {
	return glGetString(name);
}

HL_PRIM GLubyte *FUNC_NAME(gl_get_stringi)(GLenum name, GLuint index) {
	return glGetStringi(name, index);
}

HL_PRIM GLuint FUNC_NAME(gl_get_subroutine_index)(GLuint program, GLenum shadertype, vstring *name) {
	return glGetSubroutineIndex(program, shadertype, name->bytes);
}

HL_PRIM GLint FUNC_NAME(gl_get_subroutine_uniform_location)(GLuint program, GLenum shadertype, vstring *name) {
	return glGetSubroutineUniformLocation(program, shadertype, name->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_synciv)(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values) {
	return glGetSynciv(sync, pname, count, length, values);
}

HL_PRIM void FUNC_NAME(gl_get_tex_image)(GLenum target, GLint level, GLenum format, GLenum type, vbyte *pixels) {
	return glGetTexImage(target, level, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_get_tex_level_parameterfv)(GLenum target, GLint level, GLenum pname, GLfloat *params) {
	return glGetTexLevelParameterfv(target, level, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_tex_level_parameteriv)(GLenum target, GLint level, GLenum pname, GLint *params) {
	return glGetTexLevelParameteriv(target, level, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_tex_parameter_iiv)(GLenum target, GLenum pname, GLint *params) {
	return glGetTexParameterIiv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_tex_parameter_iuiv)(GLenum target, GLenum pname, GLuint *params) {
	return glGetTexParameterIuiv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_tex_parameterfv)(GLenum target, GLenum pname, GLfloat *params) {
	return glGetTexParameterfv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_tex_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetTexParameteriv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_transform_feedback_varying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, vstring *name) {
	return glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name->bytes);
}

HL_PRIM GLuint FUNC_NAME(gl_get_uniform_block_index)(GLuint program, vstring *uniformBlockName) {
	return glGetUniformBlockIndex(program, uniformBlockName->bytes);
}

HL_PRIM void FUNC_NAME(gl_get_uniform_indices)(GLuint program, GLsizei uniformCount, varray *uniformNames, GLuint *uniformIndices) {
	return glGetUniformIndices(program, uniformCount, hl_aptr(uniformNames, GLchar *), uniformIndices);
}

HL_PRIM void FUNC_NAME(gl_get_uniform_subroutineuiv)(GLenum shadertype, GLint location, GLuint *params) {
	return glGetUniformSubroutineuiv(shadertype, location, params);
}

HL_PRIM void FUNC_NAME(gl_get_uniformdv)(GLuint program, GLint location, GLdouble *params) {
	return glGetUniformdv(program, location, params);
}

HL_PRIM void FUNC_NAME(gl_get_uniformfv)(GLuint program, GLint location, GLfloat *params) {
	return glGetUniformfv(program, location, params);
}

HL_PRIM void FUNC_NAME(gl_get_uniformiv)(GLuint program, GLint location, GLint *params) {
	return glGetUniformiv(program, location, params);
}

HL_PRIM void FUNC_NAME(gl_get_uniformuiv)(GLuint program, GLint location, GLuint *params) {
	return glGetUniformuiv(program, location, params);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attrib_iiv)(GLuint index, GLenum pname, GLint *params) {
	return glGetVertexAttribIiv(index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attrib_iuiv)(GLuint index, GLenum pname, GLuint *params) {
	return glGetVertexAttribIuiv(index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attrib_ldv)(GLuint index, GLenum pname, GLdouble *params) {
	return glGetVertexAttribLdv(index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attrib_pointerv)(GLuint index, GLenum pname, vbyte **pointer) {
	return glGetVertexAttribPointerv(index, pname, pointer);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attribdv)(GLuint index, GLenum pname, GLdouble *params) {
	return glGetVertexAttribdv(index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attribfv)(GLuint index, GLenum pname, GLfloat *params) {
	return glGetVertexAttribfv(index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_get_vertex_attribiv)(GLuint index, GLenum pname, GLint *params) {
	return glGetVertexAttribiv(index, pname, params);
}

HL_PRIM void FUNC_NAME(gl_hint)(GLenum target, GLenum mode) {
	return glHint(target, mode);
}

HL_PRIM void FUNC_NAME(gl_invalidate_buffer_data)(GLuint buffer) {
	return glInvalidateBufferData(buffer);
}

HL_PRIM void FUNC_NAME(gl_invalidate_buffer_sub_data)(GLuint buffer, GLintptr offset, GLsizeiptr length) {
	return glInvalidateBufferSubData(buffer, offset, length);
}

HL_PRIM void FUNC_NAME(gl_invalidate_framebuffer)(GLenum target, GLsizei numAttachments, GLenum *attachments) {
	return glInvalidateFramebuffer(target, numAttachments, attachments);
}

HL_PRIM void FUNC_NAME(gl_invalidate_sub_framebuffer)(GLenum target, GLsizei numAttachments, GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
	return glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

HL_PRIM void FUNC_NAME(gl_invalidate_tex_image)(GLuint texture, GLint level) {
	return glInvalidateTexImage(texture, level);
}

HL_PRIM void FUNC_NAME(gl_invalidate_tex_sub_image)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) {
	return glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_buffer)(GLuint buffer) {
	return glIsBuffer(buffer);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_enabled)(GLenum cap) {
	return glIsEnabled(cap);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_enabledi)(GLenum target, GLuint index) {
	return glIsEnabledi(target, index);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_framebuffer)(GLuint framebuffer) {
	return glIsFramebuffer(framebuffer);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_program)(GLuint program) {
	return glIsProgram(program);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_program_pipeline)(GLuint pipeline) {
	return glIsProgramPipeline(pipeline);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_query)(GLuint id) {
	return glIsQuery(id);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_renderbuffer)(GLuint renderbuffer) {
	return glIsRenderbuffer(renderbuffer);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_sampler)(GLuint sampler) {
	return glIsSampler(sampler);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_shader)(GLuint shader) {
	return glIsShader(shader);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_sync)(GLsync sync) {
	return glIsSync(sync);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_texture)(GLuint texture) {
	return glIsTexture(texture);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_transform_feedback)(GLuint id) {
	return glIsTransformFeedback(id);
}

HL_PRIM GLboolean FUNC_NAME(gl_is_vertex_array)(GLuint array) {
	return glIsVertexArray(array);
}

HL_PRIM void FUNC_NAME(gl_line_width)(GLfloat width) {
	return glLineWidth(width);
}

HL_PRIM void FUNC_NAME(gl_link_program)(GLuint program) {
	return glLinkProgram(program);
}

HL_PRIM void FUNC_NAME(gl_logic_op)(GLenum opcode) {
	return glLogicOp(opcode);
}

HL_PRIM void *FUNC_NAME(gl_map_buffer)(GLenum target, GLenum access) {
	return glMapBuffer(target, access);
}

HL_PRIM void *FUNC_NAME(gl_map_buffer_range)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return glMapBufferRange(target, offset, length, access);
}

HL_PRIM void FUNC_NAME(gl_memory_barrier)(GLbitfield barriers) {
	return glMemoryBarrier(barriers);
}

HL_PRIM void FUNC_NAME(gl_min_sample_shading)(GLfloat value) {
	return glMinSampleShading(value);
}

HL_PRIM void FUNC_NAME(gl_multi_draw_arrays)(GLenum mode, GLint *first, GLsizei *count, GLsizei drawcount) {
	return glMultiDrawArrays(mode, first, count, drawcount);
}

HL_PRIM void FUNC_NAME(gl_multi_draw_arrays_indirect)(GLenum mode, vbyte *indirect, GLsizei drawcount, GLsizei stride) {
	return glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

HL_PRIM void FUNC_NAME(gl_multi_draw_elements)(GLenum mode, GLsizei *count, GLenum type, vbyte **indices, GLsizei drawcount) {
	return glMultiDrawElements(mode, count, type, indices, drawcount);
}

HL_PRIM void FUNC_NAME(gl_multi_draw_elements_base_vertex)(GLenum mode, GLsizei *count, GLenum type, vbyte **indices, GLsizei drawcount, GLint *basevertex) {
	return glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

HL_PRIM void FUNC_NAME(gl_multi_draw_elements_indirect)(GLenum mode, GLenum type, vbyte *indirect, GLsizei drawcount, GLsizei stride) {
	return glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p1ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP1ui(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p1uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP1uiv(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p2ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP2ui(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p2uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP2uiv(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p3ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP3ui(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p3uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP3uiv(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p4ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP4ui(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_multi_tex_coord_p4uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP4uiv(texture, type, coords);
}

HL_PRIM void FUNC_NAME(gl_normal_p3ui)(GLenum type, GLuint coords) {
	return glNormalP3ui(type, coords);
}

HL_PRIM void FUNC_NAME(gl_normal_p3uiv)(GLenum type, GLuint *coords) {
	return glNormalP3uiv(type, coords);
}

HL_PRIM void FUNC_NAME(gl_object_label)(GLenum identifier, GLuint name, GLsizei length, vstring *label) {
	return glObjectLabel(identifier, name, length, label->bytes);
}

HL_PRIM void FUNC_NAME(gl_object_ptr_label)(vbyte *ptr, GLsizei length, vstring *label) {
	return glObjectPtrLabel(ptr, length, label->bytes);
}

HL_PRIM void FUNC_NAME(gl_patch_parameterfv)(GLenum pname, GLfloat *values) {
	return glPatchParameterfv(pname, values);
}

HL_PRIM void FUNC_NAME(gl_patch_parameteri)(GLenum pname, GLint value) {
	return glPatchParameteri(pname, value);
}

HL_PRIM void FUNC_NAME(gl_pause_transform_feedback)() {
	return glPauseTransformFeedback();
}

HL_PRIM void FUNC_NAME(gl_pixel_storef)(GLenum pname, GLfloat param) {
	return glPixelStoref(pname, param);
}

HL_PRIM void FUNC_NAME(gl_pixel_storei)(GLenum pname, GLint param) {
	return glPixelStorei(pname, param);
}

HL_PRIM void FUNC_NAME(gl_point_parameterf)(GLenum pname, GLfloat param) {
	return glPointParameterf(pname, param);
}

HL_PRIM void FUNC_NAME(gl_point_parameterfv)(GLenum pname, GLfloat *params) {
	return glPointParameterfv(pname, params);
}

HL_PRIM void FUNC_NAME(gl_point_parameteri)(GLenum pname, GLint param) {
	return glPointParameteri(pname, param);
}

HL_PRIM void FUNC_NAME(gl_point_parameteriv)(GLenum pname, GLint *params) {
	return glPointParameteriv(pname, params);
}

HL_PRIM void FUNC_NAME(gl_point_size)(GLfloat size) {
	return glPointSize(size);
}

HL_PRIM void FUNC_NAME(gl_polygon_mode)(GLenum face, GLenum mode) {
	return glPolygonMode(face, mode);
}

HL_PRIM void FUNC_NAME(gl_polygon_offset)(GLfloat factor, GLfloat units) {
	return glPolygonOffset(factor, units);
}

HL_PRIM void FUNC_NAME(gl_pop_debug_group)() {
	return glPopDebugGroup();
}

HL_PRIM void FUNC_NAME(gl_primitive_restart_index)(GLuint index) {
	return glPrimitiveRestartIndex(index);
}

HL_PRIM void FUNC_NAME(gl_program_binary)(GLuint program, GLenum binaryFormat, vbyte *binary, GLsizei length) {
	return glProgramBinary(program, binaryFormat, binary, length);
}

HL_PRIM void FUNC_NAME(gl_program_parameteri)(GLuint program, GLenum pname, GLint value) {
	return glProgramParameteri(program, pname, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1d)(GLuint program, GLint location, GLdouble v0) {
	return glProgramUniform1d(program, location, v0);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform1dv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1f)(GLuint program, GLint location, GLfloat v0) {
	return glProgramUniform1f(program, location, v0);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform1fv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1i)(GLuint program, GLint location, GLint v0) {
	return glProgramUniform1i(program, location, v0);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform1iv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1ui)(GLuint program, GLint location, GLuint v0) {
	return glProgramUniform1ui(program, location, v0);
}

HL_PRIM void FUNC_NAME(gl_program_uniform1uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform1uiv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2d)(GLuint program, GLint location, GLdouble v0, GLdouble v1) {
	return glProgramUniform2d(program, location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform2dv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2f)(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
	return glProgramUniform2f(program, location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform2fv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2i)(GLuint program, GLint location, GLint v0, GLint v1) {
	return glProgramUniform2i(program, location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform2iv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2ui)(GLuint program, GLint location, GLuint v0, GLuint v1) {
	return glProgramUniform2ui(program, location, v0, v1);
}

HL_PRIM void FUNC_NAME(gl_program_uniform2uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform2uiv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) {
	return glProgramUniform3d(program, location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform3dv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
	return glProgramUniform3f(program, location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform3fv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
	return glProgramUniform3i(program, location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform3iv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
	return glProgramUniform3ui(program, location, v0, v1, v2);
}

HL_PRIM void FUNC_NAME(gl_program_uniform3uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform3uiv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
	return glProgramUniform4d(program, location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform4dv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
	return glProgramUniform4f(program, location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform4fv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
	return glProgramUniform4i(program, location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform4iv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
	return glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

HL_PRIM void FUNC_NAME(gl_program_uniform4uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform4uiv(program, location, count, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix2x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix2x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix2x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix2x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix3x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix3x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix3x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix3x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix4x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix4x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix4x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_program_uniform_matrix4x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

HL_PRIM void FUNC_NAME(gl_provoking_vertex)(GLenum mode) {
	return glProvokingVertex(mode);
}

HL_PRIM void FUNC_NAME(gl_push_debug_group)(GLenum source, GLuint id, GLsizei length, vstring *message) {
	return glPushDebugGroup(source, id, length, message->bytes);
}

HL_PRIM void FUNC_NAME(gl_query_counter)(GLuint id, GLenum target) {
	return glQueryCounter(id, target);
}

HL_PRIM void FUNC_NAME(gl_read_buffer)(GLenum src) {
	return glReadBuffer(src);
}

HL_PRIM void FUNC_NAME(gl_read_pixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, vbyte *pixels) {
	return glReadPixels(x, y, width, height, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_release_shader_compiler)() {
	return glReleaseShaderCompiler();
}

HL_PRIM void FUNC_NAME(gl_renderbuffer_storage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
	return glRenderbufferStorage(target, internalformat, width, height);
}

HL_PRIM void FUNC_NAME(gl_renderbuffer_storage_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
	return glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

HL_PRIM void FUNC_NAME(gl_resume_transform_feedback)() {
	return glResumeTransformFeedback();
}

HL_PRIM void FUNC_NAME(gl_sample_coverage)(GLfloat value, GLboolean invert) {
	return glSampleCoverage(value, invert);
}

HL_PRIM void FUNC_NAME(gl_sample_maski)(GLuint maskNumber, GLbitfield mask) {
	return glSampleMaski(maskNumber, mask);
}

HL_PRIM void FUNC_NAME(gl_sampler_parameter_iiv)(GLuint sampler, GLenum pname, GLint *param) {
	return glSamplerParameterIiv(sampler, pname, param);
}

HL_PRIM void FUNC_NAME(gl_sampler_parameter_iuiv)(GLuint sampler, GLenum pname, GLuint *param) {
	return glSamplerParameterIuiv(sampler, pname, param);
}

HL_PRIM void FUNC_NAME(gl_sampler_parameterf)(GLuint sampler, GLenum pname, GLfloat param) {
	return glSamplerParameterf(sampler, pname, param);
}

HL_PRIM void FUNC_NAME(gl_sampler_parameterfv)(GLuint sampler, GLenum pname, GLfloat *param) {
	return glSamplerParameterfv(sampler, pname, param);
}

HL_PRIM void FUNC_NAME(gl_sampler_parameteri)(GLuint sampler, GLenum pname, GLint param) {
	return glSamplerParameteri(sampler, pname, param);
}

HL_PRIM void FUNC_NAME(gl_sampler_parameteriv)(GLuint sampler, GLenum pname, GLint *param) {
	return glSamplerParameteriv(sampler, pname, param);
}

HL_PRIM void FUNC_NAME(gl_scissor)(GLint x, GLint y, GLsizei width, GLsizei height) {
	return glScissor(x, y, width, height);
}

HL_PRIM void FUNC_NAME(gl_scissor_arrayv)(GLuint first, GLsizei count, GLint *v) {
	return glScissorArrayv(first, count, v);
}

HL_PRIM void FUNC_NAME(gl_scissor_indexed)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
	return glScissorIndexed(index, left, bottom, width, height);
}

HL_PRIM void FUNC_NAME(gl_scissor_indexedv)(GLuint index, GLint *v) {
	return glScissorIndexedv(index, v);
}

HL_PRIM void FUNC_NAME(gl_secondary_color_p3ui)(GLenum type, GLuint color) {
	return glSecondaryColorP3ui(type, color);
}

HL_PRIM void FUNC_NAME(gl_secondary_color_p3uiv)(GLenum type, GLuint *color) {
	return glSecondaryColorP3uiv(type, color);
}

HL_PRIM void FUNC_NAME(gl_shader_binary)(GLsizei count, GLuint *shaders, GLenum binaryFormat, vbyte *binary, GLsizei length) {
	return glShaderBinary(count, shaders, binaryFormat, binary, length);
}

HL_PRIM void FUNC_NAME(gl_shader_storage_block_binding)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) {
	return glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

HL_PRIM void FUNC_NAME(gl_stencil_func)(GLenum func, GLint ref, GLuint mask) {
	return glStencilFunc(func, ref, mask);
}

HL_PRIM void FUNC_NAME(gl_stencil_func_separate)(GLenum face, GLenum func, GLint ref, GLuint mask) {
	return glStencilFuncSeparate(face, func, ref, mask);
}

HL_PRIM void FUNC_NAME(gl_stencil_mask)(GLuint mask) {
	return glStencilMask(mask);
}

HL_PRIM void FUNC_NAME(gl_stencil_mask_separate)(GLenum face, GLuint mask) {
	return glStencilMaskSeparate(face, mask);
}

HL_PRIM void FUNC_NAME(gl_stencil_op)(GLenum fail, GLenum zfail, GLenum zpass) {
	return glStencilOp(fail, zfail, zpass);
}

HL_PRIM void FUNC_NAME(gl_stencil_op_separate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
	return glStencilOpSeparate(face, sfail, dpfail, dppass);
}

HL_PRIM void FUNC_NAME(gl_tex_buffer)(GLenum target, GLenum internalformat, GLuint buffer) {
	return glTexBuffer(target, internalformat, buffer);
}

HL_PRIM void FUNC_NAME(gl_tex_buffer_range)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
	return glTexBufferRange(target, internalformat, buffer, offset, size);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p1ui)(GLenum type, GLuint coords) {
	return glTexCoordP1ui(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p1uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP1uiv(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p2ui)(GLenum type, GLuint coords) {
	return glTexCoordP2ui(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p2uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP2uiv(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p3ui)(GLenum type, GLuint coords) {
	return glTexCoordP3ui(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p3uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP3uiv(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p4ui)(GLenum type, GLuint coords) {
	return glTexCoordP4ui(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_coord_p4uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP4uiv(type, coords);
}

HL_PRIM void FUNC_NAME(gl_tex_image1_d)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, vbyte *pixels) {
	return glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_tex_image2_d)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, vbyte *pixels) {
	return glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_tex_image2_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
	return glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

HL_PRIM void FUNC_NAME(gl_tex_image3_d)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, vbyte *pixels) {
	return glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_tex_image3_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
	return glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

HL_PRIM void FUNC_NAME(gl_tex_parameter_iiv)(GLenum target, GLenum pname, GLint *params) {
	return glTexParameterIiv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_tex_parameter_iuiv)(GLenum target, GLenum pname, GLuint *params) {
	return glTexParameterIuiv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_tex_parameterf)(GLenum target, GLenum pname, GLfloat param) {
	return glTexParameterf(target, pname, param);
}

HL_PRIM void FUNC_NAME(gl_tex_parameterfv)(GLenum target, GLenum pname, GLfloat *params) {
	return glTexParameterfv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_tex_parameteri)(GLenum target, GLenum pname, GLint param) {
	return glTexParameteri(target, pname, param);
}

HL_PRIM void FUNC_NAME(gl_tex_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glTexParameteriv(target, pname, params);
}

HL_PRIM void FUNC_NAME(gl_tex_storage1_d)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
	return glTexStorage1D(target, levels, internalformat, width);
}

HL_PRIM void FUNC_NAME(gl_tex_storage2_d)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
	return glTexStorage2D(target, levels, internalformat, width, height);
}

HL_PRIM void FUNC_NAME(gl_tex_storage2_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
	return glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

HL_PRIM void FUNC_NAME(gl_tex_storage3_d)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
	return glTexStorage3D(target, levels, internalformat, width, height, depth);
}

HL_PRIM void FUNC_NAME(gl_tex_storage3_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
	return glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

HL_PRIM void FUNC_NAME(gl_tex_sub_image1_d)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, vbyte *pixels) {
	return glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_tex_sub_image2_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, vbyte *pixels) {
	return glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_tex_sub_image3_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, vbyte *pixels) {
	return glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

HL_PRIM void FUNC_NAME(gl_texture_view)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
	return glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

HL_PRIM void FUNC_NAME(gl_transform_feedback_varyings)(GLuint program, GLsizei count, varray *varyings, GLenum bufferMode) {
	return glTransformFeedbackVaryings(program, count, hl_aptr(varyings, GLchar *), bufferMode);
}

HL_PRIM GLboolean FUNC_NAME(gl_unmap_buffer)(GLenum target) {
	return glUnmapBuffer(target);
}

HL_PRIM void FUNC_NAME(gl_use_program)(GLuint program) {
	return glUseProgram(program);
}

HL_PRIM void FUNC_NAME(gl_use_program_stages)(GLuint pipeline, GLbitfield stages, GLuint program) {
	return glUseProgramStages(pipeline, stages, program);
}

HL_PRIM void FUNC_NAME(gl_validate_program)(GLuint program) {
	return glValidateProgram(program);
}

HL_PRIM void FUNC_NAME(gl_validate_program_pipeline)(GLuint pipeline) {
	return glValidateProgramPipeline(pipeline);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib1d)(GLuint index, GLdouble x) {
	return glVertexAttrib1d(index, x);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib1dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib1dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib1f)(GLuint index, GLfloat x) {
	return glVertexAttrib1f(index, x);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib1fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib1fv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib1s)(GLuint index, GLshort x) {
	return glVertexAttrib1s(index, x);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib1sv)(GLuint index, GLshort *v) {
	return glVertexAttrib1sv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib2d)(GLuint index, GLdouble x, GLdouble y) {
	return glVertexAttrib2d(index, x, y);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib2dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib2dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib2f)(GLuint index, GLfloat x, GLfloat y) {
	return glVertexAttrib2f(index, x, y);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib2fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib2fv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib2s)(GLuint index, GLshort x, GLshort y) {
	return glVertexAttrib2s(index, x, y);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib2sv)(GLuint index, GLshort *v) {
	return glVertexAttrib2sv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
	return glVertexAttrib3d(index, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib3dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib3dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
	return glVertexAttrib3f(index, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib3fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib3fv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib3s)(GLuint index, GLshort x, GLshort y, GLshort z) {
	return glVertexAttrib3s(index, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib3sv)(GLuint index, GLshort *v) {
	return glVertexAttrib3sv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_nbv)(GLuint index, GLbyte *v) {
	return glVertexAttrib4Nbv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_niv)(GLuint index, GLint *v) {
	return glVertexAttrib4Niv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_nsv)(GLuint index, GLshort *v) {
	return glVertexAttrib4Nsv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
	return glVertexAttrib4Nub(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_nubv)(GLuint index, GLubyte *v) {
	return glVertexAttrib4Nubv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_nuiv)(GLuint index, GLuint *v) {
	return glVertexAttrib4Nuiv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4_nusv)(GLuint index, GLushort *v) {
	return glVertexAttrib4Nusv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4bv)(GLuint index, GLbyte *v) {
	return glVertexAttrib4bv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
	return glVertexAttrib4d(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib4dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
	return glVertexAttrib4f(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib4fv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4iv)(GLuint index, GLint *v) {
	return glVertexAttrib4iv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
	return glVertexAttrib4s(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4sv)(GLuint index, GLshort *v) {
	return glVertexAttrib4sv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4ubv)(GLuint index, GLubyte *v) {
	return glVertexAttrib4ubv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4uiv)(GLuint index, GLuint *v) {
	return glVertexAttrib4uiv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib4usv)(GLuint index, GLushort *v) {
	return glVertexAttrib4usv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_binding)(GLuint attribindex, GLuint bindingindex) {
	return glVertexAttribBinding(attribindex, bindingindex);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_divisor)(GLuint index, GLuint divisor) {
	return glVertexAttribDivisor(index, divisor);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_format)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
	return glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i1i)(GLuint index, GLint x) {
	return glVertexAttribI1i(index, x);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i1iv)(GLuint index, GLint *v) {
	return glVertexAttribI1iv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i1ui)(GLuint index, GLuint x) {
	return glVertexAttribI1ui(index, x);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i1uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI1uiv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i2i)(GLuint index, GLint x, GLint y) {
	return glVertexAttribI2i(index, x, y);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i2iv)(GLuint index, GLint *v) {
	return glVertexAttribI2iv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i2ui)(GLuint index, GLuint x, GLuint y) {
	return glVertexAttribI2ui(index, x, y);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i2uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI2uiv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i3i)(GLuint index, GLint x, GLint y, GLint z) {
	return glVertexAttribI3i(index, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i3iv)(GLuint index, GLint *v) {
	return glVertexAttribI3iv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i3ui)(GLuint index, GLuint x, GLuint y, GLuint z) {
	return glVertexAttribI3ui(index, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i3uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI3uiv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4bv)(GLuint index, GLbyte *v) {
	return glVertexAttribI4bv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4i)(GLuint index, GLint x, GLint y, GLint z, GLint w) {
	return glVertexAttribI4i(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4iv)(GLuint index, GLint *v) {
	return glVertexAttribI4iv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4sv)(GLuint index, GLshort *v) {
	return glVertexAttribI4sv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4ubv)(GLuint index, GLubyte *v) {
	return glVertexAttribI4ubv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
	return glVertexAttribI4ui(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI4uiv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i4usv)(GLuint index, GLushort *v) {
	return glVertexAttribI4usv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i_format)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
	return glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_i_pointer)(GLuint index, GLint size, GLenum type, GLsizei stride, vbyte *pointer) {
	return glVertexAttribIPointer(index, size, type, stride, pointer);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l1d)(GLuint index, GLdouble x) {
	return glVertexAttribL1d(index, x);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l1dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL1dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l2d)(GLuint index, GLdouble x, GLdouble y) {
	return glVertexAttribL2d(index, x, y);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l2dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL2dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
	return glVertexAttribL3d(index, x, y, z);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l3dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL3dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
	return glVertexAttribL4d(index, x, y, z, w);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l4dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL4dv(index, v);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l_format)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
	return glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_l_pointer)(GLuint index, GLint size, GLenum type, GLsizei stride, vbyte *pointer) {
	return glVertexAttribLPointer(index, size, type, stride, pointer);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP1ui(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p1uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP1uiv(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP2ui(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p2uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP2uiv(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP3ui(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p3uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP3uiv(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP4ui(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_attrib_p4uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP4uiv(index, type, normalized, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_binding_divisor)(GLuint bindingindex, GLuint divisor) {
	return glVertexBindingDivisor(bindingindex, divisor);
}

HL_PRIM void FUNC_NAME(gl_vertex_p2ui)(GLenum type, GLuint value) {
	return glVertexP2ui(type, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_p2uiv)(GLenum type, GLuint *value) {
	return glVertexP2uiv(type, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_p3ui)(GLenum type, GLuint value) {
	return glVertexP3ui(type, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_p3uiv)(GLenum type, GLuint *value) {
	return glVertexP3uiv(type, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_p4ui)(GLenum type, GLuint value) {
	return glVertexP4ui(type, value);
}

HL_PRIM void FUNC_NAME(gl_vertex_p4uiv)(GLenum type, GLuint *value) {
	return glVertexP4uiv(type, value);
}

HL_PRIM void FUNC_NAME(gl_viewport)(GLint x, GLint y, GLsizei width, GLsizei height) {
	return glViewport(x, y, width, height);
}

HL_PRIM void FUNC_NAME(gl_viewport_arrayv)(GLuint first, GLsizei count, GLfloat *v) {
	return glViewportArrayv(first, count, v);
}

HL_PRIM void FUNC_NAME(gl_viewport_indexedf)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
	return glViewportIndexedf(index, x, y, w, h);
}

HL_PRIM void FUNC_NAME(gl_viewport_indexedfv)(GLuint index, GLfloat *v) {
	return glViewportIndexedfv(index, v);
}

HL_PRIM void FUNC_NAME(gl_wait_sync)(GLsync sync, GLbitfield flags, GLuint64 timeout) {
	return glWaitSync(sync, flags, timeout);
}

DEFINE_PRIM(_VOID, PRIM_NAME(gl_active_shader_program), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_active_texture), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_attach_shader), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_begin_conditional_render), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_begin_query), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_begin_query_indexed), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_begin_transform_feedback), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_attrib_location), _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_buffer), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_buffer_base), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_buffer_range), _I32 _I32 _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_buffers_base), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_buffers_range), _I32 _I32 _I32 _REF(_I32) _ARR _ARR);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_frag_data_location), _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_frag_data_location_indexed), _I32 _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_framebuffer), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_image_texture), _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_image_textures), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_program_pipeline), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_renderbuffer), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_sampler), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_samplers), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_texture), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_textures), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_transform_feedback), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_vertex_array), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_vertex_buffer), _I32 _I32 _REF(_I32) _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_bind_vertex_buffers), _I32 _I32 _REF(_I32) _ARR _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_color), _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_equation), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_equation_separate), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_equation_separatei), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_equationi), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_func), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_func_separate), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_func_separatei), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blend_funci), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_blit_framebuffer), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_buffer_storage), _I32 _REF(_I32) _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_buffer_sub_data), _I32 _REF(_I32) _REF(_I32) _BYTES);
DEFINE_PRIM(_I32, PRIM_NAME(gl_check_framebuffer_status), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clamp_color), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_buffer_data), _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_buffer_sub_data), _I32 _I32 _REF(_I32) _REF(_I32) _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_bufferfi), _I32 _I32 _F32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_bufferfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_bufferiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_bufferuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_color), _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_depth), _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_depthf), _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_stencil), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_tex_image), _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_clear_tex_sub_image), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_I32, PRIM_NAME(gl_client_wait_sync), _ABSTRACT(GLSync) _I32 _I64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_color_mask), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_color_maski), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_color_p3ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_color_p3uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_color_p4ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_color_p4uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compile_shader), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compressed_tex_image1_d), _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compressed_tex_image2_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compressed_tex_image3_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compressed_tex_sub_image1_d), _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compressed_tex_sub_image2_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_compressed_tex_sub_image3_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_buffer_sub_data), _I32 _I32 _REF(_I32) _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_image_sub_data), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_tex_image1_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_tex_image2_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_tex_sub_image1_d), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_tex_sub_image2_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_copy_tex_sub_image3_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_create_program), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(gl_create_shader), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_create_shader_programv), _I32 _I32 _ARR);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_cull_face), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_debug_message_callback), _FUN(_VOID, _I32 _I32 _I32 _I32 _I32 _BYTES) _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_debug_message_control), _I32 _I32 _I32 _I32 _REF(_I32) _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_debug_message_insert), _I32 _I32 _I32 _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_buffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_framebuffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_program), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_program_pipelines), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_queries), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_renderbuffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_samplers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_shader), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_sync), _ABSTRACT(GLSync));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_textures), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_transform_feedbacks), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_delete_vertex_arrays), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_depth_func), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_depth_mask), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_depth_range), _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_depth_range_arrayv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_depth_range_indexed), _I32 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_depth_rangef), _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_detach_shader), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_disable), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_disable_vertex_attrib_array), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_disablei), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_dispatch_compute), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_dispatch_compute_indirect), _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_arrays), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_arrays_indirect), _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_arrays_instanced), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_arrays_instanced_base_instance), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_buffer), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_buffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements_base_vertex), _I32 _I32 _I32 _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements_indirect), _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements_instanced), _I32 _I32 _I32 _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements_instanced_base_instance), _I32 _I32 _I32 _BYTES _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements_instanced_base_vertex), _I32 _I32 _I32 _BYTES _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements_instanced_base_vertex_base_instance), _I32 _I32 _I32 _BYTES _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_range_elements), _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_range_elements_base_vertex), _I32 _I32 _I32 _I32 _I32 _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_transform_feedback), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_transform_feedback_instanced), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_transform_feedback_stream), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_transform_feedback_stream_instanced), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_enable), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_enable_vertex_attrib_array), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_enablei), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_end_conditional_render), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_end_query), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_end_query_indexed), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_end_transform_feedback), _NO_ARG);
DEFINE_PRIM(_ABSTRACT(GLSync), PRIM_NAME(gl_fence_sync), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_finish), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_flush), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_flush_mapped_buffer_range), _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_parameteri), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_renderbuffer), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_texture), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_texture1_d), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_texture2_d), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_texture3_d), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_framebuffer_texture_layer), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_front_face), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_atomic_counter_bufferiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_attrib), _I32 _I32 _I32 _REF(_I32) _REF(_I32) _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_subroutine_name), _I32 _I32 _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_subroutine_uniform_name), _I32 _I32 _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_subroutine_uniformiv), _I32 _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_uniform), _I32 _I32 _I32 _REF(_I32) _REF(_I32) _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_uniform_block_name), _I32 _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_uniform_blockiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_uniform_name), _I32 _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_active_uniformsiv), _I32 _I32 _REF(_I32) _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_attached_shaders), _I32 _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_attrib_location), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_booleani_v), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_booleanv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_buffer_parameteri64v), _I32 _I32 _REF(_I64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_buffer_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_buffer_pointerv), _I32 _I32 _REF(_BYTES));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_buffer_sub_data), _I32 _REF(_I32) _REF(_I32) _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_compressed_tex_image), _I32 _I32 _BYTES);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_debug_message_log), _I32 _I32 _REF(_I32) _REF(_I32) _REF(_I32) _REF(_I32) _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_doublei_v), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_doublev), _I32 _REF(_F64));
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_error), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_floati_v), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_floatv), _I32 _REF(_F32));
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_frag_data_index), _I32 _STRING);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_frag_data_location), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_framebuffer_attachment_parameteriv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_framebuffer_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_integer64i_v), _I32 _I32 _REF(_I64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_integer64v), _I32 _REF(_I64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_integeri_v), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_integerv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_internalformati64v), _I32 _I32 _I32 _I32 _REF(_I64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_internalformativ), _I32 _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_multisamplefv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_object_label), _I32 _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_object_ptr_label), _BYTES _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_pointerv), _I32 _REF(_BYTES));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_binary), _I32 _I32 _REF(_I32) _REF(_I32) _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_info_log), _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_interfaceiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_pipeline_info_log), _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_pipelineiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_program_resource_index), _I32 _I32 _STRING);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_program_resource_location), _I32 _I32 _STRING);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_program_resource_location_index), _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_resource_name), _I32 _I32 _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_resourceiv), _I32 _I32 _I32 _I32 _REF(_I32) _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_program_stageiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_programiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_query_indexediv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_query_objecti64v), _I32 _I32 _REF(_I64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_query_objectiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_query_objectui64v), _I32 _I32 _REF(_I64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_query_objectuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_queryiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_renderbuffer_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_sampler_parameter_iiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_sampler_parameter_iuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_sampler_parameterfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_sampler_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_shader_info_log), _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_shader_precision_format), _I32 _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_shader_source), _I32 _I32 _REF(_I32) _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_shaderiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_STRING, PRIM_NAME(gl_get_string), _I32);
DEFINE_PRIM(_STRING, PRIM_NAME(gl_get_stringi), _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_subroutine_index), _I32 _I32 _STRING);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_subroutine_uniform_location), _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_synciv), _ABSTRACT(GLSync) _I32 _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_image), _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_level_parameterfv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_level_parameteriv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_parameter_iiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_parameter_iuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_parameterfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_tex_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_transform_feedback_varying), _I32 _I32 _I32 _REF(_I32) _REF(_I32) _REF(_I32) _STRING);
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_uniform_block_index), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_uniform_indices), _I32 _I32 _ARR _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_uniform_subroutineuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_uniformdv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_uniformfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_uniformiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_uniformuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attrib_iiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attrib_iuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attrib_ldv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attrib_pointerv), _I32 _I32 _REF(_BYTES));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attribdv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attribfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_get_vertex_attribiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_hint), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_invalidate_buffer_data), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_invalidate_buffer_sub_data), _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_invalidate_framebuffer), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_invalidate_sub_framebuffer), _I32 _I32 _REF(_I32) _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_invalidate_tex_image), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_invalidate_tex_sub_image), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_buffer), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_enabled), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_enabledi), _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_framebuffer), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_program), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_program_pipeline), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_query), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_renderbuffer), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_sampler), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_shader), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_sync), _ABSTRACT(GLSync));
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_texture), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_transform_feedback), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_is_vertex_array), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_line_width), _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_link_program), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_logic_op), _I32);
DEFINE_PRIM(_BYTES, PRIM_NAME(gl_map_buffer), _I32 _I32);
DEFINE_PRIM(_BYTES, PRIM_NAME(gl_map_buffer_range), _I32 _REF(_I32) _REF(_I32) _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_memory_barrier), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_min_sample_shading), _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_draw_arrays), _I32 _REF(_I32) _REF(_I32) _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_draw_arrays_indirect), _I32 _BYTES _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_draw_elements), _I32 _REF(_I32) _I32 _REF(_BYTES) _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_draw_elements_base_vertex), _I32 _REF(_I32) _I32 _REF(_BYTES) _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_draw_elements_indirect), _I32 _I32 _BYTES _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p1ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p1uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p2ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p2uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p3ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p3uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p4ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_multi_tex_coord_p4uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_normal_p3ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_normal_p3uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_object_label), _I32 _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_object_ptr_label), _BYTES _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_patch_parameterfv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_patch_parameteri), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_pause_transform_feedback), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_pixel_storef), _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_pixel_storei), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_point_parameterf), _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_point_parameterfv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_point_parameteri), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_point_parameteriv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_point_size), _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_polygon_mode), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_polygon_offset), _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_pop_debug_group), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_primitive_restart_index), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_binary), _I32 _I32 _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_parameteri), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1d), _I32 _I32 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1f), _I32 _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1i), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1iv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform1uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2d), _I32 _I32 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2f), _I32 _I32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2i), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2iv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform2uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3d), _I32 _I32 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3f), _I32 _I32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3i), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3iv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3ui), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform3uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4d), _I32 _I32 _F64 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4f), _I32 _I32 _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4i), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4iv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4ui), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform4uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix2dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix2fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix2x3dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix2x3fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix2x4dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix2x4fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix3dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix3fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix3x2dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix3x2fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix3x4dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix3x4fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix4dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix4fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix4x2dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix4x2fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix4x3dv), _I32 _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_program_uniform_matrix4x3fv), _I32 _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_provoking_vertex), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_push_debug_group), _I32 _I32 _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_query_counter), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_read_buffer), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_read_pixels), _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_release_shader_compiler), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_renderbuffer_storage), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_renderbuffer_storage_multisample), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_resume_transform_feedback), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sample_coverage), _F32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sample_maski), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sampler_parameter_iiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sampler_parameter_iuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sampler_parameterf), _I32 _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sampler_parameterfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sampler_parameteri), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_sampler_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_scissor), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_scissor_arrayv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_scissor_indexed), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_scissor_indexedv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_secondary_color_p3ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_secondary_color_p3uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_shader_binary), _I32 _REF(_I32) _I32 _BYTES _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_shader_storage_block_binding), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_stencil_func), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_stencil_func_separate), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_stencil_mask), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_stencil_mask_separate), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_stencil_op), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_stencil_op_separate), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_buffer), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_buffer_range), _I32 _I32 _I32 _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p1ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p1uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p2ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p2uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p3ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p3uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p4ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_coord_p4uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_image1_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_image2_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_image2_d_multisample), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_image3_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_image3_d_multisample), _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_parameter_iiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_parameter_iuiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_parameterf), _I32 _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_parameterfv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_parameteri), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_parameteriv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_storage1_d), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_storage2_d), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_storage2_d_multisample), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_storage3_d), _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_storage3_d_multisample), _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_sub_image1_d), _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_sub_image2_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_tex_sub_image3_d), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_texture_view), _I32 _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_transform_feedback_varyings), _I32 _I32 _ARR _I32);
DEFINE_PRIM(_I32, PRIM_NAME(gl_unmap_buffer), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_use_program), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_use_program_stages), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_validate_program), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_validate_program_pipeline), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib1d), _I32 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib1dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib1f), _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib1fv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib1s), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib1sv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib2d), _I32 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib2dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib2f), _I32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib2fv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib2s), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib2sv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib3d), _I32 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib3dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib3f), _I32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib3fv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib3s), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib3sv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_nbv), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_niv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_nsv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_nub), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_nubv), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_nuiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4_nusv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4bv), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4d), _I32 _F64 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4f), _I32 _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4fv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4iv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4s), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4sv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4ubv), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib4usv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_binding), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_divisor), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_format), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i1i), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i1iv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i1ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i1uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i2i), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i2iv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i2ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i2uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i3i), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i3iv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i3ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i3uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4bv), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4i), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4iv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4sv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4ubv), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4ui), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i4usv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i_format), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_i_pointer), _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l1d), _I32 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l1dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l2d), _I32 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l2dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l3d), _I32 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l3dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l4d), _I32 _F64 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l4dv), _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l_format), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_l_pointer), _I32 _I32 _I32 _I32 _BYTES);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p1ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p1uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p2ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p2uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p3ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p3uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p4ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_p4uiv), _I32 _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_binding_divisor), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_p2ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_p2uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_p3ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_p3uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_p4ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_p4uiv), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_viewport), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_viewport_arrayv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_viewport_indexedf), _I32 _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_viewport_indexedfv), _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_wait_sync), _ABSTRACT(GLSync) _I32 _I64);
