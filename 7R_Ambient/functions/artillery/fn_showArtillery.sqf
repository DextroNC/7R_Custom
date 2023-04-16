/*		
	Parameters:
		<-- Object (where artillery should hit)
		<-- Range as an integer (default: 300)
		
	Description:
	Creates artlilery fire around the given object

	Developed by ALIAS modified by Sigfried
*/
if (!isServer) exitWith {};

private ["_xx","_yy","_zz","_dire"];

params ["_object", ["_range", 300]];

_art_object  = "land_helipadempty_f" createVehicle getpos _object;

// make variable below false if you want to stop the loop
_object setVariable ["SR_Ambient_artillery_show", true];
_object setVariable ["SR_Ambient_artillery_sound", true];

[_object] spawn {
	params ["_object"];

	while { (_object getVariable ["SR_Ambient_artillery_show", false]) } do {
		sleep 35 + random 2;

		_object setVariable ["SR_Ambient_artillery_sound", true];
	};
};

while { (_object getVariable ["SR_Ambient_artillery_show", false]) && (alive _object) } do {
	_rel_pos = [getPos _art_object, random _range, random 360] call BIS_fnc_relPos;
	_art_object setPos _rel_pos;

	[_art_object, _object] remoteExec ["SR_Ambient_fnc_artilleryEffect"];
	
	sleep 0.5 + random 2;
};	