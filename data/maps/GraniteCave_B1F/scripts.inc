# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GraniteCave_B1F_OnFrame
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_B1F_OnLoad
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	end
# 11 "data/maps/GraniteCave_B1F/scripts.pory"

# 12 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_OnFrame::
# 13 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, GraniteCave_B1F_EventScript_FallDownHole
# 14 "data/maps/GraniteCave_B1F/scripts.pory"
	.2byte 0
# 15 "data/maps/GraniteCave_B1F/scripts.pory"

# 16 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_OnLoad:
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	end
# 19 "data/maps/GraniteCave_B1F/scripts.pory"

# 20 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_EventScript_FallDownHole::
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	lockall
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 20
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_B1F_Movement_SetInvisible
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	playse SE_FALL
# 26 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	warphole MAP_GRANITE_CAVE_B2F
# 28 "data/maps/GraniteCave_B1F/scripts.pory"
	waitstate
# 29 "data/maps/GraniteCave_B1F/scripts.pory"
	releaseall
# 30 "data/maps/GraniteCave_B1F/scripts.pory"
	end
# 31 "data/maps/GraniteCave_B1F/scripts.pory"

# 32 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_Movement_SetInvisible::
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	set_invisible
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	step_end
