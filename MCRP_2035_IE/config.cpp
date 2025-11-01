class CfgPatches
{
    class JCA_MCRP_2035_IE_aceax // JCA - MCRP Expansion 2035
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","JCA_IE_aceax","vests_f_JCA_IE","vests_f_JCA_MCRP_2035_IE"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\MCRP_2035\2035VestModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\MCRP_2035\2035VestInfos.hpp"
    };
};