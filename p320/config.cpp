class CfgPatches
{
    class JCA_P320_aceax // JCA - P320
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_P320"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\p320Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\p320Infos.hpp"
    };
};