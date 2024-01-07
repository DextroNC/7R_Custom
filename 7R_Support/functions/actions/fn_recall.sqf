/*
	Parameters:
		<-- Unit as Object
		<-- Position as String/Object
		<-- Opt. Loadout as Boolean (default: true)
		<-- Opt. Recall Timer as Integer (detault: 5 seconds)
		

	Description:
		Teleports an individual back to a position


	Example:
		[_unit,_marker] call sr_support_fnc_recall;

*/
// Parameter init
params ["_unit",["_positionInput","respawn_west"],["_loadLoadout",true],["_timer",5]];

// Find Location (ASL)
private _location = [_positionInput, true] call sr_support_fnc_findLocation;

// Check enemies close
private _enemies = _unit nearEntities [["CAManBase","Car","Tank"], 50];
if (({!([side _x, playerSide] call BIS_fnc_sideIsFriendly)} count _enemies) > 0) exitWith {
    ["","Recall: Enemies are too close"] spawn sr_support_fnc_infoMessage;
};

// Recall Progress Bar
[_timer, [_unit, _location,_loadLoadout], {
	params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
	_args params ["_unit","_location","_loadLoadout"];
	// Update Position
	_unit setPosASL _location;
	// Adjust Height
	if (isNil "SR_Spawn_Height") then {SR_Spawn_Height = 0};
	if (SR_Spawn_Height > 0) then {
		private _currentPos = getPosASL _unit;
		_unit setPosASL [_currentPos select 0, _currentPos select 1, SR_Spawn_Height];
		["","Height Adjusted"] spawn sr_support_fnc_infoMessage;
	};
	// Get Loadout
	private _loadout = _unit getVariable ["SR_Loadout",[]];
	// Apply Loadout on Condition
	if (_loadLoadout && count _loadout > 0) then {
		_unit setUnitLoadout _loadout;
	};
}, {["","Action Aborted"] spawn sr_support_fnc_infoMessage}, "Base Recall..."] call ace_common_fnc_progressBar;