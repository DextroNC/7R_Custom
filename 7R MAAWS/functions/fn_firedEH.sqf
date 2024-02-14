// Parameter Init
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

// Local only execute
if (!local _gunner) exitWith {};

// Check if ammo is airburst compatible
if (_magazine in ["MRAWS_HE_F","rhs_mag_maaws_HE",'RPG32_HE_F']) then {

	// Get airburste range
	_input = parseNumber (_gunner getVariable ["SR_AirburstRange","0"]);

	// Filter out invalid inputs (no input, too close or too far)
	if (_input == 0 || _input < 75 || _input > 2500) exitWith {};

	// Wait until airburst distance is reached then airburst projectile
	[{(_this select 0) distance (_this select 1) > (_this select 2)}, {[(_this select 1)] call SR_Maaws_fnc_airburst;}, [getPos _gunner, _projectile, _input],10,{}] call CBA_fnc_waitUntilAndExecute;

	// Reset airburst range
	_gunner setVariable ["SR_AirburstRange","0",true];
	SR_AirburstRange = "0";
};
