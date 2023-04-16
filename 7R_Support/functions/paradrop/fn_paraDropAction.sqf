/*
	Parameters:
		<-- Target as Object
		<-- Spawn Position Marker as String
		<-- Height as Integer
		<-- Static as Boolean

	Decription:
		Initiates the spawning of a plane and the paradrop reinsertion of a group.
		

*/

// Parameter Init
params ["_terminal", "_unit", "_params"];
_params Params ["_target",["_spawn","STARTSPAWN"],["_height",800],["_static",false]];
private ["_class","_units","_positions"];

// Side
if (isNil "SR_Side") then {
	SR_Side = side _unit;
};

// Select Units to Drop
_units = [];
{
	if (_x distance2d _terminal < 50) then {
		if (_static || (backpack _x isEqualTo "B_Parachute")) then {
			_units pushBack _x;
		};
	};
} forEach (allPlayers - entities "HeadlessClient_F");

// Select Plane Class (Default C-130)
if (count SR_Support_Assets > 0) then {
	_class = ([SR_Support_Assets select 0, SR_Support_Assets select 1, count _units] call sr_support_fnc_paraDropPlaneSelection) select 0;
} else {
	_class = "RHS_C130J";
};

// Lock Terminal
_terminal setVariable ["SR_Lock",true,true];

// Relative Locations
_positions = [_target,_spawn,3000] call sr_support_fnc_relativePosition;

// Initate Drop
[(_positions select 0),(_positions select 1),(_positions select 2),_units,_class,_height,_static] spawn sr_support_fnc_paraDropPlane;

// Unlock Terminal after delay
[{_this setVariable ["SR_Lock",false]}, _terminal, 10] call CBA_fnc_waitAndExecute;