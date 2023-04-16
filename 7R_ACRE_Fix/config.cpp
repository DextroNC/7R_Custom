class CfgPatches
{
	class SR_GPS_HUD
	{
		name = "7R ACRE Fix";
		units[]={};
		weapons[]={};
		version="0.0.1";
		requiredVersion=0.1;
		requiredAddons[]={};
		author="Dextro";
	};
};

class Extended_PostInit_EventHandlers {
    class SR_ACRE_postInit {
        init = "call compile preprocessFileLineNumbers 'x\sr\addons\acre_fix\XEH_postInit.sqf'";
    };
};

class CfgFunctions
{
	class SR
	{
		class ACRE_Fix
		{
			file = "x\sr\addons\acre_fix\functions";
			class radioReplacement {};
		};
	};
};