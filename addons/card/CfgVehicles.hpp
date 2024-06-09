class CfgVehicles {
    class Land_Laptop_F;
    class Land_SOG_Card_Modern;
    class Land_SOG_Card_Classic;
    class Land_SOG_Card: Land_Laptop_F {
        author = "SOG";
        displayName = "Bank Card";
        model = QUOTE(PATHTOF(item\sog_card.p3d));
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        picture = QUOTE(PATHTOF(item\images\BankCard_01_co.paa));
        descriptionShort = "SOG's in-house bank card.";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QUOTE(PATHTOF(item\images\BankCard_01_co.paa))};
    };

    #include "configs\airforce\vehicles.hpp"
    #include "configs\army\vehicles.hpp"
    #include "configs\banks\vehicles.hpp"
    #include "configs\cia\vehicles.hpp"
    #include "configs\marines\vehicles.hpp"
    #include "configs\navy\vehicles.hpp"
};