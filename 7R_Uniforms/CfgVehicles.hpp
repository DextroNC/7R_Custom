class CfgVehicles {
    // Dummy Unit Configs
    class rhsusf_socom_uniform_base;
    class rhsusf_socom_us_mc_uniform: rhsusf_socom_uniform_base {
        scope=1;
		author="Dextro";
		uniformClass="rhs_uniform_g3_us_mc";
        hiddenSelections[]=
		{
			"Gloves",
            "flagright"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan_co.paa",
            "7R_uniforms\data\Flag_US_IR_final.paa"
		};
    };
	class rhsusf_socom_us_mc_blk_uniform: rhsusf_socom_uniform_base {
        scope=1;
		author="Dextro";
		uniformClass="rhs_uniform_g3_us_mc_blk";
        hiddenSelections[]=
		{
			"Camo",
			"Gloves",
            "flagright"
		};
		hiddenSelectionsTextures[]=
		{
			"7R_uniforms\data\mc_blk.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa",
            "7R_uniforms\data\Flag_US_IR_final.paa"
		};
    };
	class rhsusf_socom_us_mc_grn_uniform: rhsusf_socom_uniform_base {
        scope=1;
		author="Dextro";
		uniformClass="rhs_uniform_g3_us_mc_grn";
        hiddenSelections[]=
		{
			"Camo",
			"Gloves",
            "flagright"
		};
		hiddenSelectionsTextures[]=
		{
			"7R_uniforms\data\mc_grn.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_green_co.paa",
            "7R_uniforms\data\Flag_US_IR_final.paa"
		};
    };
	class rhsusf_socom_us_mc_tan_uniform: rhsusf_socom_uniform_base {
        scope=1;
		author="Dextro";
		uniformClass="rhs_uniform_g3_us_mc_tan";
        hiddenSelections[]=
		{
			"Camo",
			"Gloves",
            "flagright"
		};
		hiddenSelectionsTextures[]=
		{
			"7R_uniforms\data\mc_tan.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan_co.paa",
            "7R_uniforms\data\Flag_US_IR_final.paa"
		};
    };
	class rhsusf_socom_us_mc_gry_uniform: rhsusf_socom_uniform_base {
        scope=1;
		author="Dextro";
		uniformClass="rhs_uniform_g3_us_mc_gry";
        hiddenSelections[]=
		{
			"Camo",
			"Gloves",
            "flagright"
		};
		hiddenSelectionsTextures[]=
		{
			"7R_uniforms\data\mc_grey.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa",
            "7R_uniforms\data\Flag_US_IR_final.paa"
		};
    };
};