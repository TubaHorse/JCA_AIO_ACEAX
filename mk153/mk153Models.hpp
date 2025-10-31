class jca_launch
{
	label = "Mk153 Launcher";
	options[] = {"camo","pws"};
	class camo: JCA_colorBase{};
	class pws
	{
		label = "PWS";
		values[] = {"Yes","No"};
		changeingame = 1;
		alwaysSelectable = 1;
	};
};