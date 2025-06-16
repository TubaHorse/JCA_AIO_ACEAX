class jca_m4a1
{
	options[] = {"camo", "barrel", "attachment"};
	label = "M4A1 5.56"
	class camo: JCA_colorBase{};
	class barrel
	{
		label = "Barrel Length";
		values[] = {"Standard","CQB"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class attachment
	{
		label = "Attachment";
		values[] = {"None","GL"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};
class jca_m4a4
{
	options[] = {"camo", "attachment"};
	label="M4A4 5.56";
	class camo: JCA_colorBase{};
	class attachment
	{
		label = "Attachment";
		values[] = {"AFG","VFG","GL"};
		changeingame = 0;
		alwaysSelectable = 1;
	}
};
class jca_sr25
{
	options[] = {"camo"};
	label="Mk11";
	class camo: JCA_colorBase{};
};
class jca_sr10
{
	label="SR10";
	options[] = {"camo","attachment"};
	class camo: JCA_colorBase{};
	class attachment
	{
		label="Attachment";
		values[] = {"AFG","VFG"};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};