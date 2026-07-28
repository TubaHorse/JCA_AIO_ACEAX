class E22_FDF_UAV_6 {
	label="UAV Bag (AL-6)";
	options[]={"camo","type"};
	class camo: JCA_E22_FDF_colorBase{};
	class type {
		label="Drone Type";
		values[]={"Demining","Medical","Utility"};
		changeingame=0;
	};
};