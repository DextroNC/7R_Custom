class CfgWeapons {	
    class Launcher;
    class Launcher_Base_F: Launcher {
        class Eventhandlers;
    };
    class launch_MRAWS_base_F: Launcher_Base_F {
        class Eventhandlers;
    };
    class launch_MRAWS_olive_F : launch_MRAWS_base_F {
        weaponInfoType = "RscWeaponEmpty";
        // inheriting Eventhandlers class for better modcross compatibility
        class Eventhandlers: Eventhandlers {
        // Disposable action EH is in it's own class for better mod cross compatibility
            class SR_AB {
                fired = "_this call SR_Maaws_fnc_firedEH";
            };
        };
    };
    class launch_MRAWS_green_F : launch_MRAWS_base_F {
        weaponInfoType = "RscWeaponEmpty";
        // inheriting Eventhandlers class for better modcross compatibility
        class Eventhandlers: Eventhandlers {
        // Disposable action EH is in it's own class for better mod cross compatibility
            class SR_AB {
                fired = "_this call SR_Maaws_fnc_firedEH";
            };
        };
    };
    class launch_MRAWS_sand_F: launch_MRAWS_base_F {
        weaponInfoType = "RscWeaponEmpty";
        // inheriting Eventhandlers class for better modcross compatibility
        class Eventhandlers: Eventhandlers {
        // Disposable action EH is in it's own class for better mod cross compatibility
                 class SR_AB {
                fired = "_this call SR_Maaws_fnc_firedEH";
            };
        };
    };
    class launch_RPG32_F: Launcher_Base_F {
        class Eventhandlers: Eventhandlers {
        // Disposable action EH is in it's own class for better mod cross compatibility
                 class SR_AB {
                fired = "_this call SR_Maaws_fnc_firedEH";
            };
        };
    };
	class RPG32_Brown: launch_RPG32_F
	{
		author = "CapryCorn";
		_generalMacro = "RPG32_Brown";
		displayName = "RPG-32 (Brown)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {"x\sr\addons\maaws\data\Brown_RPG_32_body_CO.paa","x\sr\addons\maaws\data\rpg_32_optics_co.paa"};
	};
	
	class RPG32_Olive: launch_RPG32_F
	{
        author = "CapryCorn";
        _generalMacro = "RPG32_Olive";
        displayName = "RPG-32 (Olive)";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsTextures[] = {"x\sr\addons\maaws\data\Olive_RPG_32_body_CO.paa", "x\sr\addons\maaws\data\RPG_32_optics_CO.paa"};
    };
};