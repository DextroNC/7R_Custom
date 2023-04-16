// Medical Pack Unwrap Action
class Man;
class CAManBase : Man {
	class ACE_SelfActions {
		// Recall
		class ACE_Equipment  {
			class Hacking {
				displayName = "Start Hacking";
				condition = "[_player] call sr_support_fnc_hackingCondition";
				exceptions[] = {"isNotSwimming", "isNotInside"};
				statement = "[_player] spawn sr_support_fnc_hackingStart";
				priority = 0;
				icon = "a3\ui_f\data\IGUI\Cfg\simpleTasks\types\download_ca.paa";
			};						
		};
	};
};


