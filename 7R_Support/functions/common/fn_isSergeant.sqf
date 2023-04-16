/*
	Parameters:
		<-- Unit as Object
	
	Description:
		<-- Checks if somebody is Platoon Sergeant

	Example:
		_return = [_unit] call sr_support

*/
// Parameter init
params ["_unit"];
_return = false;

// Check rank and callsign
if ((rank _unit isEqualTo "SERGEANT") && (groupid group _unit in ["P","P-1","P-2","PL"])) then {
	_return = true;
};

// Return
_return
