/*
	Parameters:
		<-- Target as Object
		<-- Source as Object
		<-- Damage as Interger
		<-- Instigator as Object

	Description:
		Hit EH for Heavy Targets

*/

// Parameter Init;
params ["_target", "_source", "_damage", "_instigator"];

// Check if Target is up
if (_target animationPhase "terc" == 0) then {
	// Check if enough Damage Dealt
	if (_damage > 0.1) then {
		// Annimate 
		_target animate ["terc", 1];
	};
};

// Reset Health
_target setDamage 0;
