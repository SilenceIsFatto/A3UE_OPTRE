params [
    ["_unit", ObjNull]
];

if (_unit isEqualTo ObjNull) exitWith {false};

private _unitClassname = typeOf _unit;

// Clear the loadout first
_unit setUnitLoadout [[],[],[],["", []],[],[],"","",[], ["","","","","",""]];

private _loadout = [];

if (_unitClassname isKindOf "OPTRE_Spartan2_Soldier_Base") then {
    _unit setFace "WhiteHead_01";
    _unit setSpeaker "";
    _loadout = [
        [],[],[],["OPTRE_MJOLNIR_Undersuit", []],[],[],"","",[],
        [(selectRandom unlockedMaps),"","",(selectRandom unlockedCompasses),(selectRandom unlockedWatches),""]
    ];
};

if (_unitClassname isKindOf "OPTRE_FC_Elite_Undersuit") then {
    _unit setFace "sangheiliHead_02";
    _unit setSpeaker "EliteVO_01";
    _loadout = [
        [],[],[],["OPTRE_FC_Elite_CombatSkin", []],[],[],"","",[],
        [(selectRandom unlockedMaps),"","",(selectRandom unlockedCompasses),(selectRandom unlockedWatches),""]
    ];
};

_loadout;