/*
	Parameters:
		<-- Eventhandler Array [_target (Object), _source (Object), _damage (Integer), _instegator (Object)]
		<-- Hits to Kill as IDC_INTEL_CHNGTIME_HOUR_TB

	Description:
		Adds Hit EH to Pop-up Targets

*/

// Parameter Init;
params ["_ehParam","_hitCount",["_civilian",false]];
_ehParam params ["_target", "_source", "_damage", "_instigator"];

// Reset Health
_target setDamage 0;

// Check if Target is up
if (_target animationPhase "terc" == 0) then {
	// Get previous Hits
	private _hits = _target getVariable ["SR_Hit",0];
	// Evaluate Requirement
	if ((_hits + 1) >= _hitCount) then {
		// Annimate 
		_target animate ["terc", 1];
		// Civilian
		if (_civilian) then {
			private _msg = name _instigator + " killed a Civilian.";
			_msg remoteExec ["systemChat",0];
			["CombatLog", ["Training", _msg]] call CBA_fnc_globalEvent; 
		};
		// Reset Hits
		_target setVariable ["SR_Hit",0];
	} else {
		// Account for Hit
		_target setVariable ["SR_Hit", (_hits + 1)];
	};
};
