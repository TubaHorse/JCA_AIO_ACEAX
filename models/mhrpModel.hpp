class jca_ModHelm
{
	label="Advanced Modular Helmet";
	options[]={"camo","variants"};
	class camo: JCA_colorBase{};
	class variants
	{
		label="Variants";
		values[]={"Standard","Headset","Earpro","Chops"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};