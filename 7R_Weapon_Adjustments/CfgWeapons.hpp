class CfgWeapons {	
	/*
	class PKT;
	class rhs_weap_pkt: PKT {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;
	};
	class LMG_RCWS;
	class rhs_weap_DSHKM: LMG_RCWS {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;
	};
	class rhs_weap_nsvt: rhs_weap_DSHKM {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;
	};
	class MGun;
	class rhs_weap_kpvt: MGun {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;
	};
	class HMG_M2;
	class RHS_M2: HMG_M2 {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;
	};	
	class rhs_weap_nsvt_effects;
	class rhs_weap_kord: rhs_weap_nsvt_effects {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;
	};
	class LMG_M200;
	class rhs_weap_m240veh: LMG_M200 {
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefY = 42;
		aiDispersionCoefX = 42;	
	};
	class gatling_30mm;
	class RHS_weap_GSh30: gatling_30mm
	{
		recoil = "recoil_static";
		dispersion=8;
		aiDispersionCoefX=42;
		aiDispersionCoefY=42;
	};
	class rhs_pkp_base;
	class rhs_weap_pkp: rhs_pkp_base{
		recoil="recoil_SR_m240";
		aiDispersionCoefX=42;
		aiDispersionCoefY=42;
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		recoil="recoil_SR_m240";
		aiDispersionCoefX=42;
		aiDispersionCoefY=42;
	};

	class rhs_weap_rpg7: Launcher_Base_F {
		aiDispersionCoefX=4;
		aiDispersionCoefY=4;
	};
	class rhs_weap_rpg26: Launcher_Base_F {
		aiDispersionCoefX=4;
		aiDispersionCoefY=4;
	};
	class rhs_weap_rpg18: Launcher_Base_F {
		aiDispersionCoefX=4;
		aiDispersionCoefY=4;
	};
		class rhs_weap_rshg2: rhs_weap_rpg26 {
		aiDispersionCoefX=4;
		aiDispersionCoefY=4;
	};
	*/
	class Launcher;
	class Launcher_Base_F: Launcher {
		class Eventhandlers;
		class WeaponSlotsInfo;
	};
	class rhs_weap_smaw : Launcher_Base_F 
	{
		ace_reloadlaunchers_enabled = 1;
	};
	class rhs_weap_maaws: Launcher_Base_F {
		ace_reloadlaunchers_enabled = 1;
		magazines[] = {"rhs_mag_maaws_HEAT","rhs_mag_maaws_HEDP","rhs_mag_maaws_HE","MRAWS_HEAT_F","MRAWS_HE_F"};
		class Eventhandlers: Eventhandlers {
            class SR_AB {
                fired = "_this call SR_Maaws_fnc_firedEH";
            };
		};
	};
	class srifle_EBR_F;
	class rhs_weap_m14ebrri : srifle_EBR_F {
		magazines[] = {"20Rnd_762x51_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag"};
	};
	class rhs_weap_sr25 : rhs_weap_m14ebrri {
		magazines[] = {"20Rnd_762x51_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag"};
	};
	class UK3CB_BAF_Slung_Static_Weapon_Base;
	class UK3CB_BAF_Tripod: UK3CB_BAF_Slung_Static_Weapon_Base {
		class WeaponSlotsInfo {
			allowedSlots[] = {};
			mass = 40;
		};
	};
	class UK3CB_BAF_M6: UK3CB_BAF_Slung_Static_Weapon_Base {
		class WeaponSlotsInfo {
			allowedSlots[] = {};
			mass = 96;
		};
	};
	class launch_Vorona_base_F: Launcher_Base_F {
		weaponInfoType = "RscWeaponEmpty";
	};
	
	class launch_NLAW_F: Launcher_Base_F {
		class Eventhandlers: Eventhandlers {
			fired = "_this call rhs_fnc_disposable;";
		};
	};
	class launch_NLAW_F_Used: launch_NLAW_F {
		magazines[]={"rhs_launcher_dummy_mag"};
	};
	class UK3CB_BAF_NLAW_Launcher: launch_NLAW_F {
		class Eventhandlers: Eventhandlers {
			fired = "_this call rhs_fnc_disposable;";
		};
	};
	class UK3CB_BAF_NLAW_Launcher_Used: UK3CB_BAF_NLAW_Launcher {
		magazines[]={"rhs_launcher_dummy_mag"};
	};
	class Rifle_Base_F;
	class rhs_weap_saw_base:Rifle_Base_F {
		recoil="recoil_default";
	};
	/*
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base {
		recoil="recoil_SR_m240";
	};
	*/
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		//recoil="recoil_SR_m240";
		magazines[] = {"UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_T","UK3CB_BAF_762_200Rnd_Blank","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_Mdim_M60E4","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer"};
	};

	class MGunCore;
	class M134_minigun : MGunCore {
		magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Yellow_Belt","5000Rnd_762x51_Red_Belt"};
	};
	class SmokeLauncher;
	class CMFlareLauncher: SmokeLauncher {
		modes[] = {"Burst","AIBurst"}; 
	};
	class RocketPods;
	class missiles_DAR: RocketPods {
		class Burst: RocketPods {
			autoFire = 0;burst = 1;displayName = "Hydra 70";maxRange = 3;maxRangeProbab = 0.001;midRange = 2;midRangeProbab = 0.001;minRange = 1;minRangeProbab = 0.001;reloadTime = 0.08;soundContinuous = 0;soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.77828,1.2,700};sounds[] = {"StandardSound"};
			class StandardSound {};
			textureType = "semi";
		};
	};
	/*
	class hlc_saw_base;
	class hlc_lmg_mk48 : hlc_saw_base {
		//recoil="recoil_SR_m240";
	};*/
	class UK3CB_BAF_L110_Base;
	class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
		//recoil="recoil_SR_m240";
		magazineWell[] = {"M240_762x51"};
	};
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
		magazineWell[] = {"M249_556x45","CBA_556x45_MINIMI"};
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_NVS: ItemCore {
		model = "\A3\weapons_f\acc\acco_Nightstalker_F";
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes 
			{
				class NVS {};
				class Iron: NVS {
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"",""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	class rhs_weap_hk416d10_m320;
	class rhs_weap_hk416d10_m320_d: rhs_weap_hk416d10_m320 {
		_generalMacro = "rhs_weap_hk416d10_m320_d";
		baseWeapon = "rhs_weap_hk416d10_m320_d";
		scope = 2;
		scopeArsenal=2;
		displayName = "HK416 D10 (M320) Desert";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_2_d_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa","\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"};	
	};
	class rhs_weap_hk416d10_m320_wd: rhs_weap_hk416d10_m320 {
		_generalMacro = "rhs_weap_hk416d10_m320_wd";
		baseWeapon = "rhs_weap_hk416d10_m320_wd";
		scope = 2;
		scopeArsenal=2;
		displayName = "HK416 D10 (M320) Woodland";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_2_w_co.paa","\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa","\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"};	
	};
	class acc_pointer_IR;
	class rhsusf_acc_anpeq15: acc_pointer_IR {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_light";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_light";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_h: rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_light_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_light_h";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_light_h: rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_h";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_light";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_light";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_bk_h: rhsusf_acc_anpeq15_bk {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_light_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_light_h";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_bk_light_h: rhsusf_acc_anpeq15_bk_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_h";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_wmx: rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_light";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_light";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_wmx_light: rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_wmx_h: rhsusf_acc_anpeq15_wmx {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_light_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_light_h";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_wmx_light_h: rhsusf_acc_anpeq15_wmx_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_h";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq16a: rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light";
		MRT_switchItemHintText="Laser active";
	}; 
	class rhsusf_acc_anpeq16a_light: rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq16a_top: rhsusf_acc_anpeq16a {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light_top";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light_top";
		MRT_switchItemHintText="Laser active";
	}; 
	class rhsusf_acc_anpeq16a_light_top: rhsusf_acc_anpeq16a_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top";
		MRT_switchItemHintText="Flashlight active";
	};	
	class rhsusf_acc_anpeq16a_top_h: rhsusf_acc_anpeq16a_top {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light_top_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light_top_h";
		MRT_switchItemHintText="Laser active";
	}; 
	class rhsusf_acc_anpeq16a_light_top_h: rhsusf_acc_anpeq16a_light_top {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top_h";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top_h";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq16a_top_sc: rhsusf_acc_anpeq16a_top {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light_top_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light_top_sc";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq16a_light_top_sc: rhsusf_acc_anpeq16a_light_top {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top_sc";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_wmx_sc: rhsusf_acc_anpeq15_wmx {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_light_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_light_sc";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_wmx_light_sc: rhsusf_acc_anpeq15_wmx_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_sc";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_sc: rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_light_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_light_sc";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_light_sc: rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_sc";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhsusf_acc_anpeq15_bk_sc: rhsusf_acc_anpeq15_bk {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_light_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_light_sc";
		MRT_switchItemHintText="Laser active";
	};
	class rhsusf_acc_anpeq15_bk_light_sc: rhsusf_acc_anpeq15_bk_light {
		MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_sc";
		MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_sc";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhs_acc_perst3;
	class rhs_acc_perst3_2dp: rhs_acc_perst3 {
		MRT_SwitchItemNextClass="rhs_acc_perst3_2dp_light";
		MRT_SwitchItemPrevClass="rhs_acc_perst3_2dp_light";
		MRT_switchItemHintText="Laser active";
	};
	class rhs_acc_perst3_2dp_light: rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass="rhs_acc_perst3_2dp";
		MRT_SwitchItemPrevClass="rhs_acc_perst3_2dp";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhs_acc_perst3_2dp_h: rhs_acc_perst3_2dp {
		MRT_SwitchItemNextClass="rhs_acc_perst3_2dp_light_h";
		MRT_SwitchItemPrevClass="rhs_acc_perst3_2dp_light_h";
		MRT_switchItemHintText="Laser active";
	};
	class rhs_acc_perst3_2dp_light_h: rhs_acc_perst3_2dp_light {
		MRT_SwitchItemNextClass="rhs_acc_perst3_2dp_h";
		MRT_SwitchItemPrevClass="rhs_acc_perst3_2dp_h";
		MRT_switchItemHintText="Flashlight active";
	};
	class rhs_6b7_1m_bala1 : ItemCore {
		scope = 2;
	};
	class rhs_6b7_1m_bala2_olive : ItemCore {
		scope = 2;
	};
	class rhs_6b7_1m_ess_bala : ItemCore {
		scope = 2;
	};
	class rhs_weap_akm;
	class rhs_weap_ak103_base: rhs_weap_akm {
	};
	class RH_Pistol_Base_F;
	class RH_m9: RH_Pistol_Base_F {
		magazines[] = {"RH_15Rnd_9x19_M9","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_FMJ"};
		magazineWell[] = {"CBA_9x19_M9"};
	};
	class Vest_Camo_Base;
	class rhs_6b23 : Vest_Camo_Base
	{    
        	class ItemInfo;
    	};
	class rhsgref_alice_webbing: rhs_6b23 {
		class ItemInfo: ItemInfo {
			containerClass = "Supply140";
		};
	};
	class rhs_weap_fnfal_base: Rifle_Base_F {
		magazineWell[] = {"CBA_762x51_FAL","CBA_762x51_FAL_L","M14_762x51","CBA_762x51_M14"};
	};
	class ACRE_BaseRadio;
	class CBA_MiscItem_ItemInfo;
	class ACRE_PRC117F: ACRE_BaseRadio {
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 80;
			allowedSlots[] = {901};
			scope = 0;
		};
	};
	class rhs_weap_m79: Rifle_Base_F{
		magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareWhite_F","rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M781_Practice","rhs_mag_M397_HET","rhs_mag_M4009","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow"};
	};
	class UK3CB_M79: rhs_weap_m79 {
		magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareWhite_F","rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M781_Practice","rhs_mag_M397_HET","rhs_mag_M4009","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow"};
	};
	class rhs_weap_SCAR_Base;
	class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base {
		magazineWell[] = {"CBA_762x51_SCAR","CBA_762x51_MkI_EMR","CBA_762x51_M14"};
	};

	/*
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class OFrP_Vest_SMB_Base: Vest_Camo_Base
	{
		class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	class OFrP_Vest_CIRAS_Base: Vest_Camo_Base
	{
			class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	class OFrP_Vest_S3_Base: Vest_Camo_Base
	{
		class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	*/
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};
	class rhs_uniform_cu_ocp: Uniform_Base
	{
		class ItemInfo;
	};
	class rhs_uniform_FROG01_d: rhs_uniform_cu_ocp
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply50";
			mass = 40;
		};
	};
	class rhs_uniform_FROG01_wd: rhs_uniform_FROG01_d
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply50";
			mass = 40;
		};
	};
	class rhs_uniform_flora: Uniform_Base {
		class ItemInfo: ItemInfo {
			containerClass = "Supply60";
			mass = 50;
		};
	};
	class GMG_F;
	class GMG_20mm: GMG_F {
		dispersion = 0.008;
		class manual: GMG_F {
			reloadTime = 0.30;
		};
	};
	class GMG_40mm: GMG_F {
		dispersion = 0.008;
		class manual: GMG_F {
			reloadTime = 0.30;
		};
	};
	class RHS_MK19: GMG_20mm {
		dispersion = 0.008;
		class manual: GMG_F {
			reloadTime = 0.30;
		};
	};
	class RHS_weap_Ags30: GMG_20mm {
		dispersion = 0.008;
		class manual: GMG_F {
			reloadTime = 0.30;
		};
	};
	class UK3CB_Factions_MK19: RHS_MK19 {
		magazines[] = {"RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M1001","RHS_96Rnd_40mm_MK19","RHS_96Rnd_40mm_MK19_M430I","RHS_96Rnd_40mm_MK19_M430A1"};
	};
	class rhsusf_iotv_ocp_base;
	class rhsusf_spc: rhsusf_iotv_ocp_base {
		class ItemInfo;
	};
	class rhsusf_spc_rifleman: rhsusf_spc {
		class ItemInfo: ItemInfo {
			containerClass = "Supply160";
		};
	};
	class rhsusf_spc_marksman: rhsusf_spc_rifleman {
		class ItemInfo: ItemInfo {
			containerClass = "Supply160";
		};
	};
	class rhsusf_spc_light: rhsusf_spc_rifleman {
		class ItemInfo: ItemInfo {
			containerClass = "Supply140";
		};
	};
	class rhsusf_spc_mg: rhsusf_spc_rifleman {
		class ItemInfo: ItemInfo {
			containerClass = "Supply160";
		};
	};
	class rhsusf_spc_sniper: rhsusf_spc_rifleman {
		class ItemInfo: ItemInfo {
			containerClass = "Supply140";
		};
	};
	class rhsusf_spc_squadleader: rhsusf_spc_rifleman {
		class ItemInfo: ItemInfo {
			containerClass = "Supply160";
		};
	};
	class rhsusf_spc_corpsman: rhsusf_spc_rifleman {
		class ItemInfo: ItemInfo {
			containerClass = "Supply160";
		};
	};
	class NVGoggles;
	class USP_GPNVG18: NVGoggles {
		modelOptics = "";
		ace_nightvision_bluRadius = 0.26;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class USP_GPNVG18_Green: USP_GPNVG18 {
		modelOptics = "";
		scope = 2;
		scopeArsenal=2;
		displayName = "[USP] L3 GPNVG-18 (BLK) - Green";
		ace_nightvision_bluRadius = 0.26;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_colorPreset[] = {0, {0.0, 0.0, 0.0, 0.0}, {1.3, 1.2, 0.0, 0.9}, {6, 1, 1, 0.0}};
	};
	class USP_GPNVG18_TAN;
	class USP_GPNVG18_TAN_Green: USP_GPNVG18_TAN {
		modelOptics = "";
		displayName = "[USP] L3 GPNVG-18 (TAN) - Green";
		ace_nightvision_bluRadius = 0.26;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa";
		ace_nightvision_colorPreset[] = {0, {0.0, 0.0, 0.0, 0.0}, {1.3, 1.2, 0.0, 0.9}, {6, 1, 1, 0.0}};
	};
	class USP_PVS31: NVGoggles {
		modelOptics = "";
		ace_nightvision_bluRadius = 0.15;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class USP_NSEAS: NVGoggles {
		modelOptics = "";
		ace_nightvision_bluRadius = 0.15;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class USP_PVS14: NVGoggles {
		modelOptics = "";
		ace_nightvision_bluRadius = 0.13;
		ace_nightvision_generation = 3;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class USP_PVS15: NVGoggles {
		modelOptics = "";
		ace_nightvision_bluRadius = 0.15;
		ace_nightvision_generation = 3;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class USP_PVS31_MONOL: USP_PVS31 {
		ace_nightvision_bluRadius = 0.13;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class USP_PVS31_MONOR: USP_PVS31 {
		ace_nightvision_bluRadius = 0.13;
		ace_nightvision_generation = 4;
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}};
	};
	class ACE_ItemCore;
	class ACE_wirecutter: ACE_ItemCore {
		displayName = "Breaching Tools";
		descriptionShort = "Cuts wires and breaches doors";
	};
};
