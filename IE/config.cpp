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
        #include "\JCA_AIO_aceax\models\mhrpModel.hpp"
        #include "\JCA_AIO_aceax\models\vestModels.hpp"
        #include "\JCA_AIO_aceax\models\chModels.hpp"
        #include "\JCA_AIO_aceax\models\balaclava_H_IEModels.hpp"
        #include "\JCA_AIO_aceax\models\shemag_H_IEModels.hpp"
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
        #include "\JCA_AIO_aceax\models\ch_gModels.hpp"
        #include "\JCA_AIO_aceax\models\m50Models.hpp"
        #include "\JCA_AIO_aceax\models\msaModels.hpp"
        #include "\JCA_AIO_aceax\models\tacGModels.hpp"
        #include "\JCA_AIO_aceax\models\balaclavaIEModels.hpp"
        #include "\JCA_AIO_aceax\models\shemagIEModels.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\infos\mhrpInfos.hpp"
        #include "\JCA_AIO_aceax\infos\vestInfos.hpp"
        #include "\JCA_AIO_aceax\infos\chInfos.hpp"
        #include "\JCA_AIO_aceax\infos\balaclava_H_IEInfos.hpp"
        #include "\JCA_AIO_aceax\infos\shemag_H_IEInfos.hpp"
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
        #include "\JCA_AIO_aceax\infos\ch_gInfos.hpp"
        #include "\JCA_AIO_aceax\infos\m50Infos.hpp"
        #include "\JCA_AIO_aceax\infos\msaInfos.hpp"
        #include "\JCA_AIO_aceax\infos\tacGInfos.hpp"
        #include "\JCA_AIO_aceax\infos\balaclavaIEInfos.hpp"
        #include "\JCA_AIO_aceax\infos\shemagIEInfos.hpp"
    };
};