/*
	Parameters:
		<-- Target Positionas Array (Position Array)
		<-- Spawn Position as Array (Position Array)
		<-- End Position as Array (Position Array)
		<-- Units as Array 
		<-- Classname as String
		<-- Altitude as Integer (ABOVE SEE LEVEL)
		<-- Opt. Static-Line Drop as Boolean (default: false)
	
	Decription:
		Create the Paradrop Plane
*/

// Parameter Init
Params ["_target", "_spawn", "_end", "_units", "_class",  ["_height", 1500], ["_static", false]];
private _direction = _spawn getDir _target;

// Spawn Plane and Init
private _planeArray = [_spawn, _direction, _class, SR_Side] call bis_fnc_spawnVehicle;
_planeArray params ["_plane","_crew","_group"];

// Height
_plane flyInHeightASL [ _height,  _height,  _height];

// Disable Damage
_plane allowDamage false;

// Set Plane Crew Behavior to not Reactive to Threats
[_group] spawn sr_support_fnc_supportAI;

// Static
if (_static) then {
	_plane setVariable ["SR_Static",true];
};

// Dropzone Waypoint
private _waypointDrop = _group addWaypoint [_target, 0,1];
_waypointDrop setWaypointType "MOVE";
_waypointDrop setWaypointSpeed "NORMAL";
_waypointDrop setWaypointBehaviour "CARELESS";
//_waypointDrop setWaypointCompletionRadius 500;
//_waypointDrop setWaypointStatements ["this distance2d (waypointPosition (currentWaypoint  (group this))) < 150", "nul = [this] spawn sr_support_fnc_paraDropExit"];

// Drop Out
[{(_this select 0) distance2d (_this select 1) < 150 || !alive (_this select 0)}, {
	Params ["_plane", "_target"];
	if (!alive _plane) exitWith {};
	(group driver _plane) setCurrentWaypoint [(group driver _plane), 2];
	[driver _plane] spawn sr_support_fnc_paraDropExit;
}, [_plane,_target]] call CBA_fnc_waitUntilAndExecute;


// End Waypoint
private _waypointEnd = _group addWaypoint [_end, 0,2];
_waypointEnd setWaypointType "MOVE";
_waypointEnd setWaypointSpeed "NORMAL";
_waypointEnd setWaypointBehaviour "CARELESS";
//_waypointDrop setWaypointCompletionRadius 500;
_waypointEnd setWaypointStatements ["true", "nul = [this] spawn sr_support_fnc_deleteVehicle"];

// Add Units
[_units, _plane] spawn sr_support_fnc_paraDropFillPlane;

// Start Message
["Paradrop Plane dispatched."] spawn fw_fnc_info;