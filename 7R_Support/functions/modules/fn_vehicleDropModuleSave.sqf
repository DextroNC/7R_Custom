/*

	Save a vehicle for dynamic spawn including cargo, textures and pylons.

*/
private _logic = _this param [0,objnull,[objnull]];

//--- Module
private ["_vehicles","_activated"];
_vehicles = _this param [1,[],[[]]];
_activated = _this param [2,true,[true]];

// Loop through Vehicles
{
	// Vehicle Class
	private _class = typeOf _x;

	// Vehicle Name
	private "_name"; 
	if (count (_x getVariable ["Name",""]) == 0) then {
		_name =  getText (configFile >> "CfgVehicles" >> typeOf _class >> "displayName")
	} else {
		_name = _x getVariable ["Name",""];
	};
	
	// Inventory
	private _inventory = [weaponCargo _x, magazineCargo _x, itemCargo _x, backpackCargo _x];

	// Texture
	private _texture = getObjectTextures _x;

	// Animations
	private _animations = animationNames _x;

	// Pylons
	private _pylonMags = getPylonMagazines _x; 
	private _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> _class >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};
	private _pylons = [_pylonMags, _pylonPaths];

	// Save Composition
	SR_Vehicle_Drop pushBackUnique [_class, _name, _inventory, _texture, _animations];
	
	// Delete Vehicle
	deleteVehicle _x;
} forEach _vehicles;

// Publish Variable
PublicVariable "SR_Vehicle_Drop";