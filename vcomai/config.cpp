#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	class VCOM_AI 
	{
		units[] = {};
		weapons[] = {}; 
		requiredAddons[] = {};	
		author[]= {"Genesis"}; 		
	};
};



class CfgFunctions
{
	#include "\vcomai\vcom\cfgFunctions.hpp"
	class VCOMlaunch
	{
		class VCOM_Initialization
		{
			class Init
			{
				file = "\vcomai\vcom\VcomInit.sqf";
				postInit = 1;
			};
		};

	};
};


class Extended_PreInit_EventHandlers {
	class VCM_CBASettings {
		init = "call VCM_fnc_CBA_Settings";
	};
};

class CfgRemoteExec
{
	// List of script functions allowed to be sent from client via remoteExec
	class Functions
	{
		mode = 2;
		jip = 1;		
		
		class vcm_serverask { allowedTargets = 0;jip = 1; };
		class VCM_PublicScript { allowedTargets = 0;jip = 1; };
		class BIS_fnc_debugConsoleExec { allowedTargets = 0;jip = 1; };
		class SpawnScript { allowedTargets = 0;jip = 1; };
		class enableSimulationGlobal { allowedTargets = 0;jip = 1; };
		class VCM_fnc_KnowAbout { allowedTargets = 0;jip = 1; };
		
	};
	
	
};








