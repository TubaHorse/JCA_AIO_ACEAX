class CfgPatches
{
    class JCA_MCRP_MTP_aceax // JCA - MCRP Expansion MTP
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","JCA_MCRP_aceax","vests_f_JCA_MCRP","vests_f_JCA_MCRP_MTP_MCRP"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
	class JCA_colorBase;
    class CamoBase
    {
        class JCA_Alpine
        {
            label="MTP Alpine";
            image="\JCA_AIO_aceax\MCRP_MTP\img\preview_mtpalpine_co.paa";
        };
    };
    class CfgWeapons
    {
        #include "mtpVestModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "mtpVestInfos.hpp"
    };
};