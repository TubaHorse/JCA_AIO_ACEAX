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

class CfgGlasses
{
    #include "\JCA_AIO_aceax\acecompats\facewearCompat.hpp"
};

class XtdGearModels
{
    class JCA_colorBase;
    class JCA_yesNoBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\MHRP\mhrpModels.hpp"
        #include "\JCA_AIO_aceax\MCRP\vestModels.hpp"
        #include "\JCA_AIO_aceax\CH\chModels.hpp"
        #include "\JCA_AIO_aceax\facewear\balaclava\ie\balaclava_H_IEModels.hpp"
        #include "\JCA_AIO_aceax\facewear\shemag\ie\shemag_H_IEModels.hpp"
        // Beret only found in this mod I think
        class JCA_beret
        {
            label="Beret";
            options[]={"camo","headset"};
            class camo: JCA_colorBase{};
            class headset: JCA_yesNoBase{
                label="Headset";
                changeInGame=0;
                alwaysSelectable=0;
            };
        };
    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\CH\ch_gModels.hpp"
        #include "\JCA_AIO_aceax\M50\m50Models.hpp"
        #include "\JCA_AIO_aceax\MSA\msaModels.hpp"
        #include "\JCA_AIO_aceax\tacG\tacGModels.hpp"
        #include "\JCA_AIO_aceax\facewear\balaclava\ie\balaclavaIEModels.hpp"
        #include "\JCA_AIO_aceax\facewear\shemag\ie\shemagIEModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\MHRP\mhrpInfos.hpp"
        #include "\JCA_AIO_aceax\MCRP\vestInfos.hpp"
        #include "\JCA_AIO_aceax\CH\chInfos.hpp"
        #include "\JCA_AIO_aceax\facewear\balaclava\ie\balaclava_H_IEInfos.hpp"
        #include "\JCA_AIO_aceax\facewear\shemag\ie\shemag_H_IEInfos.hpp"
        // Beret only found in this mod I think
        class JCA_H_Beret_aceax
        {
            model="JCA_beret";
        };

        class JCA_H_Beret_01_black_F: JCA_H_Beret_aceax
        {
            camo="BLK";
            headset="No";
        };

        class JCA_H_Beret_01_headset_black_F: JCA_H_Beret_aceax
        {
            camo="BLK";
            headset="Yes";
        };

        class JCA_H_Beret_01_olive_F: JCA_H_Beret_aceax
        {
            camo="OLI";
            headset="No";
        };

        class JCA_H_Beret_01_headset_olive_F: JCA_H_Beret_aceax
        {
            camo="OLI";
            headset="Yes";
        };

        class JCA_H_Beret_01_sand_F: JCA_H_Beret_aceax
        {
            camo="SND";
            headset="No";
        };

        class JCA_H_Beret_01_headset_sand_F: JCA_H_Beret_aceax
        {
            camo="SND";
            headset="Yes";
        };

    };
    class CfgGlasses
    {
        #include "\JCA_AIO_aceax\CH\ch_gInfos.hpp"
        #include "\JCA_AIO_aceax\M50\m50Infos.hpp"
        #include "\JCA_AIO_aceax\MSA\msaInfos.hpp"
        #include "\JCA_AIO_aceax\tacG\tacGInfos.hpp"
        #include "\JCA_AIO_aceax\facewear\balaclava\ie\balaclavaIEInfos.hpp"
        #include "\JCA_AIO_aceax\facewear\shemag\ie\shemagIEInfos.hpp"
    };
};