/*
	Parameters:
		<-- Unit as Object

	Description:
		Returns the class of a unit

	Return
		--> Class as String

	Example:
		_return = [_unit] call sr_support_fnc_getClass;

*/
// Parameter init
params ["_unit"];

// Get class
private _return = _unit getVariable ["SR_Class",""];

// Return
_return
