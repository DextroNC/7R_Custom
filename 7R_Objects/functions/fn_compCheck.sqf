/*
	Parameters:
		<-- Unit as Object
		<-- Ammunition as String
		
	Return:
		Boolean
	
	Description:
	Called to asses if ammunition is compatible.
	
*/

// Parameter Init
params ["_unit","_ammo"];
private _compatibleMagazines = [];

// Check for compatible Ammunition
// Check Primarry Weapon
private _primaryWeapon = primaryWeapon _unit;
private _configPrimary = configFile >> "CfgWeapons" >> _primaryWeapon;
{_compatibleMagazines append (if (_x == "this")
	then {getArray(_configPrimary >> "magazines")}
	else {getArray(_configPrimary >> _x >> "magazines")});
	if (_ammo in ["1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareWhite_F"] && "UGL_40x36" in getArray(_configPrimary >> _x >> "magazineWell")) exitWith {_compatibleMagazines = [_ammo]};
} forEach getArray(_configPrimary >> "muzzles");

// Check Secondary Weapon
private _secondaryWeapon = handgunWeapon  _unit;
private _configSecondary = configFile >> "CfgWeapons" >> _secondaryWeapon;
{_compatibleMagazines append (if (_x == "this")
	then {getArray(_configSecondary >> "magazines")}
	else {getArray(_configSecondary >> _x >> "magazines")});
	if (_ammo in ["1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareWhite_F"] && "UGL_40x36" in (getArray(_configPrimary >> _x >> "magazineWell"))) exitWith {_compatibleMagazines = [_ammo]};
} forEach getArray(_configSecondary >> "muzzles");

// Return
if ((_ammo in _compatibleMagazines)) then {true} else {false};