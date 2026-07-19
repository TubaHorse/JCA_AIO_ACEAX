class E22_RAF_AssaultPack {
	label="Assault Pack";
	options[]={"camo"};
	class camo: JCA_E22_RAF_colorBase{};
};

class E22_RAF_Carryall: E22_RAF_AssaultPack {
	label="Carryall";
};

class E22_RAF_CombatPack: E22_RAF_AssaultPack {
	label="Combat Pack";
};

class E22_RAF_Mk6_Bipod: E22_RAF_AssaultPack {
	label="Folded Mk6 Mortar Bipod";
};

class E22_RAF_Mk6_Tube: E22_RAF_AssaultPack {
	label="Folded Mk6 Mortar Tuba";
};

class E22_RAF_HighCap: E22_RAF_AssaultPack {
	label="High Capacity backpack";
};

class E22_RAF_Kitbag: E22_RAF_AssaultPack {
	label="Kitbag";
};

class E22_RAF_RadioPack: E22_RAF_AssaultPack {
	label="Radio Pack";
};

class E22_RAF_TacticalPack: E22_RAF_AssaultPack {
	label="Tactical Pack";
};

class E22_RAF_UAV_6: E22_RAF_AssaultPack {
	label="UAV Bag (AL-6)";
	options[]+={"type"};
	class type {
		label="Drone Type";
		values[]={"Demining","Medical","Utility"};
		changeingame=0;
	};
};

class E22_RAF_UAV_2: E22_RAF_AssaultPack {
	label="UAV Bag (AL-2)";
};