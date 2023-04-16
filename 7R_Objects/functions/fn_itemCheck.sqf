/*
	Parameters:
		<-- Unit as Object
	
	Description:
	Called by Loadout CBA Eventhandler to unwrap munition packeges to usage content.
*/

// Parameter Init
params ["_unit"];
private "_ldr";

// Check if Unit is Leader
if (leader group _unit == _unit) then {
	_ldr = true;
};

while {({_x == "SR_PAK"} count items _unit) > 0} do {
    _unit removeItem "SR_PAK";
	for "_i" from 1 to 6 do {
				_unit addItem "ACE_fieldDressing";
	};
	for "_i" from 1 to 4 do {
				_unit addItem "ACE_quikclot";
	};
	for "_i" from 1 to 2 do {
				_unit addItem "ACE_morphine";
	};
};

while {({_x == "SR_MAK"} count items _unit) > 0} do {
	if (_unit getVariable ["ace_medical_medicClass", 0] == 0) exitWith {};
	_unit removeItem "SR_MAK";
	// Bandages
	for "_i" from 1 to 10 do {
				_unit addItem "ACE_fieldDressing";
	};
	// Medical
	{
		for "_i" from 1 to 5 do {
				_unit addItem _x;
		};
	}forEach ["ACE_morphine","ACE_epinephrine"];
	// Blood
	for "_i" from 1 to 4 do {
		_unit addItem "ACE_salineIV_500";
	};
	_unit addItemToBackpack "ACE_salineIV";
};

while {({_x == "SR_Bandage_Pack"} count items _unit) > 0} do {
	if (_unit getVariable ["ace_medical_medicClass", 0] == 0) exitWith {};
	_unit removeItem "SR_Bandage_Pack";
	{
		for "_i" from 1 to 3 do {
				_unit addItem _x;
		};
	}forEach ["ACE_fieldDressing","ACE_quikclot","ACE_elasticBandage","ACE_packingBandage"];
};

while {({_x == "SR_Medicine_Pack"} count items _unit) > 0} do {
	if (_unit getVariable ["ace_medical_medicClass", 0] == 0) exitWith {};
	_unit removeItem "SR_Medicine_Pack";
	{
		for "_i" from 1 to 5 do {
				_unit addItem _x;
		};
	}forEach ["ACE_morphine","ACE_epinephrine"];
};

while {({_x == "SR_Utility_Pack"} count items _unit) > 0} do {
	if (_unit getVariable ["ace_medical_medicClass", 0] == 0) exitWith {};
	_unit removeItem "SR_Utility_Pack";
	for "_i" from 1 to 7 do {
				_unit addItem "ACE_splint";
	};
	for "_i" from 1 to 3 do {
				_unit addItem "ACE_tourniquet";
	};
};

while {({_x == "SR_BloodIV_Pack"} count items _unit) > 0} do {
	if (_unit getVariable ["ace_medical_medicClass", 0] == 0) exitWith {};
	_unit removeItem "SR_BloodIV_Pack";
	_unit addItemToBackpack "ACE_salineIV_500";
	_unit addItemToBackpack "ACE_salineIV";
	_unit addItemToBackpack "ACE_salineIV_500";
};
/*
while {({_x == "SR_Atropine_Pack"} count items _unit) > 0} do {
	if (_unit getVariable ["ace_medical_medicClass", 0] == 0) exitWith {};
	_unit removeItem "SR_Atropine_Pack";
	for "_i" from 1 to 10 do {
		_unit addItem "ACE_atropine";
	};
};
*/

// HE Pack unwrap
// Check if GL equipped
if (([_unit,"1Rnd_HE_Grenade_shell"] call sr_fnc_compCheck) || ([_unit,"rhs_VOG25"] call sr_fnc_compCheck) || ([_unit,"1Rnd_GAM_40"] call sr_fnc_compCheck)) then  {
	while {({_x == "SR_HE_Pack"} count items _unit) > 0} do {
		// Remove Pack
		_unit removeItem "SR_HE_Pack";
		// Add Grenades
		{
			if ([_unit,_x] call sr_fnc_compCheck) then {
				for "_i" from 1 to 4 do {
					_unit addItem _x;
				};
			};
		}forEach ["1Rnd_HE_Grenade_shell","rhs_VOG25","1Rnd_GAM_40"];
	};
};

// Smoke Pack unwrap
// Check if GL equipped
if (([_unit,"1Rnd_Smoke_Grenade_shell"] call sr_fnc_compCheck) || ([_unit,"rhs_GRD40_white"] call sr_fnc_compCheck) || ([_unit,"1Rnd_GAM_40_Smoke_White"] call sr_fnc_compCheck)) then  {
	while {({_x == "SR_Smoke_Pack"} count items _unit) > 0} do {
		// Remove Pack
		_unit removeItem "SR_Smoke_Pack";
		// Add Grenades
		{
			if ([_unit,_x] call sr_fnc_compCheck) then {
				if (_ldr) then {
					for "_i" from 1 to 2 do {
						_unit addItem _x;
					};	
					_unit addItem (["1Rnd_SmokeRed_Grenade_shell","rhs_GRD40_red","1Rnd_GAM_40_Smoke_Red"] select _forEachIndex);
				} else {
					for "_i" from 1 to 3 do {
						_unit addItem _x;
					};
				};
			};
		}forEach ["1Rnd_Smoke_Grenade_shell","rhs_GRD40_white","1Rnd_GAM_40_Smoke_White"];
	};
};

// Flare Pack unwrap
// Check if GL equipped
if (([_unit,"UGL_FlareWhite_F"] call sr_fnc_compCheck) || ([_unit,"rhs_vg40op_white"] call sr_fnc_compCheck) || ([_unit,"1Rnd_GAM_40_Flare_White"] call sr_fnc_compCheck)) then  {
	while {({_x == "SR_Flare_Pack"} count items _unit) > 0} do {
		// Remove Pack
		_unit removeItem "SR_Flare_Pack";
		// Add Grenades
		{
			if ([_unit,_x] call sr_fnc_compCheck) then {
				if (_ldr) then {
					for "_i" from 1 to 2 do {
						_unit addItem _x;
					};	
					_unit addItem (["UGL_FlareRed_F","rhs_vg40op_red","1Rnd_GAM_40_Flare_Red"] select _forEachIndex);
				} else {
					for "_i" from 1 to 3 do {
						_unit addItem _x;
					};
				};
			};
		}forEach ["UGL_FlareWhite_F","rhs_vg40op_white","1Rnd_GAM_40_Flare_White"];
	};
};