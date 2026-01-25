Route104_MapScripts::
# 70 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 71 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 71 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 75 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 72 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

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


# 81 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 82 "data/maps/Route104/scripts.pory"
	walk_down
# 82 "data/maps/Route104/scripts.pory"
	walk_down
# 82 "data/maps/Route104/scripts.pory"
	walk_down
# 82 "data/maps/Route104/scripts.pory"
	walk_down
# 83 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 83 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 83 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 83 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 85 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 85 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 85 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 85 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 86 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 86 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 87 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 87 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 87 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 87 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 87 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 89 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 89 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 89 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 92 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 92 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 92 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 94 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route104/scripts.pory"
	walk_right
# 95 "data/maps/Route104/scripts.pory"
	walk_right
# 96 "data/maps/Route104/scripts.pory"
	walk_down
# 96 "data/maps/Route104/scripts.pory"
	walk_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 98 "data/maps/Route104/scripts.pory"
	walk_down
# 98 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 101 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 102 "data/maps/Route104/scripts.pory"
	walk_down
# 102 "data/maps/Route104/scripts.pory"
	walk_down
# 102 "data/maps/Route104/scripts.pory"
	walk_down
# 102 "data/maps/Route104/scripts.pory"
	walk_down
# 103 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 105 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 106 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 106 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 108 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 110 "data/maps/Route104/scripts.pory"
	walk_faster_down
	step_end

# 113 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 115 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 115 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 115 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 115 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 116 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 117 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 118 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route104/scripts.pory"
	walk_right
# 119 "data/maps/Route104/scripts.pory"
	walk_right
# 120 "data/maps/Route104/scripts.pory"
	walk_down
# 120 "data/maps/Route104/scripts.pory"
	walk_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 122 "data/maps/Route104/scripts.pory"
	walk_down
# 122 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 125 "data/maps/Route104/scripts.pory"

# 126 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 127 "data/maps/Route104/scripts.pory"
	lock
# 128 "data/maps/Route104/scripts.pory"
	faceplayer
# 129 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 130 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 131 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 132 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 133 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 134 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 135 "data/maps/Route104/scripts.pory"
	release
# 136 "data/maps/Route104/scripts.pory"
	end
# 137 "data/maps/Route104/scripts.pory"

# 138 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 139 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 140 "data/maps/Route104/scripts.pory"
	release
# 141 "data/maps/Route104/scripts.pory"
	end
# 142 "data/maps/Route104/scripts.pory"

# 143 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 144 "data/maps/Route104/scripts.pory"
	lock
# 145 "data/maps/Route104/scripts.pory"
	faceplayer
# 146 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 147 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 148 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 149 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 150 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 151 "data/maps/Route104/scripts.pory"
	release
# 152 "data/maps/Route104/scripts.pory"
	end
# 153 "data/maps/Route104/scripts.pory"

# 154 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 155 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 156 "data/maps/Route104/scripts.pory"
	release
# 157 "data/maps/Route104/scripts.pory"
	end
# 158 "data/maps/Route104/scripts.pory"

# 159 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 160 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 161 "data/maps/Route104/scripts.pory"
	end
# 162 "data/maps/Route104/scripts.pory"

# 163 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 164 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 165 "data/maps/Route104/scripts.pory"
	end
# 166 "data/maps/Route104/scripts.pory"

# 167 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 168 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 169 "data/maps/Route104/scripts.pory"
	end
# 170 "data/maps/Route104/scripts.pory"

# 171 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 172 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 173 "data/maps/Route104/scripts.pory"
	end
# 174 "data/maps/Route104/scripts.pory"

# 175 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 176 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 177 "data/maps/Route104/scripts.pory"
	end
# 178 "data/maps/Route104/scripts.pory"

# 179 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 180 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 181 "data/maps/Route104/scripts.pory"
	end
# 182 "data/maps/Route104/scripts.pory"

# 183 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 184 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 185 "data/maps/Route104/scripts.pory"
	end
# 186 "data/maps/Route104/scripts.pory"

# 187 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 188 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 189 "data/maps/Route104/scripts.pory"
	end
# 190 "data/maps/Route104/scripts.pory"

# 191 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 192 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 193 "data/maps/Route104/scripts.pory"
	end
# 194 "data/maps/Route104/scripts.pory"

# 195 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 196 "data/maps/Route104/scripts.pory"
	lock
# 197 "data/maps/Route104/scripts.pory"
	faceplayer
# 198 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 199 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 200 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 201 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 202 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 203 "data/maps/Route104/scripts.pory"
	release
# 204 "data/maps/Route104/scripts.pory"
	end
# 205 "data/maps/Route104/scripts.pory"

# 206 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 207 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 208 "data/maps/Route104/scripts.pory"
	release
# 209 "data/maps/Route104/scripts.pory"
	end
# 210 "data/maps/Route104/scripts.pory"

# 211 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 213 "data/maps/Route104/scripts.pory"
	end
# 214 "data/maps/Route104/scripts.pory"

# 215 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 216 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 217 "data/maps/Route104/scripts.pory"
	releaseall
# 218 "data/maps/Route104/scripts.pory"
	end
# 219 "data/maps/Route104/scripts.pory"

# 220 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 221 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 222 "data/maps/Route104/scripts.pory"
	releaseall
# 223 "data/maps/Route104/scripts.pory"
	end
# 224 "data/maps/Route104/scripts.pory"

# 225 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 226 "data/maps/Route104/scripts.pory"
	walk_left
# 227 "data/maps/Route104/scripts.pory"
	walk_down
# 228 "data/maps/Route104/scripts.pory"
	walk_down
# 229 "data/maps/Route104/scripts.pory"
	step_end
# 230 "data/maps/Route104/scripts.pory"

# 231 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 232 "data/maps/Route104/scripts.pory"
	walk_down
# 233 "data/maps/Route104/scripts.pory"
	step_end
# 234 "data/maps/Route104/scripts.pory"

# 235 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 236 "data/maps/Route104/scripts.pory"
	walk_down
# 237 "data/maps/Route104/scripts.pory"
	walk_left
# 238 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 239 "data/maps/Route104/scripts.pory"
	step_end
# 240 "data/maps/Route104/scripts.pory"

# 241 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 242 "data/maps/Route104/scripts.pory"
	walk_down
# 243 "data/maps/Route104/scripts.pory"
	walk_down
# 244 "data/maps/Route104/scripts.pory"
	step_end
# 245 "data/maps/Route104/scripts.pory"

# 246 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 247 "data/maps/Route104/scripts.pory"
	walk_down
# 248 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 249 "data/maps/Route104/scripts.pory"
	step_end
# 250 "data/maps/Route104/scripts.pory"

# 251 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 252 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 253 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route104/scripts.pory"
	end
# 255 "data/maps/Route104/scripts.pory"

# 256 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 257 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 258 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route104/scripts.pory"
	end
# 260 "data/maps/Route104/scripts.pory"

# 261 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 262 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 263 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 264 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 265 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 266 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 267 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 268 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 269 "data/maps/Route104/scripts.pory"
	release
# 270 "data/maps/Route104/scripts.pory"
	end
# 271 "data/maps/Route104/scripts.pory"

# 272 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 273 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 274 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 276 "data/maps/Route104/scripts.pory"
	release
# 277 "data/maps/Route104/scripts.pory"
	end
# 278 "data/maps/Route104/scripts.pory"

# 279 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 280 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 281 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 282 "data/maps/Route104/scripts.pory"
	release
# 283 "data/maps/Route104/scripts.pory"
	end
# 284 "data/maps/Route104/scripts.pory"

# 285 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 286 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 287 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 288 "data/maps/Route104/scripts.pory"
	release
# 289 "data/maps/Route104/scripts.pory"
	end
# 290 "data/maps/Route104/scripts.pory"

# 291 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 292 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 293 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 294 "data/maps/Route104/scripts.pory"
	release
# 295 "data/maps/Route104/scripts.pory"
	end
# 296 "data/maps/Route104/scripts.pory"

# 297 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 298 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 299 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route104/scripts.pory"
	end
# 301 "data/maps/Route104/scripts.pory"

# 302 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 303 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 304 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 305 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 306 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 307 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 308 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 309 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 310 "data/maps/Route104/scripts.pory"
	release
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 314 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 315 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 317 "data/maps/Route104/scripts.pory"
	release
# 318 "data/maps/Route104/scripts.pory"
	end
# 319 "data/maps/Route104/scripts.pory"

# 320 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 321 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 322 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 323 "data/maps/Route104/scripts.pory"
	release
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 327 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 328 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 329 "data/maps/Route104/scripts.pory"
	release
# 330 "data/maps/Route104/scripts.pory"
	end
# 331 "data/maps/Route104/scripts.pory"

# 332 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 333 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 334 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 335 "data/maps/Route104/scripts.pory"
	release
# 336 "data/maps/Route104/scripts.pory"
	end
# 337 "data/maps/Route104/scripts.pory"

# 338 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 339 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 340 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route104/scripts.pory"
	end
# 342 "data/maps/Route104/scripts.pory"

# 343 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 344 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 345 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 346 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 347 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 348 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 349 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 350 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 351 "data/maps/Route104/scripts.pory"
	release
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 355 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 356 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 358 "data/maps/Route104/scripts.pory"
	release
# 359 "data/maps/Route104/scripts.pory"
	end
# 360 "data/maps/Route104/scripts.pory"

# 361 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 362 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 363 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 364 "data/maps/Route104/scripts.pory"
	release
# 365 "data/maps/Route104/scripts.pory"
	end
# 366 "data/maps/Route104/scripts.pory"

# 367 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 368 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 369 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 370 "data/maps/Route104/scripts.pory"
	release
# 371 "data/maps/Route104/scripts.pory"
	end
# 372 "data/maps/Route104/scripts.pory"

# 373 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 374 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 375 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 376 "data/maps/Route104/scripts.pory"
	release
# 377 "data/maps/Route104/scripts.pory"
	end
# 378 "data/maps/Route104/scripts.pory"

# 379 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 380 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 381 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route104/scripts.pory"
	end
# 383 "data/maps/Route104/scripts.pory"

# 384 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 385 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 386 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 387 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 388 "data/maps/Route104/scripts.pory"
	release
# 389 "data/maps/Route104/scripts.pory"
	end
# 390 "data/maps/Route104/scripts.pory"

# 391 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 392 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 393 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 394 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 395 "data/maps/Route104/scripts.pory"
	release
# 396 "data/maps/Route104/scripts.pory"
	end
# 397 "data/maps/Route104/scripts.pory"

# 398 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 399 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 400 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route104/scripts.pory"
	end
# 402 "data/maps/Route104/scripts.pory"

# 403 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 404 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 405 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 406 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 407 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 408 "data/maps/Route104/scripts.pory"

# 409 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 410 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 411 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 412 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 413 "data/maps/Route104/scripts.pory"

# 414 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 415 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 416 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 417 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 418 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 419 "data/maps/Route104/scripts.pory"

# 420 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 421 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 422 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 423 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 424 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 425 "data/maps/Route104/scripts.pory"

# 426 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 427 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 428 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 429 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 430 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 431 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 432 "data/maps/Route104/scripts.pory"

# 433 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 434 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 435 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 436 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 437 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 438 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 439 "data/maps/Route104/scripts.pory"

# 440 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 441 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 442 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 443 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 444 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 445 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 446 "data/maps/Route104/scripts.pory"

# 447 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 448 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 449 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 450 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 451 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 452 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 453 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 454 "data/maps/Route104/scripts.pory"

# 455 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 456 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 457 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 458 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 459 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 460 "data/maps/Route104/scripts.pory"

# 461 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 462 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 463 "data/maps/Route104/scripts.pory"

# 464 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 465 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 466 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 467 "data/maps/Route104/scripts.pory"

# 468 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 469 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 470 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 471 "data/maps/Route104/scripts.pory"

# 472 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 473 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 474 "data/maps/Route104/scripts.pory"

# 475 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 476 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 477 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 478 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 479 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 480 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 481 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 482 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 483 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 484 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 485 "data/maps/Route104/scripts.pory"

# 486 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 487 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 488 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 489 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 490 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 491 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 492 "data/maps/Route104/scripts.pory"

# 493 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 494 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 495 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 496 "data/maps/Route104/scripts.pory"

# 497 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 498 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 499 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 500 "data/maps/Route104/scripts.pory"

# 501 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 502 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 503 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 504 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 505 "data/maps/Route104/scripts.pory"

# 506 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 507 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 508 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 509 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 510 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 511 "data/maps/Route104/scripts.pory"

# 512 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 513 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 514 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 515 "data/maps/Route104/scripts.pory"

# 516 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 517 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 518 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 519 "data/maps/Route104/scripts.pory"

# 520 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 521 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 522 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 523 "data/maps/Route104/scripts.pory"

# 524 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 525 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 526 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 527 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 528 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 529 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 530 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 531 "data/maps/Route104/scripts.pory"

# 532 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 533 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 534 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 535 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 536 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 537 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 538 "data/maps/Route104/scripts.pory"

# 539 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 540 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 541 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 542 "data/maps/Route104/scripts.pory"

# 543 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 544 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 545 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 546 "data/maps/Route104/scripts.pory"

# 547 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 548 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 549 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 550 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 551 "data/maps/Route104/scripts.pory"

# 552 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 553 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 554 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 555 "data/maps/Route104/scripts.pory"

# 556 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 557 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 558 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 559 "data/maps/Route104/scripts.pory"

# 560 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 561 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 562 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 563 "data/maps/Route104/scripts.pory"

# 564 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 565 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 566 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 567 "data/maps/Route104/scripts.pory"

# 568 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 569 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 570 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 571 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 572 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 573 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 574 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"
