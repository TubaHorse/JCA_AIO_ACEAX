class CfgPatches
{
    class JCA_Cap_Goggles_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Headwear_F_JCA_SHRP","Facewear_F_JCA_TG"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase{};
    class JCA_yesNoBase{};
    class CfgWeapons
    {
        #include "capGogglesModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "capGogglesInfos.hpp"
    };
};