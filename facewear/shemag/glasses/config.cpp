class CfgPatches
{
    class JCA_Shemag_glasses_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_SHMG","Facewear_F_JCA_TGRP"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\shemag_H_GlassesModels.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\shemagGlassesModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\shemag_H_GlassesInfos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\shemagGlassesInfos.hpp"
    };
};