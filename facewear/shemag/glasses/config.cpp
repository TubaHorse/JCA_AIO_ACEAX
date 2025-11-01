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
        #include "shemag_H_GlassesModels.hpp"
    };
    class CfgGlasses
    {
        #include "shemagGlassesModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "shemag_H_GlassesInfos.hpp"
    };
    class CfgGlasses
    {
        #include "shemagGlassesInfos.hpp"
    };
};