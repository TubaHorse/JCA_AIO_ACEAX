class CfgPatches
{
    class JCA_MSA_aceax
    {
        author="TubaHorse";
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
        requiredAddons[]={"ace_main","aceax_gearinfo","Facewear_F_JCA_MSA"};
        skipWhenMissingDependencies=1;
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
        model="\facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_empty_F.p3d";
    };

    // Light
    class JCA_G_AirPurifyingRespirator_04_base_light_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_light_F.p3d";
    };

    // Dual
    class JCA_G_AirPurifyingRespirator_04_base_dual_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_dual_F.p3d";
    };

    // Full
    class JCA_G_AirPurifyingRespirator_04_base_full_F: JCA_G_AirPurifyingRespirator_04_base_F
    {
        author="TubaHorse";
        scope=1;
        model="\facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_full_F.p3d";
    };

    //////////////////////////////////

    // Empty, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Black, Clear, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Empty, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Black, Tinted, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Empty, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Olive, Clear, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Empty, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Olive, Tinted, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Empty, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Sand, Clear, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Empty, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_empty_F: JCA_G_AirPurifyingRespirator_04_base_empty_F
    {
        displayName="APR MSA (Sand, Tinted, Empty)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };

    // Light, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Black, Clear, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Light, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Black, Tinted, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Light, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Olive, Clear, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Light, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Olive, Tinted, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Light, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Sand, Clear, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Light, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_light_F: JCA_G_AirPurifyingRespirator_04_base_light_F
    {
        displayName="APR MSA (Sand, Tinted, Light)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };

    // Dual, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Black, Clear, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Dual, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Black, Tinted, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Dual, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Olive, Clear, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Dual, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Olive, Tinted, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Dual, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Sand, Clear, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Dual, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_dual_F: JCA_G_AirPurifyingRespirator_04_base_dual_F
    {
        displayName="APR MSA (Sand, Tinted, Dual)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };

    // Full, Black
    class JCA_G_AirPurifyingRespirator_04_black_clear_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Black, Clear, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };
    // Full, Black, Tinted
    class JCA_G_AirPurifyingRespirator_04_black_tinted_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Black, Tinted, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
    };

    // Full, Olive
    class JCA_G_AirPurifyingRespirator_04_olive_clear_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Olive, Clear, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };
    // Full, Olive, Tinted
    class JCA_G_AirPurifyingRespirator_04_olive_tinted_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Olive, Tinted, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
    };

    // Full, Sand
    class JCA_G_AirPurifyingRespirator_04_sand_clear_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Sand, Clear, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
    // Full, Sand, Tinted
    class JCA_G_AirPurifyingRespirator_04_sand_tinted_full_F: JCA_G_AirPurifyingRespirator_04_base_full_F
    {
        displayName="APR MSA (Sand, Tinted, Full)";
        scope=2;
        hiddenSelectionsTextures[]={"facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa","facewear_f_JCA_MSA\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"};
        picture="\facewear_f_JCA_MSA\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgGlasses
    {
        #include "msaModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgGlasses
    {
        #include "msaInfos.hpp"
    };
};