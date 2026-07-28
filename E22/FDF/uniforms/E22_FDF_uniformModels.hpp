// Combat Uniform
class JCA_E22_FDF_CombatUniform_aceax {
	title="Combat Uniform [FDF]";
	options[]={"camo","top","sleeves"};
	class camo: JCA_E22_FDF_colorBase{};
	class top {
		label="Top";
		values[]={"Standard","Light"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class sleeves: SleevesBase{
		values[]={"Full","Half"};
	};
};