class JCA_shemag
{
	label="Shemag";
	options[]={"camo","glasses","glassesStyle","headset"};
	class camo: JCA_colorBase{};
	class glasses: JCA_yesNoBase {
		label="Glasses";
		changeInGame=0;
		alwaysSelectable=1;
	};
	class glassesStyle
	{
		label="Eyepro Type";
		values[]={"Glasses","Goggles"};
		changeingame=0;
		alwaysSelectable=0;
	};
	class headset: JCA_yesNoBase {
		label="Headset";
		changeInGame=0;
		alwaysSelectable=0;
	};
};