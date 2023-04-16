/*
	Parameters:
		<-- Target Location as String/Object
		<-- Start Reference as String/Object
		<-- Distance as Integer

	Return:
		--> Start Position as Position
		--> End Position as Position

	Description:
		Displays info text for support systems.


	Example:
	["target","start",2500] call fw_fnc_relativePosition;

*/
	
// Parameter Init
params [["_target",""],["_start","STARTSPAWN"],["_distance",3000]];
private ["_spawnDir", "_endDir","_startPos","_endPos","_return"];

// Convert Markers to Positions
if (typeName _target == "STRING") then {
	_target = markerPos _target;
};
if (typeName _start == "STRING") then {
	_start = markerPos _start;
};

// Calculate the End Point
_endDir = _start getDir _target;
_endPos = [_target, _distance,_endDir] call BIS_fnc_relPos;

// Calculate the Start Point
_spawnDir = _endDir - 180;
_startPos = [_target, _distance, _spawnDir] call BIS_fnc_relPos;

// Return
_return = [_target,_startPos,_endPos];
_return

