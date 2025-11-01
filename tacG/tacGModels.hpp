class JCA_tacG
{
	label="Tactical Glasses";
	options[]={"camo","style"};
	class camo: JCA_colorBase{};
	class style
	{
		label="Style";
		values[]={"Clear","Faded","Tinted","Amber"};
		alwaysSelectable=1;
		changingame=0;
	};
};