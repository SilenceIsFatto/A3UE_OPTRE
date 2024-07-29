#include "script_component.hpp"

class CfgPatches 
{
    class ADDON 
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QDOUBLES(PREFIX,core)};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class A3A 
{
    #include "mapInfo.hpp"
    #include "NavGrid.hpp"
};

class CfgMissions
{
    // Overwrite the normal mission classes
    class MPMissions
    {
        class Antistasi_Altis
        {
            directory = QCPATHTO(Antistasi_Altis.Altis);
        };
        class Antistasi_Malden
        {
            directory = QCPATHTO(Antistasi_Malden.Malden);
        };
        class Antistasi_OPTRE_Madrigal
        {
            directory = QCPATHTO(Antistasi_OPTRE_Madrigal.OPTRE_Madrigal);
        };
        class Antistasi_Stratis
        {
            directory = QCPATHTO(Antistasi_Stratis.Stratis);
        };
    };
};
