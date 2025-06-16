class jca_UMP
{
	options[] = {"camo", "attachment"};
	label="UMP .45 ACP";
	class camo: JCA_colorBase{};
	class attachment
	{
		label="Attachment";
		values[] = {"None","AFG","VFG"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};