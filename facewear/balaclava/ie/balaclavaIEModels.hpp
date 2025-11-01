class JCA_balaclava
{
	label="Tactical Balaclava";
	options[]={"camo","glasses","headset"};
	class camo: JCA_colorBase{};
	class glasses: JCA_yesNoBase
	{
		label="Glasses";
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