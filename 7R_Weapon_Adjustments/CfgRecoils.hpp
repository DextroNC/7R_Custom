class CfgRecoils {
	class recoil_default;
	class recoil_SR_m240: recoil_default {
		muzzleOuter[] = {0.1,1,0.1,0.2};
		kickBack[] = {0.04,0.07};
		permanent = 0.15;
		temporary = 0.01;
	};
	class recoil_static: recoil_default {
		muzzleOuter[] = {0.25,0.1,0.25,0.1};
		kickBack[] = {0.04,0.07};
		permanent = 0.01;
		temporary = 0.25;
	};
};