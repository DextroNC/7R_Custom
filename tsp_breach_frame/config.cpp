class CfgPatches {
	class tsp_breach_frame {
		requiredAddons[] = {"cba_common", "tsp_breach"};
		units[] = {};
	};
};

//-- BREACHING CHARGE
class CfgAmmo {
    class ClaymoreDirectionalMine_Remote_Ammo;
    class tsp_frameCharge_ammo: ClaymoreDirectionalMine_Remote_Ammo {
        model = "tsp_breach_frame\frame.p3d";
        mineModelDisabled = "\tsp_breach_frame\frame.p3d";
        hit = 100;
        indirectHit = 70;
        indirectHitRange = 5;
        explosionAngle = 120;
        defaultMagazine = "tsp_frameCharge_mag";
        ace_explosives_magazine = "tsp_frameCharge_mag";
        ace_explosives_explosive = "tsp_frameCharge_ammo";
        damageEnviroment[] = {1,1,1,1,1};
        swingAmount = 1;
    };
};

class CfgMagazines {
    class SLAMDirectionalMine_Wire_Mag;
    class tsp_frameCharge_mag: SLAMDirectionalMine_Wire_Mag {
        model = "tsp_breach_frame\frameGround.p3d";
        mineModelDisabled = "\tsp_breach_frame\frameGround.p3d";
        scopeArsenal = 2;
        ammo = "tsp_frameCharge_ammo";
        mass = 20;
        displayName = "Frame Charge";
        descriptionShort = "Frame style breaching charge, used for walls and reinforced doors. Has a high potential to be lethal.";  //ACTUAL DESC
        picture = "\tsp_breach_frame\gui\ui.paa";
        ace_explosives_setupObject = "tsp_frameCharge_place";
        ace_explosives_placeable = true;
        useAction = false; 
		class ACE_Triggers {SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter"};};
    };
};

class CfgVehicles {
    class SLAMDirectionalMine;
    class ACE_Explosives_Place_SLAM;
    class tsp_frameCharge: SLAMDirectionalMine {
        displayName = "Frame Charge";
        ammo = "tsp_frameCharge_ammo";
        model = "tsp_breach_frame\frame.p3d";
        mineModelDisabled = "\tsp_breach_frame\frame.p3d";
    };    
    class tsp_frameCharge_place: ACE_Explosives_Place_SLAM {
        displayName = "Frame Charge";
        ammo = "tsp_frameCharge_ammo";
        model = "tsp_breach_frame\framePlace.p3d";
        mineModelDisabled = "\tsp_breach_frame\framePlace.p3d";
        ace_offset[] = {0, 0, 0};
        class EventHandlers {
            init = "[_this#0, false, true] spawn tsp_fnc_breach_sticky";
            deleted = "[_this#0, true, false] spawn tsp_fnc_breach_sticky";
        };
    };
};

class CfgWeapons {
	class Default;
	class Put: Default {
		muzzles[] += {"tsp_frameCharge_muzzle"};
		class PutMuzzle: Default {};
		class tsp_frameCharge_muzzle: PutMuzzle {magazines[] = {"tsp_frameCharge_mag"};};
	};
};
