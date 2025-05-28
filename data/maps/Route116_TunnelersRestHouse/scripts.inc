Route116_TunnelersRestHouse_EventScript_GigiFunEvent::
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceDown
# 41 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinIntro, MSGBOX_DEFAULT
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_NUE, Common_Movement_WalkInPlaceDown
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_HakosBaelzIntro, MSGBOX_DEFAULT
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceDown
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiOutOfBudget, MSGBOX_DEFAULT
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Player
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_RenkoFrickinTalking, MSGBOX_DEFAULT
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_NueBogosBinted::
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_NUE, Common_Movement_WalkInPlaceLeft
# 66 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 68 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceRight
# 71 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 73 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 74 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted, MSGBOX_DEFAULT
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_NUE, Common_Movement_WalkInPlaceLeft
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 81 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceRight
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted, MSGBOX_DEFAULT
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_NUE, Common_Movement_WalkInPlaceLeft
# 90 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 92 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 93 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 94 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceRight
# 95 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 97 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 0
# 98 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinLaugh, MSGBOX_DEFAULT
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_InaFunEvent::
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 107 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 108 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_INA, Common_Movement_WalkInPlaceDown
# 109 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaWah
# 112 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_NUE, Common_Movement_WalkInPlaceDown
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 116 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzNoMugshots
# 117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 118 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_INA, Common_Movement_WalkInPlaceRight
# 119 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaAdmit
# 122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 123 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_NUE, Common_Movement_WalkInPlaceDown
# 124 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzCheerUp
# 127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceDown
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiCookie
# 132 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_INA, Common_Movement_WalkInPlaceRight
# 134 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 136 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaThankYou
# 137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_REST_HOUSE_GIGI, Common_Movement_WalkInPlaceDown
# 139 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiLavaridge
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 148 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 149 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 150 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 153 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 156 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 151 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 152 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 157 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 158 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_UFOTrader::
# 164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 165 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 166 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 167 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderIntro
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_4
Route116_TunnelersRestHouse_EventScript_UFOTrader_1:
# 171 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_UFOTrader_9:
# 174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice
# 175 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTrader_12
# 178 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTrader_16
# 181 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTrader_17
# 183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTrader_18
# 185 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTrader_19
Route116_TunnelersRestHouse_EventScript_UFOTrader_14:
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_23
Route116_TunnelersRestHouse_EventScript_UFOTrader_20:
# 191 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_9

Route116_TunnelersRestHouse_EventScript_UFOTrader_2:
# 169 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNoUFOs
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_1

Route116_TunnelersRestHouse_EventScript_UFOTrader_3:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_2
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_1

Route116_TunnelersRestHouse_EventScript_UFOTrader_4:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_3
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_1

Route116_TunnelersRestHouse_EventScript_UFOTrader_8:
# 194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderOutro
# 195 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_UFOTrader_12:
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_8

Route116_TunnelersRestHouse_EventScript_UFOTrader_16:
# 180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_17:
# 182 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_18:
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_19:
# 186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_21:
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_8

Route116_TunnelersRestHouse_EventScript_UFOTrader_22:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_21
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_20

Route116_TunnelersRestHouse_EventScript_UFOTrader_23:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_22
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_20


Route116_TunnelersRestHouse_EventScript_UFOTraderNoUFOs::
# 200 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderNoUFOs
# 201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice::
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_2
Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_1:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_5
Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_4:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_8
Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_7:
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_11
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_11
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_11
Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_10:
# 218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 219 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_2:
# 207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_1

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_5:
# 210 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_4

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_8:
# 213 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_7

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_11:
# 216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_ExchangeUFOs, 3
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_10


Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO::
# 224 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderGreenUFO
# 225 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 226 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceGreen
# 227 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2
# 230 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_GREEN_UFO
# 231 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6
# 234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7
# 247 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4:
# 261 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 262 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6:
# 233 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7:
# 235 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL
# 236 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 237 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10
# 240 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_PEARL
# 241 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15:
# 244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 245 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 246 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8:
# 248 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_TOHO_ORB, 5
# 249 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13
# 253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_TOHO_ORB, 5
# 254 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18:
# 257 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 258 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 259 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_TOHO_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16:
# 242 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19:
# 255 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18


Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace::
# 269 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderNotEnoughSpace
	return


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceGreen::
# 274 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Worsen1IV, 0
# 275 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Pearl, 1
# 276 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TohoOrbs, 2
# 277 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat::
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_HP3, STAT_HP
# 284 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Attack3, STAT_ATK
# 285 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Defense3, STAT_DEF
# 286 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Speed2, STAT_SPEED
# 287 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpAtk3, STAT_SPATK
# 288 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpDef3, STAT_SPDEF
# 289 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, NUM_STATS
# 290 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, STAT_HP, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV::
# 295 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 296 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 297 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 298 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2
# 301 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 302 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4:
# 305 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 306 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 307 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 308 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8
# 311 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12
# 322 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13
# 332 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15
# 352 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16
# 362 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10:
# 373 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderWorsenSpecificStat
# 374 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 375 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 376 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 377 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5:
# 303 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12:
# 313 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPWorse, MSGBOX_YESNO
# 314 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_19
# 317 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_HP, VAR_0x8004
# 318 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36:
# 321 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13:
# 323 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse, MSGBOX_YESNO
# 324 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_22
# 327 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_ATK, VAR_0x8004
# 328 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39:
# 331 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14:
# 333 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse, MSGBOX_YESNO
# 334 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_25
# 337 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_DEF, VAR_0x8004
# 338 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42:
# 341 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15:
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse, MSGBOX_YESNO
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_28
# 347 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_SPEED, VAR_0x8004
# 348 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45:
# 351 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16:
# 353 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse, MSGBOX_YESNO
# 354 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_31
# 357 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_SPATK, VAR_0x8004
# 358 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48:
# 361 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17:
# 363 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse, MSGBOX_YESNO
# 364 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_34
# 367 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_SPDEF, VAR_0x8004
# 368 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51:
# 371 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPDEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_19:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_22:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_25:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_28:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_31:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_34:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_37:
# 319 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40:
# 329 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43:
# 339 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46:
# 349 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49:
# 359 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52:
# 369 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat::
# 382 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAlreadyIdealStat
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO::
# 387 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderRedUFO
# 388 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 389 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceRed
# 390 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2
# 393 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_RED_UFO
# 394 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 395 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 396 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 409 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 410 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 412 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8
# 425 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 5, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4:
# 439 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 440 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 441 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 442 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6:
# 397 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_CAPSULE
# 398 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 399 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11
# 402 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_ABILITY_CAPSULE
# 403 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19:
# 406 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 407 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 408 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7:
# 411 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8:
# 413 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BIG_PEARL
# 414 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 415 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14
# 418 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_BIG_PEARL
# 419 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22:
# 422 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 423 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 424 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_BIG_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9:
# 426 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREAT_ORB, 5
# 427 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 428 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17
# 431 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_GREAT_ORB, 5
# 432 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25:
# 435 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 436 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 437 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GREAT_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20:
# 404 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23:
# 420 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26:
# 433 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceRed::
# 447 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_EvoHeart, 0
# 448 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_AbilityCapsule, 1
# 449 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_NatureMint, 2
# 450 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Perfect1IV, 3
# 451 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BigPearl, 4
# 452 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreatOrbs, 5
# 453 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 6
# 454 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV::
# 459 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 460 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 461 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 462 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2
# 465 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 466 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4:
# 469 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 470 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 471 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 472 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8
# 475 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 476 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12
# 486 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13
# 496 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14
# 506 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15
# 516 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16
# 526 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10:
# 537 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderPerfectSpecificStat
# 538 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 539 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 540 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 541 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5:
# 467 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12:
# 477 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect, MSGBOX_YESNO
# 478 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_19
# 481 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 482 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36:
# 485 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13:
# 487 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect, MSGBOX_YESNO
# 488 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_22
# 491 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 492 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39:
# 495 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14:
# 497 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect, MSGBOX_YESNO
# 498 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_25
# 501 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 502 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42:
# 505 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15:
# 507 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect, MSGBOX_YESNO
# 508 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_28
# 511 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 512 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45:
# 515 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16:
# 517 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect, MSGBOX_YESNO
# 518 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_31
# 521 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 522 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48:
# 525 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17:
# 527 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect, MSGBOX_YESNO
# 528 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_34
# 531 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 532 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51:
# 535 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_19:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_22:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_25:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_28:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_31:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_34:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_37:
# 483 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40:
# 493 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43:
# 503 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46:
# 513 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49:
# 523 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52:
# 533 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO::
# 546 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderBlueUFO
# 547 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 548 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceBlue
# 549 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2
# 552 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_BLUE_UFO
# 553 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 554 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6
# 556 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7
# 569 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8
# 570 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8
# 583 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4:
# 597 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 598 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 599 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 600 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6:
# 555 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7:
# 557 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_PATCH
# 558 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 559 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_11
# 562 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_ABILITY_PATCH
# 563 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_19:
# 566 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 567 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 568 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8:
# 571 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL_STRING
# 572 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 573 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_14
# 576 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_PEARL_STRING
# 577 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_22:
# 580 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 581 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 582 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL_STRING
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9:
# 584 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_ULTRA_ORB, 5
# 585 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 586 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_17
# 589 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_ULTRA_ORB, 5
# 590 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_25:
# 593 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 594 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 595 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ULTRA_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_11:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20:
# 564 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23:
# 578 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26:
# 591 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_25


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceBlue::
# 605 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TeachMoves, 0
# 606 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_AbilityPatch, 1
# 607 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_PerfectAllIVs, 2
# 608 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_PearlString, 3
# 609 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_UltraOrbs, 4
# 610 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 5
# 611 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderTutor::
# 616 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderShouldTeach
# 617 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 618 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_AnyLevelUp, 0
# 619 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_EggMoves, 1
# 620 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 621 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 622 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2
# 625 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 626 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6
# 629 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4:
# 633 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9
# 636 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 637 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 638 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 639 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12
# 642 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 643 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_14:
# 646 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_17:
# 649 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 650 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 651 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21
# 654 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTaughtMove
# 655 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 656 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 657 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 658 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6:
# 627 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_REMINDER_LEARN_ALL_MOVES
# 628 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTeachAnyMove, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7:
# 630 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_TUTOR_EGG_MOVES
# 631 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTeachEggMove, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15:
# 644 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_14

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18:
# 647 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderCantTeachPuppet
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_17

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21:
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderCantTeachPuppet::
# 663 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderCantTeach
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg::
# 668 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderShowEgg
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO::
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_3
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1:
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_8
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6:
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_13
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11:
# 682 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderExchangeLook
# 683 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_17
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_16:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_19:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_22:
# 693 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 694 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 695 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_26
# 698 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 699 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_30
# 701 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_31
# 703 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_32
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2:
# 674 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_3:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7:
# 677 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_8:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12:
# 680 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_13:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_17:
# 685 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_16

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_20:
# 688 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_23:
# 691 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_26:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_30:
# 700 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_31:
# 702 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_32:
# 704 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO::
# 710 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderRedUFOFor2GreenUFOs, MSGBOX_YESNO
# 711 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2
# 714 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_RED_UFO
# 715 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4:
# 718 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 719 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 720 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 721 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO
# 722 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO, 2
# 723 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREEN_UFO, 2
# 724 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 725 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5:
# 716 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO::
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO::
# 734 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTrader2RedUFOsForBlueUFO, MSGBOX_YESNO
# 735 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2
# 738 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_RED_UFO, 2
# 739 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4:
# 742 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_RED_UFO, 2
# 743 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 744 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 745 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO, 2
# 746 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 747 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 748 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 749 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5:
# 740 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4


# 1145 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 1146 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1147 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1148 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1151 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 1152 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1153 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1157 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 1158 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1159 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1160 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1161 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1165 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 1166 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 1167 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 1168 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1169 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 1170 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 1171 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1173 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 1174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 1175 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1176 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1177 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 1178 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 1179 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1181 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 1182 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 1183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 1184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 1185 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 1186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1187 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1188 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1189 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 1190 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 1191 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1193 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 1195 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That RUSTURF TUNNEL there…\p"
# 1196 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 1197 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 1198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 1199 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 1200 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 1201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 1202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 1203 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 1204 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1205 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 1206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 1207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 1208 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 1209 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 1210 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 1211 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 1212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 1213 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 1214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1215 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 1216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 1217 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 1218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 1219 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 1220 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1221 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 1222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 1223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 1224 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 1225 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 753 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 757 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Ina::
# 761 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ina$"

Route116_TunnelersRestHouse_Text_Cook::
# 765 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Cook$"

Route116_TunnelersRestHouse_Text_Player::
# 769 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_BuyItems::
# 773 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Buy Items$"

Route116_TunnelersRestHouse_Text_TeachMoves::
# 777 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_Text_SellItems::
# 781 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sell Items$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 785 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GreenUFO::
# 789 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Green UFO$"

Route116_TunnelersRestHouse_Text_RedUFO::
# 793 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Red UFO$"

Route116_TunnelersRestHouse_Text_BlueUFO::
# 797 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Blue UFO$"

Route116_TunnelersRestHouse_Text_ExchangeUFOs::
# 801 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Exchange UFOs$"

Route116_TunnelersRestHouse_Text_UFOTrader::
# 805 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "UFO Trader$"

Route116_TunnelersRestHouse_Text_Worsen1IV::
# 809 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Worsen 1 IV$"

Route116_TunnelersRestHouse_Text_Pearl::
# 813 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl$"

Route116_TunnelersRestHouse_Text_TohoOrbs::
# 817 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Toho Orbs$"

Route116_TunnelersRestHouse_Text_EvoHeart::
# 821 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Evo Heart$"

Route116_TunnelersRestHouse_Text_AbilityCapsule::
# 825 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Capsule$"

Route116_TunnelersRestHouse_Text_NatureMint::
# 829 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nature Mint$"

Route116_TunnelersRestHouse_Text_Perfect1IV::
# 833 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect 1 IV$"

Route116_TunnelersRestHouse_Text_BigPearl::
# 837 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Big Pearl$"

Route116_TunnelersRestHouse_Text_GreatOrbs::
# 841 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Great Orbs$"

Route116_TunnelersRestHouse_Text_AbilityPatch::
# 845 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Patch$"

Route116_TunnelersRestHouse_Text_PerfectAllIVs::
# 849 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect All IVs$"

Route116_TunnelersRestHouse_Text_PearlString::
# 853 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl String$"

Route116_TunnelersRestHouse_Text_UltraOrbs::
# 857 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Ultra Orbs$"

Route116_TunnelersRestHouse_Text_AnyLevelUp::
# 861 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Any Level-Up$"

Route116_TunnelersRestHouse_Text_EggMoves::
# 865 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Egg Moves$"

Route116_TunnelersRestHouse_Text_UFOTraderIntro::
# 869 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hey, the name's UFO Trader here!\p"
	.string "I just love collecting UFOs, but I can\n"
	.string "never seem to get enough of them.\p"
	.string "I'll do anything reasonable for me to\n"
	.string "get those UFOs.\p"
	.string "Whether you want items or for me to use\n"
	.string "one of my skills, I'll do it for those\l"
	.string "UFOs!$"

Route116_TunnelersRestHouse_Text_UFOTraderNoUFOs::
# 874 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I don't sense any UFOs with you\n"
	.string "right now.\p"
	.string "Do let me know when you get some\n"
	.string "though, I'll do some skills to get some.$"

Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs::
# 878 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "You seem to have some UFOs with you\n"
	.string "right now.\p"
	.string "You mind letting me have a look at them?$"

Route116_TunnelersRestHouse_Text_UFOTraderGreenUFO::
# 882 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That's a nice-looking Green UFO there.\p"
	.string "I can give you these for the Green UFO.$"

Route116_TunnelersRestHouse_Text_UFOTraderRedUFO::
# 886 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That is a very good-looking Red UFO in\n"
	.string "your hands.\p"
	.string "I can give you these for the Red UFO.$"

Route116_TunnelersRestHouse_Text_UFOTraderBlueUFO::
# 890 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Oh my, that is a beautiful Blue UFO that\n"
	.string "you have, I must have it myself.\p"
	.string "I can give you these for the Blue UFO.$"

Route116_TunnelersRestHouse_Text_UFOTraderOutro::
# 894 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Well, if you have any UFOs, know I am the\n"
	.string "guy who will take them for whatever you\l"
	.string "want.$"

Route116_TunnelersRestHouse_Text_UFOTraderNotEnoughSpace::
# 898 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, you don't seem to have enough\n"
	.string "space for the exchange of the UFO\l"
	.string "there.\p"
	.string "Sorry, I wanna be fair to you at least.$"

Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY::
# 902 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So you want the {STR_VAR_1}\n"
	.string "for a {STR_VAR_2}?$"

Route116_TunnelersRestHouse_Text_UFOTraderGiveItem::
# 906 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, here's your\n"
	.string "{STR_VAR_1}.$"

Route116_TunnelersRestHouse_Text_TakeUfo::
# 910 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I'll take the {STR_VAR_1} then,\n"
	.string "thank you very much.$"

Route116_TunnelersRestHouse_Text_UFOTraderShouldTeach::
# 914 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "What type of moves should I teach\n"
	.string "then?$"

Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify::
# 918 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, which stat should I modify?$"

Route116_TunnelersRestHouse_Text_UFOTraderHPWorse::
# 922 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the HP IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse::
# 926 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Attack IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse::
# 930 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Defense IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse::
# 934 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Speed IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse::
# 938 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Atk IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse::
# 942 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect::
# 946 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the HP IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect::
# 950 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Attack IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect::
# 954 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Defense IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect::
# 958 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Speed IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect::
# 962 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Atk IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect::
# 966 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderWorsenSpecificStat::
# 970 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me just try and worsen this\n"
	.string "IV here.\p"
	.string "And there, your Puppet now has the\n"
	.string "lowest potential for that stat there.$"

Route116_TunnelersRestHouse_Text_UFOTraderPerfectSpecificStat::
# 974 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me just try and perfect\n"
	.string "this IV here.\p"
	.string "And there, your Puppet now has\n"
	.string "perfected their potential!$"

Route116_TunnelersRestHouse_Text_UFOTraderAlreadyIdealStat::
# 978 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, this Puppet already has the ideal\n"
	.string "stat you want.\p"
	.string "Hey, at least you don't have to waste\n"
	.string "one of your UFOs there.$"

Route116_TunnelersRestHouse_Text_UFOTraderTeachAnyMove::
# 982 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So you want me to teach a Puppet any\n"
	.string "move it naturally learns?$"

Route116_TunnelersRestHouse_Text_UFOTraderTeachEggMove::
# 986 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So you want me to teach a Puppet an egg\n"
	.string "move?$"

Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet::
# 990 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see the Puppet in\n"
	.string "question.$"

Route116_TunnelersRestHouse_Text_UFOTraderTryTeachMove::
# 994 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So which move should I teach the\n"
	.string "Puppet then?$"

Route116_TunnelersRestHouse_Text_UFOTraderTaughtMove::
# 998 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "And there, the move is now taught to\n"
	.string "your Puppet!$"

Route116_TunnelersRestHouse_Text_UFOTraderShowEgg::
# 1002 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That's an egg. It hasn't even hatched\n"
	.string "for me to be able to teach any moves at\l"
	.string "all!$"

Route116_TunnelersRestHouse_Text_UFOTraderCantTeach::
# 1006 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, this Puppet doesn't have any moves\n"
	.string "I can teach of this specific kind.\p"
	.string "Sorry, I wanna be fair with getting your\n"
	.string "UFOs at least.$"

Route116_TunnelersRestHouse_Text_UFOTraderExchangeLook::
# 1010 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, which type of UFO are you going to\n"
	.string "exchange exactly?$"

Route116_TunnelersRestHouse_Text_UFOTraderRedUFOFor2GreenUFOs::
# 1014 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I can give you a single Red UFO for 2\n"
	.string "Green UFOs then.$"

Route116_TunnelersRestHouse_Text_UFOTrader2RedUFOsForBlueUFO::
# 1018 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I can give you 2 Red UFOs for a single\n"
	.string "Blue UFO then.$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 1022 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 1026 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 1031 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 1036 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 1040 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 1044 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 1050 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 1056 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 1060 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 1066 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_InaWah::
# 1071 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wah!\n"
	.string "Hello there, {PLAYER}.\p"
	.string "My name is Ina and I'm just visiting my\n"
	.string "friends here, Gigi and Bae.$"

Route116_TunnelersRestHouse_Text_BaelzNoMugshots::
# 1076 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Yo Ina, look at this nice mugshot I got\n"
	.string "here!\p"
	.string "Looks pretty nice, doesn't it?$"

Route116_TunnelersRestHouse_Text_InaAdmit::
# 1081 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "I'll admit, it looks pretty nice,\n"
	.string "especially for you, Bae.\p"
	.string "Too bad I don't have one though.\p"
	.string "I don't have enough in me to make one\n"
	.string "right now.$"

Route116_TunnelersRestHouse_Text_BaelzCheerUp::
# 1088 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Hey, cheer up, Ina.\p"
	.string "You'll get one eventually as well, I'm\n"
	.string "sure of it.$"

Route116_TunnelersRestHouse_Text_GigiCookie::
# 1093 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah, Ina, I have some cookies for\n"
	.string "you, by the way.\p"
	.string "Maybe this will cheer you up as well.$"

Route116_TunnelersRestHouse_Text_InaThankYou::
# 1098 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Thank you both.\p"
	.string "I appreciate it, you guys looking after\n"
	.string "me as well.\p"
	.string "What kind of cookie is it exactly\n"
	.string "anyways, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiLavaridge::
# 1104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}I found these near Lavaridge, where\n"
	.string "someone called Mokou was giving them\l"
	.string "away.\p"
	.string "Dunno why exactly, but I was nearby and\n"
	.string "she was giving them away, so I took a\l"
	.string "decent amount and I still have some\l"
	.string "left over.$"

Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted::
# 1109 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Boat goes Binted?$"

Route116_TunnelersRestHouse_Text_GigiMurinLaugh::
# 1113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}HAHAHAHAHAHA!!$"

Route116_TunnelersRestHouse_Text_NueBogosBinted::
# 1117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nuuu-e?$"

Route116_TunnelersRestHouse_Text_CookTalk::
# 1121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I have no idea why these people have\n"
	.string "brought me here specifically.\p"
	.string "I will say though, I do have some nice\n"
	.string "stuff for sale if you want.$"

Route116_TunnelersRestHouse_Text_CookTalkAgain::
# 1125 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There are more stuff I have if you want.$"

Route116_TunnelersRestHouse_Text_CookItemShop::
# 1129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Take a look at my delicacies if you want\n"
	.string "to buy some.$"

Route116_TunnelersRestHouse_Text_CookMoveTutor::
# 1133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "My lessons come at a fee, just so you're\n"
	.string "aware.$"

Route116_TunnelersRestHouse_Text_CookSellItems::
# 1137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see what you have\n"
	.string "available.$"

Route116_TunnelersRestHouse_Text_CookLearnedMove::
# 1141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Your Puppet has learned the move I\n"
	.string "taught successfully.\n"
	.string "I will be taking my fee for this service\l"
	.string "here now.$"
