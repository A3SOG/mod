#include "script_component.hpp"
/*
	Author:
	J. Schmidt

	Description:
	Creates a notification.

	Arguments:
	0: STRING - The location of ID Badge

	Example:
	["Pocket03"] call sog_client_misc_fnc_setBadge;

	Returns:
	void
*/
params ["_location"];

{
    private _idCardClassname = _x;
    
    if (["SOG_Dress_ID_Card", _idCardClassname] call BIS_fnc_inString) then {
        private _seperator = _idCardClassname splitString "_";
        private _cardType = _seperator select 3;
        private _affliation = _seperator select 5;
        private _branch = _seperator select 6;
        private _rank = _seperator select 7;
        private _idBadgeClassname = "";

        if (_rank == "W") then {
            _idBadgeClassname = format ["SOG_Dress_ID_Badge_%1_%2_%3_W", _location, _affliation, _branch];
        } else {
            _idBadgeClassname = format ["SOG_Dress_ID_Badge_%1_%2_%3_%4_W", _location, _affliation, _branch, _rank];
        };
        
        if !(_idBadgeClassname in (backpack player)) then {
            removeBackpack player;
            player addBackpack _idBadgeClassname;
            hint format ["ID badge %1 assigned based on ID card %2", _idBadgeClassname, _idCardClassname];
        };
    };
} forEach (items player);