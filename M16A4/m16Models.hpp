class jca_m16
{
	options[] = {"camo", "attachment"};
	label="M16A4 5.56";
	class camo: JCA_colorBase{};
	class attachment
	{
		label = "Attachment";
		values[] = {"None","VFG","GL"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};