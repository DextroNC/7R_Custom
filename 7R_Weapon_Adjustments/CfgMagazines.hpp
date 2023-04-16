class CfgMagazines {
	class HandGrenade;
	class rhs_mag_rdg2_white : HandGrenade {
		mass = 4;
	};
	class rhs_mag_nspd: HandGrenade {
		mass = 4;
	};
	class rhs_mag_rgd5: HandGrenade {
		mass = 5;
	};
	class rhs_mag_rgn: rhs_mag_rgd5 {
		mass = 6;
		initSpeed = 26;
	};
	class CA_Magazine;
	class rhs_30Rnd_545x39_AK : CA_Magazine {
		mass = 8;
	};
	class CA_LauncherMagazine;
	class rhs_mag_smaw_HEAA : CA_LauncherMagazine {
		mass = 40;
	};
	class rhs_mag_smaw_HEDP : CA_LauncherMagazine {
		mass = 60;
	};
	class rhs_mag_maaws_HEDP: CA_LauncherMagazine {
		mass = 60;
	};
	class rhs_mag_maaws_HEAT: CA_LauncherMagazine {
		mass = 60;
	};
	class rhs_mag_maaws_HE: CA_LauncherMagazine {
		mass = 40;
	};
	class rhs_mag_maaws_ILLUM: CA_LauncherMagazine {
		mass = 40;
	};
	class rhs_mag_maaws_SMOKE: CA_LauncherMagazine {
		mass = 40;
	};
	class rhs_100Rnd_762x54mmR : rhs_30Rnd_545x39_AK
	{
		scope = 2;
		mass = 38;
	};
	class rhs_mag_nspn_yellow: HandGrenade {
		descriptionshort = "Type: Smoke Grenade<br />Rounds: 1<br />Used in: Hand";
		displayName = "NSP-N (Yellow)";
		displayNameShort = "Yellow Smoke";
		ammo = "rhs_ammo_nspd_yellow";
	}; 
	class rhs_mag_nspn_red: rhs_mag_nspn_yellow {
		descriptionshort = "Type: Smoke Grenade<br />Rounds: 1<br />Used in: Hand";
		displayName = "NSP-N (Red)";
		displayNameShort = "Red Smoke";
		ammo = "rhs_ammo_nspd_red";
	}; 
	class rhs_mag_nspn_green: rhs_mag_nspn_yellow {
		descriptionshort = "Type: Smoke Grenade<br />Rounds: 1<br />Used in: Hand";
		displayName = "NSP-N (Green)";
		displayNameShort = "Green Smoke";
		ammo = "rhs_ammo_nspd_green";
	}; 
	class 20Rnd_762x51_Mag : CA_Magazine {
		ammo = "SR_762x51_DMR"; 
	};
	class 30Rnd_556x45_Stanag: CA_Magazine {
		//modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd";
		modelSpecialIsProxy = 1;
	};
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class UK3CB_BAF_762_100Rnd: 150Rnd_762x51_Box {
		mass = 48;
	};
	class UK3CB_BAF_762_200Rnd: UK3CB_BAF_762_100Rnd {
		mass = 96;
	};
	class UK3CB_BAF_762_100Rnd_T: 150Rnd_762x51_Box_Tracer {
		mass = 48;
	};
	class UK3CB_BAF_762_200Rnd_T: UK3CB_BAF_762_100Rnd_T {
		mass = 96;
	};
	class 8Rnd_82mm_Mo_shells; 
	class UK3CB_BAF_1Rnd_81mm_Mo_Shells: 8Rnd_82mm_Mo_shells {
		mass = 75;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Shells: UK3CB_BAF_1Rnd_81mm_Mo_Shells {
		mass = 25;
	};
	class 8Rnd_82mm_Mo_Smoke_white;
	class UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White: 8Rnd_82mm_Mo_Smoke_white {
		mass = 75;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White: UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White {
		mass = 25;
	};
	class 8Rnd_82mm_Mo_Flare_white;
	class UK3CB_BAF_1Rnd_81mm_Mo_Flare_White: 8Rnd_82mm_Mo_Flare_white {
		mass = 75;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Flare_White: UK3CB_BAF_1Rnd_81mm_Mo_Flare_White {
		mass = 25;
	};
	class UK3CB_BAF_556_100Rnd;
	class UK3CB_BAF_556_200Rnd: UK3CB_BAF_556_100Rnd {
		mass = 60;
	};
	class 5000Rnd_762x51_Yellow_Belt;
	class 5000Rnd_762x51_Red_Belt : 5000Rnd_762x51_Yellow_Belt {
		ammo = "B_762x51_Minigun_Tracer_Red_splash";
	};
	class rhs_mine_msk40p_mag;
	class rhsafrf_mine_msk40p_mag : rhs_mine_msk40p_mag {};
	class ATMine_Range_Mag;
	class rhs_mine_tm62m_mag: ATMine_Range_Mag {
		mass = 20;
	};
	class ace_hot_1_6Rnd;
	class ace_hot_1_PylonRack_1Rnd: ace_hot_1_6Rnd {
		hardpoints[] = {"B_MISSILE_PYLON", "SCALPEL_1RND_EJECTOR", "B_ASRRAM_EJECTOR", "UNI_SCALPEL", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "RHS_HP_MELB","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_USMC"};
	};
	class ace_hot_1_PylonRack_3Rnd: ace_hot_1_6Rnd {
		hardpoints[] = {"B_MISSILE_PYLON", "UNI_SCALPEL", "CUP_NATO_HELO_LARGE", "RHS_HP_LONGBOW_RACK","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_USMC"};
	};
	class ace_hot_2_6Rnd;
	class ace_hot_2_PylonRack_1Rnd: ace_hot_2_6Rnd {
		hardpoints[] = {"B_MISSILE_PYLON", "SCALPEL_1RND_EJECTOR", "B_ASRRAM_EJECTOR", "UNI_SCALPEL", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "RHS_HP_MELB","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_USMC"};
	};
	class ace_hot_2_PylonRack_3Rnd: ace_hot_2_6Rnd {
		hardpoints[] = {"B_MISSILE_PYLON", "UNI_SCALPEL", "CUP_NATO_HELO_LARGE", "RHS_HP_LONGBOW_RACK","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_USMC"};
	};
	class ace_hot_3_6Rnd;
	class ace_hot_3_PylonRack_1Rnd: ace_hot_3_6Rnd {
		hardpoints[] = {"B_MISSILE_PYLON", "SCALPEL_1RND_EJECTOR", "B_ASRRAM_EJECTOR", "UNI_SCALPEL", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "RHS_HP_MELB","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_USMC"};
	};
	class ace_hot_3_PylonRack_3Rnd: ace_hot_3_6Rnd {
		hardpoints[] = {"B_MISSILE_PYLON", "UNI_SCALPEL", "CUP_NATO_HELO_LARGE", "RHS_HP_LONGBOW_RACK","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_USMC"};
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag;
	class UK3CB_M16_20Rnd_Mag: rhs_mag_30Rnd_556x45_Mk318_Stanag {
		mass = 7.5;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
	class UK3CB_M16_20Rnd_Mag_T: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
		mass = 7.5;
	};
	class rhs_mag_mk3a2: HandGrenade {
		mass = 6;
	};
	class rhs_grenade_mkiiia1_mag: HandGrenade {
		mass = 6;
	};
	class rhs_mag_m18_smoke_base: HandGrenade {
		mass = 4;
	};
	class rhs_mag_an_m8hc: HandGrenade {
		mass = 4;
	};
	/*
	class NLAW_F: CA_LauncherMagazine {
		ammo = "M_NLAW_AT_F";
	};
	*/
	class rhs_fgm148_magazine_AT: CA_LauncherMagazine {
		mass = 180;
	};
};