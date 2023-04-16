/*
	Parameters:
		<-- Unit as Object
		<-- Item as String
		<-- Object as String

	Description:
		Places the medical pack in front of the medic

*/

// Parameter Init
params ["_unit",["_itemClass","SR_ItemMedBag"],["_objectClass","SR_MedBag"]];

// Play animation
[_unit,"AinvPknlMstpSnonWnonDnon_medic_1"] call ace_common_fnc_doAnimation;

// Progress Bar
[4, [_unit, _itemClass, _objectClass], {

	// Parameter Init
	params ["_args"];
	_args params ["_unit","_itemClass", "_objectClass"];
	
	// Calculate Position
	private _position = getPosATL _unit;
	private _azimuth = getDir _unit;
	private _xAxis = (_position select 0) + (1 * (sin _azimuth));
	private _yAxis = (_position select 1) + (1 * (cos _azimuth));

	// Create Object
	_object = createVehicle [_objectClass, [_xAxis, _yAxis, (_position select 2)], [], 0, 'CAN_COLLIDE'];
	_object setvariable ["ace_medical_isMedicalFacility", true, true];

	// Remove Iventory Item
	_unit removeItem _itemClass;
	
},{["","Placement Canceled"] spawn sr_support_fnc_infoMessage;}, "Placing Medical Bag..."] call ace_common_fnc_progressBar;

true
