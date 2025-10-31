class CfgPatches
{
    class JCA_Balaclava_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_TF"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\balaclava_H_Models.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\balaclavaModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\balaclava_H_Infos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\balaclavaInfos.hpp"
    };
};