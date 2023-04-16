/*
	Parameters:
		<-- Unit as Object
		<-- Position as String/Object
		

	Description:
		Evaluate whether someone can recall in general


	Example:
		_return = [_unit,_marker] call sr_support_fnc_recallCondition;

*/
// Parameter init
params ["_unit",["_positionInput","respawn_west"]];
private _return = false;
private _location = [_positionInput, true] call sr_support_fnc_findLocation;
private _class = _unit getVariable ["SR_Class","R"];

// Check whether location exists and unit is eligable
if((_class in ["Pilot","TC"]) && !(_location isEqualTo [0,0,0]) && (vehicle _unit  == _unit)) then {
	_return = true;
};

// Return
_return