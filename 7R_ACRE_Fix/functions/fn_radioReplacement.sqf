/*

	Parameters:
		<-- Unit as Object
		<-- Corpse as Object

	Description:
		Replace the current radios with new ones to avoid duplicate radio IDs.

*/

// Parameter Init
params ["_unit","_corpse"];

// Check if radios are present
_has_343 = [_unit, "ACRE_PRC343"] call acre_api_fnc_hasKindOfRadio;
_has_152 = [_unit, "ACRE_PRC152"] call acre_api_fnc_hasKindOfRadio;
_has_148 = [_unit, "ACRE_PRC148"] call acre_api_fnc_hasKindOfRadio;
_has_117 = [_unit, "ACRE_PRC117F"] call acre_api_fnc_hasKindOfRadio;

// Remove all radios on this unit.
{
	_radio_type = _x;
	_has_radio = true;
	while {_has_radio} do {
		_radio = [_radio_type, _unit] call acre_api_fnc_getRadioByType;
		if (!isNil "_radio") then {
			_unit removeItem _radio;
		} else {
			_has_radio = false;
		};
	}
} forEach ["ACRE_PRC117F", "ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC343"];

// Give this player new radios.
if (_has_343) then {_unit addItem "ACRE_PRC343"};
if (_has_152) then {_unit addItem "ACRE_PRC152"};
if (_has_148) then {_unit addItem "ACRE_PRC148"};
if (_has_117) then {_unit addItem "ACRE_PRC117F"};