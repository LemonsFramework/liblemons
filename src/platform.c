// platform specific code
#include "global.h"

#if _WIN32
#import <Windows.h> // i hate this file
#endif

#define FUNC_NAME(n) HL_NAME(platform_##n)
#define PRIM_NAME(n) platform_##n

bool FUNC_NAME(add_terminal_colour)() {
	#if _WIN32 // windows is stinky
	BOOL out = SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	return out == TRUE;
	#else // literally everything else works normally windows why cant you fucking behave like a normal operating system
	return true;
	#endif
}

bool FUNC_NAME(create_console)() {
	#if _WIN32 
	BOOL out = AllocConsole();
	return out == TRUE;
	#else
	return true;
	#endif
}

// i know that hashlink std already implements this but id rather not call stuff from all over the place
bool FUNC_NAME(kill_console)() {
	#if _WIN32 
	BOOL out = FreeConsole();
	return out == TRUE;
	#else
	return true;
	#endif
}

DEFINE_PRIM(_BOOL, PRIM_NAME(add_terminal_colour), _NO_ARG);
DEFINE_PRIM(_BOOL, PRIM_NAME(create_console), _NO_ARG);
DEFINE_PRIM(_BOOL, PRIM_NAME(kill_console), _NO_ARG);
