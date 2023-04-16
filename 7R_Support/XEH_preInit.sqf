/* 
	PreInit function to handle CBA settings and variable init.
*/

// Variable definitions
SR_Vehicle_Drop = [];
SR_Hack = [];

// CBA Settings
[
    "SR_RecallPoint",
    "EDITBOX",
    "Recall Point (Marker)",
    "7R Support",
    "respawn_west"
] call CBA_fnc_addSetting;

[
    "SR_RepairTimer",
    "SLIDER",
    "Full Repair Time",
    "7R Support",
    [30,300,60,0]
] call CBA_fnc_addSetting;

[
    "SR_RefuelTimer",
    "SLIDER",
    "Full Refuel Time",
    "7R Support",
    [30,300,60,0]
] call CBA_fnc_addSetting;

[
    "SR_HackingTimer",
    "SLIDER",
    "Hacking Timer",
    "7R Support",
    [30,300,90,0]
] call CBA_fnc_addSetting;

