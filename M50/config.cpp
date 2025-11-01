class CfgPatches
{
    class JCA_M50_aceax // JCA - M50 APR
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_M50"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgGlasses
    {
        #include "m50Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgGlasses
    {
        #include "m50Infos.hpp"
    };
};