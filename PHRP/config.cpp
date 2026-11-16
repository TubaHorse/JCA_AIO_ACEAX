class CfgPatches
{
    class JCA_PHRP_ACEAX
    {
        author="";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","JCA_AIO_aceax", "Headwear_F_JCA_PHRP"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase{};
    class JCA_yesNoBase{};
    class CfgWeapons {
        #include "phrpModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons {
        #include "phrpInfos.hpp"
    };
};