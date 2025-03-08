Route116_TunnelersRestHouse_EventScript_BaelzFunEvent::
# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzInvested
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiBoughtIn
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzWhat
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiDefense
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 66 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 68 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzHuh
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_GigiFunEvent::
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinIntro, MSGBOX_DEFAULT
# 81 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_HakosBaelzIntro, MSGBOX_DEFAULT
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 90 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiOutOfBudget, MSGBOX_DEFAULT
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 92 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Player
# 93 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_RenkoFrickinTalking, MSGBOX_DEFAULT
# 94 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 95 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_NueBogosBinted::
# 100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 102 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 103 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 105 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 107 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 108 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 110 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted, MSGBOX_DEFAULT
# 112 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 115 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 118 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 119 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 123 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted, MSGBOX_DEFAULT
# 124 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 125 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playmoncry SPECIES_CHIBI_NUE, CRY_MODE_NORMAL
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_NueBogosBinted, MSGBOX_DEFAULT
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 132 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername gText_Gigi
# 134 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 0
# 135 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiMurinLaugh, MSGBOX_DEFAULT
# 136 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmoncry
# 137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_InaFunEvent::
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 144 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_MovePlayerInFront
# 145 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 146 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 148 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaWah
# 149 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 150 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 151 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 153 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzNoMugshots
# 154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 156 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 158 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaAdmit
# 159 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 160 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 161 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Baelz
# 163 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_BaelzCheerUp
# 164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 165 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 166 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 168 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiCookie
# 169 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 170 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 171 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Ina
# 173 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_InaThankYou
# 174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 175 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 176 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_Gigi
# 178 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GigiLavaridge
# 179 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	closemessage
# 180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 185 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 190 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 193 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 188 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 189 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 191 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 195 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_UFOTrader::
# 201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 203 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 204 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderIntro
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_4
Route116_TunnelersRestHouse_EventScript_UFOTrader_1:
# 208 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 209 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_UFOTrader_9:
# 211 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice
# 212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTrader_12
# 215 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTrader_16
# 218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTrader_17
# 220 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTrader_18
# 222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTrader_19
Route116_TunnelersRestHouse_EventScript_UFOTrader_14:
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_23
Route116_TunnelersRestHouse_EventScript_UFOTrader_20:
# 228 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 229 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_9

Route116_TunnelersRestHouse_EventScript_UFOTrader_2:
# 206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 231 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderOutro
# 232 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_UFOTrader_12:
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_8

Route116_TunnelersRestHouse_EventScript_UFOTrader_16:
# 217 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_17:
# 219 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_18:
# 221 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_19:
# 223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 237 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderNoUFOs
# 238 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 255 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 256 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_2:
# 244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_1

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_5:
# 247 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_4

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_8:
# 250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_7

Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_11:
# 253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_ExchangeUFOs, 3
	goto Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoice_10


Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO::
# 261 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderGreenUFO
# 262 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceGreen
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2
# 267 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_GREEN_UFO
# 268 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 269 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6
# 271 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7
# 284 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4:
# 298 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 299 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 300 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 301 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6:
# 270 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7:
# 272 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL
# 273 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 274 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10
# 277 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_PEARL
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15:
# 281 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 282 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8:
# 285 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_TOHO_ORB, 5
# 286 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 287 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13
# 290 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_TOHO_ORB, 5
# 291 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18:
# 294 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 295 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 296 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_TOHO_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16:
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19:
# 292 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18


Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace::
# 306 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderNotEnoughSpace
	return


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceGreen::
# 311 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Worsen1IV, 0
# 312 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Pearl, 1
# 313 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TohoOrbs, 2
# 314 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 315 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat::
# 320 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_HP3, STAT_HP
# 321 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Attack3, STAT_ATK
# 322 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Defense3, STAT_DEF
# 323 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Speed2, STAT_SPEED
# 324 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpAtk3, STAT_SPATK
# 325 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpDef3, STAT_SPDEF
# 326 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, NUM_STATS
# 327 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, STAT_HP, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV::
# 332 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 333 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 334 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 335 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2
# 338 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 339 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4:
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 345 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8
# 348 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 349 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12
# 359 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13
# 369 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14
# 379 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15
# 389 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16
# 399 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10:
# 410 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTaughtMove
# 411 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 412 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 413 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 414 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5:
# 340 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12:
# 350 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPWorse, MSGBOX_YESNO
# 351 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_19
# 354 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_HP, VAR_0x8004
# 355 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36:
# 358 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13:
# 360 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse, MSGBOX_YESNO
# 361 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_22
# 364 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_ATK, VAR_0x8004
# 365 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39:
# 368 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14:
# 370 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse, MSGBOX_YESNO
# 371 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_25
# 374 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_DEF, VAR_0x8004
# 375 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42:
# 378 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15:
# 380 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse, MSGBOX_YESNO
# 381 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_28
# 384 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_SPEED, VAR_0x8004
# 385 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45:
# 388 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16:
# 390 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse, MSGBOX_YESNO
# 391 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_31
# 394 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_SPATK, VAR_0x8004
# 395 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48:
# 398 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17:
# 400 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse, MSGBOX_YESNO
# 401 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_34
# 404 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canunhypertrain STAT_SPDEF, VAR_0x8004
# 405 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51:
# 408 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 356 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40:
# 366 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43:
# 376 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46:
# 386 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49:
# 396 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52:
# 406 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat::
# 419 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAlreadyIdealStat
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO::
# 424 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderRedUFO
# 425 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 426 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceRed
# 427 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2
# 430 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_RED_UFO
# 431 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 432 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 433 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 446 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 447 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 449 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8
# 462 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 5, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4:
# 476 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 477 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 478 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 479 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6:
# 434 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_CAPSULE
# 435 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 436 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11
# 439 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_ABILITY_CAPSULE
# 440 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19:
# 443 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 444 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 445 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7:
# 448 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8:
# 450 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BIG_PEARL
# 451 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 452 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14
# 455 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_BIG_PEARL
# 456 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22:
# 459 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 460 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 461 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_BIG_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9:
# 463 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREAT_ORB, 5
# 464 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 465 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17
# 468 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_GREAT_ORB, 5
# 469 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25:
# 472 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 473 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 474 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GREAT_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20:
# 441 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23:
# 457 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26:
# 470 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceRed::
# 484 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_EvoHeart, 0
# 485 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_AbilityCapsule, 1
# 486 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_NatureMint, 2
# 487 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Perfect1IV, 3
# 488 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BigPearl, 4
# 489 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreatOrbs, 5
# 490 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 6
# 491 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV::
# 496 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 497 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 498 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 499 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2
# 502 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 503 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4:
# 506 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 507 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 508 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 509 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8
# 512 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 513 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12
# 523 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13
# 533 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14
# 543 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15
# 553 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16
# 563 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10:
# 574 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTaughtMove
# 575 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 576 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 577 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 578 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5:
# 504 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12:
# 514 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect, MSGBOX_YESNO
# 515 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_19
# 518 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 519 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36:
# 522 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13:
# 524 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect, MSGBOX_YESNO
# 525 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_22
# 528 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 529 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39:
# 532 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14:
# 534 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect, MSGBOX_YESNO
# 535 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_25
# 538 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 539 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42:
# 542 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15:
# 544 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect, MSGBOX_YESNO
# 545 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_28
# 548 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 549 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45:
# 552 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16:
# 554 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect, MSGBOX_YESNO
# 555 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_31
# 558 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 559 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48:
# 562 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17:
# 564 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect, MSGBOX_YESNO
# 565 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_34
# 568 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 569 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51:
# 572 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 520 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40:
# 530 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43:
# 540 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46:
# 550 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49:
# 560 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52:
# 570 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO::
# 583 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderBlueUFO
# 584 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 585 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceBlue
# 586 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2
# 589 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_BLUE_UFO
# 590 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 591 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6
# 593 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7
# 606 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8
# 607 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8
# 620 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4:
# 634 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 635 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 636 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 637 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6:
# 592 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7:
# 594 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_PATCH
# 595 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 596 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_11
# 599 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_ABILITY_PATCH
# 600 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_19:
# 603 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 604 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 605 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8:
# 608 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL_STRING
# 609 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 610 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_14
# 613 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_PEARL_STRING
# 614 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_22:
# 617 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 618 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 619 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL_STRING
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9:
# 621 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_ULTRA_ORB, 5
# 622 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 623 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_17
# 626 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_ULTRA_ORB, 5
# 627 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_25:
# 630 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 631 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 632 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ULTRA_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_11:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20:
# 601 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23:
# 615 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26:
# 628 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_25


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceBlue::
# 642 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_TeachMoves, 0
# 643 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_AbilityPatch, 1
# 644 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_PerfectAllIVs, 2
# 645 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_PearlString, 3
# 646 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_UltraOrbs, 4
# 647 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 5
# 648 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderTutor::
# 653 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderShouldTeach
# 654 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 655 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_AnyLevelUp, 0
# 656 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_EggMoves, 1
# 657 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 658 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 659 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2
# 662 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 663 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6
# 666 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4:
# 670 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9
# 673 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 674 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 675 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 676 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12
# 679 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 680 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_14:
# 683 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_17:
# 686 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 687 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 688 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21
# 691 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTaughtMove
# 692 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 693 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 694 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 695 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6:
# 664 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_REMINDER_LEARN_ALL_MOVES
# 665 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTeachAnyMove, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7:
# 667 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_TUTOR_EGG_MOVES
# 668 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderTeachEggMove, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15:
# 681 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_14

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18:
# 684 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderCantTeachPuppet
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_17

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21:
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderCantTeachPuppet::
# 700 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderCantTeach
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg::
# 705 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 719 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderExchangeLook
# 720 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 730 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 731 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 732 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_26
# 735 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 736 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_30
# 738 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_31
# 740 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_32
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2:
# 711 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_3:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7:
# 714 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_8:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12:
# 717 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_13:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_17:
# 722 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_16

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_20:
# 725 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_23:
# 728 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_26:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_30:
# 737 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_31:
# 739 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_32:
# 741 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO::
# 747 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderRedUFOFor2GreenUFOs, MSGBOX_YESNO
# 748 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2
# 751 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_RED_UFO
# 752 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4:
# 755 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 756 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 757 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 758 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO
# 759 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO, 2
# 760 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREEN_UFO, 2
# 761 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 762 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5:
# 753 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO::
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO::
# 771 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTrader2RedUFOsForBlueUFO, MSGBOX_YESNO
# 772 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2
# 775 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	checkitemspace ITEM_RED_UFO, 2
# 776 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4:
# 779 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_RED_UFO, 2
# 780 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 781 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 782 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO, 2
# 783 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 784 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 785 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setspeakername Route116_TunnelersRestHouse_Text_UFOTrader
# 786 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5:
# 777 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4


# 1174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 1175 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1176 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1177 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 1181 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1182 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 1187 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1188 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1189 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1190 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1193 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 1195 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 1196 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 1197 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 1199 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 1200 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 1203 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 1204 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1205 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 1207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 1208 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1209 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1210 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 1211 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 1212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 1213 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 1214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 1215 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1217 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 1219 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 1220 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1221 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1222 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 1224 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That Noiseturf Tunnel there…\p"
# 1225 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 1226 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 1227 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 1228 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 1229 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 1230 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 1231 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 1232 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 1233 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 1235 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 1236 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 1237 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 1238 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 1239 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 1240 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 1241 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 1242 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 1243 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 1245 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 1246 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 1247 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 1248 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 1249 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 1251 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 1252 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 1253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 1254 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 790 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 794 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Ina::
# 798 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ina$"

Route116_TunnelersRestHouse_Text_Cook::
# 802 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Cook$"

Route116_TunnelersRestHouse_Text_Player::
# 806 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_BuyItems::
# 810 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Buy Items$"

Route116_TunnelersRestHouse_Text_TeachMoves::
# 814 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_Text_SellItems::
# 818 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sell Items$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 822 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GreenUFO::
# 826 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Green UFO$"

Route116_TunnelersRestHouse_Text_RedUFO::
# 830 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Red UFO$"

Route116_TunnelersRestHouse_Text_BlueUFO::
# 834 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Blue UFO$"

Route116_TunnelersRestHouse_Text_ExchangeUFOs::
# 838 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Exchange UFOs$"

Route116_TunnelersRestHouse_Text_UFOTrader::
# 842 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "UFO Trader$"

Route116_TunnelersRestHouse_Text_Worsen1IV::
# 846 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Worsen 1 IV$"

Route116_TunnelersRestHouse_Text_Pearl::
# 850 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl$"

Route116_TunnelersRestHouse_Text_TohoOrbs::
# 854 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Toho Orbs$"

Route116_TunnelersRestHouse_Text_EvoHeart::
# 858 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Evo Heart$"

Route116_TunnelersRestHouse_Text_AbilityCapsule::
# 862 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Capsule$"

Route116_TunnelersRestHouse_Text_NatureMint::
# 866 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nature Mint$"

Route116_TunnelersRestHouse_Text_Perfect1IV::
# 870 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect 1 IV$"

Route116_TunnelersRestHouse_Text_BigPearl::
# 874 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Big Pearl$"

Route116_TunnelersRestHouse_Text_GreatOrbs::
# 878 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Great Orbs$"

Route116_TunnelersRestHouse_Text_AbilityPatch::
# 882 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Patch$"

Route116_TunnelersRestHouse_Text_PerfectAllIVs::
# 886 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect All IVs$"

Route116_TunnelersRestHouse_Text_PearlString::
# 890 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl String$"

Route116_TunnelersRestHouse_Text_UltraOrbs::
# 894 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Ultra Orbs$"

Route116_TunnelersRestHouse_Text_AnyLevelUp::
# 898 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Any Level-Up$"

Route116_TunnelersRestHouse_Text_EggMoves::
# 902 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Egg Moves$"

Route116_TunnelersRestHouse_Text_UFOTraderIntro::
# 906 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hey, the name's UFO Trader here!\p"
	.string "I just love collecting UFOs, but I can\n"
	.string "never seem to get enough of them.\p"
	.string "I'll do anything reasonable for me to\n"
	.string "get those UFOs.\p"
	.string "Whether you want items or for me to use\n"
	.string "one of my skills, I'll do it for those\l"
	.string "UFOs!$"

Route116_TunnelersRestHouse_Text_UFOTraderNoUFOs::
# 911 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I don't sense any UFOs with you\n"
	.string "right now.\p"
	.string "Do let me know when you get some\n"
	.string "though, I'll do some skills to get some.$"

Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs::
# 915 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "You seem to have some UFOs with you\n"
	.string "right now.\p"
	.string "You mind letting me have a look at them?$"

Route116_TunnelersRestHouse_Text_UFOTraderGreenUFO::
# 919 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That's a nice-looking Green UFO there.\p"
	.string "I can give you these for the Green UFO.$"

Route116_TunnelersRestHouse_Text_UFOTraderRedUFO::
# 923 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That is a very good-looking Red UFO in\n"
	.string "your hands.\p"
	.string "I can give you these for the Red UFO.$"

Route116_TunnelersRestHouse_Text_UFOTraderBlueUFO::
# 927 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Oh my, that is a beautiful Blue UFO that\n"
	.string "you have, I must have it myself.\p"
	.string "I can give you these for the Blue UFO.$"

Route116_TunnelersRestHouse_Text_UFOTraderOutro::
# 931 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Well, if you have any UFOs, know I am the\n"
	.string "guy who will take them for whatever you\l"
	.string "want.$"

Route116_TunnelersRestHouse_Text_UFOTraderNotEnoughSpace::
# 935 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, you don't seem to have enough\n"
	.string "space for the exchange of the UFO\l"
	.string "there.\p"
	.string "Sorry, I wanna be fair to you at least.$"

Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY::
# 939 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So you want the {STR_VAR_1}\n"
	.string "for a {STR_VAR_2}?$"

Route116_TunnelersRestHouse_Text_UFOTraderGiveItem::
# 943 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, here's your\n"
	.string "{STR_VAR_1}.$"

Route116_TunnelersRestHouse_Text_TakeUfo::
# 947 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I'll take the {STR_VAR_1} then,\n"
	.string "thank you very much.$"

Route116_TunnelersRestHouse_Text_UFOTraderShouldTeach::
# 951 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "What type of moves should I teach\n"
	.string "then?$"

Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify::
# 955 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, which stat should I modify?$"

Route116_TunnelersRestHouse_Text_UFOTraderHPWorse::
# 959 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the HP IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse::
# 963 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Attack IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse::
# 967 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Defense IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse::
# 971 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Speed IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse::
# 975 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Atk IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse::
# 979 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect::
# 983 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the HP IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect::
# 987 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Attack IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect::
# 991 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Defense IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect::
# 995 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Speed IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect::
# 999 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Atk IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect::
# 1003 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAlreadyIdealStat::
# 1007 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, this Puppet already has the ideal\n"
	.string "stat you want.\p"
	.string "Hey, at least you don't have to waste\n"
	.string "one of your UFOs there.$"

Route116_TunnelersRestHouse_Text_UFOTraderTeachAnyMove::
# 1011 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So you want me to teach a Puppet any\n"
	.string "move it naturally learns?$"

Route116_TunnelersRestHouse_Text_UFOTraderTeachEggMove::
# 1015 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So you want me to teach a Puppet an egg\n"
	.string "move?$"

Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet::
# 1019 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see the Puppet in\n"
	.string "question.$"

Route116_TunnelersRestHouse_Text_UFOTraderTryTeachMove::
# 1023 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So which move should I teach the\n"
	.string "Puppet then?$"

Route116_TunnelersRestHouse_Text_UFOTraderTaughtMove::
# 1027 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "And there, the move is now taught to\n"
	.string "your Puppet!$"

Route116_TunnelersRestHouse_Text_UFOTraderShowEgg::
# 1031 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That's an egg. It hasn't even hatched\n"
	.string "for me to be able to teach any moves at\l"
	.string "all!$"

Route116_TunnelersRestHouse_Text_UFOTraderCantTeach::
# 1035 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, this Puppet doesn't have any moves\n"
	.string "I can teach of this specific kind.\p"
	.string "Sorry, I wanna be fair with getting your\n"
	.string "UFOs at least.$"

Route116_TunnelersRestHouse_Text_UFOTraderExchangeLook::
# 1039 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, which type of UFO are you going to\n"
	.string "exchange exactly?$"

Route116_TunnelersRestHouse_Text_UFOTraderRedUFOFor2GreenUFOs::
# 1043 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I can give you a single Red UFO for 2\n"
	.string "Green UFOs then.$"

Route116_TunnelersRestHouse_Text_UFOTrader2RedUFOsForBlueUFO::
# 1047 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I can give you 2 Red UFOs for a single\n"
	.string "Blue UFO then.$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 1051 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 1055 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 1060 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 1065 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 1069 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 1073 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 1079 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 1085 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 1089 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 1095 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_InaWah::
# 1100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wah!\n"
	.string "Hello there, {PLAYER}.\p"
	.string "My name is Ina and I'm just visiting my\n"
	.string "friends here, Gigi and Bae.$"

Route116_TunnelersRestHouse_Text_BaelzNoMugshots::
# 1105 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Yo Ina, look at this nice mugshot I got\n"
	.string "here!\p"
	.string "Looks pretty nice, doesn't it?$"

Route116_TunnelersRestHouse_Text_InaAdmit::
# 1110 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "I'll admit, it looks pretty nice,\n"
	.string "especially for you, Bae.\p"
	.string "Too bad I don't have one though.\p"
	.string "I don't have enough in me to make one\n"
	.string "right now.$"

Route116_TunnelersRestHouse_Text_BaelzCheerUp::
# 1117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Hey, cheer up, Ina.\p"
	.string "You'll get one eventually as well, I'm\n"
	.string "sure of it.$"

Route116_TunnelersRestHouse_Text_GigiCookie::
# 1122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah, Ina, I have some cookies for\n"
	.string "you, by the way.\p"
	.string "Maybe this will cheer you up as well.$"

Route116_TunnelersRestHouse_Text_InaThankYou::
# 1127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Thank you both.\p"
	.string "I appreciate it, you guys looking after\n"
	.string "me as well.\p"
	.string "What kind of cookie is it exactly\n"
	.string "anyways, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiLavaridge::
# 1133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}I found these near Lavaridge, where\n"
	.string "someone called Mokou was giving them\l"
	.string "away.\p"
	.string "Dunno why exactly, but I was nearby and\n"
	.string "she was giving them away, so I took a\l"
	.string "decent amount and I still have some\l"
	.string "left over.$"

Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted::
# 1138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Boat goes Binted?$"

Route116_TunnelersRestHouse_Text_GigiMurinLaugh::
# 1142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}HAHAHAHAHAHA!!$"

Route116_TunnelersRestHouse_Text_NueBogosBinted::
# 1146 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nuuu-e?$"

Route116_TunnelersRestHouse_Text_CookTalk::
# 1150 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I have no idea why these people have\n"
	.string "brought me here specifically.\p"
	.string "I will say though, I do have some nice\n"
	.string "stuff for sale if you want.$"

Route116_TunnelersRestHouse_Text_CookTalkAgain::
# 1154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There are more stuff I have if you want.$"

Route116_TunnelersRestHouse_Text_CookItemShop::
# 1158 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Take a look at my delicacies if you want\n"
	.string "to buy some.$"

Route116_TunnelersRestHouse_Text_CookMoveTutor::
# 1162 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "My lessons come at a fee, just so you're\n"
	.string "aware.$"

Route116_TunnelersRestHouse_Text_CookSellItems::
# 1166 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Alright, let me see what you have\n"
	.string "available.$"

Route116_TunnelersRestHouse_Text_CookLearnedMove::
# 1170 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Your Puppet has learned the move I\n"
	.string "taught successfully.\n"
	.string "I will be taking my fee for this service\l"
	.string "here now.$"
