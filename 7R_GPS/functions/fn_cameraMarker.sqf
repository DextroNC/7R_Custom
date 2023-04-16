/*

	Creates Marker on Camera Pos

*/




// Check player in gun view and air vic
if (vehicle player isKindOf "Air" && cameraView == "GUNNER" && vehicle player turretUnit [0] == player) then {
	_ins = lineIntersectsSurfaces [
		AGLToASL positionCameraToWorld [0,0,0], 
		AGLToASL positionCameraToWorld [0,0,1000], 
		player
	];

	if (count _ins > 0) then {
		// Create Marker for Copilot
		[(_ins select 0 select 0)] call SR_fnc_cameraMarkerLocal;

		// Create Pilot Marker
		_pilot = driver vehicle player;
		if (!(isNull _pilot)) then {
			// Create Marker Pilot
			[(_ins select 0 select 0),true] remoteExec ["SR_fnc_cameraMarkerLocal", _pilot];
		};
	};
};