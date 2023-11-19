[
	"tsp_cba_breach", "CHECKBOX",
	["Enable Breaching", "Enable/disable door/wall breaching."],
	"TSP Breach", true, true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_autoTime", "SLIDER",
	["Auto Fuse Time", "Time to detonation for auto fuse"],
	["TSP Breach", ""], [0, 15, 5], true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_ace", "CHECKBOX",
	["Enable ACE Interaction", "Enable/disable ACE interaction on doors."],
	["TSP Breach", "Interaction"], true, true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_ace_locking", "CHECKBOX",
	["Enable ACE Interaction Locking/Unlocking", "Enable/disable ACE interaction on doors for locking and unlocking."],
	["TSP Breach", "Interaction"], true, true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_vanilla", "CHECKBOX",
	["Disable Vanilla Interaction", "Enable/disable vanilla scroll wheel interaction on doors."],
	["TSP Breach", "Interaction"], false, true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_lockHouse", "SLIDER",
	["Lock Chance (House)", "Chance house will be selected to be locked."],
	["TSP Breach", "Auto Locking"], [0, 1, 0.25], true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_lockDoor", "SLIDER",
	["Lock Chance (Door)", "Chance door will be selected to be locked."],
	["TSP Breach", "Auto Locking"], [0, 1, 0.75], true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_lockBlacklist", "EDITBOX",
	["Lock Blacklist", "Array of houses that should not be locked randomly, works with either variable names or classnames."],
	["TSP Breach", "Auto Locking"], '[]', true, {tsp_cba_breach_lockBlacklist = call compile tsp_cba_breach_lockBlacklist}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_ammo", "EDITBOX",
	["Breaching Ammo", "Array containing ammo that should be effective at opening doors, like shotgun shells."],
	["TSP Breach", "Ballistic Breaching"], '["B_12Gauge_Slug_NoCartridge", "rhs_ammo_12g_slug", "rhs_ammo_12g_00buckshot"]', true, {tsp_cba_breach_ammo = call compile tsp_cba_breach_ammo}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_ammoMultiplier", "SLIDER",
	["Ammo Multiplier", "Breaching effectiveness of non breaching ammo is multiplied by this value."],
	["TSP Breach", "Ballistic Breaching"], [0, 5, 1], true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_wall_physics", "CHECKBOX",
	["Enable Wall Physics", "Enable/disable physics on destroyed walls."],
	["TSP Breach", "Walls"], false, true, {}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_wall_velocity", "EDITBOX",
	["Wall Physics Velocity", "Velocity to launch walls at."],
	["TSP Breach", "Walls"], '[0,0,-0.5]', true, {tsp_cba_breach_wall_velocity = call compile tsp_cba_breach_wall_velocity}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_military", "EDITBOX",
	["Military Classnames", "Array containing house classnames that should be considered when as military doors."],
	["TSP Breach", "Strong Doors"], '[
		"Land_Budova4_in",
		"Land_Budova4",
		"Barrack2",
		"Land_Barrack2",
		"Land_MilOffices_V1_F",
		"Land_Mil_Barracks_L_EP1",
		"Land_Barrack2_EP1",
		"Land_Mil_Barracks_EP1",
		"Land_Mil_Barracks_no_interior_EP1_CUP",
		"Land_Mil_Barracks_i_EP1",
		"Land_Mil_Barracks_L",
		"Land_Mil_Barracks_no_interior_CUP",
		"Land_Mil_Barracks_i",
		"Land_Mil_Barracks",
		"Land_GuardHouse_02_F",
		"Land_Mil_Guardhouse_EP1",
		"Land_Mil_Guardhouse",
		"Land_Mil_Guardhouse_no_interior_CUP",
		"Land_GuardHouse_02_grey_F",
		"Land_Barracks_03_F",
		"Land_Barracks_05_F",
		"Land_Barracks_02_F",
		"Land_Barracks_04_F",
		"Land_ControlTower_02_F",
		"Land_Mil_Guardhouse_no_interior_EP1_CUP",
		"Land_Radar_01_HQ_F",
		"Land_i_Barracks_V2_F",
		"Land_i_Barracks_V1_F",
		"Land_u_Barracks_V2_F",
		"Land_Barracks_06_F",
		"Land_Mil_House_dam_EP1",
		"Land_Barracks_01_grey_F",
		"Land_Barracks_01_dilapidated_F",
		"Land_Mil_House_EP1",
		"Land_Army_hut2_int",
		"Land_Barracks_01_camo_F",
		"Land_Army_hut_int",
		"Land_Army_hut3_long",
		"Land_Army_hut2",
		"Land_Army_hut3_long_int"
	]', true, {tsp_cba_breach_military = call compile tsp_cba_breach_military}
] call CBA_Settings_fnc_init;

[
	"tsp_cba_breach_reinforced", "EDITBOX",
	["Reinforced Classnames", "Array containing house classnames that should be considered when as reinforced doors."],
	["TSP Breach", "Strong Doors"], '[
		"Land_Ammostore2",
		"Land_Garaz_s_tankem",
		"Land_Garaz_bez_tanku",
		"Land_Cargo_House_V4_F",
		"Land_Cargo_Tower_V1_F",
		"Land_Cargo_HQ_V4_F",
		"Land_Cargo_Tower_V1_No4_F",
		"Land_Cargo_Tower_V1_No5_F",
		"Land_Cargo_Tower_V1_No7_F",
		"Land_Cargo_Tower_V4_F",
		"Land_Cargo_Tower_V1_No2_F",
		"Land_Cargo_Tower_V2_F",
		"Land_Cargo_Tower_V3_F",
		"Land_Cargo_Tower_V1_No1_F",
		"Land_Cargo_Tower_V1_No3_F",
		"Land_Cargo_HQ_V2_F",
		"Land_Medevac_HQ_V1_F",
		"Land_Cargo_HQ_V1_F",
		"Land_Cargo_House_V2_F",
		"Land_Medevac_house_V1_F",
		"Land_Cargo_Tower_V1_No6_F",
		"Land_Cargo_House_V1_F",
		"Land_Cargo_HQ_V3_F",
		"Land_Cargo_House_V3_F"
	]', true, {tsp_cba_breach_reinforced = call compile tsp_cba_breach_reinforced}
] call CBA_Settings_fnc_init;