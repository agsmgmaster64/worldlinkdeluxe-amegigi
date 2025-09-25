LittlerootTown_BrendansHouse_1F_MapScripts::
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_eq LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_lt LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3
	.2byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeakername gText_Mom
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FacePlayer
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterUp
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterRight
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_Delay48
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_0
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_0
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_1
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_1
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_2
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeakername PlayersHouse_1F_Text_Interviewer
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_2
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOffTVScreen
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_TV_HOME
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 35
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_3
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_3
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3:
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_0
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_FacePlayer
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_ExclamationMark
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_Delay48
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 20
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_1
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_SS_TICKET
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 20
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_2
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_3
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_4
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_4
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_5
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_DOOR
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_1F_DAD
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_6
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 20
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOnTVScreen
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 60
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_7
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_8
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterLeft
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special TurnOffTVScreen
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_9
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special InitRoamer
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterLeft
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom_Text_0
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterUp
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_Mom::
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_2
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, LittlerootTown_BrendansHouse_1F_EventScript_Mom_5
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 1
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_8
LittlerootTown_BrendansHouse_1F_EventScript_Mom_7:
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_14
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_22
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_2:
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_5:
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, LittlerootTown_BrendansHouse_1F_EventScript_Mom_11
LittlerootTown_BrendansHouse_1F_EventScript_Mom_10:
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_0
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitfanfare
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_8:
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_7

LittlerootTown_BrendansHouse_1F_EventScript_Mom_11:
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, LittlerootTown_BrendansHouse_1F_EventScript_Mom_18
LittlerootTown_BrendansHouse_1F_EventScript_Mom_16:
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_10

LittlerootTown_BrendansHouse_1F_EventScript_Mom_14:
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_1
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_17:
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_DONATION_BOX
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_25
LittlerootTown_BrendansHouse_1F_EventScript_Mom_24:
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_18:
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_AMULET_COIN, LittlerootTown_BrendansHouse_1F_EventScript_Mom_17
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_16

LittlerootTown_BrendansHouse_1F_EventScript_Mom_22:
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_2
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_25:
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_24


PlayersHouse_1F_EventScript_MomHealsParty::
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_MomHealsParty_Text_0
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_MomHealsParty_Text_1
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end


# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_WalkUp:
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Interviewer:
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Interviewer$"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_0:
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
	step_end

# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_1:
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_2:
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_3:
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_0:
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_1:
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_2:
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
	step_end

# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_3:
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_left
	step_end

# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_4:
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_5:
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
	step_end

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_6:
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_7:
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
	step_end

# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_8:
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_9:
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}See, {PLAYER}?\n"
	.string "Isn't it nice in here, too?$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}The mover's Puppets do all the work of\n"
	.string "moving us in and cleaning up after.\l"
	.string "This is so convenient!\p"
	.string "{PLAYER}, your room is upstairs.\n"
	.string "Go check it out, dear!\p"
	.string "Dad bought you a new clock to mark our\n"
	.string "move here.\l"
	.string "Don't forget to set it!$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}.\p"
	.string "Go set the clock in your room, honey.$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_0:
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Oh! {PLAYER}, {PLAYER}!\n"
	.string "Quick! Come quickly!$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_1:
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Look! It's Petalburg Gym!\n"
	.string "Maybe Dad will be on!$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_2:
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "…We brought you this report from in\n"
	.string "front of Petalburg Gym.$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_3:
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Oh… It's over.\p"
	.string "I think Dad was on, but we missed him.\n"
	.string "Too bad.\p"
	.string "Oh, yes.\n"
	.string "One of Dad's friends lives in town.\p"
	.string "PROF. BIRCH is his name.\p"
	.string "He lives right next door, so you should\n"
	.string "go over and introduce yourself.$"

LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom_Text_0:
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Well, {PLAYER}?\p"
	.string "Aren't you interested in seeing your\n"
	.string "very own room?$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_0:
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered Mom\n"
	.string "in the iDollNav.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_1:
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}See you, honey!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_2:
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Did you introduce yourself to PROF.\n"
	.string "BIRCH?$"

PlayersHouse_1F_EventScript_MomHealsParty_Text_0:
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.format "{SPEAKER NAME_MOM}How are you doing, {PLAYER}?\N"
	.format "You look a little tired.\p"
	.format "I think you should rest a bit."

PlayersHouse_1F_EventScript_MomHealsParty_Text_1:
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Take care, honey!$"
