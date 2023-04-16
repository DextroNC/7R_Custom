class CfgWeapons {
	class Launcher_Base_F;
	class ACE_ItemCore;
	class WeaponSlotsInfo;
	class CBA_MiscItem_ItemInfo;
	/*
	class SR_RallyTent : Launcher_Base_F
	{
		displayName = "[7R] Rally Point Tent";
		descriptionShort = "Required to Establish a Rally Point";
		picture = "\7R_Objects\ui\tentFoldedKhaki.paa";
		model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_khaki_F.p3d";
		author = "Dextro";
		magazines[] = {};
		canLock = 0;
		tBody = 100;
		value = 4;
		type = 4;
		simulation = "Weapon";
		scope = 2;
		class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 10;
		};
	};
	*/
	/*
	class SR_Beacon: ACE_ItemCore
	{
		author = "Dextro";
        scope = 2;
        displayName = "[7R] Emergency Beacon";
		model = "\A3\Structures_F\Items\Electronics\PortableLongRangeRadio_F.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
		};
	};
	*/
	class SR_Flare_Pack: ACE_ItemCore
	{
		author = "Dextro";
        scope = 2;
        displayName = "[7R] Flare Pack";
		picture = "\7R_Objects\ui\flare.paa";
		descriptionShort = "Contains 3x UGL Flares";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 12;
		};
	};
		class SR_Smoke_Pack: ACE_ItemCore
	{
		author = "Dextro";
        scope = 2;
        displayName = "[7R] Smoke Pack";
		picture = "\7R_Objects\ui\smoke.paa";
		descriptionShort = "Contains 3x UGL Smokes";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 12;
		};
	};
		class SR_HE_Pack: ACE_ItemCore
	{
		author = "Dextro";
        scope = 2;
        displayName = "[7R] HE Pack";
		picture = "\7R_Objects\ui\he.paa";
		descriptionShort = "Contains 4x UGL HE";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 16;
		};
	};
	class SR_PAK: ACE_ItemCore {
		displayName ="[7R] Personal Aid Kit";
		scope = 2;
		picture = "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa";
		model = "\A3\Weapons_F\Items\FirstAidkit";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 12;
		};
	};
	class SR_MAK: ACE_ItemCore {
		displayName ="[7R] Medical Aid Kit";
		scope = 2;
		model = "\A3\Weapons_F\Items\Medikit";
		picture = "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo  {
            mass = 40;
		};
	};
	class SR_Bandage_Pack: ACE_ItemCore {
		displayName ="[7R] Bandage Pack";
		scope = 2;
		descriptionShort = "Bandage Resupply Package containing 10 Bandages.";
		descriptionUse = "";
		model = "\A3\Structures_F_EPA\Items\Medical\Antibiotic_F.p3d";
		picture = "\7R_Objects\ui\band.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo  {
            mass = 12;
		};
	};
	class SR_Medicine_Pack: ACE_ItemCore {
		displayName ="[7R] Medicine Pack";
		scope = 2;
		descriptionShort = "Medicine Resupply Package containing 5 Morphine and 5 Epinephrine.";
		descriptionUse = "";
		model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
		picture = "\7R_Objects\ui\meds.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo  {
            mass = 10;
		};
	};
		class SR_BloodIV_Pack: ACE_ItemCore {
		displayName ="[7R] BloodIV Pack";
		scope = 2;
		descriptionShort = "BloodIV Resupply Package containing 2l of BloodIV.";
		descriptionUse = "";
		model = "\A3\Structures_F_EPA\Items\Medical\BloodBag_F.p3d";
		picture = "\7R_Objects\ui\blood.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo  {
            mass = 20;
		};
	};
	/*
	class SR_Atropine_Pack: ACE_ItemCore {
		displayName ="[7R] Atropine Pack";
		scope = 2;
		descriptionShort = "Atropine Resupply Package containing 10 Atropine Autoinjectors.";
		descriptionUse = "";
		model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
		picture = "\7R_Objects\ui\atro.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo  {
            mass = 10;
		};
	};
	*/
	class SR_Utility_Pack: ACE_ItemCore {
		displayName ="[7R] Utility Pack";
		scope = 2;
		descriptionShort = "Medical Utilities Package containing 8 Splints and 2 Tourniquets.";
		descriptionUse = "";
		model = "\A3\Props_F_Oldman\Items\Antimalaricum_01_F.p3d";
		picture = "\7R_Objects\ui\utility.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo  {
            mass = 10;
		};
	};
};

