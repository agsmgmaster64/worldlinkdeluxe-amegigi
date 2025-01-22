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
	msgbox Route116_TunnelersRestHouse_Text_BaelzWhat
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


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 74 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 72 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 73 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_Cook::
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Cook
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalk
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_Cook_2:
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_PrepareMultichoice
# 92 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_Cook_5
# 95 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_Cook_9
# 98 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_Cook_10
# 100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_Cook_11
Route116_TunnelersRestHouse_EventScript_Cook_7:
# 103 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalkAgain
# 104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_Cook_2

Route116_TunnelersRestHouse_EventScript_Cook_1:
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_Cook_5:
	goto Route116_TunnelersRestHouse_EventScript_Cook_1

Route116_TunnelersRestHouse_EventScript_Cook_9:
# 97 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_ItemShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_10:
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_MoveShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_11:
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_SellItems
	goto Route116_TunnelersRestHouse_EventScript_Cook_7


Route116_TunnelersRestHouse_Cook_PrepareMultichoice::
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BuyItems, 0
# 112 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TeachMoves, 1
# 113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_SellItems, 2
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 3
# 115 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_Cook_ItemShop::
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookItemShop
# 121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	buyonlymart Route116_TunnelersRestHouse_Cook_ItemMart
	return


Route116_TunnelersRestHouse_Cook_MoveShop::
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookMoveTutor
# 127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_RESULT, 0
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	movetutormart Route116_TunnelersRestHouse_Cook_MoveTutor
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_Cook_MoveShop_2
Route116_TunnelersRestHouse_Cook_MoveShop_1:
	return

Route116_TunnelersRestHouse_Cook_MoveShop_2:
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookLearnedMove
	goto Route116_TunnelersRestHouse_Cook_MoveShop_1


Route116_TunnelersRestHouse_Cook_SellItems::
# 136 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookSellItems
# 137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	itemseller
	return


	.align 2
# 141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_ItemMart:
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_BENTO_BOX
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_UNAGI_LUNCH
# 144 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_HEAVEN_PEACH
	.2byte ITEM_NONE

	.align 2
# 147 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_MoveTutor:
# 148 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_CUT
# 149 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_STRENGTH
	.2byte ITEM_NONE

# 257 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 258 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 259 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 260 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 265 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 266 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 269 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 270 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 271 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 272 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 273 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 276 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 277 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 280 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 281 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 282 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 284 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 285 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 286 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 287 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 288 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 289 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 290 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 291 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 292 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 293 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 294 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 295 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 296 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 297 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 298 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 299 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 300 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 301 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 302 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 303 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 304 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 305 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 306 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 307 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That Noiseturf Tunnel there…\p"
# 308 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 309 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 310 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 311 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 312 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 313 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 314 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 315 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 316 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 317 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 318 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 319 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 320 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 321 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 322 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 323 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 324 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 325 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 326 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 327 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 328 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 329 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 330 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 331 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 332 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 333 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 334 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 335 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 336 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 337 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 152 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 156 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Cook::
# 160 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Cook$"

Route116_TunnelersRestHouse_Text_Player::
# 164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_BuyItems::
# 168 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Buy Items$"

Route116_TunnelersRestHouse_Text_TeachMoves::
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_Text_SellItems::
# 176 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sell Items$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 188 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 193 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 228 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_CookTalk::
# 233 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I have no idea why these people have\n"
	.string "brought me here specifically.\p"
	.string "I will say though, I do have some nice\n"
	.string "stuff for sale if you want.$"

Route116_TunnelersRestHouse_Text_CookTalkAgain::
# 237 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There are more stuff I have if you want.$"

Route116_TunnelersRestHouse_Text_CookItemShop::
# 241 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Take a look at my delicacies if you want\n"
	.string "to buy some.$"

Route116_TunnelersRestHouse_Text_CookMoveTutor::
# 245 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "My lessons come at a fee, just so you're\n"
	.string "aware.$"

Route116_TunnelersRestHouse_Text_CookSellItems::
# 249 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see what you have\n"
	.string "available.$"

Route116_TunnelersRestHouse_Text_CookLearnedMove::
# 253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Your Puppet has learned the move I\n"
	.string "taught successfully.\n"
	.string "I will be taking my fee for this service\l"
	.string "here now.$"
