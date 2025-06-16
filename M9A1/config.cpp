class CfgPatches
{
    class JCA_M9A1_aceax // JCA - M9A1
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_M9A1"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\m9a1Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\m9a1Infos.hpp"
    };
};