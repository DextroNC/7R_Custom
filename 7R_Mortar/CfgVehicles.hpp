class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
        class ACE_SelfActions;
    };
    class StaticMortar: StaticWeapon {
        class Turrets {
            class MainTurret;
        };
    };
    class RHS_M252_Base: StaticMortar {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class ACE_OpenRangeCard {
                    displayName = "Open Range Card";
                    condition = "alive _target";
                    statement = "['rhs_mortar_81mm', 0, 80, true] call ace_artillerytables_fnc_rangeTableOpen";
                    exceptions[] = {"isNotSwimming"}; 
                };
            };
        };
        class ACE_SelfActions : ACE_SelfActions  {
            class ACE_OpenRangeCard {
                displayName = "Open Range Card";
                condition = "alive _target";
                statement = "['rhs_mortar_81mm', 0, 80, true] call ace_artillerytables_fnc_rangeTableOpen";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"rhs_12Rnd_m821_HE","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_Flare_white"};
            };
        };
    };
};