class CfgPatches
{
    class JCA_CH_aceax // JCA - Combat Headset
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","Headwear_F_JCA_CH"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
    class JCA_H_Headset_Combat_01_base_F;
    class JCA_H_Headset_Combat_01_black_F: JCA_H_Headset_Combat_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_H_Headset_Combat_01_olive_F: JCA_H_Headset_Combat_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_H_Headset_Combat_01_sand_F: JCA_H_Headset_Combat_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
};

class CfgGlasses
{
    class JCA_G_Headset_Combat_01_base_F;
    class JCA_G_Headset_Combat_01_black_F: JCA_G_Headset_Combat_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_G_Headset_Combat_01_olive_F: JCA_G_Headset_Combat_01_base_F
    {
        ace_hearing_protection=0.75;
        ace_hearing_lowerVolume=0;
        ace_hearing_hasEHP=1;
    };
    class JCA_G_Headset_Combat_01_sand_F: JCA_G_Headset_Combat_01_base_F
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
        #include "chModels.hpp"
    };
    class CfgGlasses
    {
        #include "ch_gModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "chInfos.hpp"
    };
    class CfgGlasses
    {
        #include "ch_gInfos.hpp"
    };
};