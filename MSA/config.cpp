class CfgPatches
{
    class JCA_MSA_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Facewear_F_JCA_MSA"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\msaModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\msaInfos.hpp"
    };
};