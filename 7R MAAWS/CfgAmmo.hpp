class CfgAmmo {
    class R_MRAAWS_HE_F;
	class SR_m3maaws_HEAirburst: R_MRAAWS_HE_F
	{
        ace_frag_enabled = 1;
        ace_frag_metal = 350;
        ace_frag_charge = 350;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_large_HD"};
        ace_frag_skip = 0;
		ace_frag_force = 1;
		hit=75;
		indirectHit=65;
		indirectHitRange=12;
		typicalSpeed=100;
		explosive=1;
		cost=300;
		model="\A3\Weapons_f\empty";
		airFriction=0;
		timeToLive=1;
		explosionTime=0.001;
	};
	class RocketBase;
	class SR_MRAAWS_HEAT_F: RocketBase {
		hit = 270;
		indirectHit = 15;
		indirectHitRange = 2.1;
		caliber = 0.8;
		submunitionAmmo = "rhs_ammo_maaws_HEAT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
	};
};
