// CBRN Suits
class JCA_E22_RAF_CBRN_aceax {
	title="CBRN Suit [RAF]";
	options[]={"camo"};
	class camo: JCA_E22_RAF_colorBase{};
};

// Combat Uniform
class JCA_E22_RAF_CombatUniform_aceax {
	title="Combat Uniform [RAF]";
	options[]={"camo","top","sleeves"};
	class camo: JCA_E22_RAF_colorBase{};
	class top {
		label="Top";
		values[]={"Standard","Light","Sweater","Tee","Tank-top"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class sleeves: SleevesBase {
		values[]={"Full","Half","Cut"};
	};
};