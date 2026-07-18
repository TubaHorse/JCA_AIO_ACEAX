class CfgPatches
{
    class JCA_SCAR_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","JCA_AIO_aceax", };
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
        
    };
};