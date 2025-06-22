class CfgPatches
{
    class Grave_USMC_aceax // USMC 2035 - Weapons
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax",};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class cfgWeapons
    {
        #include "\JCA_AIO_aceax\models\usmcWepModels.hpp"
    };
};
class XtdGearInfos
{
    class cfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\usmcWepInfos.hpp"
    };
};