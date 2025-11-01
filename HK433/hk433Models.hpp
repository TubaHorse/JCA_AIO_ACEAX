class jca_hk433
{
	options[]={"camo","barrel"};
	label="HK433 5.56 mm";
	class camo: JCA_colorBase{};
	class barrel {
		label="Barrel Length";
		values[]={"Standard","CQB"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};