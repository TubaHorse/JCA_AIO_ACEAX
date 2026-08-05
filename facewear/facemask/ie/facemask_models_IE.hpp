class JCA_IE_Facemask {
	label="Tactical Face Mask";
	options[]={"camo","glasses","headset"};
	class camo: JCA_colorBase{};
	class glasses: JCA_yesNoBase{
		label="Glasses";
	};
	class headset: JCA_yesNoBase{
		label="Headset";
	};
};