class JCA_H_balaclava
{
	label="Tactical Balaclava";
	options[]={"camo","glasses","glassesStyle","headset"};
	class camo: JCA_colorBase{};
	class glasses: JCA_yesNoBase
	{
		label="Glasses";
		changeingame=0;
		alwaysSelectable=1;
	};
	class glassesStyle
	{
		label="Eyepro Type";
		values[]={"Glasses","Goggles"};
		changeingame=0;
		alwaysSelectable=0;
	};
	class headset: JCA_yesNoBase
	{
		label="Headset";
		changeingame=0;
		alwaysSelectable=0;
	};
};