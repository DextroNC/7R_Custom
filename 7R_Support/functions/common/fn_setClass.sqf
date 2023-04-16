/*
	Parameters:
		<-- Unit as Object
		<-- Class as String/Object (default: R)

	Description:
		Sets the class of a unit based on input or copies class from another unit


	Example:
		[_unit,"R"] spawn sr_support_fnc_setClass;

*/
// Parameter init
params ["_unit",["_classInput","R"]];
private _class = "";

// Use input string
if (typeName _unit == "STRING") then {
	_class = _classInput;
} else {
	_class = [_classInput] call sr_support_fnc_getClass;
};

// Set Class
_unit setVariable ["SR_Class", _class, true];