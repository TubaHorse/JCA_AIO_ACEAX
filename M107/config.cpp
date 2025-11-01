class CfgPatches
{
    class JCA_M107_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_M107"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "m107Models.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "m107Infos.hpp"
    };
};