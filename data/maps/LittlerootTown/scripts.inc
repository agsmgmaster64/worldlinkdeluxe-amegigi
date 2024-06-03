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
# 33 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq LittlerootTown_OnTransition_14
LittlerootTown_OnTransition_13:
# 36 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq LittlerootTown_OnTransition_17
LittlerootTown_OnTransition_16:
# 40 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq LittlerootTown_OnTransition_20
LittlerootTown_OnTransition_19:
# 43 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	goto_if_eq LittlerootTown_OnTransition_23
LittlerootTown_OnTransition_22:
# 46 "data/maps/LittlerootTown/scripts.pory"
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
	goto LittlerootTown_OnTransition_10

LittlerootTown_OnTransition_14:
# 34 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	goto LittlerootTown_OnTransition_13

LittlerootTown_OnTransition_17:
# 37 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 38 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	goto LittlerootTown_OnTransition_16

LittlerootTown_OnTransition_20:
# 41 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	goto LittlerootTown_OnTransition_19

LittlerootTown_OnTransition_23:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto LittlerootTown_OnTransition_22

LittlerootTown_OnTransition_26:
# 47 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	goto LittlerootTown_OnTransition_25


LittlerootTown_EventScript_SetTwinPos::
# 53 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_EventScript_SetTwinPos_2
LittlerootTown_EventScript_SetTwinPos_1:
# 56 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 12, 1
# 57 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_EventScript_SetTwinPos_2:
# 54 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetTwinGuardingRoutePos
	goto LittlerootTown_EventScript_SetTwinPos_1


LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 9, 2
# 63 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 68 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 69 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 71 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1:
# 74 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4:
	return

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2:
# 72 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 7, 9
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5:
# 75 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 16, 9
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4


LittlerootTown_EventScript_StepOffTruckMale::
# 81 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 82 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 83 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 84 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 85 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 86 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 87 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 88 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_StepOffTruckFemale::
# 93 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 94 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 95 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 96 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 97 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 98 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 99 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 100 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_GoInsideWithMom::
# 105 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 106 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 107 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 108 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 110 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 111 "data/maps/LittlerootTown/scripts.pory"
	addobject 4
# 112 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitHouse
# 113 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 115 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 116 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 117 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 118 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 120 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 122 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachDoor
# 123 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 124 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 126 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 127 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomEnterHouse
# 128 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 129 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 131 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 132 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 133 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 134 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 135 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 136 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


# 161 "data/maps/LittlerootTown/scripts.pory"

# 162 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 163 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 164 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 165 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 166 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 167 "data/maps/LittlerootTown/scripts.pory"

# 168 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 169 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 170 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 171 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 172 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 173 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 174 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 175 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 176 "data/maps/LittlerootTown/scripts.pory"

# 177 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 178 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 179 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 180 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 181 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 182 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 183 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 186 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 187 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 188 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 189 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 193 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 194 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 197 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 198 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 199 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown/scripts.pory"

# 201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 202 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 204 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown/scripts.pory"

# 207 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 210 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown/scripts.pory"

# 212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 213 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 215 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 216 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 217 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown/scripts.pory"

# 219 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 220 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 221 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 222 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 223 "data/maps/LittlerootTown/scripts.pory"

# 224 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 225 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 226 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 227 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 228 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 232 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 233 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 234 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 235 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 237 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_BirchSpeaker
# 238 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 239 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 240 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 241 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 242 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 243 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 244 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 245 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 246 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 250 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 251 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 252 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 253 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 254 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 258 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 259 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 260 "data/maps/LittlerootTown/scripts.pory"
	end
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 263 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 264 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 265 "data/maps/LittlerootTown/scripts.pory"
	end
# 266 "data/maps/LittlerootTown/scripts.pory"

# 267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 268 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 272 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 273 "data/maps/LittlerootTown/scripts.pory"
	end
# 274 "data/maps/LittlerootTown/scripts.pory"

# 275 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 276 "data/maps/LittlerootTown/scripts.pory"
	lock
# 277 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 278 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 279 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 280 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	release
# 283 "data/maps/LittlerootTown/scripts.pory"
	end
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 286 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 287 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 288 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 292 "data/maps/LittlerootTown/scripts.pory"
	release
# 293 "data/maps/LittlerootTown/scripts.pory"
	end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 296 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 297 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 298 "data/maps/LittlerootTown/scripts.pory"
	release
# 299 "data/maps/LittlerootTown/scripts.pory"
	end
# 300 "data/maps/LittlerootTown/scripts.pory"

# 301 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 302 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 303 "data/maps/LittlerootTown/scripts.pory"
	release
# 304 "data/maps/LittlerootTown/scripts.pory"
	end
# 305 "data/maps/LittlerootTown/scripts.pory"

# 306 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 307 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 309 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 310 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 311 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 314 "data/maps/LittlerootTown/scripts.pory"
	end
# 315 "data/maps/LittlerootTown/scripts.pory"

# 316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 317 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 318 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 319 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 320 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 321 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 323 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 324 "data/maps/LittlerootTown/scripts.pory"
	return
# 325 "data/maps/LittlerootTown/scripts.pory"

# 326 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 327 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 328 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 329 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 330 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 331 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 339 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 344 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 354 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 356 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 357 "data/maps/LittlerootTown/scripts.pory"

# 358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 359 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 361 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 362 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 363 "data/maps/LittlerootTown/scripts.pory"

# 364 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 365 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 366 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 367 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 368 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 369 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 370 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 371 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 372 "data/maps/LittlerootTown/scripts.pory"
	end
# 373 "data/maps/LittlerootTown/scripts.pory"

# 374 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 375 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 376 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 377 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 378 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 379 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 386 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 387 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 392 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 393 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 394 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 395 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 396 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 397 "data/maps/LittlerootTown/scripts.pory"

# 398 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 399 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 400 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 401 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 402 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 403 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 404 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 405 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 406 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 407 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 408 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 410 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 411 "data/maps/LittlerootTown/scripts.pory"
	end
# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 414 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 415 "data/maps/LittlerootTown/scripts.pory"
	end
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 418 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 419 "data/maps/LittlerootTown/scripts.pory"
	end
# 420 "data/maps/LittlerootTown/scripts.pory"

# 421 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 422 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 423 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 424 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 425 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 426 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 427 "data/maps/LittlerootTown/scripts.pory"
	end
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 431 "data/maps/LittlerootTown/scripts.pory"
	return
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 434 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 435 "data/maps/LittlerootTown/scripts.pory"
	return
# 436 "data/maps/LittlerootTown/scripts.pory"

# 437 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 438 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 439 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 440 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 441 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 442 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown/scripts.pory"
	return
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 450 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 451 "data/maps/LittlerootTown/scripts.pory"
	return
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 454 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 455 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 456 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 12, 9
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 461 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 463 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 13, 9
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 474 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 475 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 476 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 480 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 481 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 482 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 483 "data/maps/LittlerootTown/scripts.pory"
	end
# 484 "data/maps/LittlerootTown/scripts.pory"

# 485 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 486 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 487 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 488 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 489 "data/maps/LittlerootTown/scripts.pory"
	end
# 490 "data/maps/LittlerootTown/scripts.pory"

# 491 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 492 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 493 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 495 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 496 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 497 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 498 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 499 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 500 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 501 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 502 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 503 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 504 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 505 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 506 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 507 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 508 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 509 "data/maps/LittlerootTown/scripts.pory"
	end
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 512 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 513 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 514 "data/maps/LittlerootTown/scripts.pory"
	return
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 517 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 518 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 519 "data/maps/LittlerootTown/scripts.pory"
	return
# 520 "data/maps/LittlerootTown/scripts.pory"

# 521 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 522 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 523 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 524 "data/maps/LittlerootTown/scripts.pory"
	return
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 527 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 528 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 529 "data/maps/LittlerootTown/scripts.pory"
	return
# 530 "data/maps/LittlerootTown/scripts.pory"

# 531 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 534 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 535 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 538 "data/maps/LittlerootTown/scripts.pory"
	return
# 539 "data/maps/LittlerootTown/scripts.pory"

# 540 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 541 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 543 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 545 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 546 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 547 "data/maps/LittlerootTown/scripts.pory"
	return
# 548 "data/maps/LittlerootTown/scripts.pory"

# 549 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 550 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 557 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	return
# 562 "data/maps/LittlerootTown/scripts.pory"

# 563 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 564 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 565 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	return
# 569 "data/maps/LittlerootTown/scripts.pory"

# 570 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	return
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	return
# 583 "data/maps/LittlerootTown/scripts.pory"

# 584 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	return
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/LittlerootTown/scripts.pory"
	return
# 597 "data/maps/LittlerootTown/scripts.pory"

# 598 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 602 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 603 "data/maps/LittlerootTown/scripts.pory"
	return
# 604 "data/maps/LittlerootTown/scripts.pory"

# 605 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 606 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 607 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 609 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/LittlerootTown/scripts.pory"
	return
# 611 "data/maps/LittlerootTown/scripts.pory"

# 612 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 613 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 614 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 615 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 616 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 617 "data/maps/LittlerootTown/scripts.pory"
	return
# 618 "data/maps/LittlerootTown/scripts.pory"

# 619 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 623 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 624 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 626 "data/maps/LittlerootTown/scripts.pory"
	return
# 627 "data/maps/LittlerootTown/scripts.pory"

# 628 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 629 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 630 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 631 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 632 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 633 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 634 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 635 "data/maps/LittlerootTown/scripts.pory"
	return
# 636 "data/maps/LittlerootTown/scripts.pory"

# 637 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 638 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 639 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 640 "data/maps/LittlerootTown/scripts.pory"
	return
# 641 "data/maps/LittlerootTown/scripts.pory"

# 642 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 643 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 645 "data/maps/LittlerootTown/scripts.pory"
	return
# 646 "data/maps/LittlerootTown/scripts.pory"

# 647 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 652 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 654 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 655 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 657 "data/maps/LittlerootTown/scripts.pory"
	return
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 664 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 667 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 679 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 681 "data/maps/LittlerootTown/scripts.pory"
	return
# 682 "data/maps/LittlerootTown/scripts.pory"

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 691 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 693 "data/maps/LittlerootTown/scripts.pory"
	return
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 703 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 705 "data/maps/LittlerootTown/scripts.pory"
	return
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 715 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 717 "data/maps/LittlerootTown/scripts.pory"
	return
# 718 "data/maps/LittlerootTown/scripts.pory"

# 719 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 720 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 727 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 729 "data/maps/LittlerootTown/scripts.pory"
	return
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 732 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 734 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 736 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 739 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 740 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 741 "data/maps/LittlerootTown/scripts.pory"
	return
# 742 "data/maps/LittlerootTown/scripts.pory"

# 743 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 750 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 751 "data/maps/LittlerootTown/scripts.pory"

# 752 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 759 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 774 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 779 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 786 "data/maps/LittlerootTown/scripts.pory"

# 787 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 792 "data/maps/LittlerootTown/scripts.pory"

# 793 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 804 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 805 "data/maps/LittlerootTown/scripts.pory"

# 806 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 819 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 827 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 828 "data/maps/LittlerootTown/scripts.pory"

# 829 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 835 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 836 "data/maps/LittlerootTown/scripts.pory"

# 837 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 844 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 845 "data/maps/LittlerootTown/scripts.pory"

# 846 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 850 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 851 "data/maps/LittlerootTown/scripts.pory"

# 852 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 857 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 864 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 865 "data/maps/LittlerootTown/scripts.pory"

# 866 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 870 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 871 "data/maps/LittlerootTown/scripts.pory"

# 872 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 879 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 887 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 888 "data/maps/LittlerootTown/scripts.pory"

# 889 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 891 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 894 "data/maps/LittlerootTown/scripts.pory"
	lock
# 895 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 896 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 897 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 898 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 899 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 900 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 901 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 902 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 903 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 904 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 905 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 906 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 907 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 908 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 909 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 910 "data/maps/LittlerootTown/scripts.pory"
	end
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 913 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 914 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 915 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 916 "data/maps/LittlerootTown/scripts.pory"
	release
# 917 "data/maps/LittlerootTown/scripts.pory"
	end
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 920 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 921 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 922 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 923 "data/maps/LittlerootTown/scripts.pory"
	hidespeakername
# 924 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 925 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 926 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 927 "data/maps/LittlerootTown/scripts.pory"
	setspeakername LittlerootTown_Text_MomSpeaker
# 928 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 929 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 930 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 931 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 932 "data/maps/LittlerootTown/scripts.pory"
	return
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 947 "data/maps/LittlerootTown/scripts.pory"

# 948 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 951 "data/maps/LittlerootTown/scripts.pory"

# 952 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes came with\n"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 959 "data/maps/LittlerootTown/scripts.pory"

# 960 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "Puppet now…\l"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 969 "data/maps/LittlerootTown/scripts.pory"

# 970 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "and Puppets.\p"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 974 "data/maps/LittlerootTown/scripts.pory"

# 975 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 981 "data/maps/LittlerootTown/scripts.pory"

# 982 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Puppets will jump out!$"
# 986 "data/maps/LittlerootTown/scripts.pory"

# 987 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Puppets.$"
# 990 "data/maps/LittlerootTown/scripts.pory"

# 991 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Puppets outside!\n"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Puppets\p"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 999 "data/maps/LittlerootTown/scripts.pory"

# 1000 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Puppets?\n"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1007 "data/maps/LittlerootTown/scripts.pory"

# 1008 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1014 "data/maps/LittlerootTown/scripts.pory"

# 1015 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1017 "data/maps/LittlerootTown/scripts.pory"

# 1018 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1020 "data/maps/LittlerootTown/scripts.pory"

# 1021 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_Text_MomSpeaker::
# 140 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom$"

LittlerootTown_Text_BirchSpeaker::
# 144 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch$"

LittlerootTown_Text_OurNewHomeLetsGoInside::
# 148 "data/maps/LittlerootTown/scripts.pory"
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
