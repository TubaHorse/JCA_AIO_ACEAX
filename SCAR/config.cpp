class CfgPatches
{
    class JCA_SCAR_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax", "Weapons_F_JCA_SCAR"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "scarModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "scarInfos.hpp"
    };
};