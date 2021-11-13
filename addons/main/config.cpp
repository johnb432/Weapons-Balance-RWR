#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "RWR_weapons",
            "RWR_gear"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-RWR";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - Russian Winter Retextures";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Russian Winter Retextures";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-RWR";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_rwr\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_rwr\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_rwr\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgWeapons.hpp"

class CfgMagazines {
    class rhs_30Rnd_545x39_7N22_AK;
    class 30Rnd_545x39_7n22_RWR: rhs_30Rnd_545x39_7N22_AK {
       displayname = "30Rnd AK-74 (Winter) 7N22";
    };
};

// This is for armor removal: Inherit from different class
class CfgVehicles {
    class rhs_vdv_gorka_r_y_rifleman;
    class U_O_RWR_Overall: rhs_vdv_gorka_r_y_rifleman {};

    class rhs_msv_emr_rifleman_patchless;
    class U_O_RWR_m88emr: rhs_msv_emr_rifleman_patchless {}
};
