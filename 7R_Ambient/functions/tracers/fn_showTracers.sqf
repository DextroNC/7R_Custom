/*		
	Parameters:
		<-- Object (where tracers should start from)
		<-- Color as a string (red, green, yellow and white supported)
		
	Description:
	Creates the tracers from the given object

	Developed by ALIAS modified by Sigfried
*/

if (!isServer) exitWith {};

params ["_object", "_color"];

// make variable below false if you want to stop the loop and remove tracer effect
_object setVariable ["SR_Ambient_tracers_show", true];
_object setVariable ["SR_Ambient_tracers_sound", true];

[_object] spawn {
	params ["_object"];

	while { _object getVariable ["SR_Ambient_tracers_show", false] && _object getVariable ["SR_Ambient_tracers_show", false] } do {
		sleep 36 + random 2;
		
		_object setVariable ["SR_Ambient_tracers_sound", true];
	};
};

while { _object getVariable ["SR_Ambient_tracers_show", false] && (alive _object) } do {
	// Takes a random value for the amount of tracers
	_tracer_amount = 2 + round (random [3, 5, 7]);

	// Selects random angles and speeds
	_xx 	= [60,-60] call BIS_fnc_selectRandom;
	_yy 	= [60,-60] call BIS_fnc_selectRandom;
	_zz		= 50+ (random 100);	

	// Execute the code only when the tracer amount is higher than 0
	while {_tracer_amount > 0} do {
		// Substracts one of the tracer amount
		_tracer_amount = _tracer_amount - 1;

		private ["_tracer"];
		
		// Creates the tracer object
		_tracer = createVehicle ["Land_Battery_F", (getPos _object), [],0, "CAN_COLLIDE"];

		// Creates a random lifetime
		_tracer_lifetime = 4 + floor (random 6);

		// Creates the cool tracer effect
		[_tracer, _color, _tracer_lifetime] remoteExec ["SR_Ambient_fnc_tracerEffect"];
		
		// Sets the angles and speeds
		_tracer setVelocity [_xx,_yy,_zz];
		
		[_tracer, _tracer_lifetime] spawn {
			// Deletes the tracer after the lifetime has passed
			sleep (_this select 1);
			deleteVehicle (_this select 0);
		};

		sleep 0.2 + (random 1);
	};

	sleep 1 + (random 3);
	
	// Creates the sound
	if ( (_object getVariable ["SR_Ambient_tracers_sound", true]) ) then {
		[_object, ["SR_med_dist_battle_1", 8000]] remoteExec ["say3d"];

		_object setVariable ["SR_Ambient_tracers_sound", false];
	};
};

