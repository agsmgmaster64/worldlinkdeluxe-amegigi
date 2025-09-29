PetalburgCity_MapScripts::
# 2 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 4 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 0
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 4
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 8
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 6, 11
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 9 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 17 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 18 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 19 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 20 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 21 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 22 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 23 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 24 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 25 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 26 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 27 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 28 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 30 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 31 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 32 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 33 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 34 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 35 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 36 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 37 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 38 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
# 45 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 46 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 47 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer1::
# 51 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 52 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 53 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer2::
# 57 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 58 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 59 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer3::
# 63 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 64 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 65 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer::
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 70 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 72 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 73 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 76 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 78 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
# 85 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
# 89 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
# 96 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 105 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer
# 106 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 108 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
# 119 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
# 132 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
# 143 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 155 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym
# 156 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 157 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 158 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign
# 160 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 161 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 162 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 164 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
# 79 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 82 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
# 86 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_1
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_2
# 93 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
# 97 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_3
# 101 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 103 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
# 109 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 114 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_5
# 118 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
# 120 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_6
# 126 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_7
# 131 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 133 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 138 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_8
# 142 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
# 144 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_9
# 149 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_10
# 153 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


PetalburgCity_EventScript_Scott0::
# 169 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 170 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 171 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 172 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 14, 10
# 173 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	return


PetalburgCity_EventScript_Scott1::
# 177 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 178 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 179 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 180 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 14, 11
# 181 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	return


PetalburgCity_EventScript_Scott2::
# 185 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 186 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 187 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 188 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 14, 12
# 189 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	return


PetalburgCity_EventScript_Scott::
# 193 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 194 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 196 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 197 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 199 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 200 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 201 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 203 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 205 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Scott_Text_0
# 207 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 208 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 209 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 211 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Scott_Text_1
# 215 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 216 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 217 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 219 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Scott_Text_2
# 221 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 222 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 223 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_3
# 235 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_4
# 247 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_5
PetalburgCity_EventScript_Scott_1:
# 261 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 262 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 263 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
# 224 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
# 230 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
# 234 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
# 236 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
# 242 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
# 246 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 248 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 255 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
# 259 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_Scott_1


# 267 "data/maps/PetalburgCity/scripts.pory"

# 268 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 269 "data/maps/PetalburgCity/scripts.pory"
	lock
# 270 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 271 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 272 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 274 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity/scripts.pory"
	release
# 276 "data/maps/PetalburgCity/scripts.pory"
	end
# 277 "data/maps/PetalburgCity/scripts.pory"

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 279 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 285 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 286 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 288 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 290 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 291 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 292 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 294 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 295 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 296 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 297 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 298 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 299 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 300 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 301 "data/maps/PetalburgCity/scripts.pory"

# 302 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 304 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 305 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 306 "data/maps/PetalburgCity/scripts.pory"

# 307 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 308 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 309 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 310 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 311 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 313 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 314 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 315 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 316 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 317 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 318 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 320 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 321 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 322 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 323 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 324 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 325 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 326 "data/maps/PetalburgCity/scripts.pory"

# 327 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 328 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 329 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 330 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 333 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 334 "data/maps/PetalburgCity/scripts.pory"
	end
# 335 "data/maps/PetalburgCity/scripts.pory"

# 336 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 337 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 338 "data/maps/PetalburgCity/scripts.pory"
	end
# 339 "data/maps/PetalburgCity/scripts.pory"

# 340 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 341 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 342 "data/maps/PetalburgCity/scripts.pory"
	end
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 345 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 346 "data/maps/PetalburgCity/scripts.pory"
	end
# 347 "data/maps/PetalburgCity/scripts.pory"

# 348 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 361 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 364 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 365 "data/maps/PetalburgCity/scripts.pory"
	end
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 368 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 369 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 370 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 373 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 374 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 375 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Puppet Trainers\n"
# 376 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 377 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 378 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 379 "data/maps/PetalburgCity/scripts.pory"

# 380 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 381 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 382 "data/maps/PetalburgCity/scripts.pory"

# 383 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 384 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 385 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 388 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 389 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 390 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 391 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 392 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 395 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 396 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 397 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 398 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 399 "data/maps/PetalburgCity/scripts.pory"

# 400 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 401 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 402 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 403 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 404 "data/maps/PetalburgCity/scripts.pory"

# 405 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 406 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 407 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 410 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

# 79 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
# 80 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 80 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 80 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 81 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 86 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_1:
# 87 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 87 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 90 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_2:
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 97 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_3:
# 98 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 109 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_4:
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 114 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_5:
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 120 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_6:
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 126 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_7:
# 127 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 138 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_8:
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 144 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_9:
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 149 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_10:
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 193 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_0:
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 224 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_1:
# 225 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 227 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 228 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 230 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_2:
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_diag_southwest
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 248 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_3:
# 249 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 250 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 252 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 254 "data/maps/PetalburgCity/scripts.pory"
	step_end

# 255 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_4:
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_diag_southwest
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

PetalburgCity_EventScript_Scott_Text_0:
# 205 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a Puppet Trainer?$"

PetalburgCity_EventScript_Scott_Text_1:
# 211 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie Trainer, or maybe\n"
	.string "you're just an ordinary kid.$"

PetalburgCity_EventScript_Scott_Text_2:
# 219 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented Trainers.\p"
	.string "I'm sorry to have taken your time.$"
