class CfgPatches
{
    class JCA_IE_aceax // JCA - Infantry Equipment
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={
            "JCA_G_AirPurifyingRespirator_04_base_empty_F",
            "JCA_G_AirPurifyingRespirator_04_base_light_F",
            "JCA_G_AirPurifyingRespirator_04_base_dual_F",
            "JCA_G_AirPurifyingRespirator_04_base_dual_F",
            "JCA_G_AirPurifyingRespirator_04_black_clear_empty_F",
            "JCA_G_AirPurifyingRespirator_04_black_tinted_empty_F",
            "JCA_G_AirPurifyingRespirator_04_olive_clear_empty_F",
            "JCA_G_AirPurifyingRespirator_04_olive_tinted_empty_F",
            "JCA_G_AirPurifyingRespirator_04_sand_clear_empty_F",
            "JCA_G_AirPurifyingRespirator_04_sand_tinted_empty_F",
            "JCA_G_AirPurifyingRespirator_04_black_clear_light_F",
            "JCA_G_AirPurifyingRespirator_04_black_tinted_light_F",
            "JCA_G_AirPurifyingRespirator_04_olive_clear_light_F",
            "JCA_G_AirPurifyingRespirator_04_olive_tinted_light_F",
            "JCA_G_AirPurifyingRespirator_04_sand_clear_light_F",
            "JCA_G_AirPurifyingRespirator_04_sand_tinted_light_F",
            "JCA_G_AirPurifyingRespirator_04_black_clear_dual_F",
            "JCA_G_AirPurifyingRespirator_04_black_tinted_dual_F",
            "JCA_G_AirPurifyingRespirator_04_olive_clear_dual_F",
            "JCA_G_AirPurifyingRespirator_04_olive_tinted_dual_F",
            "JCA_G_AirPurifyingRespirator_04_sand_clear_dual_F",
            "JCA_G_AirPurifyingRespirator_04_sand_tinted_dual_F",
            "JCA_G_AirPurifyingRespirator_04_black_clear_full_F",
            "JCA_G_AirPurifyingRespirator_04_black_tinted_full_F",
            "JCA_G_AirPurifyingRespirator_04_olive_clear_full_F",
            "JCA_G_AirPurifyingRespirator_04_olive_tinted_full_F",
            "JCA_G_AirPurifyingRespirator_04_sand_clear_full_F",
            "JCA_G_AirPurifyingRespirator_04_sand_tinted_full_F"
        };
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
    #include "\JCA_AIO_aceax\MSA\extraVariants.hpp"
    
    // Base classes
    class JCA_G_AirPurifyingRespirator_04_base_F;
    // Empty
    class JCA_G_AirPurifyingRespirator_04_base_empty_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_empty_F.p3d";
    };

    // Light
    class JCA_G_AirPurifyingRespirator_04_base_light_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_light_F.p3d";
    };

    // Dual
    class JCA_G_AirPurifyingRespirator_04_base_dual_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_dual_F.p3d";
    };

    // Full
    class JCA_G_AirPurifyingRespirator_04_base_full_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_full_F.p3d";
    };

    //////////////////////////////////

    // Empty, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Black, Clear, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Empty, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Black, Tinted, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Empty, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Olive, Clear, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Empty, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Olive, Tinted, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Empty, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Sand, Clear, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Empty, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Sand, Tinted, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };

    // Light, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Black, Clear, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Light, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Black, Tinted, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Light, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Olive, Clear, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Light, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Olive, Tinted, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Light, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Sand, Clear, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Light, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Sand, Tinted, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };

    // Dual, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Black, Clear, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Dual, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Black, Tinted, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Dual, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Olive, Clear, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Dual, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Olive, Tinted, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Dual, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Sand, Clear, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Dual, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Sand, Tinted, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };

    // Full, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Black, Clear, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Full, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Black, Tinted, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Full, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Olive, Clear, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Full, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Olive, Tinted, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Full, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Sand, Clear, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Full, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Sand, Tinted, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
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