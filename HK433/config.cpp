class CfgPatches
{
    class JCA_HK433_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_HK433"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "hk433Models.hpp"
    };
};

class XtdGearInfos
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "hk433Infos.hpp"
    };
};