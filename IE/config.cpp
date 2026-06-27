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
    class SleevesBase;
    class CfgWeapons
    {
        #include "\JCA_AIO_aceax\MHRP\mhrpModels.hpp"
        #include "\JCA_AIO_aceax\MCRP\vestModels.hpp"
        #include "\JCA_AIO_aceax\CH\chModels.hpp"
        #include "\JCA_AIO_aceax\SHRP\IE\SHRPModels.hpp"
        #include "\JCA_AIO_aceax\facewear\balaclava\ie\balaclava_H_IEModels.hpp"
        #include "\JCA_AIO_aceax\facewear\shemag\ie\shemag_H_IEModels.hpp"
        #include "\JCA_AIO_aceax\NBCD\nbcdModels.hpp"       
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
        #include "\JCA_AIO_aceax\SHRP\IE\SHRPInfos.hpp"
        #include "\JCA_AIO_aceax\facewear\balaclava\ie\balaclava_H_IEInfos.hpp"
        #include "\JCA_AIO_aceax\facewear\shemag\ie\shemag_H_IEInfos.hpp"
        #include "\JCA_AIO_aceax\NBCD\nbcdInfos.hpp"
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