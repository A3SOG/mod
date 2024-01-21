#define COMPONENT patch
#define COMPONENT_BEAUTIFIED Patch
#include "..\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_PATCH
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_PATCH
    #define DEBUG_SETTINGS DEBUG_SETTINGS_PATCH
#endif

#include "..\main\script_macros.hpp"