class CfgPatches
{
    class JCA_Beanie_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Headwear_F_JCA_SHRP"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons {
        #include "beanieModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons {
        #include "beanieInfos.hpp"
    };
};
