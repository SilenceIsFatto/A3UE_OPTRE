params [
    ["_unit", ObjNull],
    ["_face", ""],
    ["_speaker", ""]
];

[_unit, _face] remoteExec ["setFace", 0, _unit];
[_unit, _speaker] remoteExec ["setSpeaker", 0, _unit];