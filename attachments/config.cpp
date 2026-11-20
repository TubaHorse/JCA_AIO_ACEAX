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
        #include "models\lasers.hpp"

        // Don't want to make a separate file just for bipods so they go in here
        class JCA_Bipod_aceax
        {
            label="Tactical Bipod";
            options[]={"camo"};
        };
    };
    /* class CfgMagazines
    {
        #include "models\magazines.hpp"
    }; */
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "infos\optics.hpp"
        #include "infos\muzzles.hpp"
        #include "infos\lasers.hpp"

        // Don't want to make a separate file just for bipods so they go in here
        class JCA_bipod_04_black
        {
            model="JCA_Bipod_aceax";
            camo="BLK";
        };
        class JCA_bipod_04_olive
        {
            model="JCA_Bipod_aceax";
            camo="OLI";
        };
        class JCA_bipod_04_sand
        {
            model="JCA_Bipod_aceax";
            camo="SND";
        };
    };
    /* class CfgMagazines
    {
        #include "infos\magazines.hpp"
    }; */
};