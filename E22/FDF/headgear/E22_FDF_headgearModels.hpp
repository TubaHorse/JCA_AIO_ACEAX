class jca_ModHelm;
class E22_FDF_jca_ModHelm: jca_ModHelm {
	class camo: JCA_E22_FDF_colorBase{};
};

class E22_FDF_beret {
	title="Beret [FDF]";
	options[]={"camo","headset"};
	class camo {
		values[]={"BLK"};
	};
	class headset: jca_yesNoBase{};
};

class E22_FDF_HeliPilot {
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