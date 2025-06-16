class JCA_MCRP
{
	label="Modular Carrier Vest";
	options[]={"camo","variant"};
	class camo: JCA_colorBase{};
	class variant
	{
		label="Variant";
		values[]={"Standard","Light","Heavy","Combat","Commander","Compact","CQB","Crew","Holster","Recon","Tactical"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};