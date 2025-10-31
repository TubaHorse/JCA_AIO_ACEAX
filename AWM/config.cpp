class CfgPatches
{
    class JCA_AWM_aceax // JCA - M115A3
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_AWM"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "awmModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "awmInfos.hpp"
    };
};