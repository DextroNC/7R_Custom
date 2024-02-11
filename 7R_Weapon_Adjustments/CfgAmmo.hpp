class CfgAmmo {
	// BAF Hellfires modded for UAV fire support
	class UK3CB_BAF_M_Hellfire_Base;
	class UK3CB_BAF_M_Hellfire_K: UK3CB_BAF_M_Hellfire_Base {
		class ace_missileguidance {
			attackProfiles = ["hellfire","hellfire_hi","hellfire_lo"];
			canVanillaLock = 0;
			defaultAttackProfile = "hellfire";
			defaultSeekerLockMode = "LOAL";
			defaultSeekerType = "SALH";
			enabled = 1;
			incDeflection = 0.0005;
			maxDeflection = 0.01;
			minDeflection = 0.0005;
			seekerAccuracy = 1;
			seekerAngle = 270;
			seekerLockModes = ["LOAL","LOBL"];
			seekerMaxRange = 5000;
			seekerMinRange = 1;
			seekerTypes = ["SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"];
			seekLastTargetPos = 1;
		};
	};
	class UK3CB_BAF_M_Hellfire_N:UK3CB_BAF_M_Hellfire_Base {
		class ace_missileguidance {
			attackProfiles = ["hellfire","hellfire_hi","hellfire_lo"];
			canVanillaLock = 0;
			defaultAttackProfile = "hellfire";
			defaultSeekerLockMode = "LOAL";
			defaultSeekerType = "SALH";
			enabled = 1;
			incDeflection = 0.0005;
			maxDeflection = 0.01;
			minDeflection = 0.0005;
			seekerAccuracy = 1;
			seekerAngle = 270;
			seekerLockModes = ["LOAL","LOBL"];
			seekerMaxRange = 5000;
			seekerMinRange = 1;
			seekerTypes = ["SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"];
			seekLastTargetPos = 1;
		}
	};

	class SmokeShell;
   	class G_40mm_Smoke : SmokeShell {
        /* inherited from SmokeShell is shotSmokeX which ignores
         * "deflecting" and "deflectionSlowDown" parameters */
        simulation = "shotSmoke";
        /* multiplier; small bounce, on 400m flat ground shot ~10m bounce */
        deflectionSlowDown = 0.3;
    };
	// Colored AFRF smoke
	class rhs_ammo_nspd;
	class rhs_ammo_nspd_red: rhs_ammo_nspd {
		smokeColor[] = {0.9528,0.0438,0.041,0.8};
	};
	class rhs_ammo_nspd_yellow: rhs_ammo_nspd {
		smokeColor[] = {0.961,0.4505,0.0109,0.8};
	};
	class rhs_ammo_nspd_green: rhs_ammo_nspd {
		smokeColor[] = {0.0328,0.1626,0.1023,0.8};
	};
	// 40mm balancing
	class GrenadeBase;
	class G_40mm_HE : GrenadeBase {
		cost = 100;
	};
	class G_40mm_HEDP : G_40mm_HE {
		hit = 100;
		indirectHit = 5;
		indirectHitRange = 4;
		caliber = 3;
	};
	class rhs_ammo_VOG30 : G_40mm_HE {
		hit = 80;
		indirectHit = 4;
		indirectHitRange = 4;
		caliber = 2;
	};
	class rhs_ammo_mk19m3_M384: G_40mm_HE {
		hit = 100;
		indirectHit = 5;
		indirectHitRange = 4;
		caliber = 3;
	};
	class rhs_ammo_mk19m3_M430I: rhs_ammo_mk19m3_M384 {
		hit = 100;
		indirectHit = 5;
		indirectHitRange = 4;
		caliber = 3;
	};
	class rhs_ammo_mk19m3_M430A1: rhs_ammo_mk19m3_M430I {
		hit = 100;
		indirectHit = 5;
		indirectHitRange = 4;
		caliber = 3;
	};
	class IRStrobeBase;
	class B_IRstrobe:IRStrobeBase {
		timeToLive = 18000;	
	};
	class GrenadeHand;
	class rhsgref_ammo_rkg3em: GrenadeHand {
		submunitionAmmo = "";
		typicalspeed = 22;
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 1;
		triggerOnImpact = 1;
		explosionTime = 0;
	};
	class rhs_ammo_rgd5;
	class rhs_ammo_rgn: rhs_ammo_rgd5 {
		submunitionAmmo = "";
		typicalspeed = 26;
		dangerRadiusHit = 50;
		deflecting = 30;
		explosionEffectsRadius = 1.5;
		hit = 6;
		indirectHit = 6;
		indirectHitRange = 4;
		suppressionRadiusHit = 18;
		ace_frag_charge = 185;
		ace_frag_classes[] = {"ace_frag_tiny_HD"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2843;
		ace_frag_gurney_k = "3/5";
		ace_frag_metal = 210;
		triggerOnImpact = 1;
		explosionTime = 0;
	};
	class rhs_ammo_base_penetrator;
	class rhs_ammo_3bk12_penetrator: rhs_ammo_base_penetrator {
		explosive = 1;
	};
	class rhs_g_vog25;
	class rhs_g_vg40md_white: rhs_g_vog25 {
		simulation = "shotSmoke";
		deflectionSlowDown = 0.3;
	};
	class MineBase;
	class rhs_mine_tm62m_ammo: MineBase {
		hit = 1200;
		indirectHit = 1200;
		indirectHitRange = 2;
	};
	class DirectionalBombBase;
	class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase {
		explosionAngle = 90;
	};
	class ACE_SLAMDirectionalMine_Command_Ammo: SLAMDirectionalMine_Wire_Ammo {};
	class ACE_SLAMDirectionalMine_Timer_Ammo: SLAMDirectionalMine_Wire_Ammo {};
	class ACE_SLAMDirectionalMine_Magnetic_Ammo: SLAMDirectionalMine_Wire_Ammo {
		explosionAngle = 360;
		indirectHit = 750;
		indirectHitRange = 10;
	};
	class B_127x99_Ball;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball {
		hit = 50;
		caliber = 2.0;
	};
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball {
		hit = 100;
		caliber = 2.0;	
		explosionEffects = "ExploAmmoExplosion";
		explosionType = "explosive";
		explosive = 0;
		indirectHit = 20;
		indirectHitRange = 0.5;
	};
	class B_762x51_Ball;
	class SR_762x51_DMR: B_762x51_Ball {
		hit = 14;
		caliber = 1.6;
	};
	class rhs_ammo_762x51_M80_Ball;
	class rhs_ammo_762x51_M118_Special_Ball : rhs_ammo_762x51_M80_Ball {
		hit = 14;
		caliber = 1.6;
	};
	class rhs_ammo_762x51_M62_tracer : rhs_ammo_762x51_M80_Ball {
		hit = 14;
		caliber = 1.6;
	};
	class rhs_ammo_762x51_M993_Ball : rhs_ammo_762x51_M80_Ball {
		hit = 14;
		caliber = 1.6;
	};
	class B_762x54_Ball;
	class rhsusf_B_300winmag: B_762x54_Ball {
		hit = 16;
		caliber = 1.8;
	};
	class rhs_B_762x54_Ball;
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball {
		hit = 14;
		caliber = 1.8;
	};
	class B_127x99_SLAP;
	class UK3CB_BAF_B_127x99_Ball: B_127x99_Ball {
		hit = 30;
		caliber = 2.0;
	};
	class UK3CB_BAF_B_127x99_AP: B_127x99_SLAP {
		hit = 30;
		caliber = 2.0;
	};
	class UK3CB_BAF_762_Ball_L42A1: B_762x51_Ball {
		hit = 14;
		caliber = 1.6;
	};
	/*
	class MissileBase;
	class M_NLAW_AT_F: MissileBase {
		lockType = 1;
		manualControl = 1;
		irLock = 0;
		airLock = 0;
		laserLock = 0;
		nvLock = 0;
		weaponLockSystem = 0;
		effectFly = "";
		effectsFire = "CannonFire";
		effectsMissile = "missile2";
		effectsMissileInit = "RocketBackEffectsRPG";
		flightProfiles[] = { "Direct"};
	};
	*/
	/*
	class Sh_82mm_AMOS;
	class UK3CB_BAF_Smoke_81mm_AMOS: Sh_82mm_AMOS {
		effectsMissile = "SR_MortarSmokeEffect";
		ExplosionEffects = "SR_MortarSmokeEffect";
		effectsSmoke = "SmokeShellWhiteEffect";
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		CraterEffects = "GrenadeCrater";
		hit = 0;
		indirectHit = 2;
		indirectHitRange = 10;
	};
	class UK3CB_BAF_Smoke_60mm_AMOS: UK3CB_BAF_Smoke_81mm_AMOS {
		ExplosionEffects = "SR_MortarSmokeEffect";
		submunitionAmmo = "UK3CB_SmokeShellRedEffect";
		smokeColor[] = {0.2125,0.6258,0.4891,1};
		effectsSmoke = "SmokeShellGreenEffect";
		CraterEffects = "GrenadeCrater";
		hit = 0;
		indirectHit = 2;
		indirectHitRange = 10;
		timeToLive = 60;
	};
	*/
	// 30mm Autocannon
	class B_30mm_APFSDS_Tracer_Red;
	class B_30mm_HE;
	class RHS_ammo_M919_APFSDS : B_30mm_APFSDS_Tracer_Red {
		hit = 110;
		indirectHit = 12;
		indirectHitRange = 0.5;
		caliber = 4;
		explosive = 0;
	};
	class RHS_ammo_M792_HEI : B_30mm_HE {
		hit = 25;
		indirectHit = 8;
		indirectHitRange = 4;
		caliber = 4;
		explosive = 0.8;
	};
	class rhs_ammo_m84: GrenadeHand {
		explosionTime = 2.5;
	};
	class rhs_ammo_fakels;
	class rhs_ammo_plamyam: rhs_ammo_fakels {
		explosionTime = 2.5;
	};
	class Smoke_120mm_AMOS_White;
	class SR_ArtillerySmoke_Sub: Smoke_120mm_AMOS_White {
		timeToLive = 240;
	};
	class Sh_82mm_AMOS;
	class UK3CB_BAF_Sh_81mm_AMOS: Sh_82mm_AMOS {};
	class UK3CB_BAF_Smoke_81mm_AMOS: UK3CB_BAF_Sh_81mm_AMOS {};
	class UK3CB_BAF_WPSmoke_81mm_AMOS: UK3CB_BAF_Smoke_81mm_AMOS {};
	class SR_ArtillerySmoke_120mm: UK3CB_BAF_WPSmoke_81mm_AMOS {
		submunitionAmmo = "SR_ArtillerySmoke_Sub";
		submunitionConeType[] = {"poissondisccenter", 1};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;
	};
	class F_40mm_White;
	class SR_Artillery_Flare: F_40mm_White {
		brightness = 2;
		flareSize = 9;
		intensity = 2000000;
		timeToLive = 90;
		triggerSpeedCoef = 1;
		thrust = 0;
		thrustTime = 1.5;
	};
	class rhs_ammo_mk3a2: GrenadeHand {
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_skip = 1;
		craterEffects = "RHSUSF_flashbang_Crater";
		ExplosionEffects = "RHSUSF_flashbang_15";
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		explosionTime = 3;
	};
	class rhs_grenade_mkiiia1_ammo: GrenadeHand {
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_skip = 1;
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		craterEffects = "RHSUSF_flashbang_Crater";
		ExplosionEffects = "RHSUSF_flashbang_15";
		explosionTime = 3;
	};
	class Sh_120mm_APFSDS;
	class rhs_ammo_M830: Sh_120mm_APFSDS {
		indirectHit = 16;
		indirectHitRange = 7;
	};
	class rhs_ammo_M830A1: rhs_ammo_M830 {
		hit = 200;
		indirectHit = 24;
		indirectHitRange = 7;
	};
};