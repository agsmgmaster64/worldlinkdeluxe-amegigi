Route116_TunnelersRestHouse_EventScript_BaelzFunEvent::
# 12 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzInvested
# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiBoughtIn
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzWhat
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 30 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiDefense
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzHuh
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_GigiFunEvent::
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinIntro, MSGBOX_DEFAULT
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_HakosBaelzIntro, MSGBOX_DEFAULT
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiOutOfBudget, MSGBOX_DEFAULT
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Player
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_RenkoFrickinTalking, MSGBOX_DEFAULT
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_InaFunEvent::
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 71 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 72 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 74 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaWah
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzNoMugshots
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 81 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 84 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaAdmit
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzCheerUp
# 90 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 92 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 94 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiCookie
# 95 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 96 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 97 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaThankYou
# 100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 102 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiLavaridge
# 105 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 112 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 116 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 119 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 115 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 118 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_Cook::
# 127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Cook
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalk
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_Cook_2:
# 133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_PrepareMultichoice
# 134 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_Cook_5
# 137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_Cook_9
# 140 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_Cook_10
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_Cook_11
Route116_TunnelersRestHouse_EventScript_Cook_7:
# 145 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalkAgain
# 146 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_Cook_2

Route116_TunnelersRestHouse_EventScript_Cook_1:
# 148 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_Cook_5:
	goto Route116_TunnelersRestHouse_EventScript_Cook_1

Route116_TunnelersRestHouse_EventScript_Cook_9:
# 139 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_ItemShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_10:
# 141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_MoveShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_11:
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_SellItems
	goto Route116_TunnelersRestHouse_EventScript_Cook_7


Route116_TunnelersRestHouse_Cook_PrepareMultichoice::
# 153 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BuyItems, 0
# 154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TeachMoves, 1
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_SellItems, 2
# 156 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 3
# 157 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_Cook_ItemShop::
# 162 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookItemShop
# 163 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	buyonlymart Route116_TunnelersRestHouse_Cook_ItemMart
	return


Route116_TunnelersRestHouse_Cook_MoveShop::
# 168 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookMoveTutor
# 169 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_RESULT, 0
# 170 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	movetutormart Route116_TunnelersRestHouse_Cook_MoveTutor
# 171 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_Cook_MoveShop_2
Route116_TunnelersRestHouse_Cook_MoveShop_1:
	return

Route116_TunnelersRestHouse_Cook_MoveShop_2:
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookLearnedMove
	goto Route116_TunnelersRestHouse_Cook_MoveShop_1


Route116_TunnelersRestHouse_Cook_SellItems::
# 178 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookSellItems
# 179 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	itemseller
	return


	.align 2
# 183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_ItemMart:
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_BENTO_BOX
# 185 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_UNAGI_LUNCH
# 186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_HEAVEN_PEACH
	.2byte ITEM_NONE

	.align 2
# 189 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_MoveTutor:
# 190 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_CUT
# 191 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_STRENGTH
	.2byte ITEM_NONE

# 341 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 347 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 348 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 349 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 350 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 353 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 354 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 355 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 356 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 357 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 360 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 361 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 362 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 363 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 364 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 365 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 366 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 367 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 368 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 369 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 370 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 371 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 372 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 373 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 374 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 375 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 376 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 377 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 378 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 379 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 380 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 381 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 382 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 383 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 384 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 385 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 386 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 387 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 388 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 389 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 390 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 391 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That Noiseturf Tunnel there…\p"
# 392 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 393 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 394 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 395 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 396 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 397 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 398 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 399 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 400 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 401 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 402 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 403 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 404 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 405 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 406 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 407 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 408 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 409 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 410 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 411 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 412 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 413 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 414 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 415 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 416 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 417 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 418 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 419 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 420 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 421 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Ina::
# 202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ina$"

Route116_TunnelersRestHouse_Text_Cook::
# 206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Cook$"

Route116_TunnelersRestHouse_Text_Player::
# 210 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_BuyItems::
# 214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Buy Items$"

Route116_TunnelersRestHouse_Text_TeachMoves::
# 218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_Text_SellItems::
# 222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sell Items$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 226 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 230 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 239 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 248 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 252 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 258 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 268 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 274 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_InaWah::
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wah!\n"
	.string "Hello there, {PLAYER}.\p"
	.string "My name is Ina and I'm just visiting my\n"
	.string "friends here, Gigi and Bae.$"

Route116_TunnelersRestHouse_Text_BaelzNoMugshots::
# 284 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Yo Ina, look at this nice mugshot I got\n"
	.string "here!\p"
	.string "Looks pretty nice, doesn't it?$"

Route116_TunnelersRestHouse_Text_InaAdmit::
# 289 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "I'll admit, it looks pretty nice,\n"
	.string "especially for you, Bae.\p"
	.string "Too bad I don't have one though.\p"
	.string "I don't have enough in me to make one\n"
	.string "right now.$"

Route116_TunnelersRestHouse_Text_BaelzCheerUp::
# 296 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Hey, cheer up, Ina.\p"
	.string "You'll get one eventually as well, I'm\n"
	.string "sure of it.$"

Route116_TunnelersRestHouse_Text_GigiCookie::
# 301 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah, Ina, I have some cookies for\n"
	.string "you, by the way.\p"
	.string "Maybe this will cheer you up as well.$"

Route116_TunnelersRestHouse_Text_InaThankYou::
# 306 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Thank you both.\p"
	.string "I appreciate it, you guys looking after\n"
	.string "me as well.\p"
	.string "What kind of cookie is it exactly\n"
	.string "anyways, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiLavaridge::
# 312 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}I found these near Lavaridge, where\n"
	.string "someone called Mokou was giving them\l"
	.string "away.\p"
	.string "Dunno why exactly, but I was nearby and\n"
	.string "she was giving them away, so I took a\l"
	.string "decent amount and I still have some\l"
	.string "left over.$"

Route116_TunnelersRestHouse_Text_CookTalk::
# 317 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I have no idea why these people have\n"
	.string "brought me here specifically.\p"
	.string "I will say though, I do have some nice\n"
	.string "stuff for sale if you want.$"

Route116_TunnelersRestHouse_Text_CookTalkAgain::
# 321 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There are more stuff I have if you want.$"

Route116_TunnelersRestHouse_Text_CookItemShop::
# 325 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Take a look at my delicacies if you want\n"
	.string "to buy some.$"

Route116_TunnelersRestHouse_Text_CookMoveTutor::
# 329 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "My lessons come at a fee, just so you're\n"
	.string "aware.$"

Route116_TunnelersRestHouse_Text_CookSellItems::
# 333 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see what you have\n"
	.string "available.$"

Route116_TunnelersRestHouse_Text_CookLearnedMove::
# 337 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Your Puppet has learned the move I\n"
	.string "taught successfully.\n"
	.string "I will be taking my fee for this service\l"
	.string "here now.$"
