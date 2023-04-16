/*

	Creates Marker on Camera Pos

*/

// Parameter Init 
params ["_pos",["_hud",false]];

if (SR_CAMERA_MARKER_Enabled) then {
	deleteMarker "SR_COPILOT_CAMERA";
	_marker = createMarkerLocal ["SR_COPILOT_CAMERA", _pos];
	_marker setMarkerTypeLocal "mil_destroy";
	_marker setMarkerColorLocal "ColorWhite";
};
if (SR_CAMERA_HUD_Enabled && _hud) then {
	_pos = ASLToAGL _pos; 
	drawIcon3D ["a3\ui_f\data\IGUI\Cfg\Targeting\SeekerNoLos_ca.paa", SR_CAMERA_HUD_COLOR, _pos, 2,2, 0];
};