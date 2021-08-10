#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "U_O_RWR_Overall_noarmor",
            "U_O_RWR_m88emr_noarmor"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "RWR_weapons",
            "RWR_gear"
        };
        author = "johnb43";
    };
};

#include "CfgWeapons.hpp"

class CfgMagazines {
    class rhs_30Rnd_545x39_7N22_AK;
    class 30Rnd_545x39_7n22_RWR: rhs_30Rnd_545x39_7N22_AK {
       displayname = "30Rnd AK-74 (Winter) 7N22";
    };
};

// This is for armor removal: New items are created without armor and the old ones are hidden
class CfgVehicles {
	class B_Soldier_base_F;
	class U_O_RWR_Overall_noarmor: B_Soldier_base_F {
		author = "Pyro, johnb43";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		displayName = "$STR_U_O_RWR_Overall";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";
		uniformClass = "U_O_RWR_Overall";
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry2\data\gorkaR.rvmat","rhsafrf\addons\rhs_infantry2\data\gorkaR_w1.rvmat","rhsafrf\addons\rhs_infantry2\data\gorkaR_w2.rvmat"};
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"RWR_gear\data\U_O_RWR_Overall_co.paa"};
	};
	class U_O_RWR_m88emr_noarmor: B_Soldier_base_F {
		author = "Pyro, johnb43";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		displayName = "$STR_U_O_RWR_emr";
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		uniformClass = "U_O_RWR_m88emr";
		class Wounds {
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry\data\flora.rvmat","rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat","rhsafrf\addons\rhs_infantry\data\flora_vydra.rvmat","rhsafrf\addons\rhs_infantry\data\flora_vydra_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_vydra_w2.rvmat","rhsafrf\addons\rhs_infantry\data\6b23.rvmat","rhsafrf\addons\rhs_infantry\data\6b23_w1.rvmat","rhsafrf\addons\rhs_infantry\data\6b23_w2.rvmat"};
		};
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"\RWR_gear\data\U_O_RWR_m88emr_co.paa","",""};
	};
};
