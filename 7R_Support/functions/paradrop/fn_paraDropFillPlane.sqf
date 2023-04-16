/*
	Parameters:
		<-- Units as Array
		<-- Plane as Object


	Decription:
		Fills the plane
		
*/

// Parameter Init
Params ["_units","_plane"];
private _slot = 2;

// Teleport People into Plane
{
	["ParaPort", [_plane,_x,_slot], _x] call CBA_fnc_targetEvent;
	_slot = _slot + 1;
	_x assignAsCargo _plane;
	[_x] orderGetIn true;
} forEach _units;

// SetVariable
_plane setVariable ["SR_Cargo",_units];