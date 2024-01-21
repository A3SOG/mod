#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sog_mod_main"};
        authors[] = {"J. Schmidt", "Creedcoder"}; // sub array of authors, considered for the specific addon
        author = "SOG"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class SOG_Phone: ItemCore {
        author = "SOG";
        displayName = "Phone";
        model = QUOTE(PATHTOF(item\sog_mobile.p3d));
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        simulation = "ItemMineDetector";
        picture = QUOTE(PATHTOF(item\images\mobile_frame.paa));
        descriptionShort = "SOG's in-house cell phone for text-messaging and more.";
        class ItemInfo: InventoryItem_Base_F {
            mass = 2;
        };
    };
};