// Camera Compass
// Check if cam enabled
if (SR_CAMERA_COMPASS_Enabled && vehicle player != player) then {
	// Check player in gun view and air vic
	if (vehicle player isKindOf "Air" && cameraView == "GUNNER" && vehicle player turretUnit [0] == player) then {
			{
			_center = positionCameraToWorld [0,0,1];
			_x params ["_letter", "_color", "_offset1", "_offset2"];
			drawIcon3D [
				"",
				_color,
				_center vectorAdd _offset1,
				0,
				0,
				0,
				_letter,
				2,
				0.05,
				"PuristaMedium",
				"center",
				true
			];      /*
			drawIcon3D [
				"",
				_color,
				_center vectorAdd _offset2,
				0,
				0,
				0,
				".",
				2,
				0.1,
				"PuristaMedium"
			];*/
		} count [
			["N",[1,1,1,1],[0,0.12,0],[0,0.6,0]]
			/*,["S",[1,1,1,0.7],[0,-0.12,0],[0,-0.6,0]], 
			["E",[1,1,1,0.7],[0.12,0,0],[0.6,0,0]], 
			["W",[1,1,1,0.7],[-0.12,0,0],[-0.6,0,0]]*/
		];
	};
};