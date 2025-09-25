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


# 168 "data/maps/PetalburgCity/scripts.pory"

# 169 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 170 "data/maps/PetalburgCity/scripts.pory"
	lock
# 171 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 172 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 174 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 175 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/PetalburgCity/scripts.pory"
	release
# 177 "data/maps/PetalburgCity/scripts.pory"
	end
# 178 "data/maps/PetalburgCity/scripts.pory"

# 179 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 180 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 181 "data/maps/PetalburgCity/scripts.pory"
	end
# 182 "data/maps/PetalburgCity/scripts.pory"

# 183 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 184 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 201 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 202 "data/maps/PetalburgCity/scripts.pory"

# 203 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 206 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 207 "data/maps/PetalburgCity/scripts.pory"

# 208 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 209 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 226 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 230 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 231 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 232 "data/maps/PetalburgCity/scripts.pory"

# 233 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 234 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 235 "data/maps/PetalburgCity/scripts.pory"
	end
# 236 "data/maps/PetalburgCity/scripts.pory"

# 237 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 238 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 239 "data/maps/PetalburgCity/scripts.pory"
	end
# 240 "data/maps/PetalburgCity/scripts.pory"

# 241 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 242 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 246 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 247 "data/maps/PetalburgCity/scripts.pory"
	end
# 248 "data/maps/PetalburgCity/scripts.pory"

# 249 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 250 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 255 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 259 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 262 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 263 "data/maps/PetalburgCity/scripts.pory"

# 264 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 265 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 266 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 267 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 269 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 270 "data/maps/PetalburgCity/scripts.pory"
	end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 273 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 274 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 275 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 276 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 277 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 278 "data/maps/PetalburgCity/scripts.pory"
	end
# 279 "data/maps/PetalburgCity/scripts.pory"

# 280 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 281 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 282 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 283 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 284 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 285 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 286 "data/maps/PetalburgCity/scripts.pory"
	end
# 287 "data/maps/PetalburgCity/scripts.pory"

# 288 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 289 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 290 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 291 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 292 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 293 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 294 "data/maps/PetalburgCity/scripts.pory"
	end
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 300 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 301 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 303 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 309 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 314 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 319 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 320 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 321 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 322 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 323 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 324 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 325 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 326 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 327 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 328 "data/maps/PetalburgCity/scripts.pory"
	end
# 329 "data/maps/PetalburgCity/scripts.pory"

# 330 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 332 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 333 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/PetalburgCity/scripts.pory"
	return
# 335 "data/maps/PetalburgCity/scripts.pory"

# 336 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/PetalburgCity/scripts.pory"
	return
# 341 "data/maps/PetalburgCity/scripts.pory"

# 342 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 344 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 345 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/PetalburgCity/scripts.pory"
	return
# 347 "data/maps/PetalburgCity/scripts.pory"

# 348 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 350 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 351 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgCity/scripts.pory"
	return
# 353 "data/maps/PetalburgCity/scripts.pory"

# 354 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 359 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 360 "data/maps/PetalburgCity/scripts.pory"

# 361 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 366 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 367 "data/maps/PetalburgCity/scripts.pory"

# 368 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 382 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 383 "data/maps/PetalburgCity/scripts.pory"

# 384 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 385 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 387 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 388 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 389 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 391 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 392 "data/maps/PetalburgCity/scripts.pory"

# 393 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 406 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 407 "data/maps/PetalburgCity/scripts.pory"

# 408 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 409 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 411 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 412 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 414 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 415 "data/maps/PetalburgCity/scripts.pory"

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 429 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 430 "data/maps/PetalburgCity/scripts.pory"

# 431 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 432 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 434 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 435 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 437 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 438 "data/maps/PetalburgCity/scripts.pory"

# 439 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 452 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 453 "data/maps/PetalburgCity/scripts.pory"

# 454 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 455 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 457 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 458 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 460 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 461 "data/maps/PetalburgCity/scripts.pory"

# 462 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 463 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 464 "data/maps/PetalburgCity/scripts.pory"
	end
# 465 "data/maps/PetalburgCity/scripts.pory"

# 466 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 467 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 468 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 469 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 470 "data/maps/PetalburgCity/scripts.pory"

# 471 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 472 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 473 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 474 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 475 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 476 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 477 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 478 "data/maps/PetalburgCity/scripts.pory"

# 479 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 480 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 481 "data/maps/PetalburgCity/scripts.pory"

# 482 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 483 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 484 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 485 "data/maps/PetalburgCity/scripts.pory"

# 486 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 487 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 488 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 489 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 490 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 491 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 492 "data/maps/PetalburgCity/scripts.pory"

# 493 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 494 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 495 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 496 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 497 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 498 "data/maps/PetalburgCity/scripts.pory"

# 499 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 500 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 501 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 502 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 503 "data/maps/PetalburgCity/scripts.pory"

# 504 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 505 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 506 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 507 "data/maps/PetalburgCity/scripts.pory"

# 508 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 509 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 510 "data/maps/PetalburgCity/scripts.pory"

# 511 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 512 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 513 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 514 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 515 "data/maps/PetalburgCity/scripts.pory"

# 516 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 517 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 518 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 519 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 520 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 521 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 522 "data/maps/PetalburgCity/scripts.pory"

# 523 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 524 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 525 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 526 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

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
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end
