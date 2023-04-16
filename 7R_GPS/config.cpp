#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class SR_GPS_HUD
	{
		name = "7R Navigation Hud";
		units[]={};
		weapons[]={};
		version="0.0.1";
		requiredVersion=0.1;
		requiredAddons[]={};
		author="Dextro";
	};
};
class RscTitles
{
	class SR_GPS_HUD
	{
		idd=100000;
		movingEnable=1;
		enableSimulation=1;
		enableDisplay=1;
		duration=9999;
		onLoad="SR_GPS_HUD = _this; disableSerialization";
		onunLoad="";
		fadein=0;
		fadeout=0;
		class controls
		{
			class SR_GPS_HUD_Display
			{
				access=0;
				idc=1000;
				type=0;
				style=0;
				linespacing=1;
				colorBackground[]={0,0,0,0};
				colorText[]={0,0.4,1,1};
				text="";
				shadow=2;
				font="PuristaSemibold";
				SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
				fixedWidth=0;
				x="0.44 * safezoneW + safezoneX";
				y="0.92 * safezoneH + safezoneY";
				w="0.0567187 * safezoneW";
				h="0.033 * safezoneH";
			};
			class SR_WP_HUD_Display
			{
				access=0;
				idc=1001;
				type=0;
				style=0;
				linespacing=1;
				colorBackground[]={0,0,0,0};
				colorText[]={1,0,0,1};
				text="";
				shadow=2;
				font="PuristaSemibold";
				SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
				fixedWidth=0;
				x="0.44 * safezoneW + safezoneX";
				y="0.94 * safezoneH + safezoneY";
				w="0.0567187 * safezoneW";
				h="0.033 * safezoneH";
			};
			class SR_WP2_HUD_Display
			{
				access=0;
				idc=1002;
				type=0;
				style=0;
				linespacing=1;
				colorBackground[]={0,0,0,0};
				colorText[]={1,0,0,1};
				text="";
				shadow=2;
				font="PuristaSemibold";
				SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
				fixedWidth=0;
				x="0.44 * safezoneW + safezoneX";
				y="0.955 * safezoneH + safezoneY";
				w="0.0567187 * safezoneW";
				h="0.033 * safezoneH";
			};
		};
	};
};
class CfgFunctions
{
	class SR
	{
		class GPS
		{
			file = "x\sr\addons\hud\functions";
			class loop {};
			class gpsHudInit {};
			class eH {
				postInit = 1;
			};
			class cameraHud {};
			class gpsHud {};
			class cameraMarker {};
			class cameraMarkerLocal {};
		};
	};
};

class Extended_PreInit_EventHandlers {
    class SR_GPS_PreInit {
        init = "call compile preprocessFileLineNumbers 'x\sr\addons\hud\XEH_preInit.sqf'";
    };
};