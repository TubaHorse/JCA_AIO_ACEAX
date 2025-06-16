class CfgPatches
{
    class JCA_M16_aceax // JCA - M16A4
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_M16A4"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\m16Models.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\m16Infos.hpp"
    };
};