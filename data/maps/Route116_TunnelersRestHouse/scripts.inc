Route116_TunnelersRestHouse_EventScript_BaelzFunEvent::
# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzInvested
# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiBoughtIn
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzWhat
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 30 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 31 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiDefense
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzHuh
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_GigiFunEvent::
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinIntro, MSGBOX_DEFAULT
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_HakosBaelzIntro, MSGBOX_DEFAULT
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiOutOfBudget, MSGBOX_DEFAULT
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Player
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_RenkoFrickinTalking, MSGBOX_DEFAULT
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_NueBogosBinted::
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 71 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 72 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 73 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 81 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted, MSGBOX_DEFAULT
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 84 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 90 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 92 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 93 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted, MSGBOX_DEFAULT
# 94 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 95 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 96 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 97 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 102 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 0
# 105 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinLaugh, MSGBOX_DEFAULT
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 107 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 108 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_InaFunEvent::
# 113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 115 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 116 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 118 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaWah
# 119 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 123 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzNoMugshots
# 124 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 125 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaAdmit
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzCheerUp
# 134 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 135 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 136 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiCookie
# 139 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 140 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaThankYou
# 144 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 145 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 146 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 148 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiLavaridge
# 149 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 150 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 156 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 160 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 163 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 158 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 159 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 161 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 162 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 165 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_Cook::
# 171 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 173 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Cook
# 174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalk
# 175 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_Cook_2:
# 177 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_PrepareMultichoice
# 178 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_Cook_5
# 181 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_Cook_9
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_Cook_10
# 186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_Cook_11
Route116_TunnelersRestHouse_EventScript_Cook_7:
# 189 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_CookTalkAgain
# 190 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_Cook_2

Route116_TunnelersRestHouse_EventScript_Cook_1:
# 192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_Cook_5:
	goto Route116_TunnelersRestHouse_EventScript_Cook_1

Route116_TunnelersRestHouse_EventScript_Cook_9:
# 183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_ItemShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_10:
# 185 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_MoveShop
	goto Route116_TunnelersRestHouse_EventScript_Cook_7

Route116_TunnelersRestHouse_EventScript_Cook_11:
# 187 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_Cook_SellItems
	goto Route116_TunnelersRestHouse_EventScript_Cook_7


Route116_TunnelersRestHouse_Cook_PrepareMultichoice::
# 197 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BuyItems, 0
# 198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TeachMoves, 1
# 199 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_SellItems, 2
# 200 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 3
# 201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_Cook_ItemShop::
# 206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookItemShop
# 207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	buyonlymart Route116_TunnelersRestHouse_Cook_ItemMart
	return


Route116_TunnelersRestHouse_Cook_MoveShop::
# 212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookMoveTutor
# 213 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_RESULT, 0
# 214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	movetutormart Route116_TunnelersRestHouse_Cook_MoveTutor
# 215 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_Cook_MoveShop_2
Route116_TunnelersRestHouse_Cook_MoveShop_1:
	return

Route116_TunnelersRestHouse_Cook_MoveShop_2:
# 216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookLearnedMove
	goto Route116_TunnelersRestHouse_Cook_MoveShop_1


Route116_TunnelersRestHouse_Cook_SellItems::
# 222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_CookSellItems
# 223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	itemseller
	return


	.align 2
# 227 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_ItemMart:
# 228 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_BENTO_BOX
# 229 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_UNAGI_LUNCH
# 230 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte ITEM_HEAVEN_PEACH
	.2byte ITEM_NONE

	.align 2
# 233 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Cook_MoveTutor:
# 234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_CUT
# 235 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.2byte MOVE_STRENGTH
	.2byte ITEM_NONE

# 397 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 398 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 399 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 400 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 403 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 404 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 405 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 406 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 409 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 410 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 411 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 412 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 413 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 416 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 417 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 418 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 419 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 420 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 421 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 422 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 423 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 424 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 425 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 426 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 427 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 428 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 429 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 430 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 431 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 432 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 433 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 434 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 435 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 436 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 437 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 438 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 439 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 440 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 441 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 442 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 443 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 444 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 445 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 446 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 447 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That Noiseturf Tunnel there…\p"
# 448 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 449 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 450 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 451 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 452 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 453 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 454 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 455 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 456 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 457 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 458 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 459 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 460 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 461 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 462 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 463 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 464 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 465 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 466 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 467 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 468 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 469 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 470 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 471 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 472 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 473 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 474 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 475 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 476 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 477 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 238 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 242 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Ina::
# 246 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ina$"

Route116_TunnelersRestHouse_Text_Cook::
# 250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Cook$"

Route116_TunnelersRestHouse_Text_Player::
# 254 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_BuyItems::
# 258 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Buy Items$"

Route116_TunnelersRestHouse_Text_TeachMoves::
# 262 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_Text_SellItems::
# 266 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sell Items$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 270 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 274 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 288 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 292 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 296 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 302 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 308 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 312 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 318 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_InaWah::
# 323 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wah!\n"
	.string "Hello there, {PLAYER}.\p"
	.string "My name is Ina and I'm just visiting my\n"
	.string "friends here, Gigi and Bae.$"

Route116_TunnelersRestHouse_Text_BaelzNoMugshots::
# 328 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Yo Ina, look at this nice mugshot I got\n"
	.string "here!\p"
	.string "Looks pretty nice, doesn't it?$"

Route116_TunnelersRestHouse_Text_InaAdmit::
# 333 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "I'll admit, it looks pretty nice,\n"
	.string "especially for you, Bae.\p"
	.string "Too bad I don't have one though.\p"
	.string "I don't have enough in me to make one\n"
	.string "right now.$"

Route116_TunnelersRestHouse_Text_BaelzCheerUp::
# 340 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Hey, cheer up, Ina.\p"
	.string "You'll get one eventually as well, I'm\n"
	.string "sure of it.$"

Route116_TunnelersRestHouse_Text_GigiCookie::
# 345 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah, Ina, I have some cookies for\n"
	.string "you, by the way.\p"
	.string "Maybe this will cheer you up as well.$"

Route116_TunnelersRestHouse_Text_InaThankYou::
# 350 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Thank you both.\p"
	.string "I appreciate it, you guys looking after\n"
	.string "me as well.\p"
	.string "What kind of cookie is it exactly\n"
	.string "anyways, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiLavaridge::
# 356 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}I found these near Lavaridge, where\n"
	.string "someone called Mokou was giving them\l"
	.string "away.\p"
	.string "Dunno why exactly, but I was nearby and\n"
	.string "she was giving them away, so I took a\l"
	.string "decent amount and I still have some\l"
	.string "left over.$"

Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted::
# 361 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Boat goes Binted?$"

Route116_TunnelersRestHouse_Text_GigiMurinLaugh::
# 365 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}HAHAHAHAHAHA!!$"

Route116_TunnelersRestHouse_Text_NueBogosBinted::
# 369 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nuuu-e?$"

Route116_TunnelersRestHouse_Text_CookTalk::
# 373 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I have no idea why these people have\n"
	.string "brought me here specifically.\p"
	.string "I will say though, I do have some nice\n"
	.string "stuff for sale if you want.$"

Route116_TunnelersRestHouse_Text_CookTalkAgain::
# 377 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There are more stuff I have if you want.$"

Route116_TunnelersRestHouse_Text_CookItemShop::
# 381 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Take a look at my delicacies if you want\n"
	.string "to buy some.$"

Route116_TunnelersRestHouse_Text_CookMoveTutor::
# 385 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "My lessons come at a fee, just so you're\n"
	.string "aware.$"

Route116_TunnelersRestHouse_Text_CookSellItems::
# 389 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see what you have\n"
	.string "available.$"

Route116_TunnelersRestHouse_Text_CookLearnedMove::
# 393 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Your Puppet has learned the move I\n"
	.string "taught successfully.\n"
	.string "I will be taking my fee for this service\l"
	.string "here now.$"
