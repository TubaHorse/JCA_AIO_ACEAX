class CfgPatches
{
    class JCA_Balaclava_glasses_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_TF","Facewear_F_JCA_TGRP"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgWeapons
    {
        #include "balaclava_H_GlassesModels.hpp"
    };
    class CfgGlasses
    {
        #include "balaclavaGlassesModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "balaclava_H_GlassesInfos.hpp"
    };
    class CfgGlasses
    {
        #include "balaclavaGlassesInfos.hpp"
    };
};