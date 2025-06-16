class CfgPatches
{
    class JCA_MCRP_2035_aceax // JCA - MCRP Expansion 2035
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","vests_f_JCA_MCRP"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\2035VestModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\2035VestInfos.hpp"
    };
};