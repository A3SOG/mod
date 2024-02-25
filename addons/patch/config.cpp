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

class CfgUnitInsignia {
    class CLASS(Patch_01) {
        displayName = "Special Operations Group Patch, BK";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_bk.paa));
    };
    class CLASS(Patch_02) {
        displayName = "Special Operations Group Patch, OD";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_od.paa));
    };
    class CLASS(Patch_03) {
        displayName = "Special Operations Group Patch, TN";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_tn.paa));
    };
    class CLASS(Patch_04) {
        displayName = "Special Operations Group Patch, CB";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_cb.paa));
    };
    class CLASS(Patch_05) {
        displayName = "Special Operations Group Patch, RG";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_rg.paa));
    };
    class CLASS(Patch_06) {
        displayName = "Special Operations Group Patch, NB";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_nb.paa));
    };
    class CLASS(Patch_07) {
        displayName = "Special Operations Group Patch, WH";
        author = "SOG";
        texture = QUOTE(PATHTOF(data\sog_armpatch_wh.paa));
    };
};