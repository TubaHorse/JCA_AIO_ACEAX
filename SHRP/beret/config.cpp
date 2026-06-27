class CfgPatches
{
    class JCA_Beret_ACEAX
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
        #include "beretModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons {
        #include "beretInfos.hpp"
    };
};