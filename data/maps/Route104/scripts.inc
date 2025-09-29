Route104_MapScripts::
# 70 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 71 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupGigiGfxId
# 72 "data/maps/Route104/scripts.pory"
	compare VAR_BOARD_BRINEY_BOAT_STATE, 1
	goto_if_lt Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 75 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 75 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 79 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	end

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 73 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 72 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 72 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 76 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/Route104/scripts.pory"
	lockall
# 5 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 6 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 7 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_Movement_BrineyBoardBoat
# 8 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 9 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 10 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBoardBoat
# 11 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 13 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 14 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
# 20 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 21 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 22 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 24 "data/maps/Route104/scripts.pory"
	waitmessage
# 25 "data/maps/Route104/scripts.pory"
	delay 30
# 26 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 27 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav
# 28 "data/maps/Route104/scripts.pory"
	waitfanfare
# 29 "data/maps/Route104/scripts.pory"
	closemessage
# 30 "data/maps/Route104/scripts.pory"
	delay 30
# 31 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 32 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 33 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 34 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 35 "data/maps/Route104/scripts.pory"
	waitmovement 0
Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 37 "data/maps/Route104/scripts.pory"
	delay 50
# 38 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerExitBoat
# 39 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 41 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 42 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 43 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 45 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 46 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 47 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 48 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 49 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 51 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 52 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 53 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 54 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 55 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 56 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 57 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 58 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 59 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 60 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6
# 65 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford
# 66 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 15 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 16 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 17 "data/maps/Route104/scripts.pory"
	waitmovement 0
	goto Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6:
# 61 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter
# 62 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_Rival::
# 86 "data/maps/Route104/scripts.pory"
	lockall
# 87 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 88 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 89 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_GigiEncounter
	return


Route104_EventScript_RivalTrigger::
# 94 "data/maps/Route104/scripts.pory"
	lockall
# 95 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 96 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 97 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 98 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route104/scripts.pory"
	delay 10
# 101 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 102 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 103 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_RivalTrigger_Movement_0
# 107 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_RivalTrigger_Movement_1
# 109 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route104/scripts.pory"
	delay 20
# 111 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 112 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 113 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 114 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 115 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 117 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_GigiEncounter
	return


Route104_EventScript_GigiEncounter::
# 122 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_GigiDefeated
# 123 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_GigiAskToBattle
# 124 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 125 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister
# 126 "data/maps/Route104/scripts.pory"
	closemessage
# 127 "data/maps/Route104/scripts.pory"
	delay 30
# 128 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 129 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay
# 130 "data/maps/Route104/scripts.pory"
	waitfanfare
# 131 "data/maps/Route104/scripts.pory"
	closemessage
# 132 "data/maps/Route104/scripts.pory"
	delay 30
# 133 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 134 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_GigiEncounter_Movement_0
# 137 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_GigiEncounter_Movement_1
# 138 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex
# 139 "data/maps/Route104/scripts.pory"
	closemessage
# 140 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_GigiEncounter_Movement_2
# 144 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 146 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 147 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_GigiEncounter_2
Route104_EventScript_GigiEncounter_1:
# 150 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon
# 151 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 152 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 153 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_GigiEncounter_2:
# 148 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleGigi
	goto Route104_EventScript_GigiEncounter_1


Route104_EventScript_GigiAskToBattle::
# 158 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 159 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_GigiAskToBattle_2
Route104_EventScript_GigiAskToBattle_1:
# 162 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon
# 163 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_GigiAskToBattle_2:
# 160 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleGigi
	goto Route104_EventScript_GigiAskToBattle_1


Route104_EventScript_BattleGigi::
# 168 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro
# 169 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 170 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 171 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_GigiDefeated
	end


Route104_EventScript_GigiDefeated::
# 176 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle
# 177 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 178 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 179 "data/maps/Route104/scripts.pory"
	releaseall
	end


# 183 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 184 "data/maps/Route104/scripts.pory"
	walk_down
# 184 "data/maps/Route104/scripts.pory"
	walk_down
# 184 "data/maps/Route104/scripts.pory"
	walk_down
# 184 "data/maps/Route104/scripts.pory"
	walk_down
# 185 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 185 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 185 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 185 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 187 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 187 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 187 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 187 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 188 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 190 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 193 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 193 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 193 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 193 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 194 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 194 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 196 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 196 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 196 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 196 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 197 "data/maps/Route104/scripts.pory"
	walk_right
# 197 "data/maps/Route104/scripts.pory"
	walk_right
# 198 "data/maps/Route104/scripts.pory"
	walk_down
# 198 "data/maps/Route104/scripts.pory"
	walk_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 199 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 200 "data/maps/Route104/scripts.pory"
	walk_down
# 200 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 204 "data/maps/Route104/scripts.pory"
	walk_down
# 204 "data/maps/Route104/scripts.pory"
	walk_down
# 204 "data/maps/Route104/scripts.pory"
	walk_down
# 204 "data/maps/Route104/scripts.pory"
	walk_down
# 205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 206 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 207 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 208 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 208 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 210 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 210 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 211 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
	step_end

# 215 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 217 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 217 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 217 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 217 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 218 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 220 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 220 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 220 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 220 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route104/scripts.pory"
	walk_right
# 221 "data/maps/Route104/scripts.pory"
	walk_right
# 222 "data/maps/Route104/scripts.pory"
	walk_down
# 222 "data/maps/Route104/scripts.pory"
	walk_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route104/scripts.pory"
	walk_down
# 224 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/Route104/scripts.pory"

# 228 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 229 "data/maps/Route104/scripts.pory"
	lock
# 230 "data/maps/Route104/scripts.pory"
	faceplayer
# 231 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 232 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 233 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 234 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 235 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 236 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 237 "data/maps/Route104/scripts.pory"
	release
# 238 "data/maps/Route104/scripts.pory"
	end
# 239 "data/maps/Route104/scripts.pory"

# 240 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 241 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 242 "data/maps/Route104/scripts.pory"
	release
# 243 "data/maps/Route104/scripts.pory"
	end
# 244 "data/maps/Route104/scripts.pory"

# 245 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 246 "data/maps/Route104/scripts.pory"
	lock
# 247 "data/maps/Route104/scripts.pory"
	faceplayer
# 248 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 249 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 250 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 251 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 252 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 253 "data/maps/Route104/scripts.pory"
	release
# 254 "data/maps/Route104/scripts.pory"
	end
# 255 "data/maps/Route104/scripts.pory"

# 256 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 257 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 258 "data/maps/Route104/scripts.pory"
	release
# 259 "data/maps/Route104/scripts.pory"
	end
# 260 "data/maps/Route104/scripts.pory"

# 261 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 262 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 263 "data/maps/Route104/scripts.pory"
	end
# 264 "data/maps/Route104/scripts.pory"

# 265 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 266 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 267 "data/maps/Route104/scripts.pory"
	end
# 268 "data/maps/Route104/scripts.pory"

# 269 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 270 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 271 "data/maps/Route104/scripts.pory"
	end
# 272 "data/maps/Route104/scripts.pory"

# 273 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 274 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 275 "data/maps/Route104/scripts.pory"
	end
# 276 "data/maps/Route104/scripts.pory"

# 277 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 278 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 279 "data/maps/Route104/scripts.pory"
	end
# 280 "data/maps/Route104/scripts.pory"

# 281 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 282 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 283 "data/maps/Route104/scripts.pory"
	end
# 284 "data/maps/Route104/scripts.pory"

# 285 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 286 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 287 "data/maps/Route104/scripts.pory"
	end
# 288 "data/maps/Route104/scripts.pory"

# 289 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 290 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 295 "data/maps/Route104/scripts.pory"
	end
# 296 "data/maps/Route104/scripts.pory"

# 297 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 298 "data/maps/Route104/scripts.pory"
	lock
# 299 "data/maps/Route104/scripts.pory"
	faceplayer
# 300 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 301 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 302 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 303 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 304 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 305 "data/maps/Route104/scripts.pory"
	release
# 306 "data/maps/Route104/scripts.pory"
	end
# 307 "data/maps/Route104/scripts.pory"

# 308 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 309 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 310 "data/maps/Route104/scripts.pory"
	release
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 315 "data/maps/Route104/scripts.pory"
	end
# 316 "data/maps/Route104/scripts.pory"

# 317 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 318 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 319 "data/maps/Route104/scripts.pory"
	releaseall
# 320 "data/maps/Route104/scripts.pory"
	end
# 321 "data/maps/Route104/scripts.pory"

# 322 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 323 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 324 "data/maps/Route104/scripts.pory"
	releaseall
# 325 "data/maps/Route104/scripts.pory"
	end
# 326 "data/maps/Route104/scripts.pory"

# 327 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 328 "data/maps/Route104/scripts.pory"
	walk_left
# 329 "data/maps/Route104/scripts.pory"
	walk_down
# 330 "data/maps/Route104/scripts.pory"
	walk_down
# 331 "data/maps/Route104/scripts.pory"
	step_end
# 332 "data/maps/Route104/scripts.pory"

# 333 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 334 "data/maps/Route104/scripts.pory"
	walk_down
# 335 "data/maps/Route104/scripts.pory"
	step_end
# 336 "data/maps/Route104/scripts.pory"

# 337 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 338 "data/maps/Route104/scripts.pory"
	walk_down
# 339 "data/maps/Route104/scripts.pory"
	walk_left
# 340 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 341 "data/maps/Route104/scripts.pory"
	step_end
# 342 "data/maps/Route104/scripts.pory"

# 343 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 344 "data/maps/Route104/scripts.pory"
	walk_down
# 345 "data/maps/Route104/scripts.pory"
	walk_down
# 346 "data/maps/Route104/scripts.pory"
	step_end
# 347 "data/maps/Route104/scripts.pory"

# 348 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 349 "data/maps/Route104/scripts.pory"
	walk_down
# 350 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 351 "data/maps/Route104/scripts.pory"
	step_end
# 352 "data/maps/Route104/scripts.pory"

# 353 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 354 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 355 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route104/scripts.pory"
	end
# 357 "data/maps/Route104/scripts.pory"

# 358 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 359 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 360 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route104/scripts.pory"
	end
# 362 "data/maps/Route104/scripts.pory"

# 363 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 364 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 365 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 366 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 367 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 368 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 369 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 370 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 371 "data/maps/Route104/scripts.pory"
	release
# 372 "data/maps/Route104/scripts.pory"
	end
# 373 "data/maps/Route104/scripts.pory"

# 374 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 375 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 376 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 377 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 378 "data/maps/Route104/scripts.pory"
	release
# 379 "data/maps/Route104/scripts.pory"
	end
# 380 "data/maps/Route104/scripts.pory"

# 381 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 382 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 383 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 384 "data/maps/Route104/scripts.pory"
	release
# 385 "data/maps/Route104/scripts.pory"
	end
# 386 "data/maps/Route104/scripts.pory"

# 387 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 388 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 389 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 390 "data/maps/Route104/scripts.pory"
	release
# 391 "data/maps/Route104/scripts.pory"
	end
# 392 "data/maps/Route104/scripts.pory"

# 393 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 394 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 395 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 396 "data/maps/Route104/scripts.pory"
	release
# 397 "data/maps/Route104/scripts.pory"
	end
# 398 "data/maps/Route104/scripts.pory"

# 399 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 400 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 401 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 402 "data/maps/Route104/scripts.pory"
	end
# 403 "data/maps/Route104/scripts.pory"

# 404 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 405 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 406 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 407 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 408 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 409 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 410 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 411 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 412 "data/maps/Route104/scripts.pory"
	release
# 413 "data/maps/Route104/scripts.pory"
	end
# 414 "data/maps/Route104/scripts.pory"

# 415 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 416 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 417 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 419 "data/maps/Route104/scripts.pory"
	release
# 420 "data/maps/Route104/scripts.pory"
	end
# 421 "data/maps/Route104/scripts.pory"

# 422 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 423 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 424 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 425 "data/maps/Route104/scripts.pory"
	release
# 426 "data/maps/Route104/scripts.pory"
	end
# 427 "data/maps/Route104/scripts.pory"

# 428 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 429 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 430 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 431 "data/maps/Route104/scripts.pory"
	release
# 432 "data/maps/Route104/scripts.pory"
	end
# 433 "data/maps/Route104/scripts.pory"

# 434 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 435 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 436 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 437 "data/maps/Route104/scripts.pory"
	release
# 438 "data/maps/Route104/scripts.pory"
	end
# 439 "data/maps/Route104/scripts.pory"

# 440 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 441 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 442 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 443 "data/maps/Route104/scripts.pory"
	end
# 444 "data/maps/Route104/scripts.pory"

# 445 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 446 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 447 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 448 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 449 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 450 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 451 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 452 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 453 "data/maps/Route104/scripts.pory"
	release
# 454 "data/maps/Route104/scripts.pory"
	end
# 455 "data/maps/Route104/scripts.pory"

# 456 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 457 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 458 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 460 "data/maps/Route104/scripts.pory"
	release
# 461 "data/maps/Route104/scripts.pory"
	end
# 462 "data/maps/Route104/scripts.pory"

# 463 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 464 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 465 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 466 "data/maps/Route104/scripts.pory"
	release
# 467 "data/maps/Route104/scripts.pory"
	end
# 468 "data/maps/Route104/scripts.pory"

# 469 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 470 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 471 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 472 "data/maps/Route104/scripts.pory"
	release
# 473 "data/maps/Route104/scripts.pory"
	end
# 474 "data/maps/Route104/scripts.pory"

# 475 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 476 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 477 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 478 "data/maps/Route104/scripts.pory"
	release
# 479 "data/maps/Route104/scripts.pory"
	end
# 480 "data/maps/Route104/scripts.pory"

# 481 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 482 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 483 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 484 "data/maps/Route104/scripts.pory"
	end
# 485 "data/maps/Route104/scripts.pory"

# 486 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 487 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 488 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 489 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 490 "data/maps/Route104/scripts.pory"
	release
# 491 "data/maps/Route104/scripts.pory"
	end
# 492 "data/maps/Route104/scripts.pory"

# 493 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 494 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 495 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 496 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 497 "data/maps/Route104/scripts.pory"
	release
# 498 "data/maps/Route104/scripts.pory"
	end
# 499 "data/maps/Route104/scripts.pory"

# 500 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 501 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 502 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route104/scripts.pory"
	end
# 504 "data/maps/Route104/scripts.pory"

# 505 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 506 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 507 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 508 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 509 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 510 "data/maps/Route104/scripts.pory"

# 511 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 512 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 513 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 514 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 515 "data/maps/Route104/scripts.pory"

# 516 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 517 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 518 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 519 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 520 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 521 "data/maps/Route104/scripts.pory"

# 522 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 523 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 524 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 525 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 526 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 527 "data/maps/Route104/scripts.pory"

# 528 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 529 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 530 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 531 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 532 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 533 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 534 "data/maps/Route104/scripts.pory"

# 535 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 536 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 537 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 538 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 539 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 540 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 541 "data/maps/Route104/scripts.pory"

# 542 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 543 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 544 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 545 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 546 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 547 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 548 "data/maps/Route104/scripts.pory"

# 549 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 550 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 551 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 552 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 553 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 554 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 555 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 556 "data/maps/Route104/scripts.pory"

# 557 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 558 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 559 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 560 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 561 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 562 "data/maps/Route104/scripts.pory"

# 563 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 564 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 565 "data/maps/Route104/scripts.pory"

# 566 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 567 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 568 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 569 "data/maps/Route104/scripts.pory"

# 570 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 571 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 572 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 573 "data/maps/Route104/scripts.pory"

# 574 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 575 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 576 "data/maps/Route104/scripts.pory"

# 577 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 578 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 579 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 580 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 581 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 582 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 583 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 584 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 585 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 586 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 587 "data/maps/Route104/scripts.pory"

# 588 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 589 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 590 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 591 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 592 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 593 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 594 "data/maps/Route104/scripts.pory"

# 595 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 596 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 597 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 598 "data/maps/Route104/scripts.pory"

# 599 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 600 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 601 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 602 "data/maps/Route104/scripts.pory"

# 603 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 604 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 605 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 606 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 607 "data/maps/Route104/scripts.pory"

# 608 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 609 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 610 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 611 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 612 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 613 "data/maps/Route104/scripts.pory"

# 614 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 615 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 616 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 617 "data/maps/Route104/scripts.pory"

# 618 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 619 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 620 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 621 "data/maps/Route104/scripts.pory"

# 622 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 623 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 624 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 625 "data/maps/Route104/scripts.pory"

# 626 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 627 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 628 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 629 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 630 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 631 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 632 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 633 "data/maps/Route104/scripts.pory"

# 634 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 635 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 636 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 637 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 638 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 639 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 640 "data/maps/Route104/scripts.pory"

# 641 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 642 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 643 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 644 "data/maps/Route104/scripts.pory"

# 645 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 646 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 647 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 648 "data/maps/Route104/scripts.pory"

# 649 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 650 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 651 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 652 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 653 "data/maps/Route104/scripts.pory"

# 654 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 655 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 656 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 657 "data/maps/Route104/scripts.pory"

# 658 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 659 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 660 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 661 "data/maps/Route104/scripts.pory"

# 662 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 663 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 664 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 665 "data/maps/Route104/scripts.pory"

# 666 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 667 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 668 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 669 "data/maps/Route104/scripts.pory"

# 670 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 671 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 672 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 673 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 674 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 675 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 676 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

# 103 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger_Movement_0:
# 104 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 105 "data/maps/Route104/scripts.pory"
	walk_down
# 106 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
	step_end

# 108 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger_Movement_1:
# 108 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 134 "data/maps/Route104/scripts.pory"
Route104_EventScript_GigiEncounter_Movement_0:
# 135 "data/maps/Route104/scripts.pory"
	delay_4
# 136 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
	step_end

# 137 "data/maps/Route104/scripts.pory"
Route104_EventScript_GigiEncounter_Movement_1:
# 137 "data/maps/Route104/scripts.pory"
	walk_slow_left
	step_end

# 141 "data/maps/Route104/scripts.pory"
Route104_EventScript_GigiEncounter_Movement_2:
# 142 "data/maps/Route104/scripts.pory"
	walk_down
# 143 "data/maps/Route104/scripts.pory"
	face_right
	step_end
