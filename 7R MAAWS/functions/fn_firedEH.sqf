// Parameter Init
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

// Local Execute
if (!local _gunner) exitWith {};

// Check if ammo is airburst and add airburst
if (_magazine in ["MRAWS_HE_F","rhs_mag_maaws_HE",'RPG32_HE_F']) then {
	// Get player position for range
	_position = getPos _gunner;

	// Get airburste range
	_input = parseNumber (_gunner getVariable ["SR_AirburstRange",0]);
	if (_input == 0) exitWith {};
	_distance = _input;
	if (_input <50) then {_distance = 99999;};
	if (_input >1500) then {_distance = 999999;};
	
	// Reset airburst range
	_gunner setVariable ["SR_AirburstRange",0,true];
	SR_AirburstRange = 0;

	// Airburst Wait
	[{(_this select 0) distance (_this select 1) > (_this select 2)}, {[(_this select 1)] call SR_Maaws_fnc_airburst;}, [_position,_projectile,_distance],10,{}] call CBA_fnc_waitUntilAndExecute;
};
