if (!tsp_cba_breach) exitWith {};

//-- Handle explosives goaing off
[{
    params ["_unit", "_range", "_explosive", "_fuzeTime", "_triggerItem"];
	_damageEnviroment = getArray (configFile >> "CfgAmmo" >> (typeOf _explosive) >> "damageEnviroment");  //-- Get explosive breaching data
	_swingAmount = getNumber (configFile >> "CfgAmmo" >> (typeOf _explosive) >> "swingAmount");  //-- Get explosive breaching data
	if !(_damageEnviroment isEqualTo []) then {  //-- If explosive is a breaching charge	
		[_explosive, _damageEnviroment, _swingAmount] spawn tsp_fnc_breach_door_explosive;
		[_explosive, _damageEnviroment] spawn tsp_fnc_breach_wall;
		if (_damageEnviroment#0 == 1) then {
			(getPos _explosive) spawn {sleep 0.2; [_this, 7] call tsp_fnc_breach_glass};  //-- Add delay so it matches explosion
		};
	};
	true
}] call ace_explosives_fnc_addDetonateHandler;

//-- Handle gunshot
player addEventHandler ["FiredMan", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
	[_unit, _intersectPos, _ammo, _projectile] spawn tsp_fnc_breach_door_gun;		
}];

//-- ACE actions
["ace_interactMenuOpened", {
    params ["_type"];
	if (!tsp_cba_breach_ace) exitWith {};
    if (_type == 1) exitWith {};  //-- If self interact
	[ace_player] spawn tsp_fnc_breach_addActions;
}] call CBA_fnc_addEventHandler;

//-- Vanilla Interactions
["
    if (['door', _this#4] call BIS_fnc_inString && tsp_cba_breach_vanilla) then {
		hint 'Vanilla Door Actions are Disabled'; true
	} else {
		false
	};
"] spawn tsp_fnc_addUIEvent;

//-- Lock random doors
if (isServer && tsp_cba_breach_lockHouse != 0) then {[[0,0,0], 900000, tsp_cba_breach_lockHouse, tsp_cba_breach_lockDoor] call tsp_fnc_breach_lockDoors};