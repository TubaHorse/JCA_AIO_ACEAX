class CfgPatches
{
    class JCA_Beret_Headset_ACEAX
    {       
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Headwear_F_JCA_SHRP","Headwear_F_JCA_CH"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase{};
    class JCA_yesNoBase{};
    class CfgWeapons {
        #include "beretHeadsetModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons {
        #include "beretHeadsetInfos.hpp"
    };
};