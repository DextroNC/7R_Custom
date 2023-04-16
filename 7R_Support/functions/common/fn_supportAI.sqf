/*
	Parameters:
		<-- Group as Group

	Description:
		Disable key AI functions for support AI such as planes.


	Example:
		[group] call sr_support_fnc_supportAI;

*/
	
// Parameter Init
params ["_group"];
private _units = units _group;

// Group Behaviour
_group setBehaviour "CARELESS"; 

// Disable AI
{
	_x disableAi "FSM";
	_x disableAi "TARGET";
	_x disableAi "AUTOTARGET";
	_x disableAi "AUTOCOMBAT";
	_x disableAi "COVER";
	_x disableAi "SUPPRESSION";
	_x setVariable ["lambs_danger_disableAI",true,true];
}forEach _units;

// AI mods
_group setVariable ["Vcm_Disable",true,true];
_group setVariable ["lambs_danger_disableGroupAI",true,true];