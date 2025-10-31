class CfgPatches
{
    class JCA_Balaclava_headset_glasses_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_TF","Facewear_F_JCA_CH","Facewear_F_JCA_TGRP"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\balaclava_H_BothInfos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\balaclavaBothInfos.hpp"
    };
};