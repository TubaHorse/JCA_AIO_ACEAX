class CfgPatches
{
    class JCA_MHRP_aceax // Modular Helmet Remake Project
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Headwear_F_JCA_MHRP"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "mhrpModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "mhrpInfos.hpp"
    };
};