class JCA_ACOG_aceax
{
	label="ACOG";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_AHO_aceax
{
	label="AHO";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_AICO_aceax
{
	label="AICO";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_ARO_aceax
{
	label="ARO";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_ARS_aceax
{
	label="ARS";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_CRBS_aceax
{
	label="CRBS";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_CRO_aceax
{
	label="CRO";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_HPCS_aceax
{
	label="HPCS";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_HPPO_aceax
{
	label="HPPO";
	options[]={"camo","rad"};
	class camo: JCA_colorBase{};
	class rad: JCA_yesNoBase{
		label="Rangefinder";
		changeingame=0;
		alwaysselectable=1;
	};
};


class JCA_ICO_aceax
{
	label="ICO";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_IHO_aceax
{
	label="IHO";
	options[]={"camo","mag"};
	class camo: JCA_colorBase{};
	class mag: JCA_yesNoBase{
		label="Magnifier";
		changeingame=0;
		alwaysselectable=1;
	};
};

class JCA_MCRS_aceax
{
	label="MCRS";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};

class JCA_MROS_aceax
{
	label="MROS";
	options[]={"camo","mag"};
	class camo: JCA_colorBase{};
	class mag: JCA_yesNoBase{
		label="Magnifier";
		changeingame=0;
		alwaysselectable=1;
	};
};


class JCA_MRPS_aceax
{
	label="MRPS";
	options[]={"camo"};
	class camo: JCA_colorBase{};
};