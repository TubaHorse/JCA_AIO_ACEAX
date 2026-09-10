class CfgPatches
{
    class JCA_MP7_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Weapons_F_JCA_MP7"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_attachmentBase_3;
    class CfgWeapons
    {
        #include "mp7Models.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "mp7Infos.hpp"
    };
};