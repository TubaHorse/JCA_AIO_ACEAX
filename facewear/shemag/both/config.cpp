class CfgPatches
{
    class JCA_Shemag_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_SHMG","Facewear_F_JCA_CH","Facewear_F_JCA_TGRP"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearInfos
{
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\shemagBothInfos.hpp"
    };
};