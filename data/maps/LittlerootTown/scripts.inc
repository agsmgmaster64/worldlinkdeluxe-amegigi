LittlerootTown_MapScripts::
# 7 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
	.2byte 0


LittlerootTown_OnTransition::
# 19 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 20 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 21 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq LittlerootTown_OnTransition_2
LittlerootTown_OnTransition_1:
# 24 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_OnTransition_5
LittlerootTown_OnTransition_4:
# 27 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq LittlerootTown_OnTransition_8
LittlerootTown_OnTransition_7:
# 30 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq LittlerootTown_OnTransition_11
LittlerootTown_OnTransition_10:
# 34 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq LittlerootTown_OnTransition_14
LittlerootTown_OnTransition_13:
# 38 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq LittlerootTown_OnTransition_17
LittlerootTown_OnTransition_16:
# 42 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq LittlerootTown_OnTransition_20
LittlerootTown_OnTransition_19:
# 45 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	goto_if_eq LittlerootTown_OnTransition_23
LittlerootTown_OnTransition_22:
# 48 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_eq LittlerootTown_OnTransition_26
LittlerootTown_OnTransition_25:
	end

LittlerootTown_OnTransition_2:
# 22 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 16, 8
	goto LittlerootTown_OnTransition_1

LittlerootTown_OnTransition_5:
# 25 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetTwinGuardingRoutePos
	goto LittlerootTown_OnTransition_4

LittlerootTown_OnTransition_8:
# 28 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
	goto LittlerootTown_OnTransition_7

LittlerootTown_OnTransition_11:
# 31 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 32 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	goto LittlerootTown_OnTransition_10

LittlerootTown_OnTransition_14:
# 35 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 36 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	goto LittlerootTown_OnTransition_13

LittlerootTown_OnTransition_17:
# 39 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	goto LittlerootTown_OnTransition_16

LittlerootTown_OnTransition_20:
# 43 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	goto LittlerootTown_OnTransition_19

LittlerootTown_OnTransition_23:
# 46 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto LittlerootTown_OnTransition_22

LittlerootTown_OnTransition_26:
# 49 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	goto LittlerootTown_OnTransition_25


LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 55 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 9, 2
# 56 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 61 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 62 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 63 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 64 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1:
# 67 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4:
	return

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2:
# 65 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 7, 9
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5:
# 68 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 16, 9
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4


LittlerootTown_EventScript_StepOffTruckMale::
# 74 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 77 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 78 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 79 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 80 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 81 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_StepOffTruckFemale::
# 86 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 87 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 88 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 89 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 90 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 91 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 92 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 93 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_GoInsideWithMom::
# 98 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 99 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 100 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 101 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 103 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 104 "data/maps/LittlerootTown/scripts.pory"
	addobject 4
# 105 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitHouse
# 106 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 108 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 109 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 110 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 111 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 113 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 114 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 115 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachDoor
# 116 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 117 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 119 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 120 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomEnterHouse
# 121 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 122 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 124 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 125 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 126 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 127 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 128 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 129 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


LittlerootTown_EventScript_BeginDexUpgradeScene::
# 134 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 135 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 136 "data/maps/LittlerootTown/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 137 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 139 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_BirchSpeaker
# 140 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 141 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 142 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 143 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 144 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 145 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 146 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 148 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 153 "data/maps/LittlerootTown/scripts.pory"
	addobject 8
# 154 "data/maps/LittlerootTown/scripts.pory"
	addobject 7
# 155 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 156 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_2
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_1:
# 159 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_2:
# 157 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_1


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 164 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 7, 8, 10
# 165 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 8, 7, 10
	end


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 170 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 7, 15, 10
# 171 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 8, 16, 10
	end


LittlerootTown_EventScript_GoSaveBirch::
# 176 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 177 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 178 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 179 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 180 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 182 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 304 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 305 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 306 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 307 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 308 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 309 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 310 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 311 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 312 "data/maps/LittlerootTown/scripts.pory"

# 313 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 314 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 315 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 316 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 317 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 318 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 319 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 320 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 321 "data/maps/LittlerootTown/scripts.pory"

# 322 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 323 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 324 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 325 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 326 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 327 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 328 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 329 "data/maps/LittlerootTown/scripts.pory"

# 330 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 331 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 332 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 333 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 334 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 339 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 340 "data/maps/LittlerootTown/scripts.pory"

# 341 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 344 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 347 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 348 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 350 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 351 "data/maps/LittlerootTown/scripts.pory"

# 352 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 354 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 355 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 359 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 362 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 363 "data/maps/LittlerootTown/scripts.pory"

# 364 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 367 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 370 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 371 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 372 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 373 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 374 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 377 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 378 "data/maps/LittlerootTown/scripts.pory"
	end
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 381 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 382 "data/maps/LittlerootTown/scripts.pory"
	end
# 383 "data/maps/LittlerootTown/scripts.pory"

# 384 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 385 "data/maps/LittlerootTown/scripts.pory"
	lock
# 386 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 387 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 388 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 389 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 390 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 391 "data/maps/LittlerootTown/scripts.pory"
	release
# 392 "data/maps/LittlerootTown/scripts.pory"
	end
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 395 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 396 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 397 "data/maps/LittlerootTown/scripts.pory"
	release
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 402 "data/maps/LittlerootTown/scripts.pory"
	release
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 406 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 407 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 408 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 410 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 411 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 412 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 413 "data/maps/LittlerootTown/scripts.pory"
	end
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 416 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 417 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 418 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 420 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 422 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 423 "data/maps/LittlerootTown/scripts.pory"
	return
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 426 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 427 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 428 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 429 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 430 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 431 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 432 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 433 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 434 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 435 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 436 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 437 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 438 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 439 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 442 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 443 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 447 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 448 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 449 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 450 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 451 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 452 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 453 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 454 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 455 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 456 "data/maps/LittlerootTown/scripts.pory"

# 457 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 458 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 460 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 461 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 462 "data/maps/LittlerootTown/scripts.pory"

# 463 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 464 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 465 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 466 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 467 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 468 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 469 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 470 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 474 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 475 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 476 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 477 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 478 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 479 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 480 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 481 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 482 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 483 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 484 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 485 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 486 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 489 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 490 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 491 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 492 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 493 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 494 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 496 "data/maps/LittlerootTown/scripts.pory"

# 497 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 498 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 499 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 500 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 501 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 504 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 505 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 506 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 507 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 509 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 510 "data/maps/LittlerootTown/scripts.pory"
	end
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 513 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 514 "data/maps/LittlerootTown/scripts.pory"
	end
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 517 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 518 "data/maps/LittlerootTown/scripts.pory"
	end
# 519 "data/maps/LittlerootTown/scripts.pory"

# 520 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 521 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 522 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 525 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 526 "data/maps/LittlerootTown/scripts.pory"
	end
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 529 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 530 "data/maps/LittlerootTown/scripts.pory"
	return
# 531 "data/maps/LittlerootTown/scripts.pory"

# 532 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 533 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 537 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 538 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 539 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 541 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 542 "data/maps/LittlerootTown/scripts.pory"
	end
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 545 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 549 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 550 "data/maps/LittlerootTown/scripts.pory"
	return
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 553 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 554 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 12, 9
# 556 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 557 "data/maps/LittlerootTown/scripts.pory"
	end
# 558 "data/maps/LittlerootTown/scripts.pory"

# 559 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 560 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 561 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 562 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 13, 9
# 563 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 564 "data/maps/LittlerootTown/scripts.pory"
	end
# 565 "data/maps/LittlerootTown/scripts.pory"

# 566 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 567 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 568 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 569 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 570 "data/maps/LittlerootTown/scripts.pory"
	end
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 573 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 574 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 575 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 576 "data/maps/LittlerootTown/scripts.pory"
	end
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 579 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 580 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 581 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 582 "data/maps/LittlerootTown/scripts.pory"
	end
# 583 "data/maps/LittlerootTown/scripts.pory"

# 584 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 585 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 586 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 587 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 588 "data/maps/LittlerootTown/scripts.pory"
	end
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 591 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 592 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 593 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 594 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 595 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 596 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 597 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 598 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 599 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 600 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 601 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 603 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 604 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 607 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 608 "data/maps/LittlerootTown/scripts.pory"
	end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 611 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 612 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 617 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 632 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 633 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 634 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 635 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 636 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 640 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 642 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 643 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 644 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 645 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 646 "data/maps/LittlerootTown/scripts.pory"
	return
# 647 "data/maps/LittlerootTown/scripts.pory"

# 648 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	return
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	return
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/LittlerootTown/scripts.pory"
	return
# 668 "data/maps/LittlerootTown/scripts.pory"

# 669 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 670 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	return
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 681 "data/maps/LittlerootTown/scripts.pory"
	return
# 682 "data/maps/LittlerootTown/scripts.pory"

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown/scripts.pory"
	return
# 689 "data/maps/LittlerootTown/scripts.pory"

# 690 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 691 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	return
# 696 "data/maps/LittlerootTown/scripts.pory"

# 697 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 698 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	return
# 703 "data/maps/LittlerootTown/scripts.pory"

# 704 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 709 "data/maps/LittlerootTown/scripts.pory"
	return
# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 716 "data/maps/LittlerootTown/scripts.pory"
	return
# 717 "data/maps/LittlerootTown/scripts.pory"

# 718 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 719 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 720 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 721 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 722 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 723 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 724 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 725 "data/maps/LittlerootTown/scripts.pory"
	return
# 726 "data/maps/LittlerootTown/scripts.pory"

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 728 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 729 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 730 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 731 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 732 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 733 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 734 "data/maps/LittlerootTown/scripts.pory"
	return
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 737 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 738 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 739 "data/maps/LittlerootTown/scripts.pory"
	return
# 740 "data/maps/LittlerootTown/scripts.pory"

# 741 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 742 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 744 "data/maps/LittlerootTown/scripts.pory"
	return
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 750 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 751 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 752 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 753 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 754 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 756 "data/maps/LittlerootTown/scripts.pory"
	return
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 759 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 760 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 761 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 762 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 763 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 764 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 765 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 766 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 768 "data/maps/LittlerootTown/scripts.pory"
	return
# 769 "data/maps/LittlerootTown/scripts.pory"

# 770 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 771 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 772 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 773 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 774 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 775 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 776 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 777 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 778 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 779 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 780 "data/maps/LittlerootTown/scripts.pory"
	return
# 781 "data/maps/LittlerootTown/scripts.pory"

# 782 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 783 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 784 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 785 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 786 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 787 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 788 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 789 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 790 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 791 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 792 "data/maps/LittlerootTown/scripts.pory"
	return
# 793 "data/maps/LittlerootTown/scripts.pory"

# 794 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 795 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 796 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 797 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 798 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 799 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 801 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 802 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 803 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 804 "data/maps/LittlerootTown/scripts.pory"
	return
# 805 "data/maps/LittlerootTown/scripts.pory"

# 806 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 807 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 809 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 810 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 811 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 812 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 813 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 814 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 816 "data/maps/LittlerootTown/scripts.pory"
	return
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 819 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 820 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 821 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 822 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 823 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 824 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 825 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 826 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 828 "data/maps/LittlerootTown/scripts.pory"
	return
# 829 "data/maps/LittlerootTown/scripts.pory"

# 830 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 831 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 832 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 833 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 834 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 835 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 836 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 837 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 838 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 839 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 840 "data/maps/LittlerootTown/scripts.pory"
	return
# 841 "data/maps/LittlerootTown/scripts.pory"

# 842 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 849 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 858 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 874 "data/maps/LittlerootTown/scripts.pory"

# 875 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 885 "data/maps/LittlerootTown/scripts.pory"

# 886 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 890 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 891 "data/maps/LittlerootTown/scripts.pory"

# 892 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 895 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 896 "data/maps/LittlerootTown/scripts.pory"

# 897 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 903 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 904 "data/maps/LittlerootTown/scripts.pory"

# 905 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 910 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 918 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 923 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 926 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 927 "data/maps/LittlerootTown/scripts.pory"

# 928 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 934 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 935 "data/maps/LittlerootTown/scripts.pory"

# 936 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 943 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 944 "data/maps/LittlerootTown/scripts.pory"

# 945 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 948 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 949 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 950 "data/maps/LittlerootTown/scripts.pory"

# 951 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 956 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 963 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 964 "data/maps/LittlerootTown/scripts.pory"

# 965 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 969 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 973 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 974 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 976 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 977 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 978 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 984 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 985 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 986 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 987 "data/maps/LittlerootTown/scripts.pory"

# 988 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 989 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 990 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 993 "data/maps/LittlerootTown/scripts.pory"
	lock
# 994 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 995 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 996 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 997 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 998 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 999 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1000 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1001 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1002 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1003 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1004 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1005 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1006 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1007 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1008 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1009 "data/maps/LittlerootTown/scripts.pory"
	end
# 1010 "data/maps/LittlerootTown/scripts.pory"

# 1011 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1012 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1013 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1014 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1015 "data/maps/LittlerootTown/scripts.pory"
	release
# 1016 "data/maps/LittlerootTown/scripts.pory"
	end
# 1017 "data/maps/LittlerootTown/scripts.pory"

# 1018 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1019 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 1020 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1021 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1022 "data/maps/LittlerootTown/scripts.pory"
	hidespeakername
# 1023 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1024 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1025 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1026 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 1027 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1028 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1029 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1030 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1031 "data/maps/LittlerootTown/scripts.pory"
	return

LittlerootTown_Text_MomSpeaker::
# 186 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom$"

LittlerootTown_Text_BirchSpeaker::
# 190 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch$"

LittlerootTown_Text_OurNewHomeLetsGoInside::
# 194 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is Littleroot Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

LittlerootTown_Text_WaitPlayer::
# 205 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 209 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to PROF. BIRCH?\p"
	.string "Oh! What an adorable Puppet!\n"
	.string "You got it from PROF. BIRCH. How nice!\p"
	.string "You're your father's child, all right.\n"
	.string "You look good together with Puppets!\p"
	.string "Here, honey! If you're going out on an\n"
	.string "adventure, wear these RUNNING SHOES.\p"
	.string "They'll put a zip in your step!$"

LittlerootTown_Text_SwitchShoesWithRunningShoes::
# 219 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_ExplainRunningShoes::
# 223 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 229 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "Puppet now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_Text_CanUsePCToStoreItems::
# 239 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items and\n"
	.string "Puppets.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 244 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time at\n"
	.string "home?$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 249 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Puppets will jump out!$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 254 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have your\n"
	.string "own Puppets.$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 258 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
	.string "There are scary Puppets outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on, but I\n"
	.string "don't have any Puppets\p"
	.string "Can you go see what's happening for me?$"

LittlerootTown_Text_YouSavedBirch::
# 266 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 271 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Puppets?\n"
	.string "Good luck!$"

LittlerootTown_Text_TownSign::
# 276 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab::
# 281 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse::
# 285 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse::
# 289 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab::
# 293 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you, but I\l"
	.string "never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX I\n"
	.string "gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"
