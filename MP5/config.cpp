class CfgPatches
{
    class JCA_MP5_aceax // JCA - MP5A5
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_MP5"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_attachmentBase_3;
    class CfgWeapons
    {
        #include "mp5Models.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "mp5Infos.hpp"
    };
};