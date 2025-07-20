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
        #include "\JCA_AIO_aceax\models\awmModels.hpp"
        #include "\JCA_AIO_aceax\models\gen4Models.hpp"
        #include "\JCA_AIO_aceax\models\m16Models.hpp"
        #include "\JCA_AIO_aceax\models\mp5Models.hpp"
        #include "\JCA_AIO_aceax\models\umpModels.hpp"
        #include "\JCA_AIO_aceax\models\p226Models.hpp"
        #include "\JCA_AIO_aceax\models\p320Models.hpp"
        #include "\JCA_AIO_aceax\models\m9a1Models.hpp"
        #include "\JCA_AIO_aceax\models\mk23Models.hpp"
        #include "\JCA_AIO_aceax\models\mk153Models.hpp"
        #include "\JCA_AIO_aceax\models\m72Models.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\awmInfos.hpp"
        #include "\JCA_AIO_aceax\infos\gen4Infos.hpp"
        #include "\JCA_AIO_aceax\infos\m16Infos.hpp"
        #include "\JCA_AIO_aceax\infos\mp5Infos.hpp"
        #include "\JCA_AIO_aceax\infos\umpInfos.hpp"
        #include "\JCA_AIO_aceax\infos\p226Infos.hpp"
        #include "\JCA_AIO_aceax\infos\p320Infos.hpp"
        #include "\JCA_AIO_aceax\infos\m9a1Infos.hpp"
        #include "\JCA_AIO_aceax\infos\mk23Infos.hpp"
        #include "\JCA_AIO_aceax\infos\mk153Infos.hpp"
        #include "\JCA_AIO_aceax\infos\m72Infos.hpp"
    };
};