Route116_TunnelersRestHouse_EventScript_GigiFunEvent::
# 12 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinIntro, MSGBOX_DEFAULT
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_HakosBaelzIntro, MSGBOX_DEFAULT
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiOutOfBudget, MSGBOX_DEFAULT
# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Player
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_RenkoFrickinTalking, MSGBOX_DEFAULT
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 41 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_Cook::
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Cook
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalk
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_Cook_2:
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_PrepareMultichoice
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_Cook_5
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_Cook_9
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_Cook_10
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_Cook_11
Route116_TunnelersRestHouse_EventScript_Cook_7:
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalkAgain
# 66 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_Cook_2

Route116_TunnelersRestHouse_EventScript_Cook_1:
# 68 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_Cook_5:
	goto Route116_TunnelersRestHouse_EventScript_Cook_1

Route116_TunnelersRestHouse_EventScript_Cook_9:
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_ItemShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_10:
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_MoveShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_11:
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_SellItems
	goto Route116_TunnelersRestHouse_EventScript_Cook_7


Route116_TunnelersRestHouse_Cook_PrepareMultichoice::
# 73 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BuyItems, 0
# 74 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TeachMoves, 1
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_SellItems, 2
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 3
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_Cook_ItemShop::
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookItemShop
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	buyonlymart Route116_TunnelersRestHouse_Cook_ItemMart
	return


Route116_TunnelersRestHouse_Cook_MoveShop::
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookMoveTutor
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_RESULT, 0
# 90 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	movetutormart Route116_TunnelersRestHouse_Cook_MoveTutor
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_Cook_MoveShop_2
Route116_TunnelersRestHouse_Cook_MoveShop_1:
	return

Route116_TunnelersRestHouse_Cook_MoveShop_2:
# 92 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookLearnedMove
	goto Route116_TunnelersRestHouse_Cook_MoveShop_1


Route116_TunnelersRestHouse_Cook_SellItems::
# 98 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookSellItems
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	itemseller
	return


	.align 2
# 103 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_ItemMart:
# 104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_BENTO_BOX
# 105 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_UNAGI_LUNCH
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_HEAVEN_PEACH
	.2byte ITEM_NONE

	.align 2
# 109 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_MoveTutor:
# 110 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_CUT
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_STRENGTH
	.2byte ITEM_NONE

# 192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 193 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 195 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 199 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 200 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 204 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 205 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 208 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 211 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 213 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 215 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 217 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 219 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 220 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 221 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 224 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 225 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 226 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 227 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 228 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 229 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 230 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 231 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 232 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 233 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 235 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 236 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 237 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 238 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 239 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 240 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 241 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 242 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That RUSTURF TUNNEL there…\p"
# 243 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 245 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 246 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 247 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 248 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 249 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 251 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 252 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 254 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 255 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 256 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 257 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 258 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 259 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 260 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 261 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 262 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 265 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 266 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 267 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 268 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 269 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 270 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 271 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 272 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 118 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Cook::
# 122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Cook$"

Route116_TunnelersRestHouse_Text_Player::
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_BuyItems::
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Buy Items$"

Route116_TunnelersRestHouse_Text_TeachMoves::
# 134 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_Text_SellItems::
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sell Items$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 146 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 150 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 160 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_CookTalk::
# 168 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I have no idea why these people have\n"
	.string "brought me here specifically.\p"
	.string "I will say though, I do have some nice\n"
	.string "stuff for sale if you want.$"

Route116_TunnelersRestHouse_Text_CookTalkAgain::
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There are more stuff I have if you want.$"

Route116_TunnelersRestHouse_Text_CookItemShop::
# 176 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Take a look at my delicacies if you want\n"
	.string "to buy some.$"

Route116_TunnelersRestHouse_Text_CookMoveTutor::
# 180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "My lessons come at a fee, just so you're\n"
	.string "aware.$"

Route116_TunnelersRestHouse_Text_CookSellItems::
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see what you have\n"
	.string "available.$"

Route116_TunnelersRestHouse_Text_CookLearnedMove::
# 188 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Your Puppet has learned the move I\n"
	.string "taught successfully.\n"
	.string "I will be taking my fee for this service\l"
	.string "here now.$"
