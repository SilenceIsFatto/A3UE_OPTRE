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
        class Utility 
        {
            class setIdentity 
            {
                file = QPATHTOFOLDER(functions\Utility\fn_setIdentity.sqf);
            };
        };
    };

    //your own functions should be kept here
    class ADDON
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
