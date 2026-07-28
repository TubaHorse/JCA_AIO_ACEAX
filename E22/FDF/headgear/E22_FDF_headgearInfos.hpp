class E22_FDF_H_HelmetHBK_woodland_F {
	model="E22_FDF_jca_ModHelm";
	camo="FDF_WDL";
	variants="Standard";
};

class E22_FDF_H_HelmetHBK_chops_woodland_F: E22_FDF_H_HelmetHBK_woodland_F {
	variants="Chops";
};
class E22_FDF_H_HelmetHBK_ear_woodland_F: E22_FDF_H_HelmetHBK_woodland_F {
	variants="Earpro";
};
class E22_FDF_H_HelmetHBK_headset_woodland_F: E22_FDF_H_HelmetHBK_woodland_F {
	variants="Headset";
};

class E22_FDF_H_Beret_01_black_F {
	model="E22_FDF_beret";
	camo="BLK";
	headset="No";
};

class E22_FDF_H_Beret_01_headset_black_F: E22_FDF_H_Beret_01_black_F {
	headset="Yes";
};

class E22_FDF_H_Helmet_Heli_black_F {
	model="E22_FDF_HeliPilot";
	visor="Down";
};
class E22_FDF_H_Helmet_Heli_VisorUp_black_F {
	model="E22_FDF_HeliPilot";
	visor="Up";
};