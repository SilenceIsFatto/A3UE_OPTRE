class CfgFunctions 
{
    //be careful when overwriting functions as version updates can break your extension
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

    //your own functions should be kept here
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
    };
};