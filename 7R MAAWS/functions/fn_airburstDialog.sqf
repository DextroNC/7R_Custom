params ["_target","_unit"];
_unit setVariable ["SR_AirburstUnit",_target];

disableSerialization;
_ok = createDialog "SRAIRBURSTCFG";
_display = uiNamespace getVariable "AirburstConfigDialog";

(_display displayCtrl 1002) ctrlSetText format ["Value from 50 to 1500m;"];
(_display displayCtrl 1004) ctrlSetText format ["leave empty for Impact Det."];

(_display displayCtrl 1400) ctrlSetText format ["%1", parseNumber SR_AirburstRange];
