LittlerootTown_BrendansHouse_2F_MapScripts::
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, SecretBase_EventScript_InitDecorations
	.2byte 0


LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, LittlerootTown_BrendansHouse_2F_EventScript_WallClock_2
LittlerootTown_BrendansHouse_2F_EventScript_WallClock_1:
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Text_0
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special StartWallClock
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 30
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_PLAYERS_HOUSE_2F_MOM
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Movement_0
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Text_1
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Movement_1
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_2F_MOM
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_WallClock_2:
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto PlayersHouse_2F_EventScript_CheckWallClock
	goto LittlerootTown_BrendansHouse_2F_EventScript_WallClock_1


# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER}, how do you like your\n"
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Puppet movers are so convenient!\p"
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Movement_0:
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Movement_1:
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Text_0:
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

LittlerootTown_BrendansHouse_2F_EventScript_WallClock_Text_1:
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, how do you like your new\n"
	.string "room?\p"
	.string "Good! Everything's put away neatly!\p"
	.string "They finished moving everything in\n"
	.string "downstairs, too.\p"
	.string "Puppet movers are so convenient!\p"
	.string "Oh, you should make sure that\n"
	.string "everything's all there on your desk.$"
