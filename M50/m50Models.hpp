class JCA_M50
{
	label="M50 APR";
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