/*
	Parameters:
		<-- Input as String/Object (Markername or Object)
		<-- ASL as Boolean (default: false)

	Description:
		Finds a location to an marker or object.


	Example:
		["markername"] call sr_support_fnc_findLocation;

*/
	
// Parameter Init
params ["_input",["_ASL",false]];
private _position = [0,0,0];

// Check if Marker else Object
if (typeName  _input == "STRING") then {
	_position = markerPos [_input,true];
} else {
	_position = getPos _input;
};

// Convert to ATL to ASL
if (_ASL) then {
	_position = ATLtoASL _position;
};

// Return
_position