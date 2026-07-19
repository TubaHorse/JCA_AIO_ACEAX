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
        #include "chModels.hpp"
    };
    class CfgGlasses
    {
        #include "ch_gModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "chInfos.hpp"
    };
    class CfgGlasses
    {
        #include "ch_gInfos.hpp"
    };
};