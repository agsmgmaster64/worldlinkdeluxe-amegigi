CarpetCenter_MapScripts::
# 4 "data/maps/CarpetCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CarpetCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CarpetCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	end


CarpetCenter_EventScript_Nurse::
# 10 "data/maps/CarpetCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/CarpetCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/CarpetCenter/scripts.pory"
	waitmessage
# 13 "data/maps/CarpetCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/CarpetCenter/scripts.pory"
	release
	end

