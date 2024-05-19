/* 
	PreInit function to handle CBA settings and variable init.
*/

// Settings
[
    "SR_CBRN",
    "CHECKBOX",
    "Enable CBRN Functions",
    "7R CBRN",
    true
] call CBA_fnc_addSetting;

[
    "SR_CBRN_Mask",
    "EDITBOX",
    "Gas Mask Classname",
    "7R CBRN",
    "7r_m50_gasmask"
] call CBA_fnc_addSetting;


// Global Variables
SR_CBRN_Zone = [];