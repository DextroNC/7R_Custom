/*
	Parameters:
		<-- Vehicle as Object
	
	Description:
		Checks whether an AI controlled Vehicle is still considered operational. 
		Used in Exfil and Reinf AI functions.

	Return:
		--> Operational (true/false)

	Example:
		_return = [_vehicle] call sr_support_fnc_checkStatus


*/
// Parameter init
params ["_vehicle"];
private _return = true;

// Check if destroyed
if (!alive _vehicle) then {_return = false;};

// Check if immobilized
if (!canMove _vehicle) then {_return = false;};

// Check if no driver
if (count (fullCrew [_vehicle, "driver", false]) == 0) then {_return = false;};


// Return
_return
