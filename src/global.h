#define HL_NAME(n) lemons_##n
#include <hl.h>

// modified by the files
#define EXT_NAME "none"

#define FUNC_NAME(n) HL_NAME(EXT_NAME_##n)
#define PRIM_NAME(n) EXT_NAME_##n