class CfgPatches
{
    class JCA_E22_RAF2_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Data_F_RAF"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class CamoBase {
        class RAF_ALP {
            label="Alpine";
            image="\JCA_AIO_ACEAX\ui\alp.paa"
        };
        class RAF_ARD {
            label="Arid";
            image="\JCA_AIO_ACEAX\ui\ard.paa"
        };
        class RAF_LES {
            label="Lesnoy";
            image="\JCA_AIO_ACEAX\ui\les.paa"
        };
    };
    class SleevesBase;

    class JCA_E22_RAF_colorBase {
        values[]={"RAF_ALP","RAF_ARD","RAF_LES"};
    };

    class CfgWeapons {
        #include "uniforms\E22_RAF_UniformModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons {
        #include "uniforms\E22_RAF_UniformInfos.hpp"
    };
};