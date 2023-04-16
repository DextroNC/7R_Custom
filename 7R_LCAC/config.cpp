class CfgPatches
{
	class SR_LCAC
	{
		name = "7R LCAC";
		units[]={};
		weapons[]={};
		version="0.0.1";
		requiredVersion=0.1;
		requiredAddons[]={
			"Test_boat_F"
		};
		author="Dextro";
	};
};

class CfgVehicles {
	class Burnes_LCAC_Base;
	class Burnes_LCAC_1: Burnes_LCAC_Base
	{
		class UserActions
		{
			class front_ramp_down
			{
				userActionID=101;
				displayName="lower front ramp";
				displayNameDefault="lower front ramp";
				position="mph_axis";
				priority=1.5;
				radius=1.8;
				animPeriod=3;
				onlyForPlayer=0;
				condition="(this animationPhase ""FrontRamp"" == 0)  and (vehicle player == vehicle this)";
				statement="this animate [""FrontRamp"",1];this animate [""FrontRampRubber"",-0.7]";
			};
			class rear_ramp_down
			{
				userActionID=102;
				displayName="lower rear ramp";
				displayNameDefault="lower rear ramp";
				position="mph_axis";
				priority=1.5;
				radius=1.8;
				animPeriod=3;
				onlyForPlayer=0;
				condition="(this animationPhase ""rearRamp"" == 0)  and (vehicle player == vehicle this)";
				statement="this animate [""rearRamp"",1]";
			};
			class front_ramp_up
			{
				userActionID=103;
				displayName="raise front ramp";
				displayNameDefault="raise front ramp";
				position="mph_axis";
				priority=1.5;
				radius=1.8;
				animPeriod=3;
				onlyForPlayer=0;
				condition="(this animationPhase ""FrontRamp"" == 1) and (vehicle player == vehicle this)";
				statement="this animate [""FrontRamp"",0];this animate [""FrontRampRubber"",0]";
			};
			class rear_ramp_up
			{
				userActionID=110;
				displayName="raise rear ramp";
				displayNameDefault="raise rear ramp";
				position="mph_axis";
				priority=1.5;
				radius=1.8;
				animPeriod=3;
				onlyForPlayer=0;
				condition="(this animationPhase ""rearRamp"" == 1) and (vehicle player == vehicle this)";
				statement="this animate [""rearRamp"",0];";
			};
			class loadcargo
			{
				onlyforplayer="false";
				displayName="load cargo";
				position="loadpoint";
				radius=20;
				showWindow=0;
				condition="((vehicle player != vehicle this) and (vehicle player != player) and (speed vehicle this < 5))";
				statement="[this, vehicle player, player] execVM ""Burnes_LCAC\attach.sqf""";
			};
			class unloadcargo
			{
				onlyforplayer="false";
				displayName="unload cargo";
				position="loadpoint";
				radius=20;
				showWindow=0;
				condition="(vehicle player != vehicle this) and (vehicle player != player)";
				statement="[this, vehicle player, player] execVM ""Burnes_LCAC\detach.sqf""";
			};
			class ClimbAboard
			{
				userActionID=106;
				displayName="Climb Aboard LCAC";
				displayNameDefault="Climb Aboard LCAC";
				position="entryPoint";
				priority=1;
				radius=25;
				animPeriod=0.1;
				onlyForPlayer=0;
				condition="Vehicle Player != Vehicle this";
				statement="player moveincargo this";
			};
			class prep_for_load
			{
				userActionID=107;
				displayName="prep for loading";
				displayNameDefault="prep for loading";
				position="mph_axis";
				priority=1;
				radius=1.8;
				animPeriod=0.1;
				onlyForPlayer=0;
				condition="vehicle player == vehicle this";
				statement="this animate [""rearRamp"",1];this animate [""FrontRamp"",1];this animate [""FrontRampRubber"",-0.7]";
			};
			class prep_for_movement
			{
				userActionID=108;
				displayName="prep for movement";
				displayNameDefault="prep for movement";
				position="mph_axis";
				priority=1;
				radius=1.8;
				animPeriod=0.1;
				onlyForPlayer=0;
				condition="vehicle player == vehicle this";
				statement="this animate [""rearRamp"",0];this animate [""FrontRamp"",0];this animate [""FrontRampRubber"",0]";
			};
			class DeflateAnimAction1
			{
				userActionID=121;
				displayName="Deflate Air Cushion";
				displayNameDefault="Deflate Air Cushion";
				position="mph_axis";
				priority=1;
				radius=1.8;
				animPeriod=0.1;
				onlyForPlayer=0;
				condition="(this animationPhase ""DeflateAnim"" == 0) and (vehicle player == vehicle this)";
				statement="this animate [""DeflateAnim"",-1];this animate [""DeflateAnim2"",-1];this setfuel 0";
			};
			class DeflateAnimAction2
			{
				userActionID=122;
				displayName="Inflate Air Cushion";
				displayNameDefault="Inflate Air Cushion";
				position="mph_axis";
				priority=1;
				radius=1.8;
				animPeriod=0.1;
				onlyForPlayer=0;
				condition="(this animationPhase ""DeflateAnim"" == -1) and (vehicle player == vehicle this)";
				statement="this animate [""DeflateAnim"",0];this animate [""DeflateAnim2"",0];this setfuel 1";
			};
		};
	};
};