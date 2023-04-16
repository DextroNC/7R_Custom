/*
	Parameters:
		None

	Description:
		Logs performance.


	Example:
		[] call sr_support_fnc_performanceLog;

*/
	
// Log HC Frames
if (!hasInterface && !isServer) then {
	    _handle = [{ (format ["HC Frames: %1", diag_fps]) remoteExec ["diag_log",2];}, 30, []] call CBA_fnc_addPerFrameHandler;
};
// Log Server Frames
if (isServer) then {
	    _handle = [{diag_log format ["Server Frames: %1", diag_fps]; diag_log format ["Unit Count: %1", (count allUnits)]}, 30, []] call CBA_fnc_addPerFrameHandler;
};

// Player Log 
if (hasInterface) then {
	player createDiarySubject ["Combat Log", "Combat Log"];
	player createDiarySubject ["Mission Log", "Mission Log"];
};

