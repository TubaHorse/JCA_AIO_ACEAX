// Enhanced Modular Helmet
class E22_RAF_H_HelmetHBK_alpine_F {
	model="E22_RAF_jca_ModHelm";
	camo="RAF_ALP";
	variants="Standard";
};

class E22_RAF_H_HelmetHBK_arid_F: E22_RAF_H_HelmetHBK_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_HelmetHBK_lesnoy_F: E22_RAF_H_HelmetHBK_alpine_F {
	camo="RAF_LES";
};

class E22_RAF_H_HelmetHBK_chops_alpine_F: E22_RAF_H_HelmetHBK_alpine_F {
	variants="Chops";
};

class E22_RAF_H_HelmetHBK_chops_arid_F: E22_RAF_H_HelmetHBK_chops_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_HelmetHBK_chops_lesnoy_F: E22_RAF_H_HelmetHBK_chops_alpine_F {
	camo="RAF_LES";
};

class E22_RAF_H_HelmetHBK_ear_alpine_F: E22_RAF_H_HelmetHBK_alpine_F {
	variants="Earpro";
};

class E22_RAF_H_HelmetHBK_ear_arid_F: E22_RAF_H_HelmetHBK_ear_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_HelmetHBK_ear_lesnoy_F: E22_RAF_H_HelmetHBK_ear_alpine_F {
	camo="RAF_LES";
};

class E22_RAF_H_HelmetHBK_headset_alpine_F: E22_RAF_H_HelmetHBK_alpine_F {
	variants="Headset";
};

class E22_RAF_H_HelmetHBK_headset_arid_F: E22_RAF_H_HelmetHBK_headset_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_HelmetHBK_headset_lesnoy_F: E22_RAF_H_HelmetHBK_headset_alpine_F {
	camo="RAF_LES";
};

// Berets
class E22_RAF_H_Beret_01_alpine_F {
	model="E22_RAF_JCA_beret";
	camo="RAF_ALP";
	Headset="No";
};

class E22_RAF_H_Beret_01_green_F: E22_RAF_H_Beret_01_alpine_F {
	camo="GRN";
};

class E22_RAF_H_Beret_01_red_F: E22_RAF_H_Beret_01_alpine_F {
	camo="RED";
};

class E22_RAF_H_Beret_02_blue_F: E22_RAF_H_Beret_01_alpine_F {
	camo="BLU";
};

// Sparrow Helmet
class E22_RAF_H_Helmet_Sparrow_standard_alpine_F {
	model="E22_RAF_SparrowH";
	camo="RAF_ALP";
	cover="No";
	headset="No";
	light="No";
};

class E22_RAF_H_Helmet_Sparrow_standard_arid_F: E22_RAF_H_Helmet_Sparrow_standard_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Helmet_Sparrow_standard_lesnoy_F: E22_RAF_H_Helmet_Sparrow_standard_alpine_F {
	camo="RAF_LES";
};

class E22_RAF_H_Helmet_Sparrow_standard_alpine_cover_F: E22_RAF_H_Helmet_Sparrow_standard_alpine_F {
	cover="Yes";
};

class E22_RAF_H_Helmet_Sparrow_standard_arid_cover_F: E22_RAF_H_Helmet_Sparrow_standard_alpine_cover_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Helmet_Sparrow_standard_lesnoy_cover_F: E22_RAF_H_Helmet_Sparrow_standard_alpine_cover_F {
	camo="RAF_LES";
};

class E22_RAF_H_Helmet_Sparrow_headset_alpine_F: E22_RAF_H_Helmet_Sparrow_standard_alpine_F {
	headset="Yes";
};

class E22_RAF_H_Helmet_Sparrow_headset_arid_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Helmet_Sparrow_headset_lesnoy_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_F {
	camo="RAF_LES";
};

class E22_RAF_H_Helmet_Sparrow_headset_alpine_cover_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_F {
	cover="Yes";
};

class E22_RAF_H_Helmet_Sparrow_headset_arid_cover_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_cover_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Helmet_Sparrow_headset_lesnoy_cover_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_cover_F {
	camo="RAF_LES";
};

class E22_RAF_H_Helmet_Sparrow_enhanced_alpine_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_F {
	light="Yes";
};

class E22_RAF_H_Helmet_Sparrow_enhanced_arid_F: E22_RAF_H_Helmet_Sparrow_enhanced_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Helmet_Sparrow_enhanced_lesnoy_F: E22_RAF_H_Helmet_Sparrow_enhanced_alpine_F {
	camo="RAF_LES";
};

class E22_RAF_H_Helmet_Sparrow_enhanced_alpine_cover_F: E22_RAF_H_Helmet_Sparrow_headset_alpine_cover_F {
	light="Yes";
};

class E22_RAF_H_Helmet_Sparrow_enhanced_arid_cover_F: E22_RAF_H_Helmet_Sparrow_enhanced_alpine_cover_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Helmet_Sparrow_enhanced_lesnoy_cover_F: E22_RAF_H_Helmet_Sparrow_enhanced_alpine_cover_F {
	camo="RAF_LES";
};

// Field Cap
class E22_RAF_H_Cap_Military_alpine_F {
	model="E22_RAF_FieldCap";
	camo="RAF_ALP";
};
class E22_RAF_H_Cap_Military_arid_F: E22_RAF_H_Cap_Military_alpine_F {
	camo="RAF_ARD";
};

class E22_RAF_H_Cap_Military_lesnoy_F: E22_RAF_H_Cap_Military_alpine_F {
	camo="RAF_LES";
};

// Heli Pilot Helmet
class E22_RAF_H_Helmet_Heli_VisorUp_white_F {
	model="E22_RAF_HeliPilot";
	visor="Up";
};
class E22_RAF_H_Helmet_Heli_white_F {
	model="E22_RAF_HeliPilot";
	visor="Down";
};