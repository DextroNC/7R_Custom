/*
	Parameters:
		<-- Pilot as Object

	Decription:
		Drops cargo from plane
		
*/

// Parameter Init
Params ["_pilot"];
private _vehicle = vehicle _pilot;
private _units = _vehicle getVariable ["SR_Cargo",""];
private _static = _vehicle getVariable ["SR_Static",false];

// Drop all Units in Cargo
if (_static) then {
	[_vehicle] spawn rhs_fnc_infantryParadrop;
} else {
	{
		private _delay =  (1 / (((speed _vehicle) max 55) / 100));
		_x disableAI "MOVE";
		_x disableCollisionWith _vehicle;
		moveout _x;
		unassignVehicle _x;
		[_x] allowGetIn false;
		_x setDir (getDir _vehicle);
		sleep _delay;
		_x enableAI "MOVE";
	} forEach _units;
};