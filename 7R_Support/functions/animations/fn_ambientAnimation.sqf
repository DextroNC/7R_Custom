/*
	Parameters:
		<-- Animation Type as Integer
		<-- Unit as Object
		<-- Combat Read as Boolean

	Return:
		None

	Description:
		Start an ambient animation on an AI unit.


	Example:
	[_animationType,_unit] call sr_support_fnc_ambientAnimation;

*/
// Parameter Init
params ["_unit",["_animationType", 0],["_combatReady",false]];

// Only execute where unit is local
if (!local _unit) exitWith {};

// EH to cancel animation when handcuffed
["ace_captiveStatusChanged", {(_this select 0) call zen_modules_fnc_moduleAmbientAnimEnd;}] call CBA_fnc_addEventHandler;

// Initialise animation
["zen_module_fnc_moduleAmbientAnimStart", [_unit, _animationType, _combatReady]] call CBA_fnc_serverEvent;