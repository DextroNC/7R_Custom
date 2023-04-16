/*		
	Parameters:
		<-- Vehicle as Object
		<-- Unit as Object
		
	Description:
		Checks whether vehicle can be prepared
	
	Return:
		--> Repairable as Boolean

	Example:
		_return = [_vehicle, _unit] call sr_support_fnc_repairCondition;
		
*/

// Parameter init
params ["_vehicle","_unit"];
if (count nearestObjects [_vehicle,["SR_SupplyPadEmpty","SR_SupplyPad"],15,true] > 0 && _vehicle != _unit && isTouchingGround _vehicle && canMove _vehicle) then {true} else {false};
