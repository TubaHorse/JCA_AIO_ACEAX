class jca_ModHelm;
class E22_RAF_jca_ModHelm: jca_ModHelm {
	class camo {
		values[]={"RAF_ALP","RAF_ARD","RAF_LES"};
	};
};

class JCA_beret;
class E22_RAF_JCA_beret: JCA_beret {
	class camo {
		values[]={"RAF_ALP","BLU","GRN","RED"};
		class RED {
			label="Red";
			image="#(rgb,8,8,3)color(0.9,0,0,1)";
		};
	};
};

class E22_RAF_SparrowH {
	label="Sparrow Helmet";
	options[]={"camo","cover","headset","light"};
	class camo: JCA_E22_RAF_colorBase{};
	class cover: jca_yesNoBase{
		label="Cover";
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class headset: jca_yesNoBase{
		label="Headset";
	};
	class light: jca_yesNoBase{
		label="Headlamp";
	};
};

class E22_RAF_FieldCap {
	label="Field Cap";
	options[]={"camo"};
	class camo: JCA_E22_RAF_colorBase{};
};

class E22_RAF_HeliPilot {
	label="Heli Pilot Helmet";
	options[]={"visor"};
	class visor {
		label="Visor Position";
		values[]={"Up","Down"};
		class Up {
			actionLabel="Raise Visor";
			icon="\JCA_AIO_ACEAX\ui\visor.paa";
		};
		class Down {
			actionLabel="Lower Visor";
			icon="\JCA_AIO_ACEAX\ui\visor.paa";
		};
		changeingame=1;
		alwaysSelectable=1;
	};
};