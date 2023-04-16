/*
	Parameters:
		<-- Unit as Object
		<-- Laptop as Object
		<-- Area as Object

	Description:
		Hacking loop to organise progress.
	
	Example:
		[_unit,_laptop] spawn sr_support_fnc_hackingLoop;

*/

// Parameter init
params ["_unit","_laptop","_area"];

// Initiate Laptop
_area setVariable ["SR_Hack",0,true];
_laptop setVariable ["SR_Hack_Interrupt",false,true];

// Calculate hacking delay between tick
private _delay = SR_HackingTimer / 100;

// Start info
["","Hacking Started"] remoteExec ["sr_support_fnc_infoMessage",_unit];

While {alive _laptop && _area getVariable ["SR_Hack",0] < 100} Do {
	// Check if units are close
	if ({_x inArea _area} count (allPlayers) == 0) then {
		["","Hacking Stopped"] remoteExec ["sr_support_fnc_infoMessage",_unit];
		_laptop setVariable ["SR_Hack_Interrupt",true,true];
		// Wait until restarted
		_laptop setObjectTextureGlobal [1, "\7R_Support\ui\HackStart.paa"];
		waitUntil {!(_laptop getVariable ["SR_Hack_Interrupt",false]) || !alive _laptop};
	} else {
		// Progress
		private _progress = (_area getVariable ["SR_Hack",0]) + 1;
		_area setVariable ["SR_Hack", _progress, true];
		private _infoString = "Hacking: " + str(_progress) + " %";
		["",_infoString] remoteExec ["sr_support_fnc_infoMessage",_unit];
		// Update texture
		switch (_progress) do {
			case 1: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack001.paa"]};
			case 5: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack005.paa"]};
			case 10: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack010.paa"]};
			case 15: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack015.paa"]};
			case 20: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack020.paa"]};
			case 25: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack025.paa"]};
			case 30: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack030.paa"]};
			case 35: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack035.paa"]};
			case 40: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack040.paa"]};
			case 45: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack045.paa"]};
			case 50: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack050.paa"]};
			case 55: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack055.paa"]};
			case 60: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack060.paa"]};
			case 65: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack065.paa"]};
			case 70: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack070.paa"]};
			case 75: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack075.paa"]};
			case 80: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack080.paa"]};
			case 85: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack085.paa"]};
			case 90: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack090.paa"]};
			case 95: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack095.paa"]};
			case 100: {_laptop setObjectTextureGlobal [1, "\7R_Support\ui\Hack100.paa"]};
		};
	};
	// Delay
	sleep _delay;
};