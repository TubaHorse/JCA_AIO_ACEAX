class CfgPatches
{
    class JCA_Shemag_headset_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","Facewear_F_JCA_SHMG","Facewear_F_JCA_CH"};
        skipWhenMissingDependencies=1;
    };
};

class CfgWeapons
{
    class JCA_H_shemagh_01_base_F;
    class JCA_H_shemagh_01_headset_base_F: JCA_H_shemagh_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_H_shemagh_01_headset_glasses_base_F: JCA_H_shemagh_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
};

class CfgGlasses
{
    class JCA_G_shemagh_01_base_F;
    class JCA_G_shemagh_01_headset_base_F: JCA_G_shemagh_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_G_shemagh_01_headset_glasses_base_F: JCA_G_shemagh_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
};
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\models\shemag_H_HeadsetModels.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\models\shemagHeadsetModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\shemag_H_HeadsetInfos.hpp"
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\infos\shemagHeadsetInfos.hpp"
    };
};