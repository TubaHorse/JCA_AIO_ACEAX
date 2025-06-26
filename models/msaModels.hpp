class JCA_MSA
{
	label="APR MSA";
	options[]={"camo","tint"};
	class camo: JCA_colorBase{};
	class tint
	{
		label="Tint";
		values[]={"Clear","Tinted"};
		alwaysSelectable=1;
		changingame=0;
	};
};