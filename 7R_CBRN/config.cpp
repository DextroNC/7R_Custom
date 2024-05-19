#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class SR_CBRN
	{
		name = "7R CBRN";
		units[]={};
		weapons[]={};
		version="0.0.1";
		requiredVersion=0.1;
		requiredAddons[]={
		
		};
		author="Dextro";
	};
};

class Extended_PreInit_EventHandlers {
    class SR_GPS_PreInit {
        init = "call compile preprocessFileLineNumbers '7R_CBRN\XEH_preInit.sqf'";
    };
};



//#include "CfgGlasses.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
