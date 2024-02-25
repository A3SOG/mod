#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sog_main"};
        authors[] = {"J. Schmidt", "Creedcoder"}; // sub array of authors, considered for the specific addon
        author = "SOG"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class SOG_Tablet: ItemCore {
        author = "SOG";
        displayName = "Tablet";
        model = QUOTE(PATHTOF(item\sog_tablet.p3d));
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        simulation = "ItemMineDetector";
        picture = QUOTE(PATHTOF(item\images\getac_f110.paa));
        descriptionShort = "SOG's in-house tablet for navigation, communication, and more.";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QUOTE(PATHTOF(item\getac_f110_co.paa))};
        class ItemInfo: InventoryItem_Base_F {
            mass = 2;
        };
    };
};

class CfgVehicles {
    class Land_Laptop_F;
    class Land_SOG_Tablet: Land_Laptop_F {
        author = "SOG";
        displayName = "Tablet";
        model = QUOTE(PATHTOF(item\sog_tablet.p3d));
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = QUOTE(PATHTOF(item\images\getac_f110.paa));
        descriptionShort = "SOG's in-house tablet for navigation, communication, and more.";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QUOTE(PATHTOF(item\getac_f110_co.paa))};
    };
};