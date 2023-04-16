// MicroDagr vehicle HUD GPS
disableSerialization;
// Show Screen
57706 cutRsc ["SR_GPS_HUD","PLAIN"];

// Check if module is enabled
if (SR_GPS_HUD_Enabled && vehicle player != player) then {
	// Parameter Init
	_ctrl0 = (SR_GPS_HUD select 0) displayCtrl 1000;
	_ctrl1 = (SR_GPS_HUD select 0) displayCtrl 1001;
	_ctrl2 = (SR_GPS_HUD select 0) displayCtrl 1002;

	// Calculate Bearing
	_dir = direction vehicle player;
	_bearing = (str round _dir);
	_bearingPretty = "";

	switch (count _bearing) do
	{
		case 1: {_bearingPretty = "00" + _bearing};
		case 2: {_bearingPretty = "0" + _bearing};
		case 3: {_bearingPretty = _bearing};
	};

	// Show Bearing
	_ctrl0 ctrlSetTextColor SR_GPS_COLOR;
	_ctrl0 ctrlSetText format ["%1",_bearingPretty];

	// Waypoints
	if (ace_microdagr_currentWaypoint >= 0) then {
			_waypoints = [] call ace_microdagr_fnc_deviceGetWaypoints;
			_currentWP = _waypoints select ace_microdagr_currentWaypoint;

			_targetPosLocationASL = _currentWP select 1;
			_dir = [(getPosASL player), _targetPosLocationASL] call BIS_fnc_dirTo;
			_bearing = (str round _dir);
			_bearingWpPretty = "";
			switch (count _bearing) do
			{
				case 1: {_bearingWpPretty = "00" + _bearing};
				case 2: {_bearingWpPretty = "0" + _bearing};
				case 3: {_bearingWpPretty = _bearing};
			};
			_distance = ((getPosASL player) distance2D _targetPosLocationASL) / 1000;
			_distancePretty = format ["%1 km", ([_distance, 1, 1] call CBA_fnc_formatNumber)];

			_ctrl1 ctrlSetTextColor SR_WP_COLOR;
			_ctrl2 ctrlSetTextColor SR_WP_COLOR;
			_ctrl1 ctrlSetText format ["%1",_bearingWpPretty];
			_ctrl2 ctrlSetText format ["%1",_distancePretty];
	};
} else {
	//Clean Up
	57706 cutText ["","PLAIN"];
};



