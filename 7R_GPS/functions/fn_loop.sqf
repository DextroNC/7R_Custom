/*

	7R Navigation lookAtPos

*/

_handle = [{
	params ["_args","_handle"];

	// Exec GPS Hud
	if (SR_CAMERA_COMPASS_Enabled) then {

		
		[] spawn SR_fnc_gpsHud;
	};
	

	// Exec GPS Hud
	[] spawn SR_fnc_cameraHud;

	// Exec Camera Marker
	[] spawn SR_fnc_cameraMarker;

	// Remote EH
	if (vehicle player == player) then {
		57706 cutText ["","PLAIN"];
		deleteMarker "SR_COPILOT_CAMERA";
		[_handle] call CBA_fnc_removePerFrameHandler;
	};
}, 0, []] call CBA_fnc_addPerFrameHandler;
