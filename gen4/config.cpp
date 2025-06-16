
class CfgPatches
{
    class JCA_gen4_aceax // JCA - Gen 4 Weapon Family
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_Gen4"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\gen4Models.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\gen4Infos.hpp"
    };
};