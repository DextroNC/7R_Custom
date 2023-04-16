class RscText
{
};
class RscEdit
{
};
class RscFrame
{
};
class RscButton
{
};
class SRAIRBURSTCFG
{
	idd=-1;
	movingenable=0;
	onLoad="uiNamespace setVariable[""AirburstConfigDialog"", _this select 0]";
	class ControlsBackground
	{
		class RscText_1000: RscText
		{
			idc=1000;
			x="0.324687 * safezoneW + safezoneX";
			y="0.313 * safezoneH + safezoneY";
			w="0.134062 * safezoneW";
			h="0.1078 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.5};
		};
		class RscText_1001: RscText
		{
			idc=1001;
			text="Airburst Config";
			x="0.324687 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.134062 * safezoneW";
			h="0.033 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.89999998};
		};
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.329844 * safezoneW + safezoneX";
			y="0.368 * safezoneH + safezoneY";
			w="0.12375 * safezoneW";
			h="0.044 * safezoneH";
			sizeEx="0.9 * GUI_GRID_H";
		};
		class RscText_1002: RscText
		{
			idc=1002;
			text="Value from 50 to 1500m;";
			x="0.329844 * safezoneW + safezoneX";
			y="0.368 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
		};
		class RscText_1003: RscText
		{
			idc=1003;
			x="0.324687 * safezoneW + safezoneX";
			y="0.4175 * safezoneH + safezoneY";
			w="0.134062 * safezoneW";
			h="0.011 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.89999998};
		};
		class RscText_1004: RscText
		{
			idc=1004;
			text="leave empty for no Airburst";
			x="0.329844 * safezoneW + safezoneX";
			y="0.3878 * safezoneH + safezoneY";
			w="0.128906 * safezoneW";
			h="0.022 * safezoneH";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0};
		};
	};
	class Controls
	{
		class RscEdit_1400: RscEdit
		{
			idc=1400;
			x="0.329844 * safezoneW + safezoneX";
			y="0.324 * safezoneH + safezoneY";
			w="0.0721875 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={1,1,1,1};
			colorActive[]={1,1,1,1};
			colorText[]={1,1,1,1};
		};
		class RscButton_1600: RscButton
		{
			idc=1600;
			text=" APPLY";
			x="0.407187 * safezoneW + safezoneX";
			y="0.324 * safezoneH + safezoneY";
			w="0.0464063 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={0.031,0.482,0.031,0.5};
			colorActive[]={0.031,0.482,0.031,0.5};
			action="SR_AirburstRange = (ctrlText 1400);(player getVariable ['SR_AirburstUnit',objNull]) setVariable ['SR_AirburstRange',SR_AirburstRange,true]; closeDialog 0";
		};
		class RscButton_1601: RscButton
		{
			idc=1601;
			text="ESC";
			x="0.432968 * safezoneW + safezoneX";
			y="0.28 * safezoneH + safezoneY";
			w="0.020625 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={0.031,0.482,0.031,0.5};
			colorActive[]={0.031,0.482,0.031,0.5};
			action="closeDialog 0;";
		};
	};
};
