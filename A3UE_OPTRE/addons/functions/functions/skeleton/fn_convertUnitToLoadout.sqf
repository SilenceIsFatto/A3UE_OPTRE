params [
    ["_unit", ObjNull]
];

if (_unit isEqualTo ObjNull) exitWith {false};

private _unitClassname = typeOf _unit;

// Clear the loadout first
_unit setUnitLoadout [[],[],[],["", []],[],[],"","",[], ["","","","","",""]];

if (_unitClassname isKindOf "OPTRE_Spartan2_Soldier_Base") exitWith {
    _unit setFace "WhiteHead_01";
    _unit setSpeaker "";
    [
        [],[],[],["OPTRE_MJOLNIR_Undersuit", []],[],[],"","",[],
        [(selectRandom unlockedMaps),"","",(selectRandom unlockedCompasses),(selectRandom unlockedWatches),""]
    ];
};

if (_unitClassname isKindOf "OPTRE_FC_Elite_Undersuit") exitWith {
    _unit setFace "sangheiliHead_02";
    _unit setSpeaker "EliteVO_01";
    [
        [],[],[],["OPTRE_FC_Elite_CombatSkin", []],[],[],"","",[],
        [(selectRandom unlockedMaps),"","",(selectRandom unlockedCompasses),(selectRandom unlockedWatches),""]
    ];
};