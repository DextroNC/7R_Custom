class CfgPatches {
	class tsp_breach_popper {
		requiredAddons[] = {"cba_common", "tsp_breach", "tsp_breach_frame"};
		units[] = {};
	};
};

//-- BREACHING CHARGE
class CfgAmmo {
    class SLAMDirectionalMine_Wire_Ammo;
    class tsp_popperCharge_ammo: SLAMDirectionalMine_Wire_Ammo {
        model = "tsp_breach_popper\popper.p3d";
        mineModelDisabled = "\tsp_breach_popper\popper.p3d";
        hit = 2;
        indirectHit = 1;
        indirectHitRange = 1;
        explosionEffects = "popperExplosionEffect";
        SoundSetExplosion[] = {"tsp_popperCharge_soundSet"}; 
        defaultMagazine = "tsp_popperCharge_mag";
        ace_explosives_magazine = "tsp_popperCharge_mag";
        ace_explosives_explosive = "tsp_popperCharge_ammo";
        damageEnviroment[] = {0,1,0.75,0.5,0};
        swingAmount = 0.25;
    };
};

class popperExplosionEffect {
    class sparks {
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
        position[] = {0,0,0};
        simulation = "particles";
        type = "AmmoExpSparks";
    };    
    class sparks2 {
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
        position[] = {0,0,0};
        simulation = "particles";
        type = "AirFireSparks";
    };
    class smoke {
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
        position[] = {0,0,0};
        simulation = "particles";
        type = "ImpactSmoke";
    };    
    //class smoke2 {
    //    intensity = 1;
    //    interval = 1;
    //    lifeTime = 0.5;
    //    position[] = {0,0,0};
    //    simulation = "particles";
    //    type = "AutoCannonFired";
    //};
};

class CfgMagazines {
    class SLAMDirectionalMine_Wire_Mag;
    class tsp_popperCharge_mag: SLAMDirectionalMine_Wire_Mag {
        model = "tsp_breach_popper\popper.p3d";
        mineModelDisabled = "\tsp_breach_popper\popper.p3d";
        ammo = "tsp_popperCharge_ammo";
        scopeArsenal = 2;
        mass = 10;
        descriptionShort = "Small charge used to pop locks, for regular/military doors.";
        displayName = "Lock Popper";
        picture = "\tsp_breach_popper\gui\ui.paa";
        ace_explosives_setupObject = "tsp_popperCharge_place";
        ace_explosives_placeable = true;
		class ACE_Triggers {SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter"};};
    };
    class tsp_popperCharge_auto_mag: tsp_popperCharge_mag {
        descriptionShort = "Small charge used to pop locks, for regular/military doors. Already armed with a 5 second fuse";
        displayName = "Lock Popper (Auto-Fuse)";
        ace_explosives_setupObject = "tsp_popperCharge_auto_place";
		class ACE_Triggers {SupportedTriggers[] = {};};
    };
};

class CfgVehicles {
    class SLAMDirectionalMine;
    class ACE_Explosives_Place_SLAM;
    class tsp_popperCharge: SLAMDirectionalMine {
        displayName = "Lock Popper";
        model = "tsp_breach_popper\popper.p3d";
        mineModelDisabled = "\tsp_breach_popper\popper.p3d";
        ammo = "tsp_popperCharge_ammo";
    };    
    class tsp_popperCharge_place: ACE_Explosives_Place_SLAM {
        displayName = "Lock Popper";
        model = "tsp_breach_popper\popperPlace.p3d";
        mineModelDisabled = "\tsp_breach_popper\popperPlace.p3d";
        ammo = "tsp_popperCharge_ammo";
        ace_offset[] = {0, 0, 0};
        class EventHandlers {
            init = "[_this#0, false, true] spawn tsp_fnc_breach_sticky";
            deleted = "[_this#0, true, false] spawn tsp_fnc_breach_sticky";
        };
    };
    class tsp_popperCharge_auto_place: tsp_popperCharge_place {
        displayName = "Lock Popper (Auto-Fuse)";
        class EventHandlers {
            init = "[_this#0, false, true, tsp_cba_breach_autoTime, 'tsp_popperCharge_auto_mag'] spawn tsp_fnc_breach_sticky";
            deleted = "[_this#0, true, false] spawn tsp_fnc_breach_sticky";
        };
    };
};

class CfgWeapons {
	class Default;
	class Put: Default {
		muzzles[] += {"tsp_popperCharge_muzzle"};
		class PutMuzzle: Default {};
		class tsp_popperCharge_muzzle: PutMuzzle {magazines[] = {"tsp_popperCharge_mag", "tsp_popperCharge_auto_mag"};};
	};
};

class CfgSoundSets {
    class GrenadeHe_Exp_SoundSet;
    class tsp_popperCharge_soundSet: GrenadeHe_Exp_SoundSet {
        soundShaders[] = {"tsp_popperCharge_soundShader"};
    };
};

class CfgSoundShaders {
    class GrenadeHe_closeExp_SoundShader;
    class tsp_popperCharge_soundShader: GrenadeHe_closeExp_SoundShader {
        samples[] = {{"\tsp_breach_popper\snd\exp1.ogg",1}};
    };
};