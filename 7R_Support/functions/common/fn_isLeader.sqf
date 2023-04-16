/*
	Parameters:
		<-- Unit as Object

	Description:
		<-- Checks if somebody is a leader (incl. platoon sergeant)

	Return
		--> Leader as Boolean

	Example:
		_return = [_unit] call sr_support_fnc_isLeader;

*/
// Parameter init
params ["_unit"];
_return = false;

// Check if leader or PSgt
if (leader _unit == _unit || [_unit] call sr_support_fnc_isSergeant) then {
	_return = true;
};

// Return
_return
