class CfgPatches
{
    class JCA_Shemag_headset_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_SHMG","Facewear_F_JCA_CH"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgWeapons
    {
        #include "shemag_H_HeadsetModels.hpp"
    };
    class CfgGlasses
    {
        #include "shemagHeadsetModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "shemag_H_HeadsetInfos.hpp"
    };
    class CfgGlasses
    {
        #include "shemagHeadsetInfos.hpp"
    };
};