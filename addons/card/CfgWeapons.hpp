class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class SOG_Card_Modern;
    class SOG_Card_Classic;
    class SOG_Card: ItemCore {
        author = "SOG";
        displayName = "Bank Card";
        model = QUOTE(PATHTOF(item\sog_card.p3d));
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        simulation = "ItemMineDetector";
        picture = QUOTE(PATHTOF(item\images\BankCard_01_co.paa));
        descriptionShort = "SOG's in-house bank card.";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QUOTE(PATHTOF(item\images\BankCard_01_co.paa))};
        class ItemInfo: InventoryItem_Base_F {
            mass = 2;
        };
    };

    #include "configs\airforce\weapons.hpp"
    #include "configs\army\weapons.hpp"
    #include "configs\banks\weapons.hpp"
    #include "configs\cia\weapons.hpp"
    #include "configs\marines\weapons.hpp"
    #include "configs\navy\weapons.hpp"
};