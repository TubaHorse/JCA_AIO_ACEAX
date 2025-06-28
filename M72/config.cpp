class CfgPatches
{
    class JCA_M72_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_M72"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\m72Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\m72Infos.hpp"
    };
};