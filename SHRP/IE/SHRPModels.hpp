class JCA_beanie
{
    label="Beanie";
    options[]={"camo","headset","glasses","glassesStyle"};
    class camo: JCA_colorBase{};
    class headset: JCA_yesNoBase
    {
        label="Headset";
        changeInGame=0;
        alwaysSelectable=0;
    };
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
};

class JCA_beret
{
    label="Beret";
    options[]={"camo","headset"};
    class camo: JCA_colorBase{};
    class headset: JCA_yesNoBase
    {
        label="Headset";
        changeInGame=0;
        alwaysSelectable=0;
    };
};

class JCA_cap
{
    label="Cap";
    options[]={"camo","headset","glasses","glassesStyle"};
    class camo: JCA_colorBase{};
    class headset: JCA_yesNoBase
    {
        label="Headset";
        changeInGame=0;
        alwaysSelectable=0;
    };
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
};

class JCA_cap_military
{
    label="Field Cap";
    options[]={"camo","headset"};
    class camo: JCA_colorBase{};
    class headset: JCA_yesNoBase
    {
        label="Headset";
        changeInGame=0;
        alwaysSelectable=0;
    };
};
