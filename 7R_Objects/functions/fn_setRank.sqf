/*
	Parameters:
		<-- Unit as Object
		<-- Callsign as String
	
	Description:
		Sets a callsign for a group.

	Example:
		["PL"] spawn sr_fnc_setRank
*/

// Parameter Init
params ["_unit","_callsign"];
private _group = group _unit;

// Set Callsign
_group setGroupIdGlobal [_callsign];

// Info Msg
["",("Callsign: " + _callsign)] spawn sr_support_fnc_infoMessage;