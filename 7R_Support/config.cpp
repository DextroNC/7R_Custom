#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class SevenR_support
	{
		name= "7R Support";
		units[]= {};
		weapons[]={};
		version="0.0.1";
		requiredVersion=1.5599999;
		requiredAddons[]= {};
		author="Dextro";
		authorUrl="http://www.7th-ranger.com/";
	};
};

// Functions
class CfgFunctions
{
	class sr_support
	{
		class common
		{
			file = "\7R_Support\functions\common";
			class infoMessage {};
			class relativePosition {};
			class deleteVehicle {};
			class supportAI {};
			class setClass {};
			class getClass {};
			class findLocation {};
			class isLeader {};
			class isSergeant {};
		};
		class para
		{
			file = "\7R_Support\functions\paradrop";
			class paraDropAction {};
			class paraDropPlane {};
			class paraDropFillPlane {};
			class paraDropExit {};
			class paraDropPlaneSelection {};
			class paraDropTerminal {};
		};
		class utilities
		{
			file = "\7R_Support\functions\utilities";
			class performanceMonitor {postInit = 1};
		};
		class animations
		{
			file = "\7R_Support\functions\animations";
			class ambientAnimation {};
		};
		class actions
		{
			file = "\7R_Support\functions\actions";
			class recall {};
			class recallCondition {};
			class repairCondition {};
			class repair {};
		};
		class objectives
		{
			file = "\7R_Support\functions\objectives";
			class hackingLoop {};
			class hackingStart {};
			class hackingArea {};
			class hackingCondition {};
			class hackingPickup {};
			class hackingReset {};
		};
	};
};

// Ace Interactions
class CBA_Extended_EventHandlers;
class CfgVehicles {
	#include "ACE_Actions.hpp"
	class SR_Teleport_Para;
	class SR_Paradrop_Terminal: SR_Teleport_Para {
		displayName = "Paradrop Reinsertion Terminal";
		scopeCurator = 2;
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Construction";
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers  {};
		};
		class ACE_Actions  {
			class ACE_MainActions {
				displayName="Paradrop";
				selection="";
				distance=4;
				condition=1;
				insertChildren = "[_target, _player, false, 1000] call sr_support_fnc_paraDropTerminal";
			};
		};
	};
	class SR_Paradrop_Static_Terminal: SR_Paradrop_Terminal {
		displayName = "Paradrop Static Reinsertion Terminal";
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers  {};
		};
		class ACE_Actions  {
			class ACE_MainActions {
				displayName="Paradrop";
				selection="";
				distance=4;
				condition=1;
				insertChildren = "[_target, _player, true, 200] call sr_support_fnc_paraDropTerminal";
			};
		};
	};
	class Land_Laptop_03_olive_F;
	class SR_Laptop_Object: Land_Laptop_03_olive_F {
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers  {};
		};
		class ACE_Actions  {
			class ACE_MainActions {
				displayName = "Interactions";
				distance = 4;
				condition = "true";
				selection = "";
				class pickupHack {
					displayName="Pickup Laptop";
					selection="";
					distance=2;
					condition="true";
					statement="[_target,_player] spawn sr_support_fnc_hackingPickup";
				};
				class restartHack {
					displayName="Restart Hack";
					selection="";
					distance=2;
					condition="_target getVariable ['SR_Hack_Interrupt',false]";
					statement="[_target,_player] spawn sr_support_fnc_hackingReset";
					icon = "a3\ui_f\data\IGUI\Cfg\simpleTasks\types\interact_ca.paa";
				};	
			};
		};
	};
};

class CfgWeapons {
		class WeaponSlotsInfo;
		class CBA_MiscItem_ItemInfo;
		class ACE_ItemCore;
		class SR_Laptop: ACE_ItemCore {
        scope = 2;
		displayName = "Laptop";
		model = "\A3\Structures_F\Items\Electronics\Laptop_F.p3d";
       	picture = "\7R_Support\ui\laptop.paa";
        descriptionShort = "";
        descriptionUse = "";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 50;
        };
    };
}; 
class Extended_PreInit_EventHandlers
{
	class sr_support
	{
		init="call compile preprocessFileLineNumbers '\7R_Support\XEH_preInit.sqf'";
	};
};