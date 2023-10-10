class CfgVehicles {
	class B_AssaultPack_cbr;
	class B_AssaultPack_invisible: B_AssaultPack_cbr {
		_generalMacro = "B_AssaultPack_invisible";
		displayName = "Invisible Assualt Pack";
		model = "\A3\weapons_f\empty";
	};
	class B_Carryall_cbr;
	class B_Carryall_invisible: B_Carryall_cbr {
		_generalMacro = "B_Carryall_invisible";
		displayName = "Invisible Carryall";
		model = "\A3\weapons_f\empty";
	};
	class B_Kitbag_cbr;
	class B_Kitbag_invisible: B_Kitbag_cbr {
		_generalMacro = "B_Kitbag_invisible";
		displayName = "Invisible Kitbag";
		model = "\A3\weapons_f\empty";
	};
	class B_FieldPack_cbr;
	class B_FieldPack_invisible: B_FieldPack_cbr {
		_generalMacro = "B_FieldPack_invisible";
		displayName = "Invisible Field Pack";
		model = "\A3\weapons_f\empty";
	};
	class B_AssaultPack_Base;
	class rhs_rpg : B_AssaultPack_Base {
		maximumLoad = 180;
	};
	class rhs_medic_bag : B_AssaultPack_Base {
		maximumLoad = 240;
	};
	class Bag_Base;
	class milgp_Bag_Base;
	class milgp_bp_Tomahawk_mc: milgp_Bag_Base {
		maximumLoad=100;
	};
	class milgp_bp_Tomahawk_rgr: milgp_Bag_Base {
		maximumLoad=100;
	};
	class milgp_bp_Tomahawk_cb: milgp_Bag_Base {
		maximumLoad=100;
	};
	class milgp_bp_Tomahawk_khk: milgp_Bag_Base {
		maximumLoad=100;
	};
	class milgp_bp_Breacher_mc: milgp_Bag_Base {
		maximumLoad=160;
	};	
	class milgp_bp_Breacher_rgr: milgp_Bag_Base {
		maximumLoad=160;
	};	
	class milgp_bp_Breacher_cb: milgp_Bag_Base {
		maximumLoad=160;
	};
	class milgp_bp_Breacher_khk: milgp_Bag_Base {
		maximumLoad=160;
	};
	class RHS_UAZ_SPG9_Base;
	class rhs_uaz_spg9_chdkz: RHS_UAZ_SPG9_Base {};
	class MRAP_01_base_F;
	class rhsusf_M1239_base: MRAP_01_base_F {
		ace_cargo_space = 8;
	};
	class rhsusf_M1239_M2_Deploy_socom_d;
	class rhsusf_M1239_M2_Deploy_socom_wd: rhsusf_M1239_M2_Deploy_socom_d {
		scope = 2;
	};
	class rhsusf_M1239_M2_socom_d;
	class rhsusf_M1239_M2_socom_wd: rhsusf_M1239_M2_socom_d {
		scope = 2;
	};
	class rhsusf_M1239_MK19_Deploy_socom_d;
	class rhsusf_M1239_MK19_Deploy_socom_wd: rhsusf_M1239_MK19_Deploy_socom_d {
		scope = 2;
	};
	class rhsusf_M1239_MK19_socom_d;
	class rhsusf_M1239_MK19_socom_wd: rhsusf_M1239_MK19_socom_d {
		scope = 2;
	};
	class rhsusf_M1239_socom_d;
	class rhsusf_M1239_socom_wd: rhsusf_M1239_socom_d {
		scope = 2;
	};
	class rhsusf_M1238A1_M2_socom_d;
	class rhsusf_M1238A1_M2_socom_wd: rhsusf_M1238A1_M2_socom_d {
		scope = 2;	
	};
	class rhsusf_M1238A1_Mk19_socom_d;
	class rhsusf_M1238A1_Mk19_socom_wd: rhsusf_M1238A1_Mk19_socom_d {
		scope = 2;
	};
	class rhsusf_M1238A1_socom_d;
	class rhsusf_M1238A1_socom_wd: rhsusf_M1238A1_socom_d {
		scope = 2;
	};
	class rhsgref_hidf_alicepack: Bag_Base {
		maximumLoad = 538;
	};
	// class tf_rt1523g_big;
	// class UK3CB_B_B_Radio_Backpack: tf_rt1523g_big {
	// 	maximumLoad = 180;
	// };
	class B_RadioBag_01_base_F: Bag_Base {
		maximumLoad = 120;
	};
	class rhsusf_mrzr4_d;
	class rhsusf_mrzr4_w: rhsusf_mrzr4_d {
		scope = 2;
	};
	// class USAF_C17;
	// class globemaster_c17: USAF_C17 {};
	class rhsusf_m1152_base;
	class rhsusf_m1152_rsv_usarmy_d: rhsusf_m1152_base {
		ace_cargo_space = 10;
		ace_repair_canRepair = 1;
	};
	class rhsusf_m1152_rsv_usmc_d: rhsusf_m1152_base {
		ace_cargo_space = 10;
		ace_repair_canRepair = 1;
	};
};
