/* 
	PreInit function to handle CBA settings and variable init.
*/

[
    "SR_GPS_HUD_Enabled",
    "CHECKBOX",
    "Show GPS",
    "7R Navigation",
    true
] call CBA_fnc_addSetting;

[
    "SR_GPS_COLOR",
    "COLOR",
    "Vehicle Direction Color",
    "7R Navigation",
    [0, 0.2, 1, 1]
] call CBA_fnc_addSetting;

[
    "SR_WP_COLOR",
    "COLOR",
    "Wayppoint Direction and Distance Color",
    "7R Navigation",
    [1, 0, 0, 1]
] call CBA_fnc_addSetting;

[
    "SR_CAMERA_COMPASS_Enabled",
    "CHECKBOX",
    "Show Camera Compass",
    "7R Navigation",
    true
] call CBA_fnc_addSetting;

[
    "SR_CAMERA_MARKER_Enabled",
    "CHECKBOX",
    "Show Camera Marker",
    "7R Navigation",
    true
] call CBA_fnc_addSetting;
[
    "SR_CAMERA_HUD_Enabled",
    "CHECKBOX",
    "Show Camera Hud for Pilot",
    "7R Navigation",
    true
] call CBA_fnc_addSetting;

[
    "SR_CAMERA_HUD_COLOR",
    "COLOR",
    "Show Camera Hud Camera",
    "7R Navigation",
    [1, 1, 1, 1]
] call CBA_fnc_addSetting;