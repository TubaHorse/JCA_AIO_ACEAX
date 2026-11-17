class CfgPatches
{
    class JCA_TacSuit_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","JCA_AIO_aceax","Uniforms_F_OPF_TacticalSuit"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class CfgWeapons
    {
        class TacSuit_aceax {
            label = "Tactical Suit";
            options[] = {"camo"};
            class camo {
                values[] = {"TAN","BLK","BLU","BRN","GRN","GRY","RED","WHT"};
                /* class TAN {
                    label = "Beige";
                    image = "#(rgb,8,8,3)color(0.498,0.428,0.313,1)";
                }; */
                class BRN {
                    label = "Brown";
                    image = "#(rgb,8,8,3)color(0.2,0.155,0.081,1)";
                };
                class RED {
                    label = "Red";
                    image = "#(rgb,8,8,3)color(0.266,0.135,0.133,1)";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons {
        class OPF_U_TacticalSuit_beige_F
        {
            model = "TacSuit_aceax";
            camo = "TAN";
        };
        class OPF_U_TacticalSuit_black_F
        {
            model = "TacSuit_aceax";
            camo = "BLK";
        };
        class OPF_U_TacticalSuit_blue_F
        {
            model = "TacSuit_aceax";
            camo = "BLU";
        };
        class OPF_U_TacticalSuit_brown_F
        {
            model = "TacSuit_aceax";
            camo = "BRN";
        };
        class OPF_U_TacticalSuit_green_F
        {
            model = "TacSuit_aceax";
            camo = "GRN";
        };
        class OPF_U_TacticalSuit_grey_F
        {
            model = "TacSuit_aceax";
            camo = "GRY";
        };
        class OPF_U_TacticalSuit_red_F
        {
            model = "TacSuit_aceax";
            camo = "RED";
        };
        class OPF_U_TacticalSuit_white_F
        {
            model = "TacSuit_aceax";
            camo = "WHT";
        };
    };
};