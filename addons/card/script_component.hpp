#define COMPONENT card
#define COMPONENT_BEAUTIFIED Card
#include "..\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_CARD
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_CARD
    #define DEBUG_SETTINGS DEBUG_SETTINGS_CARD
#endif

#include "..\main\script_macros.hpp"