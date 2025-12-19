class CfgPatches
{
    class JCA_HK437_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Weapons_F_JCA_HK437"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_attachmentBase_3; 
    class CfgWeapons
    {
        #include "hk437Models.hpp"
    };
};

class XtdGearInfos
{
    class JCA_colorBase;
    class JCA_attachmentBase_3;
    class CfgWeapons
    {
        #include "hk437Infos.hpp"
    };
};