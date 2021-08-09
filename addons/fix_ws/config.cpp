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
    };
};

class CfgMagazines {
    class rhs_30Rnd_545x39_7N22_AK;
    class 30Rnd_545x39_7n22_RWR: rhs_30Rnd_545x39_7N22_AK {
       displayname = "30Rnd AK-74 (Winter) 7N22";
    };
};

class CfgVehicles {
    class B_Soldier_base_F;
    //class U_O_RWR_m88emr: B_Soldier_base_F {};
    //class U_O_RWR_Overall: B_Soldier_base_F {};

    class U_O_RWR_m88emr_noarmor: B_Soldier_base_F {};
    class U_O_RWR_Overall_noarmor: B_Soldier_base_F {};
};

#include "CfgWeapons.hpp"
