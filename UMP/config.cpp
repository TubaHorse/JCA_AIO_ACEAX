class CfgPatches
{
    class JCA_UMP_aceax // UMP45
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_UMP"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_attachmentBase_3;
    class CfgWeapons
    {
        #include "umpModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "umpInfos.hpp"
    };
};