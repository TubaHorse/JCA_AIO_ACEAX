class CfgPatches
{
    class JCA_CH_aceax // JCA - Combat Headset
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Headwear_F_JCA_CH"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\chModels.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\ch_gModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\chInfos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\ch_gInfos.hpp"
    };
};