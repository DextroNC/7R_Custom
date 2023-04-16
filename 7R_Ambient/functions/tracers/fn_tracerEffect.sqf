/*		
	Parameters:
		<-- Tracer Object
		<-- Color as a string (red, green, yellow and white supported)
		<-- Tracer lifetime
		
	Description:
	Creates the tracer effect on the given object with the given color and lifetime.

	You should NOT use this script. It is used by SR_Ambient_fnc_showTracers.

	Developed by ALIAS modified by Sigfried
*/
_tracer_object_name = _this select 0;
_color_tracer		= _this select 1;
_life_time_tras_lum = _this select 2;

private ["_xx","_yy","_zz","_dir","_obj_tras","_poc_mic","_nr_tracer","_li_tracer","_life_time_tras_lum"];

_red = 1;
_green = 1;
_blue = 1;

switch (_color_tracer) do {
	case "red": {
		_green = 0;
		_blue = 0;
	};
	case "green": {
		_red = 0;
		_blue = 0;
	};
	case "yellow": {
		_blue = 0;
	};
	default {};
};

_dir=0;
_range_trace= 2;

// Creates the light
_li_tracer = "#lightpoint" createVehicleLocal (getPos _tracer_object_name);
_li_tracer setLightAmbient[_red, _green, _blue];
_li_tracer setLightColor[_red, _green, _blue];
_li_tracer lightAttachObject [_tracer_object_name, [0,0,0]];
_li_tracer setLightDayLight true;	
_li_tracer setLightUseFlare true;
_li_tracer setLightFlareSize 3;
_li_tracer setLightFlareMaxDistance 2000;	
_li_tracer setLightIntensity 5000;
_li_tracer setLightAttenuation [/*start*/ _range_trace, /*constant*/0, /*linear*/ 100, /*quadratic*/ 0, /*hardlimitstart*/_range_trace,_range_trace];  


[_li_tracer,_life_time_tras_lum] spawn {
	_lum_tras = _this select 0;
	_life_time_tras_del = _this select 1;
	sleep _life_time_tras_del;
	deleteVehicle _lum_tras;
};