/*
	Parameters:
		<-- Unit as Object

	Description:
		Creates the Laptop and initiates the hacking process.
	
	Example:
		[_unit] spawn sr_support_fnc_hackingStart;

*/

// Parameter init
params ["_unit"];
private "_area";

// Find Area
_area = [_unit] call sr_support_fnc_hackingArea;

// Exit when no hacking area is present
if (isNull _area) exitWith {
	["","No Hacking Area"] spawn sr_support_fnc_infoMessage;
};

// Play Animation
[_unit, "AinvPknlMstpSnonWnonDnon_medic_1", 1] call ace_common_fnc_doAnimation;

// Progess Bar to place down laptop

// Progress Bar
[6, [_unit, _area], {
	// Parameter Init
	params ["_args"];
	_args params ["_unit","_area"];
	private _position = _unit modelToWorld [0,1,0];

	// Create laptop
	_unit removeItem "SR_Laptop";
	private _laptop = "SR_Laptop_Object" createVehicle [0,0.5,0];
	_laptop setPos _position;
	_laptop setDir (getDir _unit);
	
	// Start Loop
	[_unit,_laptop,_area] remoteExec ["sr_support_fnc_hackingLoop", 2];	
	
},{["","Hacking Canceled"] spawn sr_support_fnc_infoMessage;}, "Starting Hacking..."] call ace_common_fnc_progressBar;