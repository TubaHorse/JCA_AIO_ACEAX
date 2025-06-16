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
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\mhrpInfos.hpp"
        #include "\JCA_AIO_aceax\infos\vestInfos.hpp"
    };
};