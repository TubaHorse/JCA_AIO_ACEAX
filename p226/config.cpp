class CfgPatches
{
    class JCA_P226_aceax // JCA - P226
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_P226"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "p226Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "p226Infos.hpp"
    };
};