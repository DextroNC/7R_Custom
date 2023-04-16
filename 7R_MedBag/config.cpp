class CfgPatches
{
	class FSGm_MedicBag
	{
		name = "7R Med Bag";
		author = "Dextro";
		url = "https://www.7th-ranger.com";
		units[] = {"SR_MedBag"};
		weapons[] = {"SR_ItemMedBag"};
		requiredVersion = 1.0;
		requiredAddons[] = {"SevenR_Objects"};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class SR_Place_MedicBag
				{
					displayName = "Place Medical Bag";
					condition = "[_player,'SR_ItemMedBag'] call ace_common_fnc_hasItem && [_player, 2] call ace_medical_treatment_fnc_isMedic";
					//exceptions = {"notOnMap","isNotHandcuffed", "isNotSurrendering", "isNotSwimming", "isNotOnLadder"};
					statement = "[_player, 'SR_ItemMedBag', 'SR_MedBag'] call SR_MedBag_fnc_placeMedBag";
					icon = "\7R_MedBag\ui\MedBag.paa";
					showDisabled = 0;
					priority = 2.500000;
				};
			};
		};
	};
	class SR_Medical_Empty;
	class SR_MedBag: SR_Medical_Empty {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Dextro";
		vehicleClass = "Ammo";
		displayName = "FSG Medic Bag";
		model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_open_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FirstAidKit_01_open_F.jpg";
		icon = "iconCrateWpns";
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 5;
				condition = "true";
				class SR_Pickup {
					displayName = "Pick Up";
					distance = 5;
					condition = "true";
					statement = "[_player,_target,'SR_ItemMedBag'] call SR_MedBag_fnc_pickupMedBag";
					showDisabled = 0;
					priority = 5;
				};
			};
		};
		// Dragging
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;

        // Carrying
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_carryDirection = 0;
	};
};

class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class SR_ItemMedBag: ACE_ItemCore {
		displayName = "Medical Bag";
		scope = 2;
		author = "Dextro";
		model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FirstAidKit_01_closed_F.jpg";
		picture = "\7R_MedBag\ui\MedBag.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 45;
		};
	};
};

class CfgFunctions
{
	class SR_MedBag
	{
		class MedBag
		{
			file = "\7R_MedBag\functions";
			class placeMedBag {};
			class pickupMedBag {};
		};
	};
};