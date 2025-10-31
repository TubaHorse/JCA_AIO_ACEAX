class CfgPatches
{
    class JCA_Shemag_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_SHMG"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\shemag_H_Models.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\shemagModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\shemag_H_Infos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\shemagInfos.hpp"
    };
};