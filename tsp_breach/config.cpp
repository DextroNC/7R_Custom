class CfgPatches {
	class tsp_breach {
		requiredAddons[] = {"cba_common", "ace_explosives"};
		units[] = {};
	};
};

//-- FUNCTIONS
class Extended_PreInit_EventHandlers {class tsp_breach {init = "call compile preProcessFileLineNumbers '\tsp_breach\cba.sqf'";};}; 
class CfgFunctions {class tsp_breach {class functions {class functions {file = "tsp_breach\functions.sqf"; preInit = true;};class init {file = "tsp_breach\init.sqf"; postInit = true;};};};};

//-- FAKE WALLS
class CfgVehicles {	
	class Items_base_F;
	class tsp_breach_wall: Items_base_F {
		scope = 2;
		displayName = "Fake Wall"; 
		model = "tsp_breach\wall.p3d";
	};
};

//-- ITEMS
class CfgWeapons {
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class tsp_paperclip: CBA_MiscItem {
		scope = 2;
		displayName = "Paperclip";
		picture = "\tsp_breach\gui\paperclip.paa";
		model = "tsp_breach\paperclip.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
			scope = 0;
			type = 302;
		};
    };
	class tsp_lockpick: tsp_paperclip {
		displayName = "Lock Pick Kit";
		picture = "\tsp_breach\gui\lockpick.paa";
		model = "tsp_breach\lockpick.p3d";
		class ItemInfo: ItemInfo {mass = 10;};
    };
};