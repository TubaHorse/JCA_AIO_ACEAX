class USMC_m27
{
	label="M27 IAR 5.56mm";
	options[]={"camo","barrel"};
	class camo: JCA_colorBase{};
	class barrel
	{
		label="Barrel Length";
		values[]={"Standard","CQB"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};