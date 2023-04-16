// Parameter Init
params ["_unit"];
_return = false;
if (count (secondaryWeaponMagazine _unit) > 0) then {
	if ((((secondaryWeaponMagazine _unit) select 0) in ['MRAWS_HE_F','rhs_mag_maaws_HE','RPG32_HE_F']) && (currentWeapon _unit == secondaryWeapon _unit)) then {_return = true};
};

_return


