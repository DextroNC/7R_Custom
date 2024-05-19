/*
	Parameters:
		<-- Unit as Object
		<-- Target as Object
		
	Description:
		Units removes gas mask as cbrn protection.

*/

// Parameter init
params ["_unit","_target"];

// Animation
_unit playAction "Gear";

// Progress bar equipment 3s
[3, _this, {
	// Parameter init
	_this select 0 params ["_unit","_target"];

	// Remove gas mask
	removeGoggles _target;

	// Add back previous normal googles and reset
	private _previousGoggles = _target getVariable ["SR_CBRN_OldGoggles",""];
	_target addGoggles _previousGoggles;
	_target setVariable ["SR_CBRN_OldGoggles",""];

	// Reset inconvinience for gas mask
	_target setUnitTrait ["loadCoef", 0];
	

},{}, "Removeing Gasmask..."] call ace_common_fnc_progressBar;