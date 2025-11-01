class CfgPatches
{
    class JCA_mk153_aceax // JCA - Mk153
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_Mk153"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "mk153Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "mk153Infos.hpp"
    };
}