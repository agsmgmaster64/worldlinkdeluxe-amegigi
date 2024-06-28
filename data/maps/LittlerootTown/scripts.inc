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
	goto_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_OnTransition_5
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
	call LittlerootTown_EventScript_SetTwinPos
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


LittlerootTown_EventScript_SetTwinPos::
# 55 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_EventScript_SetTwinPos_2
LittlerootTown_EventScript_SetTwinPos_1:
# 58 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 12, 1
# 59 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_EventScript_SetTwinPos_2:
# 56 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetTwinGuardingRoutePos
	goto LittlerootTown_EventScript_SetTwinPos_1


LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 64 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 9, 2
# 65 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 70 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 71 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 73 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1:
# 76 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4:
	return

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2:
# 74 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 7, 9
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5:
# 77 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 16, 9
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4


LittlerootTown_EventScript_StepOffTruckMale::
# 83 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 85 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 86 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 87 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 88 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 89 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 90 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_StepOffTruckFemale::
# 95 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 96 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 97 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 98 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 99 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 100 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 101 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 102 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_GoInsideWithMom::
# 107 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 108 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 109 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 110 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 112 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 113 "data/maps/LittlerootTown/scripts.pory"
	addobject 4
# 114 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitHouse
# 115 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 117 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 118 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 119 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 120 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 122 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 123 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 124 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachDoor
# 125 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 126 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 128 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 129 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomEnterHouse
# 130 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 131 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 133 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 134 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 135 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 136 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 137 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 138 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


LittlerootTown_EventScript_BeginDexUpgradeScene::
# 143 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 144 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 145 "data/maps/LittlerootTown/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 148 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_BirchSpeaker
# 149 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 150 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 151 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 152 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 153 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 154 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 155 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 157 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 162 "data/maps/LittlerootTown/scripts.pory"
	addobject 8
# 163 "data/maps/LittlerootTown/scripts.pory"
	addobject 7
# 164 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 165 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_2
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_1:
# 168 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_2:
# 166 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_1


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 173 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 7, 8, 10
# 174 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 8, 7, 10
	end


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 179 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 7, 15, 10
# 180 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 8, 16, 10
	end


LittlerootTown_EventScript_GoSaveBirch::
# 185 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 186 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 187 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 188 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 189 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 190 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 191 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 313 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 314 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 315 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 316 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 317 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 318 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 319 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 320 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 321 "data/maps/LittlerootTown/scripts.pory"

# 322 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 323 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 324 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 325 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 326 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 327 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 328 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 329 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 330 "data/maps/LittlerootTown/scripts.pory"

# 331 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 332 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 333 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 334 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 335 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 336 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 337 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 340 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 341 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 342 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 343 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 348 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 349 "data/maps/LittlerootTown/scripts.pory"

# 350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 353 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 356 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 357 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 359 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 360 "data/maps/LittlerootTown/scripts.pory"

# 361 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 363 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 364 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 365 "data/maps/LittlerootTown/scripts.pory"

# 366 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 367 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 368 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 371 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 376 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 377 "data/maps/LittlerootTown/scripts.pory"

# 378 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 379 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 380 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 381 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 382 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 383 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 386 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 387 "data/maps/LittlerootTown/scripts.pory"
	end
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 390 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 391 "data/maps/LittlerootTown/scripts.pory"
	end
# 392 "data/maps/LittlerootTown/scripts.pory"

# 393 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 394 "data/maps/LittlerootTown/scripts.pory"
	lock
# 395 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 396 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 397 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 398 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 399 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 400 "data/maps/LittlerootTown/scripts.pory"
	release
# 401 "data/maps/LittlerootTown/scripts.pory"
	end
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 404 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 405 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 406 "data/maps/LittlerootTown/scripts.pory"
	release
# 407 "data/maps/LittlerootTown/scripts.pory"
	end
# 408 "data/maps/LittlerootTown/scripts.pory"

# 409 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 410 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 411 "data/maps/LittlerootTown/scripts.pory"
	release
# 412 "data/maps/LittlerootTown/scripts.pory"
	end
# 413 "data/maps/LittlerootTown/scripts.pory"

# 414 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 415 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 416 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 417 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 418 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 420 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 422 "data/maps/LittlerootTown/scripts.pory"
	end
# 423 "data/maps/LittlerootTown/scripts.pory"

# 424 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 425 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 426 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 427 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 428 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 429 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 431 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 432 "data/maps/LittlerootTown/scripts.pory"
	return
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 435 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 436 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 437 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 438 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 439 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 440 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 442 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 443 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 445 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 447 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 448 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 451 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 452 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 455 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 456 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 457 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 458 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 460 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 463 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 464 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 467 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 468 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 469 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 470 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 474 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 475 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 480 "data/maps/LittlerootTown/scripts.pory"
	end
# 481 "data/maps/LittlerootTown/scripts.pory"

# 482 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 483 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 484 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 485 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 486 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 487 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 488 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 489 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 490 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 491 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 492 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 493 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 494 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 495 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 496 "data/maps/LittlerootTown/scripts.pory"

# 497 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 498 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 499 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 500 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 501 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 502 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 503 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 504 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 505 "data/maps/LittlerootTown/scripts.pory"

# 506 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 507 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 508 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 511 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 513 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 514 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 515 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 516 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 517 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 518 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 519 "data/maps/LittlerootTown/scripts.pory"
	end
# 520 "data/maps/LittlerootTown/scripts.pory"

# 521 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 522 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 523 "data/maps/LittlerootTown/scripts.pory"
	end
# 524 "data/maps/LittlerootTown/scripts.pory"

# 525 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 526 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 527 "data/maps/LittlerootTown/scripts.pory"
	end
# 528 "data/maps/LittlerootTown/scripts.pory"

# 529 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 530 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 531 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 534 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 535 "data/maps/LittlerootTown/scripts.pory"
	end
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 538 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 542 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 543 "data/maps/LittlerootTown/scripts.pory"
	return
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 546 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 547 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 548 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 549 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 550 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 551 "data/maps/LittlerootTown/scripts.pory"
	end
# 552 "data/maps/LittlerootTown/scripts.pory"

# 553 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 554 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 555 "data/maps/LittlerootTown/scripts.pory"
	return
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 558 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 559 "data/maps/LittlerootTown/scripts.pory"
	return
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 562 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 563 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 12, 9
# 565 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 566 "data/maps/LittlerootTown/scripts.pory"
	end
# 567 "data/maps/LittlerootTown/scripts.pory"

# 568 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 569 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 570 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 571 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 13, 9
# 572 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 573 "data/maps/LittlerootTown/scripts.pory"
	end
# 574 "data/maps/LittlerootTown/scripts.pory"

# 575 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 576 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 577 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 578 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 579 "data/maps/LittlerootTown/scripts.pory"
	end
# 580 "data/maps/LittlerootTown/scripts.pory"

# 581 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 582 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 583 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 584 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 585 "data/maps/LittlerootTown/scripts.pory"
	end
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 588 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 589 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 590 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 591 "data/maps/LittlerootTown/scripts.pory"
	end
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 594 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 595 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 596 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 597 "data/maps/LittlerootTown/scripts.pory"
	end
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 600 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 601 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 603 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 604 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 606 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 607 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 608 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 609 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 612 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 613 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 616 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 617 "data/maps/LittlerootTown/scripts.pory"
	end
# 618 "data/maps/LittlerootTown/scripts.pory"

# 619 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 620 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 621 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 625 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 626 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 627 "data/maps/LittlerootTown/scripts.pory"
	return
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 640 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 642 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 643 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 644 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 645 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 646 "data/maps/LittlerootTown/scripts.pory"
	return
# 647 "data/maps/LittlerootTown/scripts.pory"

# 648 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 649 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 650 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 651 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 652 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 653 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 654 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 655 "data/maps/LittlerootTown/scripts.pory"
	return
# 656 "data/maps/LittlerootTown/scripts.pory"

# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	return
# 663 "data/maps/LittlerootTown/scripts.pory"

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 665 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	return
# 677 "data/maps/LittlerootTown/scripts.pory"

# 678 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 679 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	return
# 684 "data/maps/LittlerootTown/scripts.pory"

# 685 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 686 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	return
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown/scripts.pory"
	return
# 698 "data/maps/LittlerootTown/scripts.pory"

# 699 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 704 "data/maps/LittlerootTown/scripts.pory"
	return
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 707 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 709 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 711 "data/maps/LittlerootTown/scripts.pory"
	return
# 712 "data/maps/LittlerootTown/scripts.pory"

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 714 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 716 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data/maps/LittlerootTown/scripts.pory"
	return
# 719 "data/maps/LittlerootTown/scripts.pory"

# 720 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 721 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 723 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/LittlerootTown/scripts.pory"
	return
# 726 "data/maps/LittlerootTown/scripts.pory"

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 728 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 729 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 730 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 731 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 732 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 733 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 734 "data/maps/LittlerootTown/scripts.pory"
	return
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 737 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 738 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 739 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 741 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 742 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 743 "data/maps/LittlerootTown/scripts.pory"
	return
# 744 "data/maps/LittlerootTown/scripts.pory"

# 745 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 746 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 747 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 748 "data/maps/LittlerootTown/scripts.pory"
	return
# 749 "data/maps/LittlerootTown/scripts.pory"

# 750 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 751 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 752 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 753 "data/maps/LittlerootTown/scripts.pory"
	return
# 754 "data/maps/LittlerootTown/scripts.pory"

# 755 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 756 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 757 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 758 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 759 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 760 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 761 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 762 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 763 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 764 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 765 "data/maps/LittlerootTown/scripts.pory"
	return
# 766 "data/maps/LittlerootTown/scripts.pory"

# 767 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 768 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 770 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 775 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 776 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 777 "data/maps/LittlerootTown/scripts.pory"
	return
# 778 "data/maps/LittlerootTown/scripts.pory"

# 779 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 780 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 781 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 782 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 783 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 784 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 786 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 787 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 788 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 789 "data/maps/LittlerootTown/scripts.pory"
	return
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 792 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 793 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 794 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 795 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 799 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 801 "data/maps/LittlerootTown/scripts.pory"
	return
# 802 "data/maps/LittlerootTown/scripts.pory"

# 803 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 804 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 805 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 806 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 807 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 808 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 810 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 811 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 812 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 813 "data/maps/LittlerootTown/scripts.pory"
	return
# 814 "data/maps/LittlerootTown/scripts.pory"

# 815 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 816 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 817 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 818 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 819 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 820 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 821 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 822 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 823 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 824 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 825 "data/maps/LittlerootTown/scripts.pory"
	return
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 828 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 829 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 831 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 832 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 833 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 834 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 835 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 836 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 837 "data/maps/LittlerootTown/scripts.pory"
	return
# 838 "data/maps/LittlerootTown/scripts.pory"

# 839 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 840 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 841 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 842 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 843 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 844 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 845 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 846 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 847 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 848 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 849 "data/maps/LittlerootTown/scripts.pory"
	return
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
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
LittlerootTown_Movement_MomApproachPlayer1:
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 867 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 868 "data/maps/LittlerootTown/scripts.pory"

# 869 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 883 "data/maps/LittlerootTown/scripts.pory"

# 884 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 887 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 888 "data/maps/LittlerootTown/scripts.pory"

# 889 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 893 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 894 "data/maps/LittlerootTown/scripts.pory"

# 895 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 899 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 900 "data/maps/LittlerootTown/scripts.pory"

# 901 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 904 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 912 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 913 "data/maps/LittlerootTown/scripts.pory"

# 914 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 919 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 920 "data/maps/LittlerootTown/scripts.pory"

# 921 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 923 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 927 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 928 "data/maps/LittlerootTown/scripts.pory"

# 929 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 935 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
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
LittlerootTown_Movement_MomReturnHomeMale3:
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 948 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 949 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 950 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 952 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 953 "data/maps/LittlerootTown/scripts.pory"

# 954 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 956 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 957 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 958 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 959 "data/maps/LittlerootTown/scripts.pory"

# 960 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 963 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 964 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 965 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 966 "data/maps/LittlerootTown/scripts.pory"

# 967 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 969 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 970 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 972 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 973 "data/maps/LittlerootTown/scripts.pory"

# 974 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
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
LittlerootTown_Movement_MomReturnHomeFemale4:
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 984 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 985 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 987 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 988 "data/maps/LittlerootTown/scripts.pory"

# 989 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 990 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 991 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 992 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 993 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 995 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 996 "data/maps/LittlerootTown/scripts.pory"

# 997 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 998 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 999 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1000 "data/maps/LittlerootTown/scripts.pory"

# 1001 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1002 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1003 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1004 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1005 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1006 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1007 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1008 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1009 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1010 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1011 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1012 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1013 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1014 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1015 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1016 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1017 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1018 "data/maps/LittlerootTown/scripts.pory"
	end
# 1019 "data/maps/LittlerootTown/scripts.pory"

# 1020 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1021 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1022 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1023 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1024 "data/maps/LittlerootTown/scripts.pory"
	release
# 1025 "data/maps/LittlerootTown/scripts.pory"
	end
# 1026 "data/maps/LittlerootTown/scripts.pory"

# 1027 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1028 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 1029 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1030 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1031 "data/maps/LittlerootTown/scripts.pory"
	hidespeakername
# 1032 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1033 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1034 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1035 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 1036 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1037 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1038 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1039 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1040 "data/maps/LittlerootTown/scripts.pory"
	return

LittlerootTown_Text_MomSpeaker::
# 195 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom$"

LittlerootTown_Text_BirchSpeaker::
# 199 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch$"

LittlerootTown_Text_OurNewHomeLetsGoInside::
# 203 "data/maps/LittlerootTown/scripts.pory"
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
# 214 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 218 "data/maps/LittlerootTown/scripts.pory"
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
# 228 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_ExplainRunningShoes::
# 232 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 238 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "Puppet now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_Text_CanUsePCToStoreItems::
# 248 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items and\n"
	.string "Puppets.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 253 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time at\n"
	.string "home?$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 258 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Puppets will jump out!$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 263 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have your\n"
	.string "own Puppets.$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 267 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
	.string "There are scary Puppets outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on, but I\n"
	.string "don't have any Puppets\p"
	.string "Can you go see what's happening for me?$"

LittlerootTown_Text_YouSavedBirch::
# 275 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 280 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Puppets?\n"
	.string "Good luck!$"

LittlerootTown_Text_TownSign::
# 285 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab::
# 290 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse::
# 294 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse::
# 298 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab::
# 302 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you, but I\l"
	.string "never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX I\n"
	.string "gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"
