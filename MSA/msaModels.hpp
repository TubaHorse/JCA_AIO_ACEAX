class JCA_MSA
{
	label="APR MSA";
	options[]={"camo","style","tint"};
	class camo: JCA_colorBase{};
	class tint
	{
		label="Tint";
		values[]={"Clear","Tinted"};
		alwaysSelectable=1;
		changingame=0;
	};
	class style
	{
		label="Loadout";
		values[]={"Empty","Light","Single","Dual","Full"};
		alwaysSelectable=1;
		changingame=0;
	};
};