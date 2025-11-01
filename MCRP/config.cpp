class CfgPatches
{
    class JCA_MCRP_aceax // JCA - Modular Carrier Remake Project
    {
        author="TubaHorse";
        version=1.0;
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[] = {"aceax_gearinfo","JCA_AIO_aceax","vests_f_JCA_MCRP"};
        skipWhenMissingDependencies = 1;
    };
};

// Commented out, not currently working
// Intention of this code below is to make GL rigs' explosive resistance on par w/ the other GL rigs/EOD vests
/* class CfgWeapons
{
    class V_CarrierRigKBT_01_base_F
    {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
}; */

class XtdGearModels
{
    class JCA_colorBase;
    class CfgWeapons
    {
        #include "vestModels.hpp"
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        #include "vestInfos.hpp"
    };
};