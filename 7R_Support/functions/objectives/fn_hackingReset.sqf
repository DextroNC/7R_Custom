/*
	Parameters:
		<-- Laptop as Object
		<-- Unit as Object

	Description:
		Restarts the hacking process.
	
	Example:
		[_unit,_laptop] spawn sr_support_fnc_hackingReset;

*/

// Parameter init
params ["_laptop","_unit"];

// Play Animation
[_unit, "AinvPknlMstpSnonWnonDnon_medic_1", 1] call ace_common_fnc_doAnimation;

// Progress Bar to restart hack
[2, [_laptop,_unit], {
	// Parameter Init
	params ["_args"];
	_args params ["_laptop","_unit"];
	_laptop setVariable ["SR_Hack_Interrupt",false,true];
	["","Hacking Restarted"] spawn sr_support_fnc_infoMessage;
},{["","Hacking Canceled"] spawn sr_support_fnc_infoMessage;}, "Restarting Hack..."] call ace_common_fnc_progressBar;