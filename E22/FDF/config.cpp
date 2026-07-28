class CfgPatches
{
    class JCA_E22_FDF_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Data_F_FDF"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class CamoBase {
        class FDF_WDL {
            label="Woodland";
            image="\JCA_AIO_ACEAX\ui\fdf_wdl.paa"
        };
    };
    class JCA_E22_FDF_colorBase {
        values[]={"FDF_WDL"};
    };
    class SleevesBase;
    class jca_yesNoBase;

    class CfgWeapons
    {
        #include "uniforms\E22_FDF_uniformModels.hpp"
        #include "vests\E22_FDF_vestModels.hpp"
        #include "headgear\E22_FDF_headgearModels.hpp"
    };


    class CfgVehicles
    {
        #include "backpacks\E22_FDF_backpackModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "uniforms\E22_FDF_uniformInfos.hpp"
        #include "vests\E22_FDF_vestInfos.hpp"
        #include "headgear\E22_FDF_headgearInfos.hpp"
    };

    class CfgVehicles {
        #include "backpacks\E22_FDF_backpackInfos.hpp"
    };
};