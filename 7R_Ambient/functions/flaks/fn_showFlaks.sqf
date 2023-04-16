/*		
	Parameters:
		<-- Object (where artillery should hit)
		
	Description:
	Creates flaks around the given object

	Example:
	nul = [object_name] spawn SR_Ambient_fnc_showFlaks;

	Developed by ALIAS modified by Sigfried
*/

if (!isServer) exitWith {};

params ["_object"];

_object setVariable ["SR_Ambient_flaks_show", true];

while { _object getVariable ["SR_Ambient_flaks_show", false] && (alive _object) } do {
	[_object] remoteExec ["SR_Ambient_fnc_flaksEffect"];
	
	sleep 2;
};