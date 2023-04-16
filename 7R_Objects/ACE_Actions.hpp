// Medical Pack Unwrap Action
class Man;
class CAManBase : Man {
	class ACE_SelfActions {
		/*
		class ACE_Equipment {
			class Medical_Unpack {
				displayName = "Unwrap Medical Packs";
				condition = "true";
				statement = "[player] call ace_medical_itemCheck";
				exceptions[] = {};
				priority = 2;
			};
		};
		*/
		// Recall
		class ACE_Equipment  {
			class Recall {
				displayName = "Recall";
				condition = "[_player,SR_RecallPoint] call sr_support_fnc_recallCondition";
				exceptions[] = {"isNotSwimming", "isNotInside"};
				statement = "[_player, SR_RecallPoint] spawn sr_support_fnc_recall";
				priority = 0;
				icon = "a3\ui_f\data\IGUI\Cfg\simpleTasks\types\walk_ca.paa";
			};						
		};
		// Repair Service Point
		class RepairService {
			displayName = "Repair Service";
			condition = "[vehicle _player, _player] call sr_support_fnc_repairCondition";
			exceptions[] = {"isNotInside", "isNotSitting"};
			statement = "[vehicle _player, _player] spawn sr_support_fnc_repair";
			priority = 0;
			icon = "a3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa";
		};
		// Call Signs
		class ACE_TeamManagement {
			class Callsign_Settings {
				displayName = "Set Callsign";
				condition = "leader _player == _player";
				statement = "";
				exceptions[] = {};
				priority = 2;
				icon = "a3\ui_f\data\IGUI\Cfg\simpleTasks\types\radio_ca.paa";
					class InfantryPlatoon {
						displayName = "Infantry Platoon";
						statement = "";
						condition = "";
						exceptions[] = {};
						priority = 1;               
						class PL {
							displayName = "Platoon Lead";
							statement = "[_player, 'PL'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.1;      
						};
						class Alpha{
							displayName = "Alpha Squad";
							statement = "[_player, 'A'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.2;      
						};
						class Bravo{
							displayName = "Bravo Squad";
							statement = "[_player, 'B'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.3;      
						};
						class Charlie{
							displayName = "Charlie Squad";
							statement = "[_player, 'C'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.4;      
						};
						class Delta{
							displayName = "Delta Squad";
							statement = "[_player, 'D'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.5;      
						};
						class Hotelone{
							displayName = "Hotel 1 Squad";
							statement = "[_player, 'H-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.6;      
						};
						class Hoteltwo{
							displayName = "Hotel 2 Squad";
							statement = "[_player, 'H-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.7;      
						};
						class Hotelthree{
							displayName = "Hotel 3 Squad";
							statement = "[_player, 'H-3'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.7;      
						};
						class Hotelfour{
							displayName = "Hotel 4 Squad";
							statement = "[_player, 'H-4'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 1.7;      
						};
					};
				class PlatoonSupport {
						displayName = "Ground Support";
						statement = "";
						condition = "";
						exceptions[] = {};
						priority = 5.1;     
						class PlatoonSupportIfantry {
							displayName = "Infantry";
							statement = "";
							condition = "";
							exceptions[] = {};
							priority = 5;             
							class Sierra1{
								displayName = "Sierra 1";
								statement = "[_player, 'S-1'] spawn sr_fnc_setRank";
								condition = "";
								exceptions[] = {};
								priority = 5.1;      
							};
							class Sierra2{
								displayName = "Sierra 2";
								statement = "[_player, 'S-2'] spawn sr_fnc_setRank";
								condition = "";
								exceptions[] = {};
								priority = 5.2;      
							};
							class Echo1{
								displayName = "Echo 1";
								statement = "[_player, 'E-1'] spawn sr_fnc_setRank";
								condition = "";
								exceptions[] = {};
								priority = 5.3;      
							};
							class Echo2{
								displayName = "Echo 2";
								statement = "[_player, 'H-2'] spawn sr_fnc_setRank";
								condition = "";
								exceptions[] = {};
								priority = 5.4;      
							};
						};
					class PlatoonSupportVics {
						displayName = "Vehicles";
						statement = "";
						condition = "";
						exceptions[] = {};
						priority = 5.2;  
						class Lima1{
							displayName = "Lima 1";
							statement = "[_player, 'L-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.4;      
						};
						class Lima2{
							displayName = "Lima 2";
							statement = "[_player, 'L-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.4;      
						};
						class M1{
							displayName = "Mike 1";
							statement = "[_player, 'M-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.6;      
						};
						class M2{
							displayName = "Mike 2";
							statement = "[_player, 'M-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.6;      
						};
						class M3{
							displayName = "Mike 3";
							statement = "[_player, 'M-3'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.6;      
						};
						class M4{
							displayName = "Mike 4";
							statement = "[_player, 'M-4'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.6;      
						};
						class Fox1{
							displayName = "Foxtrot 1";
							statement = "[_player, 'F-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.7;      
						};
						class Fox2{
							displayName = "Foxtrot 2";
							statement = "[_player, 'F-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.7;      
						};
						class Fox3{
							displayName = "Foxtrot 3";
							statement = "[_player, 'F-3'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.7;      
						};
						class Fox4{
							displayName = "Foxtrot 4";
							statement = "[_player, 'F-4'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 5.7;      
						};
					};
				};	
				class AirPlatoon {
						displayName = "Air Support";
						statement = "";
						condition = "";
						exceptions[] = {};
						priority = 6;               
						class Rodeo1{
							displayName = "Rodeo 1";
							statement = "[_player, 'R-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.1;      
						};
						class Rodeo2{
							displayName = "Rodeo 2";
							statement = "[_player, 'R-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.2;      
						};
						class Rodeo3{
							displayName = "Rodeo 3";
							statement = "[_player, 'R-3'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.3;      
						};
						class Rodeo4{
							displayName = "Rodeo 4";
							statement = "[_player, 'R-4'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.4;      
						};
						class Reaper1{
							displayName = "Reaper 1";
							statement = "[_player, 'RPR-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.4;      
						};
						class Reaper2{
							displayName = "Reaper 2";
							statement = "[_player, 'RPR-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.4;      
						};
						class Reaper3{
							displayName = "Reaper 3";
							statement = "[_player, 'RPR-3'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.4;      
						};
						class Reaper4{
							displayName = "Reaper 4";
							statement = "[_player, 'RPR-4'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.4;      
						};
						class Whiskey1{
							displayName = "Whiskey 1";
							statement = "[_player, 'W-1'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.5;      
						};
						class Whiskey2{
							displayName = "Whiskey 2";
							statement = "[_player, 'W-2'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.6;      
						};
						class Whiskey3{
							displayName = "Whiskey 3";
							statement = "[_player, 'W-3'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.7;      
						};
						class Whiskey4{
							displayName = "Whiskey 4";
							statement = "[_player, 'W-4'] spawn sr_fnc_setRank";
							condition = "";
							exceptions[] = {};
							priority = 6.8;      
						};
					};
				class Command {
					displayName = "Command HQ";
					statement = "[_player, 'HQ'] spawn sr_fnc_setRank";
					condition = "";
					exceptions[] = {};
					priority = 7;               
				};
			};
		};
	};		
};


