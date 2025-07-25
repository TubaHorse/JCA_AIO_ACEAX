class CfgPatches
{
    class JCA_IE_aceax // JCA - Infantry Equipment
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Headwear_F_JCA_IE","vests_f_JCA_IE"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
    #include "\JCA_AIO_aceax\acecompats\headgearCompat.hpp"
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\mhrpModel.hpp"
        #include "\JCA_AIO_aceax\models\vestModels.hpp"
        #include "\JCA_AIO_aceax\models\chModels.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\ch_gModels.hpp"
        #include "\JCA_AIO_aceax\models\m50Models.hpp"
        #include "\JCA_AIO_aceax\models\msaModels.hpp"
        #include "\JCA_AIO_aceax\models\tacGModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\mhrpInfos.hpp"
        #include "\JCA_AIO_aceax\infos\vestInfos.hpp"
        #include "\JCA_AIO_aceax\infos\chInfos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\ch_gInfos.hpp"
        #include "\JCA_AIO_aceax\infos\m50Infos.hpp"
        #include "\JCA_AIO_aceax\infos\msaInfos.hpp"
        #include "\JCA_AIO_aceax\infos\tacGInfos.hpp"
    };
};