LittlerootTown_MapScripts::
# 21 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 48 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 131 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 23 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 24 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 36 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 40 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 43 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 25 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 9, 2
# 26 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 29 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 30 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 7, 9
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 34 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 3
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 37 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 38 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 41 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 49 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 108 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 50 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 52 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 53 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 56 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/LittlerootTown/scripts.pory"
	opendoor 7, 8
# 58 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 59 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 60 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 61 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/LittlerootTown/scripts.pory"
	closedoor 7, 8
# 63 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 64 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 65 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 68 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 77 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 78 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 82 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 87 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown/scripts.pory"
	opendoor 7, 8
# 89 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 90 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 93 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 94 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 96 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 97 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 98 "data/maps/LittlerootTown/scripts.pory"
	closedoor 7, 8
# 99 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 100 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 101 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 102 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 103 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 104 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 105 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 109 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 110 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 111 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 112 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 114 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 120 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 121 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 122 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 123 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 124 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 125 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 126 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 127 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 132 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 133 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 134 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 135 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 8, 10
# 136 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 7, 10
	end


LittlerootTown_EventScript_Twin::
# 143 "data/maps/LittlerootTown/scripts.pory"
	lock
# 144 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 145 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_Twin_2
# 151 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 1
	goto_if_eq LittlerootTown_EventScript_Twin_5
# 156 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Twin_Text_2
# 158 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_Twin_2:
# 146 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Twin_Text_0
# 148 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_Twin_5:
# 152 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Twin_Text_1
# 153 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_FatMan::
# 163 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_Boy::
# 169 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Boy_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 175 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_MaysHouseSign::
# 180 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_MaysHouseSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 185 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsLabSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_TownSign::
# 190 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_Mom::
# 196 "data/maps/LittlerootTown/scripts.pory"
	lock
# 197 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 198 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 199 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 200 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/LittlerootTown/scripts.pory"
	opendoor 7, 8
# 202 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 203 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 204 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 206 "data/maps/LittlerootTown/scripts.pory"
	closedoor 7, 8
# 207 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 208 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	return


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 212 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 213 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 215 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 216 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0
# 217 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 218 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerMale
# 219 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 220 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeMale
# 221 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	return


LittlerootTown_EventScript_GiveRunningShoes::
# 225 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_0
# 232 "data/maps/LittlerootTown/scripts.pory"
	hidespeakername
# 233 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_FISHING_ROD
# 234 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OUTFIT_BOX
# 235 "data/maps/LittlerootTown/scripts.pory"
	unlockoutfit OUTFIT_THE_ALTERNATE
# 236 "data/maps/LittlerootTown/scripts.pory"
	unlockoutfit OUTFIT_YOUNG_START
# 237 "data/maps/LittlerootTown/scripts.pory"
	unlockoutfit OUTFIT_ALTERED_YOUTH
# 238 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 239 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_1
# 248 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 249 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_EventScript_SetReceivedRunningShoes::
# 254 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 255 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 256 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 261 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Twin_Text_2
# 263 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 264 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 265 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 266 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 267 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_DangerousWithoutPokemon_Text_0
# 268 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 275 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 276 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 277 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 279 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 280 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 285 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 286 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 287 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 288 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 289 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 290 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 291 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 292 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 293 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 294 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 296 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 297 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 298 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 299 "data/maps/LittlerootTown/scripts.pory"

# 300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 301 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 302 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 305 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 306 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 307 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 308 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 309 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 311 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 312 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 313 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 314 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 315 "data/maps/LittlerootTown/scripts.pory"

# 316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 317 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 319 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 320 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 321 "data/maps/LittlerootTown/scripts.pory"

# 322 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 323 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 324 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 325 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 327 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 328 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 329 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 330 "data/maps/LittlerootTown/scripts.pory"
	end
# 331 "data/maps/LittlerootTown/scripts.pory"

# 332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 333 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 334 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 335 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 336 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 337 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 344 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 345 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 346 "data/maps/LittlerootTown/scripts.pory"

# 347 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 354 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 355 "data/maps/LittlerootTown/scripts.pory"

# 356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 357 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 358 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 359 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 360 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 361 "data/maps/LittlerootTown/scripts.pory"
	end
# 362 "data/maps/LittlerootTown/scripts.pory"

# 363 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 364 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 365 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 366 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 367 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 368 "data/maps/LittlerootTown/scripts.pory"
	end
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 371 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 372 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 373 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 374 "data/maps/LittlerootTown/scripts.pory"
	end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 377 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 378 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 379 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 380 "data/maps/LittlerootTown/scripts.pory"
	end
# 381 "data/maps/LittlerootTown/scripts.pory"

# 382 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 383 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 384 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 385 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 386 "data/maps/LittlerootTown/scripts.pory"
	end
# 387 "data/maps/LittlerootTown/scripts.pory"

# 388 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 389 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 390 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 391 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 392 "data/maps/LittlerootTown/scripts.pory"
	end
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 395 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 396 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 397 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 398 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 399 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 400 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 401 "data/maps/LittlerootTown/scripts.pory"
	return
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 404 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 405 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 407 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 408 "data/maps/LittlerootTown/scripts.pory"
	return
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 411 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 412 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 413 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 414 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/LittlerootTown/scripts.pory"
	return
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 418 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 419 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 420 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 421 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 422 "data/maps/LittlerootTown/scripts.pory"
	return
# 423 "data/maps/LittlerootTown/scripts.pory"

# 424 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 425 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 426 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 427 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 428 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 432 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 433 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 435 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 436 "data/maps/LittlerootTown/scripts.pory"
	return
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 439 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 440 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 441 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 442 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 443 "data/maps/LittlerootTown/scripts.pory"
	return
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 447 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 448 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 449 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 450 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 451 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 452 "data/maps/LittlerootTown/scripts.pory"
	return
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 455 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 456 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 457 "data/maps/LittlerootTown/scripts.pory"
	return
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 460 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 461 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 462 "data/maps/LittlerootTown/scripts.pory"
	return
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 465 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 466 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 467 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 468 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 469 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 470 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 471 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 472 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 473 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 474 "data/maps/LittlerootTown/scripts.pory"
	return
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 480 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 481 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 482 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 483 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 484 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 485 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 486 "data/maps/LittlerootTown/scripts.pory"
	return
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 489 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 492 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 493 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 494 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 495 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 496 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 498 "data/maps/LittlerootTown/scripts.pory"
	return
# 499 "data/maps/LittlerootTown/scripts.pory"

# 500 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 501 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 505 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 506 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 507 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 508 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 513 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 514 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 515 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 516 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 517 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 518 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 519 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 520 "data/maps/LittlerootTown/scripts.pory"

# 521 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 522 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 523 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 524 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 525 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 526 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 527 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 528 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 529 "data/maps/LittlerootTown/scripts.pory"

# 530 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 531 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 532 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 533 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 534 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 535 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 538 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 539 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 540 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 541 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 542 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 543 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 546 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 547 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 548 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 551 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 552 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 553 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 554 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 557 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 558 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 561 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 562 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 565 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 566 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 567 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 568 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 569 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 570 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 573 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 574 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 575 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 576 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 577 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 578 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 581 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 583 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 584 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 585 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 586 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 587 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 591 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 592 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 593 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 594 "data/maps/LittlerootTown/scripts.pory"

# 595 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 596 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 597 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 598 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 599 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 600 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 601 "data/maps/LittlerootTown/scripts.pory"

# 602 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 603 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 604 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 53 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 54 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 55 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 55 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 55 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 60 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 66 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 67 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 78 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 79 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 80 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 81 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 83 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 84 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 85 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 86 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 91 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 92 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
	step_end

# 93 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 93 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 93 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 69 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is Autumnleaf Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 114 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you, but I\l"
	.string "never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX I\n"
	.string "gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_Twin_Text_0:
# 146 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Puppets?\n"
	.string "Good luck!$"

LittlerootTown_EventScript_Twin_Text_1:
# 152 "data/maps/LittlerootTown/scripts.pory"
	.string "Twin starter message WIP$"

LittlerootTown_EventScript_Twin_Text_2:
# 156 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Puppets will jump out!$"

LittlerootTown_EventScript_FatMan_Text_0:
# 163 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items and\n"
	.string "Puppets.\p"
	.string "The power of science is staggering!$"

LittlerootTown_EventScript_Boy_Text_0:
# 169 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time at\n"
	.string "home?$"

LittlerootTown_EventScript_BrendansHouseSign_Text_0:
# 175 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"

LittlerootTown_EventScript_MaysHouseSign_Text_0:
# 180 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S House$"

LittlerootTown_EventScript_BirchsLabSign_Text_0:
# 185 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S Puppet Lab$"

LittlerootTown_EventScript_TownSign_Text_0:
# 190 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0:
# 216 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}Wait, {PLAYER}!$"

LittlerootTown_EventScript_GiveRunningShoes_Text_0:
# 225 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to Professor\l"
	.string "Shiori?\p"
	.string "Oh! What an adorable Puppet!\n"
	.string "You got it from Professor Shiori. How\l"
	.string "nice!\p"
	.string "You're your father's child, all right.\n"
	.string "You look good together with Puppets!\p"
	.string "Here, honey! If you're going out on an\n"
	.string "adventure, have this fishing rod.\p"
	.string "!$"

LittlerootTown_EventScript_GiveRunningShoes_Text_1:
# 239 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”\p"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "Puppet now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_EventScript_DangerousWithoutPokemon_Text_0:
# 267 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have your\n"
	.string "own Puppets.$"
