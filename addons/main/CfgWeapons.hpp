class CfgWeapons {
    class rhs_weap_ak74m;
    class rhs_weap_ak74m_npz;
    class rhs_weap_ak74m_gp25;
    class rhs_weap_ak74m_gp25_npz;
    class rhs_weap_ak74m_folded;
    class rhs_weap_svdp;
    class rhs_weap_svdp_npz;
    class Uniform_Base;
    class UniformItem;

    class arifle_RWR_ak74m: rhs_weap_ak74m {
        displayname = "AK-74M (Winter)";
        magazines[] = {"30Rnd_545x39_7n10_RWR"};
        rhs_npz = "arifle_RWR_ak74m_npz";
    };

    class arifle_RWR_ak74m_npz: rhs_weap_ak74m_npz {
        displayname = "AK-74M (Winter/B-13)";
        magazines[] = {"30Rnd_545x39_7n10_RWR"};
        rhs_npz = "arifle_RWR_ak74m";
    };

    class arifle_RWR_ak74m_gp25: rhs_weap_ak74m_gp25 {
        displayname = "AK-74M (GP-25/Winter)";
        magazines[] = {"30Rnd_545x39_7n10_RWR"};
        rhs_npz = "arifle_RWR_ak74m_gp25_npz";
    };

    class arifle_RWR_ak74m_gp25_npz: rhs_weap_ak74m_gp25_npz {
        displayname = "AK-74M (GP-25/Winter/B-13)";
        magazines[] = {"30Rnd_545x39_7n10_RWR"};
        rhs_npz = "arifle_RWR_ak74m_gp25";
    };

    class arifle_RWR_ak74m_folded: rhs_weap_ak74m_folded {
        displayname = "AK-74M (Winter/Folded)";
        magazines[] = {"30Rnd_545x39_7n10_RWR"};
    };

    class srifle_RWR_svdp: rhs_weap_svdp {
        displayname = "SVDM (Winter)";
        rhs_npz = "srifle_RWR_svdp_npz";
    };

    class srifle_RWR_svdp_npz: rhs_weap_svdp_npz {
        displayname = "SVDM (Winter/NPZ)";
        rhs_npz = "srifle_RWR_svdp";
    };

    class U_O_RWR_Overall_noarmor: Uniform_Base {
		author = "Pyro, johnb43";
		scope = 2;
		displayName = "Klyaksa Winter Overall";
		picture = "\RWR_units\icons\RWR_icon_overall_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"RWR_gear\data\U_O_RWR_Overall_co.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "U_O_RWR_Overall_noarmor";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_O_RWR_m88emr_noarmor: Uniform_Base {
		author = "Pyro, johnb43";
		scope = 2;
		displayName = "EMR-Winter";
		picture = "\RWR_units\icons\RWR_icon_uni_emr_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"\RWR_gear\data\U_O_RWR_m88emr_co.paa","",""};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "U_O_RWR_m88emr_noarmor";
			containerClass = "Supply40";
			mass = 40;
		};
	};

    class U_O_RWR_m88emr: Uniform_Base {
        displayName = "EMR-Winter";
        scope = 1;
    };

    class U_O_RWR_Overall: Uniform_Base {
        displayName = "Klyaksa Winter Overall";
        scope = 1;
    };
};
