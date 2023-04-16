/*
	Parameters:
		<-- Unit as Object

	Return:
		--> Area as Object (default: objNull)

	Description:
		Find a hacking area.
	
	Example:
		_return = [_unit] call sr_support_fnc_hackingArea;

*/

// Parameter init
params ["_unit"];
private _return = objNull;

// Find Area (incompleted hack area)
{
	if ((_unit inArea _x) && (_x getVariable ["SR_Hack",0] < 100)) exitWith {_return = _x};
}forEach SR_Hack;

// Return
_return