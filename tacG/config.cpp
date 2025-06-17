class CfgPatches
{
    class JCA_tacG_aceax // Tactical Glasses Remake Project
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_TGRP"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\tacGModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\tacGInfos.hpp"
    };
};