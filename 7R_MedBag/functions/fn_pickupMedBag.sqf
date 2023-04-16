/*
	Parameters:
		<-- Unit as Object
		<-- Object as String
		<-- Item as String

	Description:
		Removes the medical bag and places it into the backpack of the medic

*/

// Parameter Init
params ["_unit", "_object", "_item"];

// Check if it fits into Backpack
if(_unit canAddItemToBackpack [_item, 1]) then {
	// Play animation
	[_unit,"AinvPknlMstpSnonWnonDnon_medic_1"] call ace_common_fnc_doAnimation;

	// Progress Bar
	[4, [_unit,_object,_item], {

		// Parameter Init
		params ["_args"];
		_args params ["_unit","_object","_item"];
		
		// Remove and add to inventory
		_unit addItemToBackpack _item;
		deleteVehicle _object;
		["","Medical Bag picked up"] spawn sr_support_fnc_infoMessage;
		
	},{["","Pickup Canceled"] spawn sr_support_fnc_infoMessage;}, "Placing Medical Bag..."] call ace_common_fnc_progressBar;

}else{
	// Cancel
	["","No space in backpack"] spawn sr_support_fnc_infoMessage;
};

true
