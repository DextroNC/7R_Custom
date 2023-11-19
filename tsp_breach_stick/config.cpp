class CfgPatches {
	class tsp_breach_stick {
		requiredAddons[] = {"cba_common", "tsp_breach", "tsp_breach_frame"};
		units[] = {};
	};
};

//-- BREACHING CHARGE
class CfgAmmo {
    class ClaymoreDirectionalMine_Remote_Ammo;
    class tsp_stickCharge_ammo: ClaymoreDirectionalMine_Remote_Ammo {
        model = "tsp_breach_stick\stick.p3d";
        mineModelDisabled = "\tsp_breach_stick\stick.p3d";
        hit = 10;
        indirectHit = 5;
        indirectHitRange = 1;
        //explosionEffects = "GrenadeExplosion";
        SoundSetExplosion[] = {"tsp_stickCharge_soundSet","ClaymoreMine_Tail_SoundSet","Explosion_Debris_SoundSet"}; 
        defaultMagazine = "tsp_stickCharge_mag";
        ace_explosives_magazine = "tsp_stickCharge_mag";
        ace_explosives_explosive = "tsp_stickCharge_ammo";
        damageEnviroment[] = {1,1,1,0.5,0};
        swingAmount = 1;
    };
};

class CfgMagazines {
    class SLAMDirectionalMine_Wire_Mag;
    class tsp_stickCharge_mag: SLAMDirectionalMine_Wire_Mag {
        ammo = "tsp_stickCharge_ammo";
        model = "tsp_breach_stick\stick.p3d";
        mineModelDisabled = "\tsp_breach_stick\stick.p3d";
        scopeArsenal = 2;        
        mass = 10;
        descriptionShort = "Stick style breaching charge, used for regular/military/reinforced doors.";
        displayName = "Stick Charge";
        picture = "\tsp_breach_stick\gui\ui.paa";
        ace_explosives_setupObject = "tsp_stickCharge_place";
        ace_explosives_placeable = true;
		class ACE_Triggers {SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter"};};
    };
    class tsp_stickCharge_auto_mag: tsp_stickCharge_mag {
        descriptionShort = "Stick style breaching charge, used for regular/military/reinforced doors. Already armed with a 5 second fuse";
        displayName = "Stick Charge (Auto-Fuse)";
        ace_explosives_setupObject = "tsp_stickCharge_auto_place";
		class ACE_Triggers {SupportedTriggers[] = {};};
    };
};

class CfgVehicles {
    class SLAMDirectionalMine;
    class ACE_Explosives_Place_SLAM;
    class tsp_stickCharge: SLAMDirectionalMine {
        displayName = "Stick Charge";
        ammo = "tsp_stickCharge_ammo";
        model = "tsp_breach_stick\stick.p3d";
        mineModelDisabled = "\tsp_breach_stick\stick.p3d";
    };    
    class tsp_stickCharge_place: ACE_Explosives_Place_SLAM {
        displayName = "Stick Charge";
        ammo = "tsp_stickCharge_ammo";
        model = "tsp_breach_stick\stickPlace.p3d";
        mineModelDisabled = "\tsp_breach_stick\stickPlace.p3d";
        ace_offset[] = {0, 0, 0};
        class EventHandlers {
            init = "[_this#0, false, true] spawn tsp_fnc_breach_sticky";
            deleted = "[_this#0, true, false] spawn tsp_fnc_breach_sticky";
        };
    };
    class tsp_stickCharge_auto_place: tsp_stickCharge_place {
        displayName = "Stick Charge (Auto-Fuse)";
        class EventHandlers {
            init = "[_this#0, false, true, tsp_cba_breach_autoTime, 'tsp_stickCharge_auto_mag'] spawn tsp_fnc_breach_sticky";
            deleted = "[_this#0, true, false] spawn tsp_fnc_breach_sticky";
        };
    };
};

class CfgWeapons {
	class Default;
	class Put: Default {
		muzzles[] += {"tsp_stickCharge_muzzle"};
		class PutMuzzle: Default {};
		class tsp_stickCharge_muzzle: PutMuzzle {magazines[] = {"tsp_stickCharge_mag","tsp_stickCharge_auto_mag"};};
	};
};

class CfgSoundSets {
    class GrenadeHe_Exp_SoundSet;
    class tsp_stickCharge_soundSet: GrenadeHe_Exp_SoundSet {
        soundShaders[] = {"tsp_stickCharge_soundShader"};
    };
};

class CfgSoundShaders {
    class GrenadeHe_closeExp_SoundShader;
    class tsp_stickCharge_soundShader: GrenadeHe_closeExp_SoundShader {
        samples[] = {{"\tsp_breach_stick\snd\exp1.ogg",1},{"\tsp_breach_stick\snd\exp2.ogg",1}};
    };
};


//soundHit[] = {"\tsp_breach_stick\snd\exp1.ogg",2.51189,1,1500};
//soundHit1[] = {"\tsp_breach_stick\snd\exp1.ogg",2.51189,1,1500};
//soundHit2[] = {"\tsp_breach_stick\snd\exp2.ogg",2.51189,1,1500};
//soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01",2.51189,1,1500};
//SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet","ClaymoreMine_Tail_SoundSet","Explosion_Debris_SoundSet"};
//,"GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"