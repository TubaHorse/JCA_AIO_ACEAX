class CfgPatches
{
    class JCA_SCAR_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax", "Weapons_F_JCA_SCAR"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        class JCA_SCAR
        {
            label="SCAR";
            options[]={"camo","version","attachment","barrel"};
            class camo: JCA_colorBase{};
            class version
            {
                label="Model";
                values[]={"Heavy","Light"};
                description="The SCAR comes in Heavy (7.62mm) or Light (5.56) variants";
                alwaysSelectable=1;
                changeInGame=0;
            };
            class attachment
            {
                label="Attachment";
                values[]={"None","UBGL"};
                description="Underbarrel attachment options";
                alwaysSelectable=0;
                changeInGame=0;
            };
            class barrel
            {
                label="Barrel Length";
                values[]={"Standard","Short"};
                alwaysSelectable=0;
                changeInGame=0;
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        class JCA_arifle_SCAR_H_black_F {
            model="JCA_SCAR";
            camo="BLK";
            version="Heavy";
            attachment="None";
            barrel="Standard";
        };
        class JCA_arifle_SCAR_H_short_black_F: JCA_arifle_SCAR_H_black_F {
            barrel="Short";
        };
        class JCA_arifle_SCAR_H_GL_black_F: JCA_arifle_SCAR_H_black_F {
            attachment="UBGL";
        };
        class JCA_arifle_SCAR_L_black_F: JCA_arifle_SCAR_H_black_F {
            version="Light";
        };
        class JCA_arifle_SCAR_L_short_black_F: JCA_arifle_SCAR_H_black_F {
            version="Light";
            barrel="Short";
        };
        class JCA_arifle_SCAR_L_GL_black_F: JCA_arifle_SCAR_H_black_F {
            version="Light";
            attachment="UBGL";
        };

        class JCA_arifle_SCAR_H_sand_F: JCA_arifle_SCAR_H_black_F {
            camo="SND";
        };
        class JCA_arifle_SCAR_H_short_sand_F: JCA_arifle_SCAR_H_sand_F {
            barrel="Short";
        };
        class JCA_arifle_SCAR_H_GL_sand_F: JCA_arifle_SCAR_H_sand_F {
            attachment="UBGL";
        };
        class JCA_arifle_SCAR_L_sand_F: JCA_arifle_SCAR_H_sand_F {
            version="Light";
        };
        class JCA_arifle_SCAR_L_short_sand_F: JCA_arifle_SCAR_H_sand_F {
            version="Light";
            barrel="Short";
        };
        class JCA_arifle_SCAR_L_GL_sand_F: JCA_arifle_SCAR_H_sand_F {
            version="Light";
            attachment="UBGL";
        };

        class JCA_arifle_SCAR_H_olive_F: JCA_arifle_SCAR_H_black_F {
            camo="OLI";
        };
        class JCA_arifle_SCAR_H_short_olive_F: JCA_arifle_SCAR_H_olive_F {
            barrel="Short";
        };
        class JCA_arifle_SCAR_H_GL_olive_F: JCA_arifle_SCAR_H_olive_F {
            attachment="UBGL";
        };
        class JCA_arifle_SCAR_L_olive_F: JCA_arifle_SCAR_H_olive_F {
            version="Light";
        };
        class JCA_arifle_SCAR_L_short_olive_F: JCA_arifle_SCAR_H_olive_F {
            version="Light";
            barrel="Short";
        };
        class JCA_arifle_SCAR_L_GL_olive_F: JCA_arifle_SCAR_H_olive_F {
            version="Light";
            attachment="UBGL";
        };

    };
};