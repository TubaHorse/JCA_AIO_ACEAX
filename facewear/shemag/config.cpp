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
        #include "shemag_H_Models.hpp"
    };
    class CfgGlasses
    {
        #include "shemagModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "shemag_H_Infos.hpp"
    };
    class CfgGlasses
    {
        #include "shemagInfos.hpp"
    };
};