/*
	Parameters:
		None
		
	Description:
		Handles the CBRN statemachine.

*/

// Only execute on player clients
if (!hasInterface) exitWith {};



private _cbrnStateMachine = [_stateMachine, {}] call CBA_statemachine_fnc_addState;
