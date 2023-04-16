/*		
	Parameters:
		<-- Vehicle as Object
		<-- Unit as Object
		
	Description:
		Vehicle Repair Action

	Example:
		[_vehicle, _unit] spawn sr_support_fnc_repair;
		
*/

// Parameter init
params ["_vehicle","_unit"];
private _serviceRequired = true;

// Block service duplicate
if (_vehicle getVariable ["SR_Service",false]) exitWith {
	["","Service already in progress"] spawn sr_support_fnc_infoMessage;
};
_vehicle setVariable ["SR_Service",true];

// Service Loop
while {[_vehicle, _unit] call sr_support_fnc_repairCondition && _serviceRequired} do {

	// Check if engine is off
	if (isEngineOn _vehicle) then {
		["","Turn off the Engine"] spawn sr_support_fnc_infoMessage;
	} else {
		// Parameter init service loop
		private _infoMessage = "";
		private _damage = damage _vehicle;
		private _fuel = fuel _vehicle;

		// Repair
		if (_damage > 0) then {
			_vehicle setDamage (_damage - (1 / SR_RepairTimer));
			_infoMessage = "Repairing Vehicle: " + str (round ((1 - _damage) * 100)) + " %";
			["",_infoMessage] spawn sr_support_fnc_infoMessage;
		};

		// Repair all Hitpoints
		if (_damage == 0) then {
			{
				[_vehicle, _x, 0, false] spawn BIS_fnc_setHitPointDamage;
			} forEach ((getAllHitPointsDamage _vehicle) select 0);
		};

		// Refuel
		if (_damage ==  0 && _fuel < 1) then {
			_vehicle setFuel (_fuel + (1 / SR_RefuelTimer));
			_infoMessage = "Refueling Vehicle: " + str (round (_fuel * 100)) + " %";
			["",_infoMessage] spawn sr_support_fnc_infoMessage;
		};

		// Rearming
		if (_damage == 0 && _fuel == 1) exitWith {
			[_vehicle, _unit, _vehicle] call ace_rearm_fnc_rearmEntireVehicle;
			_serviceRequired = false;
			["","Rearming Vehicle"] spawn sr_support_fnc_infoMessage;
		};
	};
	sleep 1;
};


// End Message
["","Service Completed"] spawn sr_support_fnc_infoMessage;

// Reset
_vehicle setVariable ["SR_Service",false];