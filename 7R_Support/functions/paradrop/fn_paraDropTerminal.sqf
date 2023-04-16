/*
 * Author: esteldunedain
 * Create one action per FOB.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 * 3: Static <BOOL>
 *
 * Return Value:
 * Children actions <ARRAY>
 *
 * Example:
 * [target, player, static] call ace_interaction_fnc_addPassengersActions
 *
 * Public: No
 */

params ["_terminal", "_player",["_static",false],["_altitude",800]];

private _actions = [];

{
    private _dz = _x;

    if ({side _x == sideEnemy} count (_dz nearEntities [["Man","Car","Tank"], 100]) <= {side _x == sideFriendly} count (_dz nearEntities [["Man","Car","Tank"], 100])) then {
        _code = [
                    format ["%1", _dz],
                    format ["DZ %1", (mapGridPosition (getPos _dz))],
                    "",
                    { 
                        params ["_target", "_player", "_params"];
                        _params params ["_dz",["_static",false],["_altitude",800]];
                        [_target,_player,[_dz,"STARTSPAWN",_altitude,_static]] spawn sr_support_fnc_paraDropAction;
                    },
                    {true},
                    {},
                    [_dz, _static, _altitude]
                ] call ace_interact_menu_fnc_createAction,
        _actions pushBack [_code,[],_terminal];
        true
    } else {
        false
    };
    
} count  ace_dropzones;

_actions