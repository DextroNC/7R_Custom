/*
	Parameters:
		<-- Laptop as Object
		<-- Unit as Object
		
		
		
		Description:
			Action for Laptop pick up.
		
		Example:
		none

*/

// Parameter Init
params ["_laptop","_unit"];

// Annimation
_unit playMove "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon";

// Progress Bar
[3, [_laptop,_unit], {
	params ["_args"];
	_args params ["_laptop","_unit"];
	// Delete laptop
	deleteVehicle _laptop; 
	// Add inventory item to unit
	_unit addItem "SR_Laptop";
},{["Action Canceled"] spawn sr_support_fnc_infoMessage;}, "Picking up Laptop..."] call ace_common_fnc_progressBar;
