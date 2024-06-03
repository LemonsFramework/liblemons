/*
	Generated with liblemons' GLADGenerator https://github.com/LemonsFramework/liblemons
*/

#pragma warning(disable:4098) // disable void return warning

#include "global.h"

#define GLAD_GL_IMPLEMENTATION
#include <glad/gl.h>

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



void FUNC_NAME(gl_active_shader_program)(GLuint pipeline, GLuint program) {
	return glActiveShaderProgram(pipeline, program);
}

void FUNC_NAME(gl_active_texture)(GLenum texture) {
	return glActiveTexture(texture);
}

void FUNC_NAME(gl_attach_shader)(GLuint program, GLuint shader) {
	return glAttachShader(program, shader);
}

void FUNC_NAME(gl_begin_conditional_render)(GLuint id, GLenum mode) {
	return glBeginConditionalRender(id, mode);
}

void FUNC_NAME(gl_begin_query)(GLenum target, GLuint id) {
	return glBeginQuery(target, id);
}

void FUNC_NAME(gl_begin_query_indexed)(GLenum target, GLuint index, GLuint id) {
	return glBeginQueryIndexed(target, index, id);
}

void FUNC_NAME(gl_begin_transform_feedback)(GLenum primitiveMode) {
	return glBeginTransformFeedback(primitiveMode);
}

void FUNC_NAME(gl_bind_attrib_location)(GLuint program, GLuint index, vstring *name) {
	return glBindAttribLocation(program, index, name->bytes);
}

void FUNC_NAME(gl_bind_buffer)(GLenum target, GLuint buffer) {
	return glBindBuffer(target, buffer);
}

void FUNC_NAME(gl_bind_buffer_base)(GLenum target, GLuint index, GLuint buffer) {
	return glBindBufferBase(target, index, buffer);
}

void FUNC_NAME(gl_bind_buffer_range)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
	return glBindBufferRange(target, index, buffer, offset, size);
}

void FUNC_NAME(gl_bind_buffers_base)(GLenum target, GLuint first, GLsizei count, GLuint *buffers) {
	return glBindBuffersBase(target, first, count, buffers);
}

void FUNC_NAME(gl_bind_buffers_range)(GLenum target, GLuint first, GLsizei count, GLuint *buffers, varray *offsets, varray *sizes) {
	return glBindBuffersRange(target, first, count, buffers, hl_aptr(offsets, GLintptr), hl_aptr(sizes, GLsizeiptr));
}

void FUNC_NAME(gl_bind_frag_data_location)(GLuint program, GLuint color, vstring *name) {
	return glBindFragDataLocation(program, color, name->bytes);
}

void FUNC_NAME(gl_bind_frag_data_location_indexed)(GLuint program, GLuint colorNumber, GLuint index, vstring *name) {
	return glBindFragDataLocationIndexed(program, colorNumber, index, name->bytes);
}

void FUNC_NAME(gl_bind_framebuffer)(GLenum target, GLuint framebuffer) {
	return glBindFramebuffer(target, framebuffer);
}

void FUNC_NAME(gl_bind_image_texture)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
	return glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void FUNC_NAME(gl_bind_image_textures)(GLuint first, GLsizei count, GLuint *textures) {
	return glBindImageTextures(first, count, textures);
}

void FUNC_NAME(gl_bind_program_pipeline)(GLuint pipeline) {
	return glBindProgramPipeline(pipeline);
}

void FUNC_NAME(gl_bind_renderbuffer)(GLenum target, GLuint renderbuffer) {
	return glBindRenderbuffer(target, renderbuffer);
}

void FUNC_NAME(gl_bind_sampler)(GLuint unit, GLuint sampler) {
	return glBindSampler(unit, sampler);
}

void FUNC_NAME(gl_bind_samplers)(GLuint first, GLsizei count, GLuint *samplers) {
	return glBindSamplers(first, count, samplers);
}

void FUNC_NAME(gl_bind_texture)(GLenum target, GLuint texture) {
	return glBindTexture(target, texture);
}

void FUNC_NAME(gl_bind_textures)(GLuint first, GLsizei count, GLuint *textures) {
	return glBindTextures(first, count, textures);
}

void FUNC_NAME(gl_bind_transform_feedback)(GLenum target, GLuint id) {
	return glBindTransformFeedback(target, id);
}

void FUNC_NAME(gl_bind_vertex_array)(GLuint array) {
	return glBindVertexArray(array);
}

void FUNC_NAME(gl_bind_vertex_buffer)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
	return glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void FUNC_NAME(gl_bind_vertex_buffers)(GLuint first, GLsizei count, GLuint *buffers, varray *offsets, GLsizei *strides) {
	return glBindVertexBuffers(first, count, buffers, hl_aptr(offsets, GLintptr), strides);
}

void FUNC_NAME(gl_blend_color)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
	return glBlendColor(red, green, blue, alpha);
}

void FUNC_NAME(gl_blend_equation)(GLenum mode) {
	return glBlendEquation(mode);
}

void FUNC_NAME(gl_blend_equation_separate)(GLenum modeRGB, GLenum modeAlpha) {
	return glBlendEquationSeparate(modeRGB, modeAlpha);
}

void FUNC_NAME(gl_blend_equation_separatei)(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
	return glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void FUNC_NAME(gl_blend_equationi)(GLuint buf, GLenum mode) {
	return glBlendEquationi(buf, mode);
}

void FUNC_NAME(gl_blend_func)(GLenum sfactor, GLenum dfactor) {
	return glBlendFunc(sfactor, dfactor);
}

void FUNC_NAME(gl_blend_func_separate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
	return glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void FUNC_NAME(gl_blend_func_separatei)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
	return glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void FUNC_NAME(gl_blend_funci)(GLuint buf, GLenum src, GLenum dst) {
	return glBlendFunci(buf, src, dst);
}

void FUNC_NAME(gl_blit_framebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
	return glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void FUNC_NAME(gl_buffer_data)(GLenum target, GLsizeiptr size, vbyte *data, GLenum usage) {
	return glBufferData(target, size, data, usage);
}

void FUNC_NAME(gl_buffer_storage)(GLenum target, GLsizeiptr size, vbyte *data, GLbitfield flags) {
	return glBufferStorage(target, size, data, flags);
}

void FUNC_NAME(gl_buffer_sub_data)(GLenum target, GLintptr offset, GLsizeiptr size, vbyte *data) {
	return glBufferSubData(target, offset, size, data);
}

GLenum FUNC_NAME(gl_check_framebuffer_status)(GLenum target) {
	return glCheckFramebufferStatus(target);
}

void FUNC_NAME(gl_clamp_color)(GLenum target, GLenum clamp) {
	return glClampColor(target, clamp);
}

void FUNC_NAME(gl_clear)(GLbitfield mask) {
	return glClear(mask);
}

void FUNC_NAME(gl_clear_buffer_data)(GLenum target, GLenum internalformat, GLenum format, GLenum type, vbyte *data) {
	return glClearBufferData(target, internalformat, format, type, data);
}

void FUNC_NAME(gl_clear_buffer_sub_data)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, vbyte *data) {
	return glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void FUNC_NAME(gl_clear_bufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
	return glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void FUNC_NAME(gl_clear_bufferfv)(GLenum buffer, GLint drawbuffer, GLfloat *value) {
	return glClearBufferfv(buffer, drawbuffer, value);
}

void FUNC_NAME(gl_clear_bufferiv)(GLenum buffer, GLint drawbuffer, GLint *value) {
	return glClearBufferiv(buffer, drawbuffer, value);
}

void FUNC_NAME(gl_clear_bufferuiv)(GLenum buffer, GLint drawbuffer, GLuint *value) {
	return glClearBufferuiv(buffer, drawbuffer, value);
}

void FUNC_NAME(gl_clear_color)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
	return glClearColor(red, green, blue, alpha);
}

void FUNC_NAME(gl_clear_depth)(GLdouble depth) {
	return glClearDepth(depth);
}

void FUNC_NAME(gl_clear_depthf)(GLfloat d) {
	return glClearDepthf(d);
}

void FUNC_NAME(gl_clear_stencil)(GLint s) {
	return glClearStencil(s);
}

void FUNC_NAME(gl_clear_tex_image)(GLuint texture, GLint level, GLenum format, GLenum type, vbyte *data) {
	return glClearTexImage(texture, level, format, type, data);
}

void FUNC_NAME(gl_clear_tex_sub_image)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, vbyte *data) {
	return glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

GLenum FUNC_NAME(gl_client_wait_sync)(GLsync sync, GLbitfield flags, GLuint64 timeout) {
	return glClientWaitSync(sync, flags, timeout);
}

void FUNC_NAME(gl_color_mask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
	return glColorMask(red, green, blue, alpha);
}

void FUNC_NAME(gl_color_maski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
	return glColorMaski(index, r, g, b, a);
}

void FUNC_NAME(gl_color_p3ui)(GLenum type, GLuint color) {
	return glColorP3ui(type, color);
}

void FUNC_NAME(gl_color_p3uiv)(GLenum type, GLuint *color) {
	return glColorP3uiv(type, color);
}

void FUNC_NAME(gl_color_p4ui)(GLenum type, GLuint color) {
	return glColorP4ui(type, color);
}

void FUNC_NAME(gl_color_p4uiv)(GLenum type, GLuint *color) {
	return glColorP4uiv(type, color);
}

void FUNC_NAME(gl_compile_shader)(GLuint shader) {
	return glCompileShader(shader);
}

void FUNC_NAME(gl_compressed_tex_image1_d)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, vbyte *data) {
	return glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void FUNC_NAME(gl_compressed_tex_image2_d)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, vbyte *data) {
	return glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void FUNC_NAME(gl_compressed_tex_image3_d)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, vbyte *data) {
	return glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void FUNC_NAME(gl_compressed_tex_sub_image1_d)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, vbyte *data) {
	return glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void FUNC_NAME(gl_compressed_tex_sub_image2_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, vbyte *data) {
	return glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void FUNC_NAME(gl_compressed_tex_sub_image3_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, vbyte *data) {
	return glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void FUNC_NAME(gl_copy_buffer_sub_data)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
	return glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void FUNC_NAME(gl_copy_image_sub_data)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
	return glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void FUNC_NAME(gl_copy_tex_image1_d)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
	return glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void FUNC_NAME(gl_copy_tex_image2_d)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
	return glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void FUNC_NAME(gl_copy_tex_sub_image1_d)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
	return glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void FUNC_NAME(gl_copy_tex_sub_image2_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
	return glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void FUNC_NAME(gl_copy_tex_sub_image3_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
	return glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLuint FUNC_NAME(gl_create_program)() {
	return glCreateProgram();
}

GLuint FUNC_NAME(gl_create_shader)(GLenum type) {
	return glCreateShader(type);
}

GLuint FUNC_NAME(gl_create_shader_programv)(GLenum type, GLsizei count, varray *strings) {
	return glCreateShaderProgramv(type, count, hl_aptr(strings, GLchar *));
}

void FUNC_NAME(gl_cull_face)(GLenum mode) {
	return glCullFace(mode);
}

void FUNC_NAME(gl_debug_message_callback)(vclosure *callback, vbyte *userParam) {
	hl_add_root(&callback);
	debugFunc = callback;
	return glDebugMessageCallback(onDebugData, userParam);
}

void FUNC_NAME(gl_debug_message_control)(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled) {
	return glDebugMessageControl(source, type, severity, count, ids, enabled);
}

void FUNC_NAME(gl_debug_message_insert)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, vstring *buf) {
	return glDebugMessageInsert(source, type, id, severity, length, buf->bytes);
}

void FUNC_NAME(gl_delete_buffers)(GLsizei n, GLuint *buffers) {
	return glDeleteBuffers(n, buffers);
}

void FUNC_NAME(gl_delete_framebuffers)(GLsizei n, GLuint *framebuffers) {
	return glDeleteFramebuffers(n, framebuffers);
}

void FUNC_NAME(gl_delete_program)(GLuint program) {
	return glDeleteProgram(program);
}

void FUNC_NAME(gl_delete_program_pipelines)(GLsizei n, GLuint *pipelines) {
	return glDeleteProgramPipelines(n, pipelines);
}

void FUNC_NAME(gl_delete_queries)(GLsizei n, GLuint *ids) {
	return glDeleteQueries(n, ids);
}

void FUNC_NAME(gl_delete_renderbuffers)(GLsizei n, GLuint *renderbuffers) {
	return glDeleteRenderbuffers(n, renderbuffers);
}

void FUNC_NAME(gl_delete_samplers)(GLsizei count, GLuint *samplers) {
	return glDeleteSamplers(count, samplers);
}

void FUNC_NAME(gl_delete_shader)(GLuint shader) {
	return glDeleteShader(shader);
}

void FUNC_NAME(gl_delete_sync)(GLsync sync) {
	return glDeleteSync(sync);
}

void FUNC_NAME(gl_delete_textures)(GLsizei n, GLuint *textures) {
	return glDeleteTextures(n, textures);
}

void FUNC_NAME(gl_delete_transform_feedbacks)(GLsizei n, GLuint *ids) {
	return glDeleteTransformFeedbacks(n, ids);
}

void FUNC_NAME(gl_delete_vertex_arrays)(GLsizei n, GLuint *arrays) {
	return glDeleteVertexArrays(n, arrays);
}

void FUNC_NAME(gl_depth_func)(GLenum func) {
	return glDepthFunc(func);
}

void FUNC_NAME(gl_depth_mask)(GLboolean flag) {
	return glDepthMask(flag);
}

void FUNC_NAME(gl_depth_range)(GLdouble n, GLdouble f) {
	return glDepthRange(n, f);
}

void FUNC_NAME(gl_depth_range_arrayv)(GLuint first, GLsizei count, GLdouble *v) {
	return glDepthRangeArrayv(first, count, v);
}

void FUNC_NAME(gl_depth_range_indexed)(GLuint index, GLdouble n, GLdouble f) {
	return glDepthRangeIndexed(index, n, f);
}

void FUNC_NAME(gl_depth_rangef)(GLfloat n, GLfloat f) {
	return glDepthRangef(n, f);
}

void FUNC_NAME(gl_detach_shader)(GLuint program, GLuint shader) {
	return glDetachShader(program, shader);
}

void FUNC_NAME(gl_disable)(GLenum cap) {
	return glDisable(cap);
}

void FUNC_NAME(gl_disable_vertex_attrib_array)(GLuint index) {
	return glDisableVertexAttribArray(index);
}

void FUNC_NAME(gl_disablei)(GLenum target, GLuint index) {
	return glDisablei(target, index);
}

void FUNC_NAME(gl_dispatch_compute)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
	return glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void FUNC_NAME(gl_dispatch_compute_indirect)(GLintptr indirect) {
	return glDispatchComputeIndirect(indirect);
}

void FUNC_NAME(gl_draw_arrays)(GLenum mode, GLint first, GLsizei count) {
	return glDrawArrays(mode, first, count);
}

void FUNC_NAME(gl_draw_arrays_indirect)(GLenum mode, vbyte *indirect) {
	return glDrawArraysIndirect(mode, indirect);
}

void FUNC_NAME(gl_draw_arrays_instanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
	return glDrawArraysInstanced(mode, first, count, instancecount);
}

void FUNC_NAME(gl_draw_arrays_instanced_base_instance)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
	return glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void FUNC_NAME(gl_draw_buffer)(GLenum buf) {
	return glDrawBuffer(buf);
}

void FUNC_NAME(gl_draw_buffers)(GLsizei n, GLenum *bufs) {
	return glDrawBuffers(n, bufs);
}

void FUNC_NAME(gl_draw_elements)(GLenum mode, GLsizei count, GLenum type, vbyte *indices) {
	return glDrawElements(mode, count, type, indices);
}

void FUNC_NAME(gl_draw_elements_base_vertex)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLint basevertex) {
	return glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void FUNC_NAME(gl_draw_elements_indirect)(GLenum mode, GLenum type, vbyte *indirect) {
	return glDrawElementsIndirect(mode, type, indirect);
}

void FUNC_NAME(gl_draw_elements_instanced)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount) {
	return glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

void FUNC_NAME(gl_draw_elements_instanced_base_instance)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount, GLuint baseinstance) {
	return glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void FUNC_NAME(gl_draw_elements_instanced_base_vertex)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount, GLint basevertex) {
	return glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void FUNC_NAME(gl_draw_elements_instanced_base_vertex_base_instance)(GLenum mode, GLsizei count, GLenum type, vbyte *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
	return glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void FUNC_NAME(gl_draw_range_elements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, vbyte *indices) {
	return glDrawRangeElements(mode, start, end, count, type, indices);
}

void FUNC_NAME(gl_draw_range_elements_base_vertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, vbyte *indices, GLint basevertex) {
	return glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void FUNC_NAME(gl_draw_transform_feedback)(GLenum mode, GLuint id) {
	return glDrawTransformFeedback(mode, id);
}

void FUNC_NAME(gl_draw_transform_feedback_instanced)(GLenum mode, GLuint id, GLsizei instancecount) {
	return glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void FUNC_NAME(gl_draw_transform_feedback_stream)(GLenum mode, GLuint id, GLuint stream) {
	return glDrawTransformFeedbackStream(mode, id, stream);
}

void FUNC_NAME(gl_draw_transform_feedback_stream_instanced)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) {
	return glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void FUNC_NAME(gl_enable)(GLenum cap) {
	return glEnable(cap);
}

void FUNC_NAME(gl_enable_vertex_attrib_array)(GLuint index) {
	return glEnableVertexAttribArray(index);
}

void FUNC_NAME(gl_enablei)(GLenum target, GLuint index) {
	return glEnablei(target, index);
}

void FUNC_NAME(gl_end_conditional_render)() {
	return glEndConditionalRender();
}

void FUNC_NAME(gl_end_query)(GLenum target) {
	return glEndQuery(target);
}

void FUNC_NAME(gl_end_query_indexed)(GLenum target, GLuint index) {
	return glEndQueryIndexed(target, index);
}

void FUNC_NAME(gl_end_transform_feedback)() {
	return glEndTransformFeedback();
}

GLsync FUNC_NAME(gl_fence_sync)(GLenum condition, GLbitfield flags) {
	return glFenceSync(condition, flags);
}

void FUNC_NAME(gl_finish)() {
	return glFinish();
}

void FUNC_NAME(gl_flush)() {
	return glFlush();
}

void FUNC_NAME(gl_flush_mapped_buffer_range)(GLenum target, GLintptr offset, GLsizeiptr length) {
	return glFlushMappedBufferRange(target, offset, length);
}

void FUNC_NAME(gl_framebuffer_parameteri)(GLenum target, GLenum pname, GLint param) {
	return glFramebufferParameteri(target, pname, param);
}

void FUNC_NAME(gl_framebuffer_renderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
	return glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void FUNC_NAME(gl_framebuffer_texture)(GLenum target, GLenum attachment, GLuint texture, GLint level) {
	return glFramebufferTexture(target, attachment, texture, level);
}

void FUNC_NAME(gl_framebuffer_texture1_d)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
	return glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void FUNC_NAME(gl_framebuffer_texture2_d)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
	return glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void FUNC_NAME(gl_framebuffer_texture3_d)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
	return glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void FUNC_NAME(gl_framebuffer_texture_layer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
	return glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void FUNC_NAME(gl_front_face)(GLenum mode) {
	return glFrontFace(mode);
}

void FUNC_NAME(gl_gen_buffers)(GLsizei n, GLuint *buffers) {
	return glGenBuffers(n, buffers);
}

void FUNC_NAME(gl_gen_framebuffers)(GLsizei n, GLuint *framebuffers) {
	return glGenFramebuffers(n, framebuffers);
}

void FUNC_NAME(gl_gen_program_pipelines)(GLsizei n, GLuint *pipelines) {
	return glGenProgramPipelines(n, pipelines);
}

void FUNC_NAME(gl_gen_queries)(GLsizei n, GLuint *ids) {
	return glGenQueries(n, ids);
}

void FUNC_NAME(gl_gen_renderbuffers)(GLsizei n, GLuint *renderbuffers) {
	return glGenRenderbuffers(n, renderbuffers);
}

void FUNC_NAME(gl_gen_samplers)(GLsizei count, GLuint *samplers) {
	return glGenSamplers(count, samplers);
}

void FUNC_NAME(gl_gen_textures)(GLsizei n, GLuint *textures) {
	return glGenTextures(n, textures);
}

void FUNC_NAME(gl_gen_transform_feedbacks)(GLsizei n, GLuint *ids) {
	return glGenTransformFeedbacks(n, ids);
}

void FUNC_NAME(gl_gen_vertex_arrays)(GLsizei n, GLuint *arrays) {
	return glGenVertexArrays(n, arrays);
}

void FUNC_NAME(gl_generate_mipmap)(GLenum target) {
	return glGenerateMipmap(target);
}

void FUNC_NAME(gl_get_active_atomic_counter_bufferiv)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) {
	return glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void FUNC_NAME(gl_get_active_attrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, vstring *name) {
	return glGetActiveAttrib(program, index, bufSize, length, size, type, name->bytes);
}

void FUNC_NAME(gl_get_active_subroutine_name)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, vstring *name) {
	return glGetActiveSubroutineName(program, shadertype, index, bufSize, length, name->bytes);
}

void FUNC_NAME(gl_get_active_subroutine_uniform_name)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, vstring *name) {
	return glGetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name->bytes);
}

void FUNC_NAME(gl_get_active_subroutine_uniformiv)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) {
	return glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void FUNC_NAME(gl_get_active_uniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, vstring *name) {
	return glGetActiveUniform(program, index, bufSize, length, size, type, name->bytes);
}

void FUNC_NAME(gl_get_active_uniform_block_name)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, vstring *uniformBlockName) {
	return glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName->bytes);
}

void FUNC_NAME(gl_get_active_uniform_blockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) {
	return glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void FUNC_NAME(gl_get_active_uniform_name)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, vstring *uniformName) {
	return glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName->bytes);
}

void FUNC_NAME(gl_get_active_uniformsiv)(GLuint program, GLsizei uniformCount, GLuint *uniformIndices, GLenum pname, GLint *params) {
	return glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void FUNC_NAME(gl_get_attached_shaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) {
	return glGetAttachedShaders(program, maxCount, count, shaders);
}

GLint FUNC_NAME(gl_get_attrib_location)(GLuint program, vstring *name) {
	return glGetAttribLocation(program, name->bytes);
}

void FUNC_NAME(gl_get_booleani_v)(GLenum target, GLuint index, GLboolean *data) {
	return glGetBooleani_v(target, index, data);
}

void FUNC_NAME(gl_get_booleanv)(GLenum pname, GLboolean *data) {
	return glGetBooleanv(pname, data);
}

void FUNC_NAME(gl_get_buffer_parameteri64v)(GLenum target, GLenum pname, GLint64 *params) {
	return glGetBufferParameteri64v(target, pname, params);
}

void FUNC_NAME(gl_get_buffer_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetBufferParameteriv(target, pname, params);
}

void FUNC_NAME(gl_get_buffer_pointerv)(GLenum target, GLenum pname, vbyte **params) {
	return glGetBufferPointerv(target, pname, params);
}

void FUNC_NAME(gl_get_buffer_sub_data)(GLenum target, GLintptr offset, GLsizeiptr size, vbyte *data) {
	return glGetBufferSubData(target, offset, size, data);
}

void FUNC_NAME(gl_get_compressed_tex_image)(GLenum target, GLint level, vbyte *img) {
	return glGetCompressedTexImage(target, level, img);
}

GLuint FUNC_NAME(gl_get_debug_message_log)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, vstring *messageLog) {
	return glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog->bytes);
}

void FUNC_NAME(gl_get_doublei_v)(GLenum target, GLuint index, GLdouble *data) {
	return glGetDoublei_v(target, index, data);
}

void FUNC_NAME(gl_get_doublev)(GLenum pname, GLdouble *data) {
	return glGetDoublev(pname, data);
}

GLenum FUNC_NAME(gl_get_error)() {
	return glGetError();
}

void FUNC_NAME(gl_get_floati_v)(GLenum target, GLuint index, GLfloat *data) {
	return glGetFloati_v(target, index, data);
}

void FUNC_NAME(gl_get_floatv)(GLenum pname, GLfloat *data) {
	return glGetFloatv(pname, data);
}

GLint FUNC_NAME(gl_get_frag_data_index)(GLuint program, vstring *name) {
	return glGetFragDataIndex(program, name->bytes);
}

GLint FUNC_NAME(gl_get_frag_data_location)(GLuint program, vstring *name) {
	return glGetFragDataLocation(program, name->bytes);
}

void FUNC_NAME(gl_get_framebuffer_attachment_parameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params) {
	return glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void FUNC_NAME(gl_get_framebuffer_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetFramebufferParameteriv(target, pname, params);
}

void FUNC_NAME(gl_get_integer64i_v)(GLenum target, GLuint index, GLint64 *data) {
	return glGetInteger64i_v(target, index, data);
}

void FUNC_NAME(gl_get_integer64v)(GLenum pname, GLint64 *data) {
	return glGetInteger64v(pname, data);
}

void FUNC_NAME(gl_get_integeri_v)(GLenum target, GLuint index, GLint *data) {
	return glGetIntegeri_v(target, index, data);
}

void FUNC_NAME(gl_get_integerv)(GLenum pname, GLint *data) {
	return glGetIntegerv(pname, data);
}

void FUNC_NAME(gl_get_internalformati64v)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params) {
	return glGetInternalformati64v(target, internalformat, pname, count, params);
}

void FUNC_NAME(gl_get_internalformativ)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params) {
	return glGetInternalformativ(target, internalformat, pname, count, params);
}

void FUNC_NAME(gl_get_multisamplefv)(GLenum pname, GLuint index, GLfloat *val) {
	return glGetMultisamplefv(pname, index, val);
}

void FUNC_NAME(gl_get_object_label)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, vstring *label) {
	return glGetObjectLabel(identifier, name, bufSize, length, label->bytes);
}

void FUNC_NAME(gl_get_object_ptr_label)(vbyte *ptr, GLsizei bufSize, GLsizei *length, vstring *label) {
	return glGetObjectPtrLabel(ptr, bufSize, length, label->bytes);
}

void FUNC_NAME(gl_get_pointerv)(GLenum pname, vbyte **params) {
	return glGetPointerv(pname, params);
}

void FUNC_NAME(gl_get_program_binary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, vbyte *binary) {
	return glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void FUNC_NAME(gl_get_program_info_log)(GLuint program, GLsizei bufSize, GLsizei *length, vstring *infoLog) {
	return glGetProgramInfoLog(program, bufSize, length, infoLog->bytes);
}

void FUNC_NAME(gl_get_program_interfaceiv)(GLuint program, GLenum programInterface, GLenum pname, GLint *params) {
	return glGetProgramInterfaceiv(program, programInterface, pname, params);
}

void FUNC_NAME(gl_get_program_pipeline_info_log)(GLuint pipeline, GLsizei bufSize, GLsizei *length, vstring *infoLog) {
	return glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog->bytes);
}

void FUNC_NAME(gl_get_program_pipelineiv)(GLuint pipeline, GLenum pname, GLint *params) {
	return glGetProgramPipelineiv(pipeline, pname, params);
}

GLuint FUNC_NAME(gl_get_program_resource_index)(GLuint program, GLenum programInterface, vstring *name) {
	return glGetProgramResourceIndex(program, programInterface, name->bytes);
}

GLint FUNC_NAME(gl_get_program_resource_location)(GLuint program, GLenum programInterface, vstring *name) {
	return glGetProgramResourceLocation(program, programInterface, name->bytes);
}

GLint FUNC_NAME(gl_get_program_resource_location_index)(GLuint program, GLenum programInterface, vstring *name) {
	return glGetProgramResourceLocationIndex(program, programInterface, name->bytes);
}

void FUNC_NAME(gl_get_program_resource_name)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, vstring *name) {
	return glGetProgramResourceName(program, programInterface, index, bufSize, length, name->bytes);
}

void FUNC_NAME(gl_get_program_resourceiv)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum *props, GLsizei count, GLsizei *length, GLint *params) {
	return glGetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
}

void FUNC_NAME(gl_get_program_stageiv)(GLuint program, GLenum shadertype, GLenum pname, GLint *values) {
	return glGetProgramStageiv(program, shadertype, pname, values);
}

void FUNC_NAME(gl_get_programiv)(GLuint program, GLenum pname, GLint *params) {
	return glGetProgramiv(program, pname, params);
}

void FUNC_NAME(gl_get_query_indexediv)(GLenum target, GLuint index, GLenum pname, GLint *params) {
	return glGetQueryIndexediv(target, index, pname, params);
}

void FUNC_NAME(gl_get_query_objecti64v)(GLuint id, GLenum pname, GLint64 *params) {
	return glGetQueryObjecti64v(id, pname, params);
}

void FUNC_NAME(gl_get_query_objectiv)(GLuint id, GLenum pname, GLint *params) {
	return glGetQueryObjectiv(id, pname, params);
}

void FUNC_NAME(gl_get_query_objectui64v)(GLuint id, GLenum pname, GLuint64 *params) {
	return glGetQueryObjectui64v(id, pname, params);
}

void FUNC_NAME(gl_get_query_objectuiv)(GLuint id, GLenum pname, GLuint *params) {
	return glGetQueryObjectuiv(id, pname, params);
}

void FUNC_NAME(gl_get_queryiv)(GLenum target, GLenum pname, GLint *params) {
	return glGetQueryiv(target, pname, params);
}

void FUNC_NAME(gl_get_renderbuffer_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetRenderbufferParameteriv(target, pname, params);
}

void FUNC_NAME(gl_get_sampler_parameter_iiv)(GLuint sampler, GLenum pname, GLint *params) {
	return glGetSamplerParameterIiv(sampler, pname, params);
}

void FUNC_NAME(gl_get_sampler_parameter_iuiv)(GLuint sampler, GLenum pname, GLuint *params) {
	return glGetSamplerParameterIuiv(sampler, pname, params);
}

void FUNC_NAME(gl_get_sampler_parameterfv)(GLuint sampler, GLenum pname, GLfloat *params) {
	return glGetSamplerParameterfv(sampler, pname, params);
}

void FUNC_NAME(gl_get_sampler_parameteriv)(GLuint sampler, GLenum pname, GLint *params) {
	return glGetSamplerParameteriv(sampler, pname, params);
}

void FUNC_NAME(gl_get_shader_info_log)(GLuint shader, GLsizei bufSize, GLsizei *length, vstring *infoLog) {
	return glGetShaderInfoLog(shader, bufSize, length, infoLog->bytes);
}

void FUNC_NAME(gl_get_shader_precision_format)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) {
	return glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void FUNC_NAME(gl_get_shader_source)(GLuint shader, GLsizei bufSize, GLsizei *length, vstring *source) {
	return glGetShaderSource(shader, bufSize, length, source->bytes);
}

void FUNC_NAME(gl_get_shaderiv)(GLuint shader, GLenum pname, GLint *params) {
	return glGetShaderiv(shader, pname, params);
}

GLubyte *FUNC_NAME(gl_get_string)(GLenum name) {
	return glGetString(name);
}

GLubyte *FUNC_NAME(gl_get_stringi)(GLenum name, GLuint index) {
	return glGetStringi(name, index);
}

GLuint FUNC_NAME(gl_get_subroutine_index)(GLuint program, GLenum shadertype, vstring *name) {
	return glGetSubroutineIndex(program, shadertype, name->bytes);
}

GLint FUNC_NAME(gl_get_subroutine_uniform_location)(GLuint program, GLenum shadertype, vstring *name) {
	return glGetSubroutineUniformLocation(program, shadertype, name->bytes);
}

void FUNC_NAME(gl_get_synciv)(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values) {
	return glGetSynciv(sync, pname, count, length, values);
}

void FUNC_NAME(gl_get_tex_image)(GLenum target, GLint level, GLenum format, GLenum type, vbyte *pixels) {
	return glGetTexImage(target, level, format, type, pixels);
}

void FUNC_NAME(gl_get_tex_level_parameterfv)(GLenum target, GLint level, GLenum pname, GLfloat *params) {
	return glGetTexLevelParameterfv(target, level, pname, params);
}

void FUNC_NAME(gl_get_tex_level_parameteriv)(GLenum target, GLint level, GLenum pname, GLint *params) {
	return glGetTexLevelParameteriv(target, level, pname, params);
}

void FUNC_NAME(gl_get_tex_parameter_iiv)(GLenum target, GLenum pname, GLint *params) {
	return glGetTexParameterIiv(target, pname, params);
}

void FUNC_NAME(gl_get_tex_parameter_iuiv)(GLenum target, GLenum pname, GLuint *params) {
	return glGetTexParameterIuiv(target, pname, params);
}

void FUNC_NAME(gl_get_tex_parameterfv)(GLenum target, GLenum pname, GLfloat *params) {
	return glGetTexParameterfv(target, pname, params);
}

void FUNC_NAME(gl_get_tex_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glGetTexParameteriv(target, pname, params);
}

void FUNC_NAME(gl_get_transform_feedback_varying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, vstring *name) {
	return glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name->bytes);
}

GLuint FUNC_NAME(gl_get_uniform_block_index)(GLuint program, vstring *uniformBlockName) {
	return glGetUniformBlockIndex(program, uniformBlockName->bytes);
}

void FUNC_NAME(gl_get_uniform_indices)(GLuint program, GLsizei uniformCount, varray *uniformNames, GLuint *uniformIndices) {
	return glGetUniformIndices(program, uniformCount, hl_aptr(uniformNames, GLchar *), uniformIndices);
}

GLint FUNC_NAME(gl_get_uniform_location)(GLuint program, vstring *name) {
	return glGetUniformLocation(program, name->bytes);
}

void FUNC_NAME(gl_get_uniform_subroutineuiv)(GLenum shadertype, GLint location, GLuint *params) {
	return glGetUniformSubroutineuiv(shadertype, location, params);
}

void FUNC_NAME(gl_get_uniformdv)(GLuint program, GLint location, GLdouble *params) {
	return glGetUniformdv(program, location, params);
}

void FUNC_NAME(gl_get_uniformfv)(GLuint program, GLint location, GLfloat *params) {
	return glGetUniformfv(program, location, params);
}

void FUNC_NAME(gl_get_uniformiv)(GLuint program, GLint location, GLint *params) {
	return glGetUniformiv(program, location, params);
}

void FUNC_NAME(gl_get_uniformuiv)(GLuint program, GLint location, GLuint *params) {
	return glGetUniformuiv(program, location, params);
}

void FUNC_NAME(gl_get_vertex_attrib_iiv)(GLuint index, GLenum pname, GLint *params) {
	return glGetVertexAttribIiv(index, pname, params);
}

void FUNC_NAME(gl_get_vertex_attrib_iuiv)(GLuint index, GLenum pname, GLuint *params) {
	return glGetVertexAttribIuiv(index, pname, params);
}

void FUNC_NAME(gl_get_vertex_attrib_ldv)(GLuint index, GLenum pname, GLdouble *params) {
	return glGetVertexAttribLdv(index, pname, params);
}

void FUNC_NAME(gl_get_vertex_attrib_pointerv)(GLuint index, GLenum pname, vbyte **pointer) {
	return glGetVertexAttribPointerv(index, pname, pointer);
}

void FUNC_NAME(gl_get_vertex_attribdv)(GLuint index, GLenum pname, GLdouble *params) {
	return glGetVertexAttribdv(index, pname, params);
}

void FUNC_NAME(gl_get_vertex_attribfv)(GLuint index, GLenum pname, GLfloat *params) {
	return glGetVertexAttribfv(index, pname, params);
}

void FUNC_NAME(gl_get_vertex_attribiv)(GLuint index, GLenum pname, GLint *params) {
	return glGetVertexAttribiv(index, pname, params);
}

void FUNC_NAME(gl_hint)(GLenum target, GLenum mode) {
	return glHint(target, mode);
}

void FUNC_NAME(gl_invalidate_buffer_data)(GLuint buffer) {
	return glInvalidateBufferData(buffer);
}

void FUNC_NAME(gl_invalidate_buffer_sub_data)(GLuint buffer, GLintptr offset, GLsizeiptr length) {
	return glInvalidateBufferSubData(buffer, offset, length);
}

void FUNC_NAME(gl_invalidate_framebuffer)(GLenum target, GLsizei numAttachments, GLenum *attachments) {
	return glInvalidateFramebuffer(target, numAttachments, attachments);
}

void FUNC_NAME(gl_invalidate_sub_framebuffer)(GLenum target, GLsizei numAttachments, GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
	return glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void FUNC_NAME(gl_invalidate_tex_image)(GLuint texture, GLint level) {
	return glInvalidateTexImage(texture, level);
}

void FUNC_NAME(gl_invalidate_tex_sub_image)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) {
	return glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean FUNC_NAME(gl_is_buffer)(GLuint buffer) {
	return glIsBuffer(buffer);
}

GLboolean FUNC_NAME(gl_is_enabled)(GLenum cap) {
	return glIsEnabled(cap);
}

GLboolean FUNC_NAME(gl_is_enabledi)(GLenum target, GLuint index) {
	return glIsEnabledi(target, index);
}

GLboolean FUNC_NAME(gl_is_framebuffer)(GLuint framebuffer) {
	return glIsFramebuffer(framebuffer);
}

GLboolean FUNC_NAME(gl_is_program)(GLuint program) {
	return glIsProgram(program);
}

GLboolean FUNC_NAME(gl_is_program_pipeline)(GLuint pipeline) {
	return glIsProgramPipeline(pipeline);
}

GLboolean FUNC_NAME(gl_is_query)(GLuint id) {
	return glIsQuery(id);
}

GLboolean FUNC_NAME(gl_is_renderbuffer)(GLuint renderbuffer) {
	return glIsRenderbuffer(renderbuffer);
}

GLboolean FUNC_NAME(gl_is_sampler)(GLuint sampler) {
	return glIsSampler(sampler);
}

GLboolean FUNC_NAME(gl_is_shader)(GLuint shader) {
	return glIsShader(shader);
}

GLboolean FUNC_NAME(gl_is_sync)(GLsync sync) {
	return glIsSync(sync);
}

GLboolean FUNC_NAME(gl_is_texture)(GLuint texture) {
	return glIsTexture(texture);
}

GLboolean FUNC_NAME(gl_is_transform_feedback)(GLuint id) {
	return glIsTransformFeedback(id);
}

GLboolean FUNC_NAME(gl_is_vertex_array)(GLuint array) {
	return glIsVertexArray(array);
}

void FUNC_NAME(gl_line_width)(GLfloat width) {
	return glLineWidth(width);
}

void FUNC_NAME(gl_link_program)(GLuint program) {
	return glLinkProgram(program);
}

void FUNC_NAME(gl_logic_op)(GLenum opcode) {
	return glLogicOp(opcode);
}

void *FUNC_NAME(gl_map_buffer)(GLenum target, GLenum access) {
	return glMapBuffer(target, access);
}

void *FUNC_NAME(gl_map_buffer_range)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return glMapBufferRange(target, offset, length, access);
}

void FUNC_NAME(gl_memory_barrier)(GLbitfield barriers) {
	return glMemoryBarrier(barriers);
}

void FUNC_NAME(gl_min_sample_shading)(GLfloat value) {
	return glMinSampleShading(value);
}

void FUNC_NAME(gl_multi_draw_arrays)(GLenum mode, GLint *first, GLsizei *count, GLsizei drawcount) {
	return glMultiDrawArrays(mode, first, count, drawcount);
}

void FUNC_NAME(gl_multi_draw_arrays_indirect)(GLenum mode, vbyte *indirect, GLsizei drawcount, GLsizei stride) {
	return glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void FUNC_NAME(gl_multi_draw_elements)(GLenum mode, GLsizei *count, GLenum type, vbyte **indices, GLsizei drawcount) {
	return glMultiDrawElements(mode, count, type, indices, drawcount);
}

void FUNC_NAME(gl_multi_draw_elements_base_vertex)(GLenum mode, GLsizei *count, GLenum type, vbyte **indices, GLsizei drawcount, GLint *basevertex) {
	return glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void FUNC_NAME(gl_multi_draw_elements_indirect)(GLenum mode, GLenum type, vbyte *indirect, GLsizei drawcount, GLsizei stride) {
	return glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void FUNC_NAME(gl_multi_tex_coord_p1ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP1ui(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p1uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP1uiv(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p2ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP2ui(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p2uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP2uiv(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p3ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP3ui(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p3uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP3uiv(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p4ui)(GLenum texture, GLenum type, GLuint coords) {
	return glMultiTexCoordP4ui(texture, type, coords);
}

void FUNC_NAME(gl_multi_tex_coord_p4uiv)(GLenum texture, GLenum type, GLuint *coords) {
	return glMultiTexCoordP4uiv(texture, type, coords);
}

void FUNC_NAME(gl_normal_p3ui)(GLenum type, GLuint coords) {
	return glNormalP3ui(type, coords);
}

void FUNC_NAME(gl_normal_p3uiv)(GLenum type, GLuint *coords) {
	return glNormalP3uiv(type, coords);
}

void FUNC_NAME(gl_object_label)(GLenum identifier, GLuint name, GLsizei length, vstring *label) {
	return glObjectLabel(identifier, name, length, label->bytes);
}

void FUNC_NAME(gl_object_ptr_label)(vbyte *ptr, GLsizei length, vstring *label) {
	return glObjectPtrLabel(ptr, length, label->bytes);
}

void FUNC_NAME(gl_patch_parameterfv)(GLenum pname, GLfloat *values) {
	return glPatchParameterfv(pname, values);
}

void FUNC_NAME(gl_patch_parameteri)(GLenum pname, GLint value) {
	return glPatchParameteri(pname, value);
}

void FUNC_NAME(gl_pause_transform_feedback)() {
	return glPauseTransformFeedback();
}

void FUNC_NAME(gl_pixel_storef)(GLenum pname, GLfloat param) {
	return glPixelStoref(pname, param);
}

void FUNC_NAME(gl_pixel_storei)(GLenum pname, GLint param) {
	return glPixelStorei(pname, param);
}

void FUNC_NAME(gl_point_parameterf)(GLenum pname, GLfloat param) {
	return glPointParameterf(pname, param);
}

void FUNC_NAME(gl_point_parameterfv)(GLenum pname, GLfloat *params) {
	return glPointParameterfv(pname, params);
}

void FUNC_NAME(gl_point_parameteri)(GLenum pname, GLint param) {
	return glPointParameteri(pname, param);
}

void FUNC_NAME(gl_point_parameteriv)(GLenum pname, GLint *params) {
	return glPointParameteriv(pname, params);
}

void FUNC_NAME(gl_point_size)(GLfloat size) {
	return glPointSize(size);
}

void FUNC_NAME(gl_polygon_mode)(GLenum face, GLenum mode) {
	return glPolygonMode(face, mode);
}

void FUNC_NAME(gl_polygon_offset)(GLfloat factor, GLfloat units) {
	return glPolygonOffset(factor, units);
}

void FUNC_NAME(gl_pop_debug_group)() {
	return glPopDebugGroup();
}

void FUNC_NAME(gl_primitive_restart_index)(GLuint index) {
	return glPrimitiveRestartIndex(index);
}

void FUNC_NAME(gl_program_binary)(GLuint program, GLenum binaryFormat, vbyte *binary, GLsizei length) {
	return glProgramBinary(program, binaryFormat, binary, length);
}

void FUNC_NAME(gl_program_parameteri)(GLuint program, GLenum pname, GLint value) {
	return glProgramParameteri(program, pname, value);
}

void FUNC_NAME(gl_program_uniform1d)(GLuint program, GLint location, GLdouble v0) {
	return glProgramUniform1d(program, location, v0);
}

void FUNC_NAME(gl_program_uniform1dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform1dv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform1f)(GLuint program, GLint location, GLfloat v0) {
	return glProgramUniform1f(program, location, v0);
}

void FUNC_NAME(gl_program_uniform1fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform1fv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform1i)(GLuint program, GLint location, GLint v0) {
	return glProgramUniform1i(program, location, v0);
}

void FUNC_NAME(gl_program_uniform1iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform1iv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform1ui)(GLuint program, GLint location, GLuint v0) {
	return glProgramUniform1ui(program, location, v0);
}

void FUNC_NAME(gl_program_uniform1uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform1uiv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform2d)(GLuint program, GLint location, GLdouble v0, GLdouble v1) {
	return glProgramUniform2d(program, location, v0, v1);
}

void FUNC_NAME(gl_program_uniform2dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform2dv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform2f)(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
	return glProgramUniform2f(program, location, v0, v1);
}

void FUNC_NAME(gl_program_uniform2fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform2fv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform2i)(GLuint program, GLint location, GLint v0, GLint v1) {
	return glProgramUniform2i(program, location, v0, v1);
}

void FUNC_NAME(gl_program_uniform2iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform2iv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform2ui)(GLuint program, GLint location, GLuint v0, GLuint v1) {
	return glProgramUniform2ui(program, location, v0, v1);
}

void FUNC_NAME(gl_program_uniform2uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform2uiv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform3d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) {
	return glProgramUniform3d(program, location, v0, v1, v2);
}

void FUNC_NAME(gl_program_uniform3dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform3dv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform3f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
	return glProgramUniform3f(program, location, v0, v1, v2);
}

void FUNC_NAME(gl_program_uniform3fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform3fv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform3i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
	return glProgramUniform3i(program, location, v0, v1, v2);
}

void FUNC_NAME(gl_program_uniform3iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform3iv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform3ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
	return glProgramUniform3ui(program, location, v0, v1, v2);
}

void FUNC_NAME(gl_program_uniform3uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform3uiv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform4d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
	return glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_program_uniform4dv)(GLuint program, GLint location, GLsizei count, GLdouble *value) {
	return glProgramUniform4dv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform4f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
	return glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_program_uniform4fv)(GLuint program, GLint location, GLsizei count, GLfloat *value) {
	return glProgramUniform4fv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform4i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
	return glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_program_uniform4iv)(GLuint program, GLint location, GLsizei count, GLint *value) {
	return glProgramUniform4iv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform4ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
	return glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_program_uniform4uiv)(GLuint program, GLint location, GLsizei count, GLuint *value) {
	return glProgramUniform4uiv(program, location, count, value);
}

void FUNC_NAME(gl_program_uniform_matrix2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix2x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix2x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix2x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix2x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix3x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix3x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix3x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix3x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix4x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix4x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix4x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_program_uniform_matrix4x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void FUNC_NAME(gl_provoking_vertex)(GLenum mode) {
	return glProvokingVertex(mode);
}

void FUNC_NAME(gl_push_debug_group)(GLenum source, GLuint id, GLsizei length, vstring *message) {
	return glPushDebugGroup(source, id, length, message->bytes);
}

void FUNC_NAME(gl_query_counter)(GLuint id, GLenum target) {
	return glQueryCounter(id, target);
}

void FUNC_NAME(gl_read_buffer)(GLenum src) {
	return glReadBuffer(src);
}

void FUNC_NAME(gl_read_pixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, vbyte *pixels) {
	return glReadPixels(x, y, width, height, format, type, pixels);
}

void FUNC_NAME(gl_release_shader_compiler)() {
	return glReleaseShaderCompiler();
}

void FUNC_NAME(gl_renderbuffer_storage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
	return glRenderbufferStorage(target, internalformat, width, height);
}

void FUNC_NAME(gl_renderbuffer_storage_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
	return glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void FUNC_NAME(gl_resume_transform_feedback)() {
	return glResumeTransformFeedback();
}

void FUNC_NAME(gl_sample_coverage)(GLfloat value, GLboolean invert) {
	return glSampleCoverage(value, invert);
}

void FUNC_NAME(gl_sample_maski)(GLuint maskNumber, GLbitfield mask) {
	return glSampleMaski(maskNumber, mask);
}

void FUNC_NAME(gl_sampler_parameter_iiv)(GLuint sampler, GLenum pname, GLint *param) {
	return glSamplerParameterIiv(sampler, pname, param);
}

void FUNC_NAME(gl_sampler_parameter_iuiv)(GLuint sampler, GLenum pname, GLuint *param) {
	return glSamplerParameterIuiv(sampler, pname, param);
}

void FUNC_NAME(gl_sampler_parameterf)(GLuint sampler, GLenum pname, GLfloat param) {
	return glSamplerParameterf(sampler, pname, param);
}

void FUNC_NAME(gl_sampler_parameterfv)(GLuint sampler, GLenum pname, GLfloat *param) {
	return glSamplerParameterfv(sampler, pname, param);
}

void FUNC_NAME(gl_sampler_parameteri)(GLuint sampler, GLenum pname, GLint param) {
	return glSamplerParameteri(sampler, pname, param);
}

void FUNC_NAME(gl_sampler_parameteriv)(GLuint sampler, GLenum pname, GLint *param) {
	return glSamplerParameteriv(sampler, pname, param);
}

void FUNC_NAME(gl_scissor)(GLint x, GLint y, GLsizei width, GLsizei height) {
	return glScissor(x, y, width, height);
}

void FUNC_NAME(gl_scissor_arrayv)(GLuint first, GLsizei count, GLint *v) {
	return glScissorArrayv(first, count, v);
}

void FUNC_NAME(gl_scissor_indexed)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
	return glScissorIndexed(index, left, bottom, width, height);
}

void FUNC_NAME(gl_scissor_indexedv)(GLuint index, GLint *v) {
	return glScissorIndexedv(index, v);
}

void FUNC_NAME(gl_secondary_color_p3ui)(GLenum type, GLuint color) {
	return glSecondaryColorP3ui(type, color);
}

void FUNC_NAME(gl_secondary_color_p3uiv)(GLenum type, GLuint *color) {
	return glSecondaryColorP3uiv(type, color);
}

void FUNC_NAME(gl_shader_binary)(GLsizei count, GLuint *shaders, GLenum binaryFormat, vbyte *binary, GLsizei length) {
	return glShaderBinary(count, shaders, binaryFormat, binary, length);
}

void FUNC_NAME(gl_shader_source)(GLuint shader, GLsizei count, varray *string, GLint *length) {
	return glShaderSource(shader, count, hl_aptr(string, GLchar *), length);
}

void FUNC_NAME(gl_shader_storage_block_binding)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) {
	return glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void FUNC_NAME(gl_stencil_func)(GLenum func, GLint ref, GLuint mask) {
	return glStencilFunc(func, ref, mask);
}

void FUNC_NAME(gl_stencil_func_separate)(GLenum face, GLenum func, GLint ref, GLuint mask) {
	return glStencilFuncSeparate(face, func, ref, mask);
}

void FUNC_NAME(gl_stencil_mask)(GLuint mask) {
	return glStencilMask(mask);
}

void FUNC_NAME(gl_stencil_mask_separate)(GLenum face, GLuint mask) {
	return glStencilMaskSeparate(face, mask);
}

void FUNC_NAME(gl_stencil_op)(GLenum fail, GLenum zfail, GLenum zpass) {
	return glStencilOp(fail, zfail, zpass);
}

void FUNC_NAME(gl_stencil_op_separate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
	return glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void FUNC_NAME(gl_tex_buffer)(GLenum target, GLenum internalformat, GLuint buffer) {
	return glTexBuffer(target, internalformat, buffer);
}

void FUNC_NAME(gl_tex_buffer_range)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
	return glTexBufferRange(target, internalformat, buffer, offset, size);
}

void FUNC_NAME(gl_tex_coord_p1ui)(GLenum type, GLuint coords) {
	return glTexCoordP1ui(type, coords);
}

void FUNC_NAME(gl_tex_coord_p1uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP1uiv(type, coords);
}

void FUNC_NAME(gl_tex_coord_p2ui)(GLenum type, GLuint coords) {
	return glTexCoordP2ui(type, coords);
}

void FUNC_NAME(gl_tex_coord_p2uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP2uiv(type, coords);
}

void FUNC_NAME(gl_tex_coord_p3ui)(GLenum type, GLuint coords) {
	return glTexCoordP3ui(type, coords);
}

void FUNC_NAME(gl_tex_coord_p3uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP3uiv(type, coords);
}

void FUNC_NAME(gl_tex_coord_p4ui)(GLenum type, GLuint coords) {
	return glTexCoordP4ui(type, coords);
}

void FUNC_NAME(gl_tex_coord_p4uiv)(GLenum type, GLuint *coords) {
	return glTexCoordP4uiv(type, coords);
}

void FUNC_NAME(gl_tex_image1_d)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, vbyte *pixels) {
	return glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void FUNC_NAME(gl_tex_image2_d)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, vbyte *pixels) {
	return glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void FUNC_NAME(gl_tex_image2_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
	return glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void FUNC_NAME(gl_tex_image3_d)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, vbyte *pixels) {
	return glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void FUNC_NAME(gl_tex_image3_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
	return glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void FUNC_NAME(gl_tex_parameter_iiv)(GLenum target, GLenum pname, GLint *params) {
	return glTexParameterIiv(target, pname, params);
}

void FUNC_NAME(gl_tex_parameter_iuiv)(GLenum target, GLenum pname, GLuint *params) {
	return glTexParameterIuiv(target, pname, params);
}

void FUNC_NAME(gl_tex_parameterf)(GLenum target, GLenum pname, GLfloat param) {
	return glTexParameterf(target, pname, param);
}

void FUNC_NAME(gl_tex_parameterfv)(GLenum target, GLenum pname, GLfloat *params) {
	return glTexParameterfv(target, pname, params);
}

void FUNC_NAME(gl_tex_parameteri)(GLenum target, GLenum pname, GLint param) {
	return glTexParameteri(target, pname, param);
}

void FUNC_NAME(gl_tex_parameteriv)(GLenum target, GLenum pname, GLint *params) {
	return glTexParameteriv(target, pname, params);
}

void FUNC_NAME(gl_tex_storage1_d)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
	return glTexStorage1D(target, levels, internalformat, width);
}

void FUNC_NAME(gl_tex_storage2_d)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
	return glTexStorage2D(target, levels, internalformat, width, height);
}

void FUNC_NAME(gl_tex_storage2_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
	return glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void FUNC_NAME(gl_tex_storage3_d)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
	return glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void FUNC_NAME(gl_tex_storage3_d_multisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
	return glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void FUNC_NAME(gl_tex_sub_image1_d)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, vbyte *pixels) {
	return glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void FUNC_NAME(gl_tex_sub_image2_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, vbyte *pixels) {
	return glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void FUNC_NAME(gl_tex_sub_image3_d)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, vbyte *pixels) {
	return glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void FUNC_NAME(gl_texture_view)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
	return glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void FUNC_NAME(gl_transform_feedback_varyings)(GLuint program, GLsizei count, varray *varyings, GLenum bufferMode) {
	return glTransformFeedbackVaryings(program, count, hl_aptr(varyings, GLchar *), bufferMode);
}

void FUNC_NAME(gl_uniform1d)(GLint location, GLdouble x) {
	return glUniform1d(location, x);
}

void FUNC_NAME(gl_uniform1dv)(GLint location, GLsizei count, GLdouble *value) {
	return glUniform1dv(location, count, value);
}

void FUNC_NAME(gl_uniform1f)(GLint location, GLfloat v0) {
	return glUniform1f(location, v0);
}

void FUNC_NAME(gl_uniform1fv)(GLint location, GLsizei count, GLfloat *value) {
	return glUniform1fv(location, count, value);
}

void FUNC_NAME(gl_uniform1i)(GLint location, GLint v0) {
	return glUniform1i(location, v0);
}

void FUNC_NAME(gl_uniform1iv)(GLint location, GLsizei count, GLint *value) {
	return glUniform1iv(location, count, value);
}

void FUNC_NAME(gl_uniform1ui)(GLint location, GLuint v0) {
	return glUniform1ui(location, v0);
}

void FUNC_NAME(gl_uniform1uiv)(GLint location, GLsizei count, GLuint *value) {
	return glUniform1uiv(location, count, value);
}

void FUNC_NAME(gl_uniform2d)(GLint location, GLdouble x, GLdouble y) {
	return glUniform2d(location, x, y);
}

void FUNC_NAME(gl_uniform2dv)(GLint location, GLsizei count, GLdouble *value) {
	return glUniform2dv(location, count, value);
}

void FUNC_NAME(gl_uniform2f)(GLint location, GLfloat v0, GLfloat v1) {
	return glUniform2f(location, v0, v1);
}

void FUNC_NAME(gl_uniform2fv)(GLint location, GLsizei count, GLfloat *value) {
	return glUniform2fv(location, count, value);
}

void FUNC_NAME(gl_uniform2i)(GLint location, GLint v0, GLint v1) {
	return glUniform2i(location, v0, v1);
}

void FUNC_NAME(gl_uniform2iv)(GLint location, GLsizei count, GLint *value) {
	return glUniform2iv(location, count, value);
}

void FUNC_NAME(gl_uniform2ui)(GLint location, GLuint v0, GLuint v1) {
	return glUniform2ui(location, v0, v1);
}

void FUNC_NAME(gl_uniform2uiv)(GLint location, GLsizei count, GLuint *value) {
	return glUniform2uiv(location, count, value);
}

void FUNC_NAME(gl_uniform3d)(GLint location, GLdouble x, GLdouble y, GLdouble z) {
	return glUniform3d(location, x, y, z);
}

void FUNC_NAME(gl_uniform3dv)(GLint location, GLsizei count, GLdouble *value) {
	return glUniform3dv(location, count, value);
}

void FUNC_NAME(gl_uniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
	return glUniform3f(location, v0, v1, v2);
}

void FUNC_NAME(gl_uniform3fv)(GLint location, GLsizei count, GLfloat *value) {
	return glUniform3fv(location, count, value);
}

void FUNC_NAME(gl_uniform3i)(GLint location, GLint v0, GLint v1, GLint v2) {
	return glUniform3i(location, v0, v1, v2);
}

void FUNC_NAME(gl_uniform3iv)(GLint location, GLsizei count, GLint *value) {
	return glUniform3iv(location, count, value);
}

void FUNC_NAME(gl_uniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2) {
	return glUniform3ui(location, v0, v1, v2);
}

void FUNC_NAME(gl_uniform3uiv)(GLint location, GLsizei count, GLuint *value) {
	return glUniform3uiv(location, count, value);
}

void FUNC_NAME(gl_uniform4d)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
	return glUniform4d(location, x, y, z, w);
}

void FUNC_NAME(gl_uniform4dv)(GLint location, GLsizei count, GLdouble *value) {
	return glUniform4dv(location, count, value);
}

void FUNC_NAME(gl_uniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
	return glUniform4f(location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_uniform4fv)(GLint location, GLsizei count, GLfloat *value) {
	return glUniform4fv(location, count, value);
}

void FUNC_NAME(gl_uniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
	return glUniform4i(location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_uniform4iv)(GLint location, GLsizei count, GLint *value) {
	return glUniform4iv(location, count, value);
}

void FUNC_NAME(gl_uniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
	return glUniform4ui(location, v0, v1, v2, v3);
}

void FUNC_NAME(gl_uniform4uiv)(GLint location, GLsizei count, GLuint *value) {
	return glUniform4uiv(location, count, value);
}

void FUNC_NAME(gl_uniform_block_binding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
	return glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void FUNC_NAME(gl_uniform_matrix2dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix2dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix2fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix2fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix2x3dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix2x3dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix2x3fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix2x4dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix2x4dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix2x4fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix3dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix3dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix3fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix3fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix3x2dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix3x2dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix3x2fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix3x4dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix3x4dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix3x4fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix4dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix4dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix4fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix4fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix4x2dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix4x2dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix4x2fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix4x3dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value) {
	return glUniformMatrix4x3dv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_matrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value) {
	return glUniformMatrix4x3fv(location, count, transpose, value);
}

void FUNC_NAME(gl_uniform_subroutinesuiv)(GLenum shadertype, GLsizei count, GLuint *indices) {
	return glUniformSubroutinesuiv(shadertype, count, indices);
}

GLboolean FUNC_NAME(gl_unmap_buffer)(GLenum target) {
	return glUnmapBuffer(target);
}

void FUNC_NAME(gl_use_program)(GLuint program) {
	return glUseProgram(program);
}

void FUNC_NAME(gl_use_program_stages)(GLuint pipeline, GLbitfield stages, GLuint program) {
	return glUseProgramStages(pipeline, stages, program);
}

void FUNC_NAME(gl_validate_program)(GLuint program) {
	return glValidateProgram(program);
}

void FUNC_NAME(gl_validate_program_pipeline)(GLuint pipeline) {
	return glValidateProgramPipeline(pipeline);
}

void FUNC_NAME(gl_vertex_attrib1d)(GLuint index, GLdouble x) {
	return glVertexAttrib1d(index, x);
}

void FUNC_NAME(gl_vertex_attrib1dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib1dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib1f)(GLuint index, GLfloat x) {
	return glVertexAttrib1f(index, x);
}

void FUNC_NAME(gl_vertex_attrib1fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib1fv(index, v);
}

void FUNC_NAME(gl_vertex_attrib1s)(GLuint index, GLshort x) {
	return glVertexAttrib1s(index, x);
}

void FUNC_NAME(gl_vertex_attrib1sv)(GLuint index, GLshort *v) {
	return glVertexAttrib1sv(index, v);
}

void FUNC_NAME(gl_vertex_attrib2d)(GLuint index, GLdouble x, GLdouble y) {
	return glVertexAttrib2d(index, x, y);
}

void FUNC_NAME(gl_vertex_attrib2dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib2dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib2f)(GLuint index, GLfloat x, GLfloat y) {
	return glVertexAttrib2f(index, x, y);
}

void FUNC_NAME(gl_vertex_attrib2fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib2fv(index, v);
}

void FUNC_NAME(gl_vertex_attrib2s)(GLuint index, GLshort x, GLshort y) {
	return glVertexAttrib2s(index, x, y);
}

void FUNC_NAME(gl_vertex_attrib2sv)(GLuint index, GLshort *v) {
	return glVertexAttrib2sv(index, v);
}

void FUNC_NAME(gl_vertex_attrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
	return glVertexAttrib3d(index, x, y, z);
}

void FUNC_NAME(gl_vertex_attrib3dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib3dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
	return glVertexAttrib3f(index, x, y, z);
}

void FUNC_NAME(gl_vertex_attrib3fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib3fv(index, v);
}

void FUNC_NAME(gl_vertex_attrib3s)(GLuint index, GLshort x, GLshort y, GLshort z) {
	return glVertexAttrib3s(index, x, y, z);
}

void FUNC_NAME(gl_vertex_attrib3sv)(GLuint index, GLshort *v) {
	return glVertexAttrib3sv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4_nbv)(GLuint index, GLbyte *v) {
	return glVertexAttrib4Nbv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4_niv)(GLuint index, GLint *v) {
	return glVertexAttrib4Niv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4_nsv)(GLuint index, GLshort *v) {
	return glVertexAttrib4Nsv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4_nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
	return glVertexAttrib4Nub(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib4_nubv)(GLuint index, GLubyte *v) {
	return glVertexAttrib4Nubv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4_nuiv)(GLuint index, GLuint *v) {
	return glVertexAttrib4Nuiv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4_nusv)(GLuint index, GLushort *v) {
	return glVertexAttrib4Nusv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4bv)(GLuint index, GLbyte *v) {
	return glVertexAttrib4bv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
	return glVertexAttrib4d(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib4dv)(GLuint index, GLdouble *v) {
	return glVertexAttrib4dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
	return glVertexAttrib4f(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib4fv)(GLuint index, GLfloat *v) {
	return glVertexAttrib4fv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4iv)(GLuint index, GLint *v) {
	return glVertexAttrib4iv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
	return glVertexAttrib4s(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib4sv)(GLuint index, GLshort *v) {
	return glVertexAttrib4sv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4ubv)(GLuint index, GLubyte *v) {
	return glVertexAttrib4ubv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4uiv)(GLuint index, GLuint *v) {
	return glVertexAttrib4uiv(index, v);
}

void FUNC_NAME(gl_vertex_attrib4usv)(GLuint index, GLushort *v) {
	return glVertexAttrib4usv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_binding)(GLuint attribindex, GLuint bindingindex) {
	return glVertexAttribBinding(attribindex, bindingindex);
}

void FUNC_NAME(gl_vertex_attrib_divisor)(GLuint index, GLuint divisor) {
	return glVertexAttribDivisor(index, divisor);
}

void FUNC_NAME(gl_vertex_attrib_format)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
	return glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void FUNC_NAME(gl_vertex_attrib_i1i)(GLuint index, GLint x) {
	return glVertexAttribI1i(index, x);
}

void FUNC_NAME(gl_vertex_attrib_i1iv)(GLuint index, GLint *v) {
	return glVertexAttribI1iv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i1ui)(GLuint index, GLuint x) {
	return glVertexAttribI1ui(index, x);
}

void FUNC_NAME(gl_vertex_attrib_i1uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI1uiv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i2i)(GLuint index, GLint x, GLint y) {
	return glVertexAttribI2i(index, x, y);
}

void FUNC_NAME(gl_vertex_attrib_i2iv)(GLuint index, GLint *v) {
	return glVertexAttribI2iv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i2ui)(GLuint index, GLuint x, GLuint y) {
	return glVertexAttribI2ui(index, x, y);
}

void FUNC_NAME(gl_vertex_attrib_i2uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI2uiv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i3i)(GLuint index, GLint x, GLint y, GLint z) {
	return glVertexAttribI3i(index, x, y, z);
}

void FUNC_NAME(gl_vertex_attrib_i3iv)(GLuint index, GLint *v) {
	return glVertexAttribI3iv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i3ui)(GLuint index, GLuint x, GLuint y, GLuint z) {
	return glVertexAttribI3ui(index, x, y, z);
}

void FUNC_NAME(gl_vertex_attrib_i3uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI3uiv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i4bv)(GLuint index, GLbyte *v) {
	return glVertexAttribI4bv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i4i)(GLuint index, GLint x, GLint y, GLint z, GLint w) {
	return glVertexAttribI4i(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib_i4iv)(GLuint index, GLint *v) {
	return glVertexAttribI4iv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i4sv)(GLuint index, GLshort *v) {
	return glVertexAttribI4sv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i4ubv)(GLuint index, GLubyte *v) {
	return glVertexAttribI4ubv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
	return glVertexAttribI4ui(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib_i4uiv)(GLuint index, GLuint *v) {
	return glVertexAttribI4uiv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i4usv)(GLuint index, GLushort *v) {
	return glVertexAttribI4usv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_i_format)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
	return glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void FUNC_NAME(gl_vertex_attrib_i_pointer)(GLuint index, GLint size, GLenum type, GLsizei stride, vbyte *pointer) {
	return glVertexAttribIPointer(index, size, type, stride, pointer);
}

void FUNC_NAME(gl_vertex_attrib_l1d)(GLuint index, GLdouble x) {
	return glVertexAttribL1d(index, x);
}

void FUNC_NAME(gl_vertex_attrib_l1dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL1dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_l2d)(GLuint index, GLdouble x, GLdouble y) {
	return glVertexAttribL2d(index, x, y);
}

void FUNC_NAME(gl_vertex_attrib_l2dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL2dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_l3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
	return glVertexAttribL3d(index, x, y, z);
}

void FUNC_NAME(gl_vertex_attrib_l3dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL3dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_l4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
	return glVertexAttribL4d(index, x, y, z, w);
}

void FUNC_NAME(gl_vertex_attrib_l4dv)(GLuint index, GLdouble *v) {
	return glVertexAttribL4dv(index, v);
}

void FUNC_NAME(gl_vertex_attrib_l_format)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
	return glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void FUNC_NAME(gl_vertex_attrib_l_pointer)(GLuint index, GLint size, GLenum type, GLsizei stride, vbyte *pointer) {
	return glVertexAttribLPointer(index, size, type, stride, pointer);
}

void FUNC_NAME(gl_vertex_attrib_p1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP1ui(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p1uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP1uiv(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP2ui(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p2uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP2uiv(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP3ui(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p3uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP3uiv(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
	return glVertexAttribP4ui(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_p4uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value) {
	return glVertexAttribP4uiv(index, type, normalized, value);
}

void FUNC_NAME(gl_vertex_attrib_pointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, vbyte *pointer) {
	return glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void FUNC_NAME(gl_vertex_binding_divisor)(GLuint bindingindex, GLuint divisor) {
	return glVertexBindingDivisor(bindingindex, divisor);
}

void FUNC_NAME(gl_vertex_p2ui)(GLenum type, GLuint value) {
	return glVertexP2ui(type, value);
}

void FUNC_NAME(gl_vertex_p2uiv)(GLenum type, GLuint *value) {
	return glVertexP2uiv(type, value);
}

void FUNC_NAME(gl_vertex_p3ui)(GLenum type, GLuint value) {
	return glVertexP3ui(type, value);
}

void FUNC_NAME(gl_vertex_p3uiv)(GLenum type, GLuint *value) {
	return glVertexP3uiv(type, value);
}

void FUNC_NAME(gl_vertex_p4ui)(GLenum type, GLuint value) {
	return glVertexP4ui(type, value);
}

void FUNC_NAME(gl_vertex_p4uiv)(GLenum type, GLuint *value) {
	return glVertexP4uiv(type, value);
}

void FUNC_NAME(gl_viewport)(GLint x, GLint y, GLsizei width, GLsizei height) {
	return glViewport(x, y, width, height);
}

void FUNC_NAME(gl_viewport_arrayv)(GLuint first, GLsizei count, GLfloat *v) {
	return glViewportArrayv(first, count, v);
}

void FUNC_NAME(gl_viewport_indexedf)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
	return glViewportIndexedf(index, x, y, w, h);
}

void FUNC_NAME(gl_viewport_indexedfv)(GLuint index, GLfloat *v) {
	return glViewportIndexedfv(index, v);
}

void FUNC_NAME(gl_wait_sync)(GLsync sync, GLbitfield flags, GLuint64 timeout) {
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
DEFINE_PRIM(_VOID, PRIM_NAME(gl_buffer_data), _I32 _REF(_I32) _BYTES _I32);
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
DEFINE_PRIM(_VOID, PRIM_NAME(gl_draw_elements), _I32 _I32 _I32 _BYTES);
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
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_buffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_framebuffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_program_pipelines), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_queries), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_renderbuffers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_samplers), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_textures), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_transform_feedbacks), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_gen_vertex_arrays), _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_generate_mipmap), _I32);
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
DEFINE_PRIM(_I32, PRIM_NAME(gl_get_uniform_location), _I32 _STRING);
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
DEFINE_PRIM(_VOID, PRIM_NAME(gl_shader_source), _I32 _I32 _ARR _REF(_I32));
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
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1d), _I32 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1dv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1f), _I32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1fv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1i), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1iv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1ui), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform1uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2d), _I32 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2dv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2f), _I32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2fv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2i), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2iv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2ui), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform2uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3d), _I32 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3dv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3f), _I32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3fv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3i), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3iv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3ui), _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform3uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4d), _I32 _F64 _F64 _F64 _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4dv), _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4f), _I32 _F32 _F32 _F32 _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4fv), _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4i), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4iv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4ui), _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform4uiv), _I32 _I32 _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_block_binding), _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x3dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x3fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x4dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix2x4fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x2dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x2fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x4dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix3x4fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x2dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x2fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x3dv), _I32 _I32 _I32 _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_matrix4x3fv), _I32 _I32 _I32 _REF(_F32));
DEFINE_PRIM(_VOID, PRIM_NAME(gl_uniform_subroutinesuiv), _I32 _I32 _REF(_I32));
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
DEFINE_PRIM(_VOID, PRIM_NAME(gl_vertex_attrib_pointer), _I32 _I32 _I32 _I32 _I32 _BYTES);
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
