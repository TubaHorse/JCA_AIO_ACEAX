class JCA_NBCD
{
	label="NBCD Suit";
	options[]={"camo","hood"};
	class camo: JCA_colorBase{};
	class hood: SleevesBase
	{
		label="Hood";
		icon="\JCA_AIO_ACEAX\ui\hoodieUP.paa";
		values[]={"up","dn"};
		class up
		{
			label="Up";
			actionLabel="Hood Up";
			icon="\JCA_AIO_ACEAX\ui\hoodieUP.paa";
		};
		class dn
		{
			label="Down";
			actionLabel="Hood Down";
			icon="\JCA_AIO_ACEAX\ui\hoodieDN.paa";
		};
	};
};