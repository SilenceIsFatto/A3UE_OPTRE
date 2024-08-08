params [
    ["_unit", ObjNull]
];

if (_unit isEqualTo ObjNull) exitWith {false};

private _unitClassname = typeOf _unit;

// Clear the loadout first
_unit setUnitLoadout [[],[],[],["", []],[],[],"","",[], ["","","","","",""]];

private _loadout = [];

if (_unitClassname isKindOf "OPTRE_Spartan2_Soldier_Base") then {
    [_unit, "WhiteHead_01", ""] call A3UE_OPTRE_fnc_setFaceAndSpeaker;
    _loadout = [
        [],[],[],["OPTRE_MJOLNIR_Undersuit", []],[],[],"","",[],
        [(selectRandom unlockedMaps),"","",(selectRandom unlockedCompasses),(selectRandom unlockedWatches),""]
    ];
};

if (_unitClassname isKindOf "OPTRE_FC_Elite_Undersuit") then {
    [_unit, "sangheiliHead_02", "EliteVO_01"] call A3UE_OPTRE_fnc_setFaceAndSpeaker;
    _loadout = [
        [],[],[],["OPTRE_FC_Elite_CombatSkin", []],[],[],"","",[],
        [(selectRandom unlockedMaps),"","",(selectRandom unlockedCompasses),(selectRandom unlockedWatches),""]
    ];
};

_loadout;