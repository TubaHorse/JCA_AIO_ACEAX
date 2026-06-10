class CfgPatches
{
    class JCA_Glock17_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_G17"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "glk17Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "glk17Infos.hpp"
    };
};