#include "global.h"

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glad/gl.h>
#include <glad/vulkan.h>

#include "image.h"

#define FUNC_NAME(n) HL_NAME(glfw_##n)
#define PRIM_NAME(n) glfw_##n

/*
giving haxe the raw types causes hl/c generation to be wrong 
#define _MONITOR _ABSTRACT(GLFWmonitor*)
#define _WINDOW _ABSTRACT(GLFWwindow*)
#define _CURSOR _ABSTRACT(GLFWcursor*)
*/

#define _MONITOR _I64
#define _WINDOW _I64
#define _CURSOR _I64


//////////////////////////////////////////////////////////////////////////////////////////
//// global stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////


HL_PRIM int FUNC_NAME(glfw_init)() {
	return glfwInit();
}


HL_PRIM void FUNC_NAME(glfw_terminate)() {
	glfwTerminate();
}


HL_PRIM void FUNC_NAME(glfw_init_hint)(int hint, int value) {
	glfwInitHint(hint, value);
}


HL_PRIM void FUNC_NAME(glfw_get_version)(int* major, int* minor, int* rev) {
	glfwGetVersion(major, minor, rev);
}


HL_PRIM const vbyte* FUNC_NAME(glfw_get_version_string)() {
	return glfwGetVersionString();
}


HL_PRIM int FUNC_NAME(glfw_get_error)(vstring* description) {
	return glfwGetError((const char**)&description->bytes);
}


HL_PRIM int FUNC_NAME(glfw_get_platform)() {
	return glfwGetPlatform();
}


HL_PRIM int FUNC_NAME(glfw_platform_supported)(int platform) {
	return glfwPlatformSupported(platform);
}


HL_PRIM varray* FUNC_NAME(glfw_get_monitors)() {
	int count = 0;
	GLFWmonitor** monitors = glfwGetMonitors(&count);

	varray* monitorArray = hl_alloc_array(&hlt_i64, count);

	for (int i = 0; i < count; ++i) {
		GLFWmonitor* montor = monitors[i];
		hl_aptr(monitorArray, int64)[i] = (int64)&*montor;
	}

	return monitorArray;
}

HL_PRIM void FUNC_NAME(glfw_default_window_hints)() {
	glfwDefaultWindowHints();
}


HL_PRIM void FUNC_NAME(glfw_window_hint)(int hint, int value) {
	glfwWindowHint(hint, value);
}


HL_PRIM void FUNC_NAME(glfw_window_hint_string)(int hint, vstring* value) {
	glfwWindowHintString(hint, (const char*)hl_to_utf8(value->bytes));
}


HL_PRIM void FUNC_NAME(glfw_poll_events)() {
	glfwPollEvents();
}


HL_PRIM void FUNC_NAME(glfw_wait_events)() {
	glfwWaitEvents();
}


HL_PRIM void FUNC_NAME(glfw_wait_events_timeout)(double timeout) {
	glfwWaitEventsTimeout(timeout);
}


HL_PRIM void FUNC_NAME(glfw_post_empty_event)() {
	glfwPostEmptyEvent();
}


HL_PRIM double FUNC_NAME(glfw_get_time)() {
	return glfwGetTime();
}


HL_PRIM void FUNC_NAME(glfw_set_time)(double time) {
	glfwSetTime(time);
}


HL_PRIM uint64_t FUNC_NAME(glfw_get_timer_value)() {
	return glfwGetTimerValue();
}


HL_PRIM uint64_t FUNC_NAME(glfw_get_timer_frequency)() {
	return glfwGetTimerFrequency();
}


HL_PRIM void FUNC_NAME(glfw_swap_interval)(int interval) {
	glfwSwapInterval(interval);
}


HL_PRIM int FUNC_NAME(glfw_extension_supported)(vstring* extension) {
	return glfwExtensionSupported((const char*)hl_to_utf8(extension->bytes));
}


DEFINE_PRIM(_I32, PRIM_NAME(glfw_init), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_terminate), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_init_hint), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_version), _REF(_I32) _REF(_I32) _REF(_I32));
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_version_string), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_error), _STRING);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_platform), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_platform_supported), _I32);
DEFINE_PRIM(_ARR, PRIM_NAME(glfw_get_monitors), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_default_window_hints), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_window_hint), _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_window_hint_string), _I32 _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_poll_events), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_wait_events), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_wait_events_timeout), _F64);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_post_empty_event), _NO_ARG);
DEFINE_PRIM(_F64, PRIM_NAME(glfw_get_time), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_time), _F64);
DEFINE_PRIM(_I64, PRIM_NAME(glfw_get_timer_value), _NO_ARG);
DEFINE_PRIM(_I64, PRIM_NAME(glfw_get_timer_frequency), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_swap_interval), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_extension_supported), _STRING);

//////////////////////////////////////////////////////////////////////////////////////////
//// monitor stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////

HL_PRIM int64 FUNC_NAME(glfw_get_primary_monitor)() {
	GLFWmonitor* mon = glfwGetPrimaryMonitor();
	return (int64)&*mon;
}

HL_PRIM void FUNC_NAME(glfw_get_monitor_pos)(int64 monitor, int* xpos, int* ypos) {
	glfwGetMonitorPos((GLFWmonitor*)monitor, xpos, ypos);
}

HL_PRIM void FUNC_NAME(glfw_get_monitor_workarea)(int64 monitor, int* xpos, int* ypos, int* width, int* height) {
	glfwGetMonitorWorkarea((GLFWmonitor*)monitor, xpos, ypos, width, height);
}

HL_PRIM void FUNC_NAME(glfw_get_monitor_physical_size)(int64 monitor, int* widthMM, int* heightMM) {
	glfwGetMonitorPhysicalSize((GLFWmonitor*)monitor, widthMM, heightMM);
}

HL_PRIM void FUNC_NAME(glfw_get_monitor_content_scale)(int64 monitor, float* xscale, float* yscale) {
	glfwGetMonitorContentScale((GLFWmonitor*)monitor, xscale, yscale);
}

HL_PRIM const vbyte* FUNC_NAME(glfw_get_monitor_name)(int64 monitor) {
	return glfwGetMonitorName((GLFWmonitor*)monitor);
}


DEFINE_PRIM(_MONITOR, PRIM_NAME(glfw_get_primary_monitor), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_monitor_pos), _MONITOR _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_monitor_workarea), _MONITOR _REF(_I32) _REF(_I32) _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_monitor_physical_size), _MONITOR _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_monitor_content_scale), _MONITOR _REF(_F32) _REF(_F32));
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_monitor_name), _MONITOR);

//////////////////////////////////////////////////////////////////////////////////////////
//// window stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////

HL_PRIM int64 FUNC_NAME(glfw_create_window)(int width, int height, vstring* title, int64 monitor, int64 share) {
	return (int64)&*glfwCreateWindow(width, height, (const char*)hl_to_utf8(title->bytes), (GLFWmonitor*)monitor, (GLFWwindow*)share);
}

HL_PRIM void FUNC_NAME(glfw_destroy_window)(int64 window) {
	glfwDestroyWindow((GLFWwindow*)window);
}

HL_PRIM int FUNC_NAME(glfw_window_should_close)(int64 window) {
	return glfwWindowShouldClose((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_set_window_should_close)(int64 window, int value) {
	glfwSetWindowShouldClose((GLFWwindow*)window, value);
}

HL_PRIM const vbyte* FUNC_NAME(glfw_get_window_title)(int64 window) {
	return glfwGetWindowTitle((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_set_window_title)(int64 window, vstring* title) {
	glfwSetWindowTitle((GLFWwindow*)window, (const char*)hl_to_utf8(title->bytes));
}

/* same with custom cursor code
HL_PRIM void FUNC_NAME(glfw_set_window_icon)(GLFWwindow* window, int count, const GLFWimage* images) {
	glfwSetWindowIcon(window, count, images);
}
*/

HL_PRIM void FUNC_NAME(glfw_get_window_pos)(int64 window, int* xpos, int* ypos) {
	glfwGetWindowPos((GLFWwindow*)window, xpos, ypos);
}

HL_PRIM void FUNC_NAME(glfw_set_window_pos)(int64 window, int xpos, int ypos) {
	glfwSetWindowPos((GLFWwindow*)window, xpos, ypos);
}

HL_PRIM void FUNC_NAME(glfw_get_window_size)(int64 window, int* width, int* height) {
	glfwGetWindowSize((GLFWwindow*)window, width, height);
}

HL_PRIM void FUNC_NAME(glfw_set_window_size_limits)(int64 window, int minwidth, int minheight, int maxwidth, int maxheight) {
	glfwSetWindowSizeLimits((GLFWwindow*)window, minwidth, minheight, maxwidth, maxheight);
}

HL_PRIM void FUNC_NAME(glfw_set_window_aspect_ratio)(int64* window, int numer, int denom) {
	glfwSetWindowAspectRatio((GLFWwindow*)window, numer, denom);
}

HL_PRIM void FUNC_NAME(glfw_set_window_size)(int64 window, int width, int height) {
	glfwSetWindowSize((GLFWwindow*)window, width, height);
}

HL_PRIM void FUNC_NAME(glfw_get_framebuffer_size)(int64 window, int* width, int* height) {
	glfwGetFramebufferSize((GLFWwindow*)window, width, height);
}

HL_PRIM void FUNC_NAME(glfw_get_window_frame_size)(int64 window, int* left, int* top, int* right, int* bottom) {
	glfwGetWindowFrameSize((GLFWwindow*)window, left, top, right, bottom);
}

HL_PRIM void FUNC_NAME(glfw_get_window_content_scale)(int64 window, float* xscale, float* yscale) {
	glfwGetWindowContentScale((GLFWwindow*)window, xscale, yscale);
}

HL_PRIM float FUNC_NAME(glfw_get_window_opacity)(int64 window) {
	return glfwGetWindowOpacity((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_set_window_opacity)(int64 window, float opacity) {
	glfwSetWindowOpacity((GLFWwindow*)window, opacity);
}

HL_PRIM void FUNC_NAME(glfw_iconify_window)(int64 window) {
	glfwIconifyWindow((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_restore_window)(int64 window) {
	glfwRestoreWindow((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_maximize_window)(int64* window) {
	glfwMaximizeWindow((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_show_window)(int64 window) {
	glfwShowWindow((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_hide_window)(int64 window) {
	glfwHideWindow((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_focus_window)(int64 window) {
	glfwFocusWindow((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_request_window_attention)(int64 window) {
	glfwRequestWindowAttention((GLFWwindow*)window);
}

HL_PRIM int64 FUNC_NAME(glfw_get_window_monitor)(int64 window) {
	GLFWmonitor* montor = glfwGetWindowMonitor((GLFWwindow*)window);
	return (int64)&*montor;
}

HL_PRIM void FUNC_NAME(glfw_set_window_monitor)(int64 window, int64 monitor, int xpos, int ypos, int width, int height, int refreshRate) {
	glfwSetWindowMonitor((GLFWwindow*)window, (GLFWmonitor*)monitor, xpos, ypos, width, height, refreshRate);
}

HL_PRIM int FUNC_NAME(glfw_get_window_attrib)(int64 window, int attrib) {
	return glfwGetWindowAttrib((GLFWwindow*)window, attrib);
}

HL_PRIM void FUNC_NAME(glfw_set_window_attrib)(int64 window, int attrib, int value) {
	glfwSetWindowAttrib((GLFWwindow*)window, attrib, value);
}

HL_PRIM int FUNC_NAME(glfw_get_input_mode)(int64 window, int mode) {
	return glfwGetInputMode((GLFWwindow*)window, mode);
}

HL_PRIM void FUNC_NAME(glfw_set_input_mode)(int64 window, int mode, int value) {
	glfwSetInputMode((GLFWwindow*)window, mode, value);
}

HL_PRIM void FUNC_NAME(glfw_make_context_current)(int64 window) {
	glfwMakeContextCurrent((GLFWwindow*)window);
}

HL_PRIM int64 FUNC_NAME(glfw_get_current_context)() {
	GLFWwindow* wimndow = glfwGetCurrentContext();
	return (int64)&*wimndow;
}

HL_PRIM void FUNC_NAME(glfw_set_clipboard_string)(int64 window, vstring* string) {
	glfwSetClipboardString((GLFWwindow*)window, (const char*)hl_to_utf8(string->bytes));
}

HL_PRIM const vbyte* FUNC_NAME(glfw_get_clipboard_string)(int64 window) {
	return glfwGetClipboardString((GLFWwindow*)window);
}

HL_PRIM void FUNC_NAME(glfw_swap_buffers)(int64 window) {
	glfwSwapBuffers((GLFWwindow*)window);
}


DEFINE_PRIM(_WINDOW, PRIM_NAME(glfw_create_window), _I32 _I32 _STRING _MONITOR _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_destroy_window), _WINDOW);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_window_should_close), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_should_close), _WINDOW _I32);
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_window_title), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_title), _WINDOW _STRING);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_window_pos), _WINDOW _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_pos), _WINDOW _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_window_size), _WINDOW _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_size_limits), _WINDOW _I32 _I32 _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_aspect_ratio), _WINDOW _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_size), _WINDOW _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_framebuffer_size), _WINDOW _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_window_frame_size), _WINDOW _REF(_I32) _REF(_I32) _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_window_content_scale), _WINDOW _REF(_F32) _REF(_F32));
DEFINE_PRIM(_F32, PRIM_NAME(glfw_get_window_opacity), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_opacity), _WINDOW _F32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_iconify_window), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_restore_window), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_maximize_window), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_show_window), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_hide_window), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_focus_window), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_request_window_attention), _WINDOW);
DEFINE_PRIM(_MONITOR, PRIM_NAME(glfw_get_window_monitor), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_monitor), _WINDOW _MONITOR _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_window_attrib), _WINDOW _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_attrib), _WINDOW _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_input_mode), _WINDOW _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_input_mode), _WINDOW _I32 _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_make_context_current), _WINDOW);
DEFINE_PRIM(_WINDOW, PRIM_NAME(glfw_get_current_context), _NO_ARG);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_clipboard_string), _WINDOW _STRING);
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_clipboard_string), _WINDOW);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_swap_buffers), _WINDOW);

//////////////////////////////////////////////////////////////////////////////////////////
//// mouse stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////

/*
my lazy ass is too lazy to do this properly rn

HL_PRIM GLFWcursor* FUNC_NAME(glfw_create_cursor)(LemonsImage* image, int xhot, int yhot) {
	GLFWimage cursorImage;
	cursorImage.width = image->width;
	cursorImage.height = image->height;
	cursorImage.pixels = hl_copy_bytes();

	return glfwCreateCursor(cursorImage, xhot, yhot);
}
*/

HL_PRIM GLFWcursor* FUNC_NAME(glfw_create_standard_cursor)(int shape) {
	return glfwCreateStandardCursor(shape);
}

HL_PRIM void FUNC_NAME(glfw_destroy_cursor)(GLFWcursor* cursor) {
	glfwDestroyCursor(cursor);
}

HL_PRIM void FUNC_NAME(glfw_set_cursor)(int64 window, GLFWcursor* cursor) {
	glfwSetCursor((GLFWwindow*)window, cursor);
}

HL_PRIM int FUNC_NAME(glfw_raw_mouse_motion_supported)() {
	return glfwRawMouseMotionSupported();
}

HL_PRIM int FUNC_NAME(glfw_get_mouse_button)(int64 window, int button) {
	return glfwGetMouseButton((GLFWwindow*)window, button);
}

HL_PRIM void FUNC_NAME(glfw_get_cursor_pos)(int64 window, double* xpos, double* ypos) {
	glfwGetCursorPos((GLFWwindow*)window, xpos, ypos);
}

HL_PRIM void FUNC_NAME(glfw_set_cursor_pos)(int64 window, double xpos, double ypos) {
	glfwSetCursorPos((GLFWwindow*)window, xpos, ypos);
}


DEFINE_PRIM(_CURSOR, PRIM_NAME(glfw_create_standard_cursor), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_destroy_cursor), _CURSOR);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_cursor), _WINDOW _CURSOR);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_raw_mouse_motion_supported), _NO_ARG);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_mouse_button), _WINDOW _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_cursor_pos), _WINDOW _REF(_F64) _REF(_F64));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_cursor_pos), _WINDOW _F64 _F64);

//////////////////////////////////////////////////////////////////////////////////////////
//// keyboard stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////

HL_PRIM const vbyte* FUNC_NAME(glfw_get_key_name)(int key, int scancode) {
	return glfwGetKeyName(key, scancode);
}

HL_PRIM int FUNC_NAME(glfw_get_key_scancode)(int key) {
	return glfwGetKeyScancode(key);
}

HL_PRIM int FUNC_NAME(glfw_get_key)(int64 window, int key) {
	return glfwGetKey((GLFWwindow*)window, key);
}


DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_key_name), _I32 _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_key_scancode), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_get_key), _WINDOW _I32);

//////////////////////////////////////////////////////////////////////////////////////////
//// joystick stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////

typedef struct JoystickState { // referenced from https://github.com/HaxeFoundation/hashlink/blob/master/libs/sdl/sdl.c
	hl_type* t;	
	varray* buttons;
	varray* axes;
} JoystickState;

HL_PRIM int FUNC_NAME(glfw_joystick_present)(int jid) {
	return glfwJoystickPresent(jid);
}

HL_PRIM varray* FUNC_NAME(glfw_get_joystick_axes)(int jid) {
	int count = 0;
	const float* axes = glfwGetJoystickAxes(jid, &count);

	varray* array = hl_alloc_array(&hlt_f32, count);

	for (int i = 0; i < count; ++i) {
		hl_aptr(array, float)[i] = axes[i];
	}

	return array;
}

HL_PRIM varray* FUNC_NAME(glfw_get_joystick_buttons)(int jid) {
	int count = 0;
	const unsigned char* buttons = glfwGetJoystickButtons(jid, &count);

	varray* array = hl_alloc_array(&hlt_i32, count);

	for (int i = 0; i < count; ++i) {
		hl_aptr(array, int)[i] = buttons[i];
	}

	return array;
}

HL_PRIM varray* FUNC_NAME(glfw_get_joystick_hats)(int jid) {
	int count = 0;
	const unsigned char* hats = glfwGetJoystickHats(jid, &count);

	varray* array = hl_alloc_array(&hlt_i32, count);

	for (int i = 0; i < count; ++i) {
		hl_aptr(array, int)[i] = hats[i];
	}

	return array;
}

HL_PRIM const vbyte* FUNC_NAME(glfw_get_joystick_name)(int jid) {
	return glfwGetJoystickName(jid);
}

HL_PRIM const vbyte* FUNC_NAME(glfw_get_joystick_guid)(int jid) {
	return glfwGetJoystickGUID(jid);
}

HL_PRIM int FUNC_NAME(glfw_joystick_is_gamepad)(int jid) {
	return glfwJoystickIsGamepad(jid);
}

HL_PRIM int FUNC_NAME(glfw_update_gamepad_mappings)(vstring* string) {
	return glfwUpdateGamepadMappings((const char*)hl_to_utf8(string->bytes));
}

HL_PRIM const vbyte* FUNC_NAME(glfw_get_gamepad_name)(int jid) {
	return glfwGetGamepadName(jid);
}

HL_PRIM void FUNC_NAME(glfw_get_gamepad_state)(int jid, JoystickState* state) {
	GLFWgamepadstate fakeState;
	glfwGetGamepadState(jid, &fakeState);

	// arrays will be setup on the haxe side
	for (int i = 0; i < 14; ++i) {
		hl_aptr(state->buttons, int)[i] = fakeState.buttons[i];
	}

	for (int i = 0; i < 5; ++i) {
		hl_aptr(state->axes, float)[i] = fakeState.axes[i];
	}
}


DEFINE_PRIM(_I32, PRIM_NAME(glfw_joystick_present), _I32);
DEFINE_PRIM(_ARR, PRIM_NAME(glfw_get_joystick_axes), _I32);
DEFINE_PRIM(_ARR, PRIM_NAME(glfw_get_joystick_buttons), _I32);
DEFINE_PRIM(_ARR, PRIM_NAME(glfw_get_joystick_hats), _I32);
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_joystick_name), _I32);
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_joystick_guid), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_joystick_is_gamepad), _I32);
DEFINE_PRIM(_I32, PRIM_NAME(glfw_update_gamepad_mappings), _STRING);
DEFINE_PRIM(_BYTES, PRIM_NAME(glfw_get_gamepad_name), _I32);
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_get_gamepad_state), _I32 _DYN);

//////////////////////////////////////////////////////////////////////////////////////////
//// callback stuff																	  ////
//////////////////////////////////////////////////////////////////////////////////////////

#define GENERATE_CLOSURE_OVERRIDE(closureVarName)\
	if (closureVarName) {\
		hl_remove_root(&closureVarName);\
		closureVarName = callback;\
		hl_add_root(&callback);\
	}

#define CREATE_CLOSURE_PARAM(varName, value, type, typeField)\
	vdynamic varName;\
	varName.t = &type;\
	varName.v.typeField = value;


#define CREATE_CLOSURE_PARAM_INT(varName, value) CREATE_CLOSURE_PARAM(varName, value, hlt_i32, i)
#define CREATE_CLOSURE_PARAM_INTSIXTYFOUR(varName, value) CREATE_CLOSURE_PARAM(varName, value, hlt_i64, i64)
#define CREATE_CLOSURE_PARAM_FLOAT(varName, value) CREATE_CLOSURE_PARAM(varName, value, hlt_f32, f)
#define CREATE_CLOSURE_PARAM_DOUBLE(varName, value) CREATE_CLOSURE_PARAM(varName, value, hlt_f64, d)
#define CREATE_CLOSURE_PARAM_BYTES(varName, value) CREATE_CLOSURE_PARAM(varName, value, hlt_bytes, bytes)
#define CREATE_CLOSURE_PARAM_ABSTRACT(varName, value) CREATE_CLOSURE_PARAM(varName, &value, hlt_abstract, ptr)

static vclosure* errorFunction;
static void errorFuncCallback(int errorCode, const char* description) {
	CREATE_CLOSURE_PARAM_INT(arg, errorCode)
	CREATE_CLOSURE_PARAM_BYTES(arg2, (vbyte*)description)

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(errorFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_error_callback)(vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(errorFunction)
	glfwSetErrorCallback(errorFuncCallback);
}
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_error_callback), _FUN(_VOID, _I32 _BYTES));


static vclosure* windowMoveFunction;
static void windowMoveCallback(GLFWwindow* window, int xpos, int ypos) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, xpos);
	CREATE_CLOSURE_PARAM_INT(arg3, ypos);

	vdynamic* args[3] = { &arg, &arg2, &arg3 };
	hl_dyn_call(windowMoveFunction, args, 3);
}

HL_PRIM void FUNC_NAME(glfw_set_window_pos_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowMoveFunction)
	glfwSetWindowPosCallback((GLFWwindow*)window, windowMoveCallback);
}


static vclosure* windowResizeFunction;
static void windowResizeCallback(GLFWwindow* window, int width, int height) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, width);
	CREATE_CLOSURE_PARAM_INT(arg3, height);

	vdynamic* args[3] = { &arg, &arg2, &arg3 };
	hl_dyn_call(windowResizeFunction, args, 3);
}

HL_PRIM void FUNC_NAME(glfw_set_window_size_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowResizeFunction)
	glfwSetWindowSizeCallback((GLFWwindow*)window, windowResizeCallback);
}


static vclosure* windowCloseFunction;
static void windowCloseCallback(GLFWwindow* window) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);

	vdynamic* args[1] = { &arg };
	hl_dyn_call(windowCloseFunction, args, 1);
}

HL_PRIM void FUNC_NAME(glfw_set_window_close_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowCloseFunction)
	glfwSetWindowCloseCallback((GLFWwindow*)window, windowCloseCallback);
}


static vclosure* windowRefreshFunction;
static void windowRefreshCallback(GLFWwindow* window) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);

	vdynamic* args[1] = { &arg };
	hl_dyn_call(windowRefreshFunction, args, 1);
}

HL_PRIM void FUNC_NAME(glfw_set_window_refresh_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowRefreshFunction)
	glfwSetWindowRefreshCallback((GLFWwindow*)window, windowRefreshCallback);
}


static vclosure* windowFocusFunction;
static void windowFocusCallback(GLFWwindow* window, int focused) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, focused);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(windowFocusFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_window_focus_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowFocusFunction)
	glfwSetWindowFocusCallback((GLFWwindow*)window, windowFocusCallback);
}


static vclosure* windowIconifyFunction;
static void windowIconifyCallback(GLFWwindow* window, int iconified) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, iconified);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(windowIconifyFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_window_iconify_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowIconifyFunction)
	glfwSetWindowIconifyCallback((GLFWwindow*)window, windowIconifyCallback);
}


static vclosure* windowMaximizeFunction;
static void windowMaximizeCallback(GLFWwindow* window, int maximized) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, maximized);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(windowMaximizeFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_window_maximize_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowMaximizeFunction)
	glfwSetWindowMaximizeCallback((GLFWwindow*)window, windowMaximizeCallback);
}


static vclosure* windowFramebufferFunction;
static void windowFramebufferCallback(GLFWwindow* window, int width, int height) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, width);
	CREATE_CLOSURE_PARAM_INT(arg3, height);

	vdynamic* args[3] = { &arg, &arg2, &arg3 };
	hl_dyn_call(windowFramebufferFunction, args, 3);
}

HL_PRIM void FUNC_NAME(glfw_set_framebuffer_size_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowFramebufferFunction)
	glfwSetFramebufferSizeCallback((GLFWwindow*)window, windowFramebufferCallback);
}


static vclosure* windowContentFunction;
static void windowContentCallback(GLFWwindow* window, float xscale, float yscale) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_FLOAT(arg2, xscale);
	CREATE_CLOSURE_PARAM_FLOAT(arg3, yscale);

	vdynamic* args[3] = { &arg, &arg2, &arg3 };
	hl_dyn_call(windowContentFunction, args, 3);
}

HL_PRIM void FUNC_NAME(glfw_set_window_content_scale_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowContentFunction)
	glfwSetWindowContentScaleCallback((GLFWwindow*)window, windowContentCallback);
}

static vclosure* monitorFunction;
static void monitorCallback(GLFWmonitor* monitor, int event) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*monitor);
	CREATE_CLOSURE_PARAM_INT(arg2, event);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(monitorFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_monitor_callback)(vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(monitorFunction)
	glfwSetMonitorCallback(monitorCallback);
}

static vclosure* windowKeyFunction;
static void windowKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, key);
	CREATE_CLOSURE_PARAM_INT(arg3, scancode);
	CREATE_CLOSURE_PARAM_INT(arg4, action);
	CREATE_CLOSURE_PARAM_INT(arg5, mods);

	vdynamic* args[5] = { &arg, &arg2, &arg3, &arg4, &arg5 };
	hl_dyn_call(windowKeyFunction, args, 5);
}

HL_PRIM void FUNC_NAME(glfw_set_key_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowKeyFunction)
	glfwSetKeyCallback((GLFWwindow*)window, windowKeyCallback);
}

/* planned to be removed so there isnt really a point to add this
static vclosure* windowCharFunction;
static void windowCharCallback(GLFWwindow* window, unsigned int codepoint) {
	CREATE_CLOSURE_PARAM_ABSTRACT(arg, window);
	CREATE_CLOSURE_PARAM_INT(arg2, codepoint);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(windowCharFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_char_callback)(GLFWwindow* window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowCharFunction)
	glfwSetKeyCallback(window, windowCharCallback);
}
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_char_callback), _WINDOW _FUN(_VOID, _WINDOW _I32));

static vclosure* windowCharModsFunction;
static void windowCharModsCallback(GLFWwindow* window, unsigned int codepoint) {
	CREATE_CLOSURE_PARAM_ABSTRACT(arg, window);
	CREATE_CLOSURE_PARAM_INT(arg2, codepoint);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(windowCharFunction, args, 2);
}

HL_PRIM GLFWcharmodsfun FUNC_NAME(glfw_set_char_mods_callback)(GLFWwindow* window, GLFWcharmodsfun callback) {
	return;
}
*/

static vclosure* windowMouseButtonFunction;
static void windowMouseButtonCallback(GLFWwindow* window, int button, int action, int mods) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, button);
	CREATE_CLOSURE_PARAM_INT(arg3, action);
	CREATE_CLOSURE_PARAM_INT(arg4, mods);

	vdynamic* args[4] = { &arg, &arg2, &arg3, &arg4 };
	hl_dyn_call(windowMouseButtonFunction, args, 4);
}

HL_PRIM void FUNC_NAME(glfw_set_mouse_button_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowMouseButtonFunction)
	glfwSetMouseButtonCallback((GLFWwindow*)window, windowMouseButtonCallback);
}

static vclosure* windowCursorPosFunction;
static void windowCursorPosCallback(GLFWwindow* window, double xpos, double ypos) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_DOUBLE(arg2, xpos);
	CREATE_CLOSURE_PARAM_DOUBLE(arg3, ypos);

	vdynamic* args[3] = { &arg, &arg2, &arg3 };
	hl_dyn_call(windowCursorPosFunction, args, 3);
}

HL_PRIM void FUNC_NAME(glfw_set_cursor_pos_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowCursorPosFunction)
	glfwSetCursorPosCallback((GLFWwindow*)window, windowCursorPosCallback);
}

static vclosure* windowCursorEnterFunction;
static void windowCursorEnterCallback(GLFWwindow* window, int entered) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_INT(arg2, entered);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(windowCursorEnterFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_cursor_enter_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowCursorEnterFunction)
	glfwSetCursorEnterCallback((GLFWwindow*)window, windowCursorEnterCallback);
}

static vclosure* windowScrollFunction;
static void windowScrollCallback(GLFWwindow* window, double xoff, double yoff) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	CREATE_CLOSURE_PARAM_DOUBLE(arg2, xoff);
	CREATE_CLOSURE_PARAM_DOUBLE(arg3, yoff);

	vdynamic* args[3] = { &arg, &arg2, &arg3 };
	hl_dyn_call(windowScrollFunction, args, 3);
}

HL_PRIM void FUNC_NAME(glfw_set_scroll_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowScrollFunction)
	glfwSetScrollCallback((GLFWwindow*)window, windowScrollCallback);
}

static vclosure* windowDropFunction;
static void windowDropCallback(GLFWwindow* window, int path_count, const char* paths[]) {
	CREATE_CLOSURE_PARAM_INTSIXTYFOUR(arg, (int64)&*window);
	varray* arr = hl_alloc_array(&hlt_bytes, path_count);

	for (int i = 0; i < path_count; ++i) {
		hl_aptr(arr, vbyte*)[i] = (vbyte*)paths[i];
	}

	// no idea if this will work
	vdynamic* args[2] = { &arg, (vdynamic*)arr };
	hl_dyn_call(windowDropFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_drop_callback)(int64 window, vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(windowDropFunction)
	glfwSetDropCallback((GLFWwindow*)window, windowDropCallback);
}

static vclosure* joystickFunction;
static void joystickCallback(int jid, int event) {
	CREATE_CLOSURE_PARAM_INT(arg, jid);
	CREATE_CLOSURE_PARAM_INT(arg2, event);

	vdynamic* args[2] = { &arg, &arg2 };
	hl_dyn_call(joystickFunction, args, 2);
}

HL_PRIM void FUNC_NAME(glfw_set_joystick_callback)(vclosure* callback) {
	GENERATE_CLOSURE_OVERRIDE(joystickFunction)
	glfwSetJoystickCallback(joystickCallback);
}

DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_pos_callback), _WINDOW _FUN(_VOID, _WINDOW _I32 _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_size_callback), _WINDOW _FUN(_VOID, _WINDOW _I32 _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_close_callback), _WINDOW _FUN(_VOID, _WINDOW));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_refresh_callback), _WINDOW _FUN(_VOID, _WINDOW));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_focus_callback), _WINDOW _FUN(_VOID, _WINDOW _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_iconify_callback), _WINDOW _FUN(_VOID, _WINDOW _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_maximize_callback), _WINDOW _FUN(_VOID, _WINDOW _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_framebuffer_size_callback), _WINDOW _FUN(_VOID, _WINDOW _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_window_content_scale_callback), _WINDOW _FUN(_VOID, _WINDOW _F32 _F32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_monitor_callback), _FUN(_VOID, _MONITOR _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_key_callback), _WINDOW _FUN(_VOID, _WINDOW _I32 _I32 _I32 _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_mouse_button_callback), _WINDOW _FUN(_VOID, _WINDOW _I32 _I32 _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_cursor_pos_callback), _WINDOW _FUN(_VOID, _WINDOW _F64 _F64));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_cursor_enter_callback), _WINDOW _FUN(_VOID, _WINDOW _I32));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_scroll_callback), _WINDOW _FUN(_VOID, _WINDOW _F64 _F64));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_drop_callback), _WINDOW _FUN(_VOID, _WINDOW _ARR));
DEFINE_PRIM(_VOID, PRIM_NAME(glfw_set_joystick_callback), _FUN(_VOID, _I32 _I32));

/* user pointers arent needed because haxe
HL_PRIM void FUNC_NAME(glfw_init_allocator)(const GLFWallocator* allocator) {
	glfwInitAllocator(allocator);
}

HL_PRIM void FUNC_NAME(glfw_init_vulkan_loader)(PFN_vkGetInstanceProcAddr loader) {
	glfwInitVulkanLoader(loader);
}

HL_PRIM void FUNC_NAME(glfw_set_window_user_pointer)(GLFWwindow* window, void* pointer) {
	return;
}

HL_PRIM void FUNC_NAME(glfw_set_monitor_user_pointer)(GLFWmonitor* monitor, void* pointer) {
	return;
}

HL_PRIM void* FUNC_NAME(glfw_get_monitor_user_pointer)(GLFWmonitor* monitor) {
	return;
}

HL_PRIM void* FUNC_NAME(glfw_get_window_user_pointer)(GLFWwindow* window) {
	return;
}

HL_PRIM void FUNC_NAME(glfw_set_joystick_user_pointer)(int jid, void* pointer) {
	return;
}

HL_PRIM void* FUNC_NAME(glfw_get_joystick_user_pointer)(int jid) {
	return;
}
*/

/* dont know if this is required with glad
HL_PRIM int FUNC_NAME(glfw_vulkan_supported)() {
	return glfwVulkanSupported();
}

HL_PRIM vbyte* FUNC_NAME(glfw_get_required_instance_extensions)(int* count) {
	return glfwGetRequiredInstanceExtensions(count);
}

HL_PRIM GLFWvkproc FUNC_NAME(glfw_get_instance_proc_address)(VkInstance instance, vbyte* procname) {
	return;
}

HL_PRIM int FUNC_NAME(glfw_get_physical_device_presentation_support)(VkInstance instance, VkPhysicalDevice device, uint32_t queuefamily) {
	return;
}

HL_PRIM VkResult FUNC_NAME(glfw_create_window_surface)(VkInstance instance, GLFWwindow* window, const VkAllocationCallbacks* allocator, VkSurfaceKHR* surface) {
	return;
}
*/

/* will do later
HL_PRIM const GLFWvidmode* FUNC_NAME(glfw_get_video_modes)(GLFWmonitor* monitor, int* count) {
	return;
}

HL_PRIM GLFWvidmode* FUNC_NAME(glfw_get_video_mode)(GLFWmonitor* monitor) {
	return;
}

HL_PRIM void FUNC_NAME(glfw_set_gamma)(GLFWmonitor* monitor, float gamma) {
	return;
}

HL_PRIM const GLFWgammaramp* FUNC_NAME(glfw_get_gamma_ramp)(GLFWmonitor* monitor) {
	return;
}

HL_PRIM void FUNC_NAME(glfw_set_gamma_ramp)(GLFWmonitor* monitor, const GLFWgammaramp* ramp) {
	return;
}
*/
