class CfgPatches
{
    class JCA_MHRP_aceax // Modular Helmet Remake Project
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Headwear_F_JCA_MHRP"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
    class JCA_H_HelmetHBK_base_F;
    class JCA_H_HelmetHBK_chops_base_F: JCA_H_HelmetHBK_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_H_HelmetHBK_ear_base_F: JCA_H_HelmetHBK_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_H_HelmetHBK_headset_base_F: JCA_H_HelmetHBK_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "mhrpModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "mhrpInfos.hpp"
    };
};