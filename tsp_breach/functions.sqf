tsp_fnc_breach_checkDoorIDinString = {
	params ["_id", "_string"];
	_numbersInDoorID = (_id splitString "");
	_numbersInString = (_string splitString "") select {_x in ["0","1","2","3","4","5","6","7","8","9"]};
	if (_numbersInDoorID isEqualTo _numbersInString) exitWith {true};
	false
};

tsp_fnc_breach_getDoorData = {  //-- Needs to take anything in _door that exists, like trigger, or memory, or geom, etc
	params ["_house", "_door", ["_animName", "NO"], ["_triggerName", "NO"], ["_handleName", "NO"], ["_hingeName", "NO"]];

	_id = [_door, "0123456789"] call BIS_fnc_filterString;                               //-- Door ID
	_locked = _house getVariable ["bis_disabled_Door_" + _id, 0];                       //-- Locked/broken
	_pos = _house modelToWorldWorld (_house selectionPosition _door);                  //-- Actual door selection pos
	
	//-- Animations
	({if (_x find "door" != -1 && _x find _id != -1 && _x find "_handle" == -1) exitWith {_animName = _x}} forEach (animationNames _house));
	_animPhase = _house animationPhase _animName;
	if ((str _house) find "cwa" != -1) then {_animPhase = 1 + -_animPhase};  //-- Just flip flop, tks CUP CWA

	//-- Door parts
	_triggerNamePot = ({if (_x find "trigger" != -1 && _x find "door" != -1 && [_id, _x] call tsp_fnc_breach_checkDoorIDinString) exitWith {_x}} forEach (_house selectionNames "MEMORY"));
	_handleNamePot = ({if (_x find "handle" != -1 && [_id, _x] call tsp_fnc_breach_checkDoorIDinString) exitWith {_x}} forEach (_house selectionNames "MEMORY"));
	_hingeNamePot = ({if (_x find "axis" != -1 && [_id, _x] call tsp_fnc_breach_checkDoorIDinString) exitWith {_x}} forEach (_house selectionNames "MEMORY"));
	if (!isNil "_triggerNamePot") then {_triggerName = _triggerNamePot};
	if (!isNil "_handleNamePot") then {_handleName = _handleNamePot};
	if (!isNil "_hingeNamePot") then {_hingeName = _hingeNamePot};
    _triggerPos = _house modelToWorldWorld (_house selectionPosition [_triggerName, "Memory"]);
    _handlePos = _house modelToWorldWorld (_house selectionPosition [_handleName, "Memory"]);
	_hingePos = _house modelToWorldWorld (_house selectionPosition [_hingeName, "Memory"]);
	if (_triggerPos distance _house < 1) then {_triggerPos = _pos};
	if (_handlePos distance _house < 1 || _animPhase == 1) then {_handlePos = _triggerPos};
	if (_hingePos distance _house < 1) then {_hingePos = _handlePos};

	[_house, _door, _id, _animName, _animPhase, _locked, _pos, _triggerName, _triggerPos, _handleName, _handlePos, _hingeName, _hingePos]
};

tsp_fnc_breach_door_adjust = {
	params ["_doorData", ["_amount",-1], ["_lock", -1]];
	_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];	

	if (_amount != -1) then {
		if (["cwa", str _house] call BIS_fnc_inString) then {_amount = 1 + -_amount};  //-- Just flip flop, tks CUP CWA
		{_house animate [[_animName, _x#0, _x#1] call tsp_fnc_stringReplace, _amount]} forEach [["a_rot","b_rot"],["b_rot","a_rot"],["a_rot","_rot"],["b_rot","_rot"], ["EH", "EH"]];
	};
	
	if (_lock == -1) exitWith {};
	switch (true) do {
		case (_lock == 0 && _locked != 0): {
			_house setVariable [("bis_disabled_Door_" + _id), _lock, true];
			playSound3D ["tsp_breach\snd\unlock.ogg", _pos, false, _pos, 4, 1, 50];
		};		
		case (_lock == 1 && _locked != 1): {
			_house setVariable [("bis_disabled_door_" + _id), _lock, true];
			playSound3D ["tsp_breach\snd\lock.ogg", _pos, false, _pos, 4, 1, 50]; 
		};
		case (_lock == 3 && _locked != 3): {
			_house setVariable [("bis_disabled_Door_" + _id), _lock, true];
			playSound3D ["tsp_breach\snd\break.ogg", _pos, false, _pos, 1, 1, 50];
			/*
			_sparks = "#particlesource" createVehicle _handlePos;
			_sparks setParticleClass "ImpactSmoke";
			_sparks setDropInterval 0.1; 
			sleep 0.3; deleteVehicle _sparks; */
		};
	};
};

tsp_fnc_breach_addActions = {
	params ["_unit", ["_radius", 30]];	

	{deleteVehicle _x} forEach (missionNameSpace getVariable ["tsp_breach_allActionsHelpers",[]]);
	tsp_breach_allActionsHelpers = [];

	{  //-- For all houses in radius
		_house = _x;
		{   //-- For all door triggers/buttons in house
			_memPoint = _x;

			//-- Create helper object
			_doorData = [_house, _memPoint] call tsp_fnc_breach_getDoorData;
			_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];
			_helper = "ACE_LogicDummy" createVehicleLocal [0,0,0];
			_helper setPosASL _handlePos;
			tsp_breach_allActionsHelpers pushBack _helper;

			//-- Create main "Door" action (Updates door data for all other actions, for perf)
			_mainAction = ["mainDoor","Door","",{true},{
				_this params ["_object","_unit","_passed"];
				_passed params ["_house","_mempoint"];
				missionNameSpace setVariable ["door_action_"+_mempoint, [_house, _mempoint] call tsp_fnc_breach_getDoorData];
			},{},[_house,_memPoint],{[0,0,0]},2.5,[false, false, false, false, true]] call ace_interact_menu_fnc_createAction;
			[_helper,0,[],_mainAction] call ace_interact_menu_fnc_addActionToObject;

			//-- Create sub actions
			{	
				_baseParams = {
					_this params ["_object","_unit","_passed"];
					_doorData = (missionNameSpace getVariable ("door_action_"+_passed));
					_doorData params ["_house","_door","_id","_animName","_animPhase","_locked","_pos","_triggerName","_triggerPos","_handleName","_handlePos","_hingeName","_hingePos"];
				};
				_x params ["_id", "_name", "_image", "_code", "_condition"];
				_code = ((str _baseParams) trim ["{}", 0]) + ((str _code) trim ["{}", 0]);
				_condition = ((str _baseParams) trim ["{}", 0]) + ((str _condition) trim ["{}", 0]);
				_action = [_id, _name, _image, compile _code, compile _condition, {}, _memPoint,[0,0,0], 2.5] call ace_interact_menu_fnc_createAction;
				[_helper, 0, ["mainDoor"], _action] call ace_interact_menu_fnc_addActionToObject; 
			} forEach [
				[
					"openDoor","Open","\tsp_breach\gui\open.paa",
					{
						[_doorData, 1] call tsp_fnc_breach_door_adjust;
						if (!isNil "tsp_fnc_animate_door") then {[call tsp_fnc_playa, true] call tsp_fnc_animate_door};
					}, {_animPhase < 0.9 && _locked != 1}
				], [
					"closeDoor","Close","\tsp_breach\gui\close.paa",
					{
						[_doorData, 0] call tsp_fnc_breach_door_adjust;
						if (!isNil "tsp_fnc_animate_door") then {[call tsp_fnc_playa, false] call tsp_fnc_animate_door};
					}, {_animPhase > 0.1 && _locked != 1}
				], [
					"unlockDoor","Unlock","\tsp_breach\gui\unlock.paa",
					{
						[_doorData, -1, 0] call tsp_fnc_breach_door_adjust;
						if (!isNil "tsp_fnc_animate_door") then {[call tsp_fnc_playa, true] call tsp_fnc_animate_door};
					}, {_locked == 1 && _animPhase == 0 && [_unit,_house,_pos] call tsp_fnc_breach_isInside && tsp_cba_breach_ace_locking}
				], [
					"lockDoor","Lock","\tsp_breach\gui\lock.paa",
					{
						[_doorData, -1, 1] call tsp_fnc_breach_door_adjust;
						if (!isNil "tsp_fnc_animate_door") then {[call tsp_fnc_playa, true] call tsp_fnc_animate_door};
					}, {_locked == 0 && _animPhase == 0 && tsp_cba_breach_ace_locking}
				], [
					"paperclipDoor","Use Paperclip","\tsp_breach\gui\pick.paa",
					{[_unit,_doorData,0.75,"tsp_paperclip",[2, 1, 2, -2]] spawn tsp_fnc_breach_door_pick},
					{_locked == 1 && _animPhase == 0 && "tsp_paperclip" in (items _unit)}
				], [
					"lockpickDoor","Use Lockpick","\tsp_breach\gui\pick.paa",
					{[_unit,_doorData,0,"tsp_lockpick",[4, 3, 2, 0]] spawn tsp_fnc_breach_door_pick},
					{_locked == 1 && _animPhase == 0 && ("tsp_lockpick" in (items _unit) || "ACE_key_lockpick" in (items _unit))}
				], [
					"mechanicalBreachDoor","Breach Door","\tsp_breach\gui\breach.paa",
					{[_unit,_doorData] spawn tsp_fnc_breach_mechanical},
					{_locked == 1 && _animPhase == 0 && "ACE_wirecutter" in (items _unit)}
				]
			];
		} forEach ((_house selectionNames "MEMORY") select {_x find "door" != -1 && _x find "button" == -1 && _x find "axis" == -1 && _x find "handle" == -1 && _x find "ai" == -1 });
	} forEach (nearestObjects [_unit, ["Static"], _radius]);
};

tsp_fnc_breach_sticky = {
	params ["_charge", ["_rotateFix", false], ["_align", false], ["_fuse", -1], ["_magazine", ""]];
	if !(local _charge) exitWith {};  //-- Only do this if you placed the charge

	if (_align) then {
		_startPos = getPosASL _charge;                        //-- Start line at charge location
		_endPos = _startPos vectorDiff (vectorDir _charge);  //-- End line at another point in the distance charge is facing	
		_intersectionsFire = (lineIntersectsSurfaces [_startPos, _endPos, _charge, objNull, true, 1, "FIRE"]);   //-- Get intersect
		_intersectionsGeom = (lineIntersectsSurfaces [_startPos, _endPos, _charge, objNull, true, 1, "GEOM"]);  //-- Get intersect
		if (_intersectionsFire isEqualTo [] && _intersectionsFire isEqualTo []) exitWith {};                   //-- Get intersect
		_intersections = ([_intersectionsFire,_intersectionsGeom] select {!(_x isEqualTo [])})#0;             //-- Get intersect
		(_intersections#0) params ["_intersectPos","_normalDir","_object"];                                  //-- Get intersect
		_charge setVectorDir _normalDir;                                                        //-- Align charge with surface
		_charge enableSimulation false;                                                        //-- So that no gravity and we can find it later
		_charge setPosASL (_intersectPos vectorAdd (vectorDir _charge vectorMultiply 0.05));  //-- Put charge next to surface, also add offset  // 
	};

	if (_rotateFix) then {  //-- Fix ammo rotation after charge is armed
		_chargeAmmoClass = getText (configFile >> "CfgVehicles" >> (typeOf _charge) >> "ammo");
		_chargeAmmo = (_charge nearObjects [_chargeAmmoClass, 0.2])#0;
		_chargeAmmo setDir ((getDir _charge)-180);	
		[_chargeAmmo, 90, 0] remoteExec ["BIS_fnc_setPitchBank", 0];
	};

	if (_fuse > -1 && !(simulationEnabled _charge)) then {[objNull, getPosATL _charge, getDir _charge, _magazine, "Timer", [_fuse], _charge] call ace_explosives_fnc_placeExplosive};
};

tsp_fnc_breach_getDoorIntersect = {  //-- Gets door between 2 points
    params ["_startPos", "_endPos", ["_ignore", objNull]];

    //-- Get house
    _intersect = (lineIntersectsSurfaces [_startPos, _endPos, _ignore, objNull, true, 1, "GEOM"]);
	_house = _intersect#0#2;
	_intersectPos = _intersect#0#0;
    if (isNil "_house") exitWith {[]};  //-- If no house found

    //-- Get door
    _door = ([_house, "GEOM"] intersect [ASLToAGL _startPos, ASLToAGL _endPos])#0#0;
    if (isNil "_door") exitWith {[_house]};  //-- If no door found
	if !(["door", _door] call BIS_fnc_inString) exitWith {[_house]};  //-- If no door found

	//-- Get door attributes
	[_house, _door] call tsp_fnc_breach_getDoorData;  //-- Just return everything
};	

tsp_fnc_breach_getEffectiveness = {  //-- Select effectiveness based on house type
	params ["_house", "_damageEnviroment"];
	_damageEnviroment params ["_glass", "_civil", "_military", "_reinforced", "_wall"];
	_effectiveness = _civil;
	if (typeOf _house in tsp_cba_breach_military) then {_effectiveness = _military};
	if (typeOf _house in tsp_cba_breach_reinforced) then {_effectiveness = _reinforced}; 
	_effectiveness
};

tsp_fnc_breach_isPush = {
	params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];

	_initialPosition = _house modelToWorld (_house selectionPosition [_door, "ViewGeometry", "AveragePoint"]);	
	_house animate [_animName, 1 + -_animPhase];  //-- Change it
	sleep 0.15;
	_finalPosition = _house modelToWorld (_house selectionPosition [_door, "ViewGeometry", "AveragePoint"]);
	sleep 0.05;
	_house animate [_animName, _animPhase];  //-- Reset to original state

	if (_unit distance _initialPosition < _unit distance _finalPosition) exitWith {true};
	false
};

tsp_fnc_breach_isInside = {
    params ["_unit", "_house", "_doorPos"];
    _unitDistance = _unit distance _house;
    _doorDistance = _doorPos distance _house;
    if (_unitDistance < _doorDistance) exitWith {true};
    if (_unitDistance > _doorDistance) exitWith {false};
};

tsp_fnc_breach_door_explosive = {
	params ["_explosive", "_damageEnviroment", ["_swingAmount", 1]];

	//-- Get door	
	_startPos = getPosASL _explosive;
	_endPos = _startPos vectorDiff ([vectorUp _explosive, 0] call BIS_fnc_rotateVector2D);
	_doorData = [_startPos, _endPos, _explosive] call tsp_fnc_breach_getDoorIntersect;
	_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];
	if (count _doorData < 2) exitWith {};

	//-- Breach process
	if (random 1 <= [_house, _damageEnviroment] call tsp_fnc_breach_getEffectiveness) then {
		//playSound3D ["tsp_breach\snd\destroy.ogg", _pos, false, _pos, 0.2, 1, 30];
		[_doorData, _swingAmount, 3] spawn tsp_fnc_breach_door_adjust;
	};
};
/*
tsp_fnc_breach_door_melee = {
	params ["_unit", "_damageEnviroment"];

	//-- Get door
	_doorData = [AGLtoASL positionCameraToWorld [0, 0, 0], AGLtoASL positionCameraToWorld [0, 0, 3], _unit] call tsp_fnc_breach_getDoorIntersect;
	_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];
	if (count _doorData < 2) exitWith {};
		
	//-- Breach process
	_isPush = _doorData call tsp_fnc_breach_isPush;
	if (_animPhase != 0 || _locked == 3) then {  //-- If door is open (0.01-1: open, 0: closed) or lock broken, we just want to swing it around
		playSound3D ["tsp_breach\snd\fail.ogg", _pos, false, AGLtoASL _pos, 2, 1, 40];
		if (_isPush) then {if (_animPhase == 0) then {[_doorData, 1] spawn tsp_fnc_breach_door_adjust} else {[_doorData, 0] spawn tsp_fnc_breach_door_adjust}};  //-- Wee
	} else {  //-- If door is closed (0.01-1: open, 0: closed) and lock not broken
		if (random 1 < [_house, _damageEnviroment] call tsp_fnc_breach_getEffectiveness) then {  //-- Success
			playSound3D ["tsp_breach\snd\destroy.ogg", _pos, false, AGLtoASL _pos, 2, 1, 40];
			if (_isPush) then {[_doorData, 1, 3] spawn tsp_fnc_breach_door_adjust}  //-- Fully open and break lock
			else {[_doorData, 0.15, 3] spawn tsp_fnc_breach_door_adjust};          //-- Open slightly and break lock
		} else {  //-- Fail
			playSound3D ["tsp_breach\snd\fail.ogg", _pos, false, AGLtoASL _pos, 2, 1, 40];
		};
	};
};
*/
tsp_fnc_breach_door_gun = {
	params ["_unit", "_intersectPos", "_ammo", "_projectile"];

	//-- Get door
	_doorData = [AGLtoASL positionCameraToWorld [0, 0, 0], AGLtoASL positionCameraToWorld [0, 0, 3], _unit] call tsp_fnc_breach_getDoorIntersect;
	_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];
	if (count _doorData < 2) exitWith {};

	//-- Breach process
	_effectiveness = (((getNumber (configFile >> "CfgAmmo" >> _ammo >> "hit")) min 50)/50)*tsp_cba_breach_ammoMultiplier;  //-- Cap at 50 and divide by 50 to get 0-1 value
	if (_ammo in tsp_cba_breach_ammo) then {_effectiveness = 1};
	if (random 1 < [_house, [0,_effectiveness,_effectiveness/2,_effectiveness/10,0]] call tsp_fnc_breach_getEffectiveness && _animPhase == 0) then {  //-- Success
		if (_handlePos distance _intersectPos < 0.35) exitWith {[_doorData, 0.15, 3] spawn tsp_fnc_breach_door_adjust};                //--- Handle, open slightly and break lock		
		if (_hingePos distance2d _intersectPos < 0.35) exitWith {[_doorData, 0, 3] spawn tsp_fnc_breach_door_adjust};                            //-- Hinge, dont open, just break lock
	};
};

tsp_fnc_breach_door_pick = {
	params ["_unit", "_doorData", "_deleteChance", "_item", "_damageEnviroment"];	
	_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];

	//if (random 1 <= _deleteChance) then {_unit removeItem _item};  //-- Delete item

	//-- Animation
	_unit disableAI "ANIM";
	_unit playMoveNow "acts_carfixingwheel";

	// Get effectiveness
	private _time = 12 - ([_house, _damageEnviroment] call tsp_fnc_breach_getEffectiveness);
	playSound3D ["tsp_breach\snd\pick.ogg", _pos, false, _pos, 2, 0.9, 15];

	// Progressbar
	[_time, [_unit, _doorData], {
		// Finished action
		(_this select 0) params ["_unit", "_doorData","_damageEnviroment"];
		_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];

		// unlock
		[_doorData, -1, 0] spawn tsp_fnc_breach_door_adjust;
		_unit playMoveNow "AmovPknlMstpSrasWrflDnon_gear_AmovPknlMstpSrasWrflDnon";
	},{
		// Abborted action
		(_this select 0) params ["_unit", "_doorData"]; 
		["Canceled"] call ace_common_fnc_displayTextStructured; 
		_unit playMoveNow "AmovPknlMstpSrasWrflDnon_gear_AmovPknlMstpSrasWrflDnon";
	}, "Picking lock..."] call ace_common_fnc_progressBar;
};

tsp_fnc_breach_mechanical = {
	params ["_unit", "_doorData"];	
	_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];

	// Get door data
	private _damageEnviroment = [4, 3, 2, 0];
	private _time = 6 - ([_house, _damageEnviroment] call tsp_fnc_breach_getEffectiveness);  //-- Get effectiveness

	//-- Animation
	_unit disableAI "ANIM";
	_unit playMoveNow "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon";
	playSound3D ["tsp_breach\snd\hit.ogg", _pos, false, _pos, 1.5, 0.9, 25];

	// Progressbar
	[_time, [_unit, _doorData], {
		// Finished action
		(_this select 0) params ["_unit", "_doorData"];
		_doorData params ["_house", "_door", "_id", "_animName", "_animPhase", "_locked", "_pos", "_triggerName", "_triggerPos", "_handleName", "_handlePos", "_hingeName", "_hingePos"];
		
		// Upon effectiveness and chance -> success
		[_doorData, 0.15, 3] spawn tsp_fnc_breach_door_adjust;  //-- Unlock
		_unit playMoveNow "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon";
		//playSound3D ["tsp_breach\snd\break.ogg", _pos, false, _pos, 1, 1, 50];

	},{
		// Abborted action
		(_this select 0) params ["_unit", "_doorData"]; 
		["Canceled"] call ace_common_fnc_displayTextStructured; 
		_unit playMoveNow "AmovPknlMstpSrasWrflDnon_gear_AmovPknlMstpSrasWrflDnon";
	}, "Breaking door..."] call ace_common_fnc_progressBar;
};

tsp_fnc_breach_glass = {
	params ["_pos", "_radius"];
	{  //-- For all houses in radius
		_house = _x;
		_hitpoints = getAllHitPointsDamage _house;
		if !(_hitpoints isEqualTo []) then {  //-- If house has hitpoints
			_hitpoints params ["_hitpoints", "_selections", "_damage"];		
			{  //-- For all selections
				_selection = _x;
				_selectionPos = _house modelToWorld (_house selectionPosition _selection);
				if (_selectionPos distance _pos < _radius && _damage#_forEachIndex < 1) then {  //-- If selection is in radius and is not already destroyed
					if (["glass", _selection] call BIS_fnc_inString || ["window", _selection] call BIS_fnc_inString) then {  //-- If it's glass
						[_house, [_selection, 1]] remoteExec ["setHit", 0];
						_sound = format ["A3\Sounds_F\arsenal\sfx\bullet_hits\glass_0%1.wss", (floor random 8) + 1]; 
						playSound3D [_sound, _selectionPos, false, _selectionPos, 3, 1, 25];
					};
				};
			} forEach _selections;
		};
	} forEach (nearestTerrainObjects [_pos, ["house"], 20]);
};

tsp_fnc_breach_wall = {
	params ["_explosive", "_damageEnviroment"];

	//-- Get wall
	_startPos = getPosASL _explosive;
	_endPos = _startPos vectorDiff ([vectorUp _explosive, 0] call BIS_fnc_rotateVector2D);
	_wallData = [_startPos, _endPos, _explosive] call tsp_fnc_breach_getDoorIntersect;
	if (count _wallData != 1) exitWith {};
	_wallData params ["_wall"];

	//-- Breach process
	if !(_wall in (nearestTerrainObjects [getPos _wall, ["WALL", "FENCE"], 5]) || ["wall", typeOf _wall] call BIS_fnc_inString || ["fence", typeOf _wall] call BIS_fnc_inString) exitWith {};
	if (random 1 >= _damageEnviroment#4) exitWith {};
	if (tsp_cba_breach_wall_physics) exitWith {
		_physics = createVehicle ["tsp_breach_wall", getPosATL _wall, [], 0, "CAN_COLLIDE"];
		_physics setDir (getDir _wall);
		_newWall = createSimpleObject [(getModelInfo _wall)#1, getPos _wall];
		_newWall setPos (getPos _wall);
		_newWall attachTo [_physics,[0,0,0]];
		hideObjectGlobal _wall;
		_physics setVelocity (_explosive vectorModelToWorld tsp_cba_breach_wall_velocity);
	};
	if (getText (configFile >> "CfgVehicles" >> (typeOF _wall) >> "destrType") isEqualTo "DestructBuilding") exitWith {hideObjectGlobal _wall};  //-- Walls without destruction models	
	_wall setDamage 1; 
};

tsp_fnc_breach_lockDoors = {  //-- Lock random doors
	params ["_pos", "_radius", "_houseChance", "_doorChance", ["_lock", 1]];
	{		
		_house = _x;
		if (random 1 <= _houseChance) then {  //-- House lock chance
			if (_house in tsp_cba_breach_lockBlacklist) exitWith {};
			if ((typeOf _house) in tsp_cba_breach_lockBlacklist) exitWith {};
			if (_house getVariable ["breach_blacklist", false]) exitWith {};
			_numberOfDoors = getNumber (configfile >> "CfgVehicles" >> typeOf _x >> "numberOfDoors");  //-- Fuckin JBad
			if (_numberOfDoors == 0) then {_numberOfDoors = count (configfile >> "CfgVehicles" >> typeOf _x >> "UserActions")};  //-- Fuckin JBad
			for "_i" from 0 to (_numberOfDoors) do {
				if (random 1 <= _doorChance) then {_x setVariable [format ["bis_disabled_Door_%1", _i], _lock, true]};  //-- Door lock chance
			};
		};
	} forEach (nearestTerrainObjects [_pos, ["BUILDING", "HOUSE", "CHURCH", "CHAPEL", "BUNKER", "FORTRESS", "VIEW-TOWER", "LIGHTHOUSE", "FUELSTATION", "HOSPITAL", "TOURISM"], _radius]);  //-- For all buildings in radius
};