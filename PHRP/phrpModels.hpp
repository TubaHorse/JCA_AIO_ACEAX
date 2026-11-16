class PHRP_aceax {
	label = "Heli Pilot Helmet";
	options[] = {"camo","visor","mask"};
	class camo: JCA_colorBase{};
	class mask {
		label = "Mask";
		values[] = {"on","off"};
		class on {
			label = "On";
			actionLabel = "Mask On";
			icon = "\JCA_AIO_ACEAX\ui\mskON.paa";
		};
		class off {
			label = "Off";
			actionLabel = "Mask Off";
			icon = "\JCA_AIO_ACEAX\ui\vsrUP.paa";
		};
		changeingame = 1;
		alwaysSelectable = 1;
	};
	class visor {
		label = "Visor";
		values[] = {"up","dn"};
		class up 
		{
			label = "Up";
			actionLabel = "Raise Visor";
			icon = "\JCA_AIO_ACEAX\ui\vsrUP.paa";
		};
		class dn
		{
			label = "Down";
			actionLabel = "Lower Visor";
			icon = "\JCA_AIO_ACEAX\ui\vsrDN.paa";
		};
		changeingame = 1;
		alwaysSelectable = 1;
	};
};