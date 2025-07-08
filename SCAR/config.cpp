class CfgPatches
{
    class JCA_SCAR_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax","lot_aaf_scar","lot_aaf_mk12"};
        skipWhenMissingDependencies=1;
    };
};

// Removing until mod author fixed no-attachment versions
/*
class CfgWeapons
{
    class lot_SCAR_base_F;
    class lot_SCAR_black_base_F;
    class lot_SCAR_khaki_base_F;
    class lot_SCAR_F: lot_SCAR_base_F
    {
        scope=2;
    };
    class lot_SCAR_black_F: lot_SCAR_black_base_F
    {
        scope=2;
    };
    class lot_SCAR_khaki_F: lot_SCAR_khaki_base_F
    {
        scope=2;
    };
};
*/

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        class LOT_SCAR
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
                values[]={"VFG","UBGL"}; // Removing "None", for now
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
        class JCA_MK12
        {
            label="Mk 12 Mod 1";
            options[]={"camo","attachment"};
            class camo: JCA_colorBase{};
            class attachment
            {
                label="Attachment";
                values[]={"VFG","AFG"};
                description="Underbarrel attachment options";
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
        class SCAR_aceax
        {
            model="LOT_SCAR";
        };

        /* class lot_SCAR_khaki_F: SCAR_aceax // Technically scope=0 on but seems to function in game
        {
            camo="OLI";
            version="Heavy";
            attachment="None";
            barrel="Standard";
        };
        class lot_SCAR_black_F: SCAR_aceax // Technically scope=0 on but seems to function in game
        {
            camo="BLK";
            attachment="None";
            version="Heavy";
            barrel="Standard";
        };
        class lot_SCAR_F: SCAR_aceax // Technically scope=0 on but seems to function in game
        {
            camo="SND";
            attachment="None";
            version="Heavy";
            barrel="Standard";
        }; */

        class lot_SCAR_GL_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="UBGL";
            version="Heavy";
            barrel="Short";
        };
        class lot_SCAR_GL_F: SCAR_aceax
        {
            camo="SND";
            attachment="UBGL";
            version="Heavy";
            barrel="Short";
        };
        class lot_SCAR_GL_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="UBGL";
            version="Heavy";
            barrel="Short";
        };

        class lot_SCAR_short_F: SCAR_aceax
        {
            camo="SND";
            attachment="None";
            version="Heavy";
            barrel="Short";
        };
        class lot_SCAR_short_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="None";
            version="Heavy";
            barrel="Short";
        };
        class lot_SCAR_short_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="None";
            version="Heavy";
            barrel="Short";
        };

        class lot_SCAR_grip_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="VFG";
            version="Heavy";
            barrel="Standard";
        };
        class lot_SCAR_grip_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="VFG";
            version="Heavy";
            barrel="Standard";
        };
        class lot_SCAR_grip_F: SCAR_aceax
        {
            camo="SND";
            attachment="VFG";
            version="Heavy";
            barrel="Standard";
        };

        /* class lot_SCAR_L_F: SCAR_aceax
        {
            camo="SND";
            attachment="None";
            version="Light";
            barrel="Standard";
        };
        class lot_SCAR_L_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="None";
            version="Light";
            barrel="Standard";
        };
        class lot_SCAR_L_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="None";
            version="Light";
            barrel="Standard";
        }; */

        class lot_SCAR_L_GL_F: SCAR_aceax
        {
            camo="SND";
            attachment="UBGL";
            version="Light";
            barrel="Short";
        };
        class lot_SCAR_L_GL_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="UBGL";
            version="Light";
            barrel="Short";
        };
        class lot_SCAR_L_GL_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="UBGL";
            version="Light";
            barrel="Short";
        };

        class lot_SCAR_L_short_F: SCAR_aceax
        {
            camo="SND";
            attachment="None";
            version="Light";
            barrel="Short";
        };
        class lot_SCAR_L_short_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="None";
            version="Light";
            barrel="Short";
        };
        class lot_SCAR_L_short_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="None";
            version="Light";
            barrel="Short";
        };

        class lot_SCAR_L_grip_F: SCAR_aceax
        {
            camo="SND";
            attachment="VFG";
            version="Light";
            barrel="Standard";
        };
        class lot_SCAR_L_grip_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="VFG";
            version="Light";
            barrel="Standard";
        };
        class lot_SCAR_L_grip_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="VFG";
            version="Light";
            barrel="Standard";
        };

        class lot_SCAR_short_grip_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="VFG";
            version="Heavy";
            barrel="Short";
        };

        class lot_SCAR_short_grip_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="VFG";
            version="Heavy";
            barrel="Short";
        };

        class lot_SCAR_short_grip_F: SCAR_aceax
        {
            camo="SND";
            attachment="VFG";
            version="Heavy";
            barrel="Short";
        };

        class lot_SCAR_L_grip_short_black_F: SCAR_aceax
        {
            camo="BLK";
            attachment="VFG";
            version="Light";
            barrel="Short";
        };

        class lot_SCAR_L_grip_short_khaki_F: SCAR_aceax
        {
            camo="OLI";
            attachment="VFG";
            version="Light";
            barrel="Short";
        };

        class lot_SCAR_L_grip_short_F: SCAR_aceax
        {
            camo="SND";
            attachment="VFG";
            version="Light";
            barrel="Short";
        };

        class MK12_aceax
        {
            model="JCA_MK12";
        };

        class JCA_arifle_Mk12_AFG_black_F: MK12_aceax
        {
            camo = "BLK";
            attachment = "AFG";
        };

        class JCA_arifle_Mk12_AFG_olive_F: MK12_aceax
        {
            camo = "OLI";
            attachment = "AFG";
        };

        class JCA_arifle_Mk12_AFG_sand_F: MK12_aceax
        {
            camo = "SND";
            attachment = "AFG";
        };

        class JCA_arifle_Mk12_VFG_black_F: MK12_aceax
        {
            camo = "BLK";
            attachment = "VFG";
        };

        class JCA_arifle_Mk12_VFG_olive_F: MK12_aceax
        {
            camo = "OLI";
            attachment = "VFG";
        };

        class JCA_arifle_Mk12_VFG_sand_F: MK12_aceax
        {
            camo = "SND";
            attachment = "VFG";
        };
    };
};