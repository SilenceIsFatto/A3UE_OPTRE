class CfgFunctions 
{
    class A3A 
    {
        class Ammunition 
        {
            class dress 
            {
                file = QPATHTOFOLDER(functions\Ammunition\fn_dress.sqf);
            };
        };
        // causes version mismatch, because dumb
        // class init 
        // {
        //     class initClient 
        //     {
        //         file = QPATHTOFOLDER(functions\init\fn_initClient.sqf);
        //     };
        // };
        class proxy 
        {
            class onPlayerRespawn 
            {
                file = QPATHTOFOLDER(functions\proxy\fn_onPlayerRespawn.sqf);
            };
        };
        class Utility 
        {
            class setIdentity 
            {
                file = QPATHTOFOLDER(functions\Utility\fn_setIdentity.sqf);
            };
        };
    };

    class PREFIX
    {
        class init
        {
            file = QPATHTOFOLDER(functions\init);
            class postInit {postInit = 1};
        };
        class skeleton 
        {
            file = QPATHTOFOLDER(functions\skeleton);
            class canConvertUnitToLoadout {};
            class convertUnitToLoadout {};
        };
        class Utility
        {
            file = QPATHTOFOLDER(functions\Utility);
            class setFaceAndSpeaker {};
        };
    };
};