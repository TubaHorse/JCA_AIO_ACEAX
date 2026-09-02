class CfgPatches
{
    class JCA_Attachments_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","JCA_AIO_aceax","aceaxatt_main"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgWeapons
    {
        #include "models\optics.hpp"
        #include "models\muzzles.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "infos\optics.hpp"
        #include "infos\muzzles.hpp"
    };
};