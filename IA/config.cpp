class CfgPatches
{
    class JCA_IA_aceax // JCA - Infantry Arsenal
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Weapons_F_JCA_IA"};
        skipWhenMissingDependencies = 1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_attachmentBase_3;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\awm\awmModels.hpp"
        #include "\JCA_AIO_aceax\gen4\gen4Models.hpp"
        #include "\JCA_AIO_aceax\M16A4\m16Models.hpp"
        #include "\JCA_AIO_aceax\MP5\mp5Models.hpp"
        #include "\JCA_AIO_aceax\UMP\umpModels.hpp"
        #include "\JCA_AIO_aceax\p226\p226Models.hpp"
        #include "\JCA_AIO_aceax\p320\p320Models.hpp"
        #include "\JCA_AIO_aceax\m9a1\m9a1Models.hpp"
        #include "\JCA_AIO_aceax\mk23\mk23Models.hpp"
        #include "\JCA_AIO_aceax\mk153\mk153Models.hpp"
        #include "\JCA_AIO_aceax\m72\m72Models.hpp"
        #include "\JCA_AIO_aceax\m107\m107Models.hpp"
        #include "\JCA_AIO_aceax\HK433\hk433Models.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\awm\awmInfos.hpp"
        #include "\JCA_AIO_aceax\gen4\gen4Infos.hpp"
        #include "\JCA_AIO_aceax\M16A4\m16Infos.hpp"
        #include "\JCA_AIO_aceax\MP5\mp5Infos.hpp"
        #include "\JCA_AIO_aceax\UMP\umpInfos.hpp"
        #include "\JCA_AIO_aceax\p226\p226Infos.hpp"
        #include "\JCA_AIO_aceax\p320\p320Infos.hpp"
        #include "\JCA_AIO_aceax\m9a1\m9a1Infos.hpp"
        #include "\JCA_AIO_aceax\mk23\mk23Infos.hpp"
        #include "\JCA_AIO_aceax\mk153\mk153Infos.hpp"
        #include "\JCA_AIO_aceax\m72\m72Infos.hpp"
        #include "\JCA_AIO_aceax\m107\m107Infos.hpp"
        #include "\JCA_AIO_aceax\HK433\hk433Infos.hpp"
    };
};