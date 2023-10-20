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
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-RWR";
        VERSION_CONFIG;
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
    class U_O_RWR_m88emr: rhs_msv_emr_rifleman_patchless {};
};
