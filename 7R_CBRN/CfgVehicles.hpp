class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class SR_ApplyGasMask {
                displayName = "Equip Gas Mask";
                condition = "goggles _target != SR_CBRN_Mask && isPlayer _target";
                exceptions[] = {"isNotInside", "isNotSwimming"};
                statement = "[_player, _target] spawn SR_CBRN_fnc_EquipGasmask";
                icon = "7R_CBRN\data\Icon_Gasmask_Equip.paa";
            };     
        };
        class ACE_SelfActions  {
            class SR_ApplyGasMaskSelf {
                displayName = "Equip Gas Mask";
                condition = "goggles _target != SR_CBRN_Mask";
                exceptions[] = {"isNotInside", "isNotSwimming"};
                statement = "[_player, _target] spawn SR_CBRN_fnc_EquipGasmask";
                icon = "7R_CBRN\data\Icon_Gasmask_Equip.paa";
            };
                class SR_RemoveGasMaskSelf {
                displayName = "Remove Gas Mask";
                condition = "goggles _target == SR_CBRN_Mask";
                exceptions[] = {"isNotInside", "isNotSwimming"};
                statement = "[_player, _target] spawn SR_CBRN_fnc_RemoveGasmask";
                icon = "7R_CBRN\data\Icon_Gasmask_Removal.paa";
            };
        };
    };
};