#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class SevenR_Objects
	{
		name= "7R Objects";
		units[]= {};
		weapons[]={};
		version="0.0.2";
		requiredVersion=1.5599999;
		requiredAddons[]= {};
		author="Dextro";
		authorUrl="http://orbitalstrikeforce.com/";
	};
};

#include "CfgMarkerColors.hpp"
#include "CfgMarkers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class CfgFunctions
{
	class SR
	{
		class objects
		{
			file = "\7R_Objects\functions";
			class inventoryInit {
				postInit = 1;
			};
			class itemCheck {};
			class compCheck {};
			class target {};
			class heavyTarget {};
			class setRank {};
		};
	};
};

class CfgEditorCategories
{
	class SR_Objects_Cat
	{
		displayName = "7R Objects"; // Name visible in the list
	};
	class SR_Units_Cat
	{
		displayName = "7R Units"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_SR_Target
	{
		displayName = "7R Targets";
	};
	class EdSubcat_SR_Signs
	{
		displayName = "7R Signs";
	};
	class EdSubcat_SR_Terminal
	{
		displayName = "7R Terminals";
	};
	class EdSubcat_SR_Boxes
	{
		displayName = "7R Supplies and Boxes";
	};
	class EdSubcat_SR_Units
	{
		displayName = "7R Units";
	};
};