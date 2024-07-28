params [
    ["_unit", ObjNull]
];

if (_unit isEqualTo ObjNull) exitWith {false};

private _unitClassname = typeOf _unit;

private _skeletonExemptions = missionNamespace getVariable ["A3U_unitSkeletonExemptions", []];

if (_unitClassname in _skeletonExemptions) exitWith {
    true
};

false;