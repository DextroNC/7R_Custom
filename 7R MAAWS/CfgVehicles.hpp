class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Weapon {
                class SR_MAAWS_AirburstSet {
                    displayName = "Set Airburst";
                    distance = 4;
                    condition = "[_target] call SR_Maaws_fnc_checkAirburst";
                    exceptions[] = {"isNotInside", "isNotSwimming"};
                    statement = "nul = [_target,_player] spawn SR_Maaws_fnc_airburstDialog";
                };
            };
        };
        class ACE_SelfActions  {
            class SR_MAAWS_AirburstSetSelf {
                displayName = "Set Airburst";
                condition = "[_player] call SR_Maaws_fnc_checkAirburst";
                exceptions[] = {"isNotInside", "isNotSwimming"};
                statement = "nul = [_player,_player] call SR_Maaws_fnc_airburstDialog;";
            };
        };
    };
};