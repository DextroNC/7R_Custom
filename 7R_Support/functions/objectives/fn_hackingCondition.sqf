/*
	Parameters:
		<-- Unit as Object

	Description:
		Check whether someone can start to hack.
	
	Example:
		_return = [_unit] spawn fw_fnc_hackingCondition;

*/

// Parameter init
params ["_unit"];
private _return = false;

// Get area
private _area = [_unit] call sr_support_fnc_hackingArea;

// Exit when not in area
if (isNull _area) exitWith {_return};

// Check if unit in area and has laptop
if ((_unit inArea _area) && ("SR_Laptop" in items _unit)) then {
	_return = true;
};

// Return
_return