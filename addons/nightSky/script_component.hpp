#define COMPONENT nightSky
#define COMPONENT_BEAUTIFIED NightSky
#include "..\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_NIGHTSKY
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_NIGHTSKY
    #define DEBUG_SETTINGS DEBUG_SETTINGS_NIGHTSKY
#endif

#include "..\main\script_macros.hpp"