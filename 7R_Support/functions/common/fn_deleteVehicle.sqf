/*
	Parameters:
	<-- Group Leader of Vehicle

	Description:
		Deletes AI Vehicle including Crew

	Example:
		[_leader] call sr_support_fnc_deleteVehicle;

*/
// Parameter Init
params ["_leader"];
_vehicle = vehicle _leader;
_crew = units group _leader;

// Delete Crew
{
	deleteVehicle _x;
}forEach _crew;

// Delete Vehicle
deleteVehicle _vehicle;
