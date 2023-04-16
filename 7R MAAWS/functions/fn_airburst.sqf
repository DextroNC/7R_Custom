params ["_projectile"];

_position = getposASL _projectile;
_subammo = createVehicle ["SR_m3maaws_HEAirburst", _position, [], 0, "CAN_COLLIDE"];
_subammo setPosASL _position;

_projectile setdamage 1;
deleteVehicle _projectile;
