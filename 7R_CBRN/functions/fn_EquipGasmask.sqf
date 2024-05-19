/*
	Parameters:
		<-- Unit as Object
		<-- Target as Object
		
	Description:
		Units equips gas mask as cbrn protection.

*/

// Parameter init
params ["_unit","_target"];

// Animation
_unit playAction "Gear";

// Progress bar equipment 3s
[3, _this, {
	// Parameter init
	_this select 0 params ["_unit","_target"];

	// Remove and save normal goggles
	private _currentGoggles = goggles _target;
	removeGoggles _target;
	if (local _target) then {
		_target setVariable ["SR_CBRN_OldGoggles", _currentGoggles];
	} else {
		[_target,["SR_CBRN_OldGoggles",_currentGoggles]] remoteExec ["setVariable",_target];
	};

	// Adds gas mask
	_target addGoggles SR_CBRN_Mask;

	// Add inconvinience for gas mask
	_target setUnitTrait ["loadCoef", 0.25];
	

},{}, "Equiping Gasmask..."] call ace_common_fnc_progressBar;