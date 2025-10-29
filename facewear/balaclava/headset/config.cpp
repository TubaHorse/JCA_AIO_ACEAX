class CfgPatches
{
    class JCA_Balaclava_headset_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_TF","Facewear_F_JCA_CH"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\balaclavaHeadsetModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\balaclavaHeadsetInfos.hpp"
    };
};