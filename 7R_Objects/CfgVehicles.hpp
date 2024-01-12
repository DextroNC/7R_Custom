class CfgVehicles {		
	#include "ACE_Actions.hpp"
	class FlagCarrier_Asym;
	class 7R_flag: FlagCarrier_Asym
	{
		author = "[7R] Dextro";
		_generalMacro = "7R_flag";
		scope = 2;
		scopeCurator = 2;
		displayName = "[7R] Flag";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Signs";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\7R_Objects\flag\7R_Flag.paa'";
		};
	};
	// Small Signs
	class SignAd_SponsorS_F;
	class 7R_Sign_100m: SignAd_SponsorS_F
	{
		author = "[7R] Dextro";
		_generalMacro = "7R_Sign_100m";
		scope = 2;
		scopeCurator = 0;
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Signs";
		displayName = "[7R] Sign 100m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_100m.paa"};	
	};	
	class 7R_Sign_200m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_200m";
		displayName = "[7R] Sign 200m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_200m.paa"};	
	};	
	class 7R_Sign_300m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_300m";
		displayName = "[7R] Sign 300m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_300m.paa"};	
	};	
	class 7R_Sign_400m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_400m";
		displayName = "[7R] Sign 400m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_400m.paa"};	
	};	
	class 7R_Sign_500m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_500m";
		displayName = "[7R] Sign 500m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_500m.paa"};	
	};	
	class 7R_Sign_600m: 7R_Sign_100m
	{
		author = "[7R] Dextro";
		_generalMacro = "7R_Sign_600m";
		scope = 2;
		scopeCurator = 0;
		displayName = "[7R] Sign 600m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_600m.paa"};	
	};	
	class 7R_Sign_700m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_700m";
		displayName = "[7R] Sign 700m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_700m.paa"};	
	};	
	class 7R_Sign_800m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_800m";
		displayName = "[7R] Sign 800m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_800m.paa"};	
	};	
	class 7R_Sign_900m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_900m";
		displayName = "[7R] Sign 900m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_900m.paa"};	
	};	
	class 7R_Sign_1000m: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_1000m";
		displayName = "[7R] Sign 1000m";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1000m.paa"};	
	};	
	class 7R_Sign_HeloSpawns: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_HeloSpawns";
		displayName = "[7R] Helicopter Spawns";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_HeloSpawns.paa"};	
	};	
	class 7R_Sign_Maneuver: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Maneuver";
		displayName = "[7R] Maneuver Range";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Maneuver.paa"};	
	};	
	class 7R_Sign_Medical: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Medical";
		displayName = "[7R] Medical Station";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Medical.paa"};	
	};	
	class 7R_Sign_MOUT: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_MOUT";
		displayName = "[7R] MOUT House";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_MOUT.paa"};	
	};	
	class 7R_Sign_PlaneSpawn: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_PlaneSpawn";
		displayName = "[7R] Plane Spawn";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_PlaneSpawn.paa"};	
	};	
	class 7R_Sign_Shooting: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Shooting";
		displayName = "[7R] Shooting Range";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Shooting.paa"};	
	};	
	class 7R_Sign_Spotting: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Spotting";
		displayName = "[7R] Spotting Range";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Spotting.paa"};	
	};	
	class 7R_Sign_Zeroing: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Zeroing";
		displayName = "[7R] Zeroing Range";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Zeroing.paa"};	
	};	
	class 7R_Sign_Vehicle: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Vehicle";
		displayName = "[7R] Vehicle Range";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Vehicle.paa"};	
	};	
	class 7R_Sign_ParaInsertion: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_ParaInsertion";
		displayName = "[7R] Parachute Insertion";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_ParaInsertion.paa"};	
	};	
	class 7R_Sign_Teleporter: 7R_Sign_100m
	{
		_generalMacro = "7R_Sign_Teleporter";
		displayName = "[7R] Teleporter";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Teleporter.paa"};	
	};	
	// Large Signs
	class SignAd_Sponsor_F;
	class 7R_Sign_AirborneSchool: SignAd_Sponsor_F
	{
		author = "[7R] Dextro";
		_generalMacro = "7R_Sign_AirborneSchool";
		scope = 2;
		scopeCurator = 0;
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Signs";
		displayName = "[7R] Airborne School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_AirborneSchool.paa"};	
	};	
	class 7R_Sign_Bootcamp: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_Bootcamp";
		displayName = "[7R] Bootcamp";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_Bootcamp.paa"};	
	};	
	class 7R_Sign_CQBSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_CQBSchool";
		displayName = "[7R] CQB School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_CQBSchool.paa"};	
	};	
	class 7R_Sign_EODSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_EODSchool";
		displayName = "[7R] EOD School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_EODSchool.paa"};	
	};	
	class 7R_Sign_FlightSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_FlightSchool";
		displayName = "[7R] Flight School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_FlightSchool.paa"};	
	};	
	class 7R_Sign_LeaderSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_LeaderSchool";
		displayName = "[7R] Leader School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_LeaderSchool.paa"};	
	};	
	class 7R_Sign_RangerSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_RangerSchool";
		displayName = "[7R] Ranger School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_RangerSchool.paa"};	
	};	
	class 7R_Sign_SniperSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_SniperSchool";
		displayName = "[7R] Sniper School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_SniperSchool.paa"};	
	};	
	class 7R_Sign_VehicleSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Sign_VehicleSchool";
		displayName = "[7R] Vehicle School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_VehicleSchool.paa"};	
	};	
	class 7R_Signs_HeavyWeaponsSchool: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Signs_HeavyWeaponsSchool";
		displayName = "[7R] Heavy Weapons School";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_HeavyWeaponsSchool.paa"};	
	};	
	class 7R_Signs_TOC: 7R_Sign_AirborneSchool
	{
		_generalMacro = "7R_Signs_TOC";
		displayName = "[7R] Tactical Operations Center";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_TOC.paa"};	
	};	
	// Info Board Signs
	class Info_Board_EP1;
	class 7R_Sign_100 : Info_Board_EP1
	{
		author = "[7R] Dextro";
		_generalMacro = "7R_Sign_100";
		scope = 2;
		scopeCurator = 0;
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Signs";
		displayName = "[7R] Sign 100";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_100.paa"};			
	};
	class 7R_Sign_200 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_200";
		displayName = "[7R] Sign 200";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_200.paa"};		
	};
	class 7R_Sign_300 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_300";
		displayName = "[7R] Sign 300";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_300.paa"};		
	};
	class 7R_Sign_400 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_400";
		displayName = "[7R] Sign 400";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_400.paa"};		
	};
	class 7R_Sign_500 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_500";
		displayName = "[7R] Sign 500";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_500.paa"};		
	};
	class 7R_Sign_600 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_600";
		displayName = "[7R] Sign 600";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_600.paa"};		
	};
	class 7R_Sign_700 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_700";
		displayName = "[7R] Sign 700";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_700.paa"};		
	};
	class 7R_Sign_800 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_800";
		displayName = "[7R] Sign 800";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_800.paa"};		
	};
	class 7R_Sign_900 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_900";
		displayName = "[7R] Sign 900";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_900.paa"};		
	};
	class 7R_Sign_1000 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_1000";
		displayName = "[7R] Sign 1000";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1000.paa"};		
	};
	class 7R_Sign_1100 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_1100";
		displayName = "[7R] Sign 1100";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1100.paa"};		
	};
	class 7R_Sign_1200 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_1200";
		displayName = "[7R] Sign 1200";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1200.paa"};		
	};
	class 7R_Sign_1300 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_1300";
		displayName = "[7R] Sign 1300";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1300.paa"};		
	};
	class 7R_Sign_1400 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_1400";
		displayName = "[7R] Sign 1400";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1400.paa"};		
	};
	class 7R_Sign_1500 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_1500";
		displayName = "[7R] Sign 1500";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_1500.paa"};		
	};
	class 7R_Sign_2000 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_2000";
		displayName = "[7R] Sign 2000";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_2000.paa"};		
	};
	class 7R_Sign_2500 : 7R_Sign_100
	{
		_generalMacro = "7R_Sign_2500";
		displayName = "[7R] Sign 2500";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\7R_Signs_2500.paa"};		
	};
	// Range Signs
	class Sign_MP_op;
	class 7R_Range_01: Sign_MP_op {
		author = "[7R] Dextro";
		_generalMacro = "7R_Range_01";
		scope = 2;
		scopeCurator = 0;
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Signs";
		displayName = "[7R] Range 01";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\01.jpg"};		
	};
	class 7R_Range_02 : 7R_Range_01 {
		_generalMacro = "7R_Range_02";
		displayName = "[7R] Range 02";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\02.jpg"};
	};
	class 7R_Range_03 : 7R_Range_01 {
		_generalMacro = "7R_Range_03";
		displayName = "[7R] Range 03";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\03.jpg"};
	};
	class 7R_Range_04 : 7R_Range_01 {
		_generalMacro = "7R_Range_04";
		displayName = "[7R] Range 04";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\04.jpg"};
	};
	class 7R_Range_05 : 7R_Range_01 {
		_generalMacro = "7R_Range_05";
		displayName = "[7R] Range 05";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\05.jpg"};
	};
	class 7R_Range_06 : 7R_Range_01 {
		_generalMacro = "7R_Range_06";
		displayName = "[7R] Range 06";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\06.jpg"};
	};
	class 7R_Range_07 : 7R_Range_01 {
		_generalMacro = "7R_Range_07";
		displayName = "[7R] Range 07";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\07.jpg"};
	};
	class 7R_Range_08 : 7R_Range_01 {
		_generalMacro = "7R_Range_08";
		displayName = "[7R] Range 08";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\08.jpg"};
	};
	class 7R_Range_09 : 7R_Range_01 {
		_generalMacro = "7R_Range_09";
		displayName = "[7R] Range 09";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\09.jpg"};
	};
	class 7R_Range_10 : 7R_Range_01 {
		_generalMacro = "7R_Range_10";
		displayName = "[7R] Range 10";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\10.jpg"};
	};
	class 7R_Range_11 : 7R_Range_01 {
		_generalMacro = "7R_Range_11";
		displayName = "[7R] Range 11";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\11.jpg"};
	};
	class 7R_Range_12 : 7R_Range_01 {
		_generalMacro = "7R_Range_12";
		displayName = "[7R] Range 12";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\12.jpg"};
	};
	class 7R_Range_13 : 7R_Range_01 {
		_generalMacro = "7R_Range_13";
		displayName = "[7R] Range 13";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\13.jpg"};
	};
	class 7R_Range_14 : 7R_Range_01 {
		_generalMacro = "7R_Range_14";
		displayName = "[7R] Range 14";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\14.jpg"};
	};
	class 7R_Range_15 : 7R_Range_01 {
		_generalMacro = "7R_Range_15";
		displayName = "[7R] Range 15";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\15.jpg"};
	};
	class 7R_Range_16 : 7R_Range_01 {
		_generalMacro = "7R_Range_16";
		displayName = "[7R] Range 16";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\16.jpg"};
	};
	class 7R_Range_17 : 7R_Range_01 {
		_generalMacro = "7R_Range_17";
		displayName = "[7R] Range 17";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\17.jpg"};
	};
	class 7R_Range_18 : 7R_Range_01 {
		_generalMacro = "7R_Range_18";
		displayName = "[7R] Range 18";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\18.jpg"};
	};
	class 7R_Range_19 : 7R_Range_01 {
		_generalMacro = "7R_Range_19";
		displayName = "[7R] Range 19";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\19.jpg"};
	};
	class 7R_Range_20 : 7R_Range_01 {
		_generalMacro = "7R_Range_20";
		displayName = "[7R] Range 20";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\range\20.jpg"};
	};
	// Targets
	class TargetBootcampHumanSimple_F;
	class SR_PopUpTarget_Big: TargetBootcampHumanSimple_F {
			editorPreview = "cup\terrains\cup_terrains_editor_c\data\targetpopuptarget.jpg";
			icon = "\Ca\misc\data\icons\i_terc_CA.paa";
			model = "\Ca\Structures\Misc\Armory\armor_popuptarget\popUpTarget.p3d";
			displayName = "Target Big";
			armor = 1000;
			scopeCurator = 2;   
	};
	// Large Pop Up
	class SR_LargeTarget_HD : SR_PopUpTarget_Big {
		_generalMacro = "SR_LargeTarget_HD";
		displayName = "Large Target High Damage";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Target";
		class EventHandlers
		{
			hit = "_this call sr_fnc_heavyTarget;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_LargeTarget_8 : SR_PopUpTarget_Big {
		_generalMacro = "SR_LargeTarget_8";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Target";
		displayName = "Large Target 8 shots";
		armor = 500;
		class EventHandlers
		{
			hit = "[_this, 8] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_LargeTarget_10 : SR_LargeTarget_8 {
		_generalMacro = "SR_LargeTarget_10";
		displayName = "Large Target 10 shots";
		class EventHandlers
		{
			hit = "[_this, 10] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	// Small Pop Up
	class SR_PopUpTarget_1: TargetBootcampHumanSimple_F {
		_generalMacro = "SR_PopUpTarget_1";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Target";
		armor = 250;
		scopeCurator = 2;  
		displayName = "Pop up Target 1 shot";
		class EventHandlers
		{
			hit = "[_this, 1] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_Civ1: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_Civ1";
		displayName = "Pop up Target Civilian 1";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\TargetP_Civ2_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Mark\Training\Data\Target_Civ2_CO","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
		class EventHandlers
		{
			hit = "[_this, 1,true] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_Civ2: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_Civ2";
		displayName = "Pop up Target Civilian 2";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\TargetP_Civ_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Mark\Training\Data\Target_Civ_CO","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
		class EventHandlers
		{
			hit = "[_this, 1,true] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_2: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_2";
		displayName = "Pop up Target 2 shots";
		class EventHandlers
		{
			hit = "[_this, 2] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_3: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_3";
		displayName = "Pop up Target 3 shots";
		class EventHandlers
		{
			hit = "[_this, 3] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_5: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_5";
		displayName = "Pop up Target 5 shots";
		class EventHandlers
		{
			hit = "[_this, 5] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_8: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_8";
		displayName = "Pop up Target 8 shots";
		class EventHandlers
		{
			hit = "[_this, 8] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	class SR_PopUpTarget_10: SR_PopUpTarget_1 {
		_generalMacro = "SR_PopUpTarget_10";
		displayName = "Pop up Target 10 shots";
		class EventHandlers
		{
			hit = "[_this, 10] call sr_fnc_target;";
			init = "params ['_entity']; _entity addEventhandler ['HandleDamage',{0}];";
		};
	};
	// Termials
	class Land_InfoStand_V2_F;
	class SR_Teleport_Terminal: Land_InfoStand_V2_F {
		_generalMacro = "SR_Teleport_Terminal";
		displayName = "Teleport Terminal";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Terminal";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\terminals\teleport.paa"};
	};
	class SR_Teleport_Para: SR_Teleport_Terminal {
		_generalMacro = "SR_Teleport_Para";
		displayName = "Paradrop Terminal";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\terminals\para.paa"};
	};
	class SR_Teleport_Admin: SR_Teleport_Terminal {
		_generalMacro = "SR_Teleport_Admin";
		displayName = "Admin Terminal";
		hiddenSelectionsTextures[] = {"\7R_Objects\signs\terminals\admin.paa"};
	};
	// Ammo Boxes
	class Box_NATO_Ammo_F;
	class SR_Ammo_Box_Empty: Box_NATO_Ammo_F {
		_generalMacro = "SR_Ammo_Box_Empty";
		displayName = "Ammo Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_Grenades_F;
	class SR_Grenade_Box_Empty: Box_NATO_Grenades_F {
		_generalMacro = "SR_Grenade_Box_Empty";
		displayName = "Grenade Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_Support_F;
	class SR_Support_Box_Empty: Box_NATO_Support_F {
		_generalMacro = "SR_Support_Box_Empty";
		displayName = "Support Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_AmmoOrd_F;
	class SR_Explosives_Box_Empty: Box_NATO_AmmoOrd_F {
		_generalMacro = "SR_Explosives_Box_Empty";
		displayName = "Explosives Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_WpsSpecial_F;
	class SR_Special_Box_Empty: Box_NATO_WpsSpecial_F {
		_generalMacro = "SR_Special_Box_Empty";
		displayName = "Special Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_WpsLaunch_F;
	class SR_Launcher_Box_Empty: Box_NATO_WpsLaunch_F {
		_generalMacro = "SR_Launcher_Box_Empty";
		displayName = "Launcher Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_Wps_F;
	class SR_basic_Box_Empty: Box_NATO_Wps_F {
		_generalMacro = "SR_basic_Box_Empty";
		displayName = "Basic Weapon Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};

	class Box_NATO_Equip_F;
	class SR_Equipment_Box_Empty: Box_NATO_Equip_F {
		_generalMacro = "SR_Equipment_Box_Empty";
		displayName = "Equipment Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Box_NATO_Uniforms_F;
	class SR_Uniform_Box_Empty: Box_NATO_Uniforms_F {
		_generalMacro = "SR_Uniform_Box_Empty";
		displayName = "Uniform Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class B_supplyCrate_F;
	class SR_Supply_Crate_Empty: B_supplyCrate_F {
		_generalMacro = "SR_Supply_Crate_Empty";
		displayName = "Supply Crate";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 3;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class B_CargoNet_01_ammo_F;
	class SR_Cargo_Net_Empty: B_CargoNet_01_ammo_F {
		_generalMacro = "SR_Cargo_Net_Empty";
		displayName = "Cargo Net";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 6;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class ACE_medicalSupplyCrate;
	class SR_Medical_Empty: ACE_medicalSupplyCrate {
		_generalMacro = "SR_Medical_Empty";
		displayName = "Medical Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_cargo_size = 1;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
	};
	class Land_PlasticCase_01_large_F;
	class SR_CSW_Supplies: Land_PlasticCase_01_large_F {
		_generalMacro = "SR_CSW_Supplies";
		displayName = "Crew Served Weapons Supply Box";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Boxes";
		ace_rearm_defaultSupply = 500;
		ace_cargo_size = 1;
		ace_cargo_size = 1;
		maximumLoad = 0;
	};
	// Pads
	class Land_HelipadEmpty_F;
	class SR_SupplyPadEmpty: Land_HelipadEmpty_F {
		_generalMacro = "SR_SupplyPadEmpty";
		displayName = "Supply Pad (Invisible)";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Terminal";
	};
	class Land_HelipadSquare_F;
	class SR_SupplyPad: Land_HelipadSquare_F {
		_generalMacro = "SR_SupplyPad";
		displayName = "Supply Pad";
		editorCategory = "SR_Objects_Cat";
		editorSubcategory = "EdSubcat_SR_Terminal";
	};
	// Infantry
	class B_Soldier_F;
	class SR_Operator: B_Soldier_F {
		scope = 2;
		displayName = "Operator";
		Items[] = {};
		linkedItems[] = {"ItemMap","ItemWatch"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		RespawnItems[] = {};
		respawnLinkedItems[] = {"ItemMap","ItemWatch"};
		respawnMagazines[] = {};
		editorCategory = "SR_Units_Cat";
		editorSubcategory = "EdSubcat_SR_Units";
		role = "Rifleman";
	};
	class SR_Crewman: B_Soldier_F {
		scope = 2;
		displayName = "Crewman";
		Items[] = {};
		linkedItems[] = {"ItemMap","ItemWatch"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		RespawnItems[] = {};
		respawnLinkedItems[] = {"ItemMap","ItemWatch"};
		respawnMagazines[] = {};
		editorCategory = "SR_Units_Cat";
		editorSubcategory = "EdSubcat_SR_Units";
		role = "Rifleman";
	};
	class SR_PlatoonLeader: SR_Operator {
		displayName = "Platoon Leader";
		icon = "iconManOfficer";
		class SpeechVariants {
			class Default {
				speechPlural[] = {"veh_infantry_officer_p"};
				speechSingular[] = {"veh_infantry_officer_s"};
			};
		};
		textPlural = "officers";
		textSingular = "officer";
	};
	class SR_SquadLeader: SR_Operator {
		displayName = "Squad Leader";
		icon = "iconManLeader";
	};
	class SR_CrewLeader: SR_Crewman {
		displayName = "Crew Leader";
		icon = "iconManLeader";
	};
	class SR_PlatoonSgt: SR_Operator {
		displayName = "Platoon Sergeant";
		icon = "iconManLeader";
	};
	class B_medic_F;
	class SR_Medic: B_medic_F {
		displayName = "Medic";
		Items[] = {};
		linkedItems[] = {"ItemMap","ItemWatch"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		RespawnItems[] = {};
		respawnLinkedItems[] = {"ItemMap","ItemWatch"};
		respawnMagazines[] = {};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
		editorCategory = "SR_Units_Cat";
		editorSubcategory = "EdSubcat_SR_Units";
	};
	class B_Fighter_Pilot_F;
	class SR_Pilot: B_Fighter_Pilot_F {
		displayName = "Fixed-Wing Pilot";
		Items[] = {};
		linkedItems[] = {"ItemMap","ItemWatch"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		RespawnItems[] = {};
		respawnLinkedItems[] = {"ItemMap","ItemWatch"};
		respawnMagazines[] = {};
		role = "Crewman";
		editorCategory = "SR_Units_Cat";
		editorSubcategory = "EdSubcat_SR_Units";
		class SpeechVariants {
			class Default {
				speechPlural[] = {"veh_infantry_pilot_p"};
				speechSingular[] = {"veh_infantry_pilot_s"};
			};
		};
		textPlural = "pilots";
		textSingular = "pilot";
	};
	class B_Helipilot_F;
	class SR_HeliPilot: B_Helipilot_F {
		displayName = "Helicopter Pilot";
		Items[] = {};
		linkedItems[] = {"ItemMap","ItemWatch"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		RespawnItems[] = {};
		respawnLinkedItems[] = {"ItemMap","ItemWatch"};
		respawnMagazines[] = {};
		role = "Crewman";
		editorCategory = "SR_Units_Cat";
		editorSubcategory = "EdSubcat_SR_Units";
		class SpeechVariants {
			class Default {
				speechPlural[] = {"veh_infantry_pilot_p"};
				speechSingular[] = {"veh_infantry_pilot_s"};
			};
		};
		textPlural = "pilots";
		textSingular = "pilot";

	}; 
	class SR_HeliCrewman: SR_HeliPilot {
		displayName = "Helicopter Crewman";
	};
	class O_Soldier_F;
	class SR_Training_OPFOR: O_Soldier_F {
		scope = 2;							
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Training Operator";
		uniformClass = "U_O_R_Gorka_01_black_F";
		Items[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacVest_blk","H_PASGT_basic_black_F","G_Balaclava_lowprofile","ItemMap","ItemWatch"};
		weapons[] = {"arifle_SPAR_01_blk_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_F","Throw","Put"};
		RespawnItems[] = {"FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemWatch"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag"};
		editorCategory = "SR_Units_Cat";
		editorSubcategory = "EdSubcat_SR_Units";
		role = "Rifleman";
	};
};