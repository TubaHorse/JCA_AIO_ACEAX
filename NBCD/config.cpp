class CfgPatches
{
    class JCA_NBCD_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Uniforms_F_JCA_NBCD"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class SleevesBase;
    class CfgWeapons
    {
        #include "nbcdModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "nbcdInfos.hpp"
    };
};