Route116_TunnelersRestHouse_EventScript_GigiFunEvent::
# 42 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_NueBogosBinted::
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_InaFunEvent::
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 68 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 66 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 67 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_UFOTrader::
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderIntro
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_4
Route116_TunnelersRestHouse_EventScript_UFOTrader_1:
# 84 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
Route116_TunnelersRestHouse_EventScript_UFOTrader_9:
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTrader_12
Route116_TunnelersRestHouse_EventScript_UFOTrader_11:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTrader_15
Route116_TunnelersRestHouse_EventScript_UFOTrader_14:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTrader_18
Route116_TunnelersRestHouse_EventScript_UFOTrader_17:
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTrader_21
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTrader_21
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTrader_21
Route116_TunnelersRestHouse_EventScript_UFOTrader_20:
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 100 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTrader_28
# 104 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTrader_32
# 107 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTrader_33
# 109 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTrader_34
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTrader_35
Route116_TunnelersRestHouse_EventScript_UFOTrader_30:
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_39
Route116_TunnelersRestHouse_EventScript_UFOTrader_36:
# 117 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 118 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_9

Route116_TunnelersRestHouse_EventScript_UFOTrader_2:
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_0
# 81 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_UFOTrader_3:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_2
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_1

Route116_TunnelersRestHouse_EventScript_UFOTrader_4:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_3
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_1

Route116_TunnelersRestHouse_EventScript_UFOTrader_8:
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_2
# 121 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_UFOTrader_12:
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_11

Route116_TunnelersRestHouse_EventScript_UFOTrader_15:
# 91 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_18:
# 94 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_17

Route116_TunnelersRestHouse_EventScript_UFOTrader_21:
# 97 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_1, 3
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_20

Route116_TunnelersRestHouse_EventScript_UFOTrader_28:
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_8

Route116_TunnelersRestHouse_EventScript_UFOTrader_32:
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_33:
# 108 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_34:
# 110 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_35:
# 112 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_37:
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_8

Route116_TunnelersRestHouse_EventScript_UFOTrader_38:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_37
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_36

Route116_TunnelersRestHouse_EventScript_UFOTrader_39:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_38
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_36


Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO::
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_0
# 127 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_1, 0
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_2, 1
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_3, 2
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 132 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2
# 136 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_GREEN_UFO
# 137 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6
# 140 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7
# 152 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4:
# 165 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 166 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 167 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6:
# 139 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7:
# 141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10
	checkitemspace ITEM_PEARL
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15:
# 149 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 150 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 151 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8:
# 153 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_TOHO_ORB, 5
# 154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13
	checkitemspace ITEM_TOHO_ORB, 5
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18:
# 161 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 162 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 163 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_TOHO_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16:
# 147 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19:
# 159 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18


Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace::
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace_Text_0
	return


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat::
# 177 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_HP3, STAT_HP
# 178 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Attack3, STAT_ATK
# 179 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Defense3, STAT_DEF
# 180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Speed2, STAT_SPEED
# 181 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpAtk3, STAT_SPATK
# 182 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpDef3, STAT_SPDEF
# 183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, NUM_STATS
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, STAT_HP, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV::
# 189 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 190 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 191 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2
# 195 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 196 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4:
# 199 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 200 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8
# 205 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12
# 215 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13
# 224 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14
# 233 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15
# 242 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16
# 251 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10:
# 261 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_Text_0
# 262 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5:
# 197 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12:
# 207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPWorse, MSGBOX_YESNO
# 208 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_19
	canunhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36:
# 214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13:
# 216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse, MSGBOX_YESNO
# 217 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_22
	canunhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39:
# 223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14:
# 225 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse, MSGBOX_YESNO
# 226 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_25
	canunhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42:
# 232 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15:
# 234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse, MSGBOX_YESNO
# 235 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_28
	canunhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45:
# 241 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16:
# 243 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse, MSGBOX_YESNO
# 244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_31
	canunhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48:
# 250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17:
# 252 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse, MSGBOX_YESNO
# 253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_34
	canunhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51:
# 259 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 212 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40:
# 221 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43:
# 230 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46:
# 239 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49:
# 248 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52:
# 257 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat::
# 269 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat_Text_0
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO::
# 274 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_0
# 275 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 276 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_1, 0
# 277 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_2, 1
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_3, 2
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_4, 3
# 280 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_5, 4
# 281 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_6, 5
# 282 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 6
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 284 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2
# 287 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_RED_UFO
# 288 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 290 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 302 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 303 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 305 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8
# 317 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 5, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4:
# 330 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 331 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 332 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6:
# 291 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_CAPSULE
# 292 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 293 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11
	checkitemspace ITEM_ABILITY_CAPSULE
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19:
# 299 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 300 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 301 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7:
# 304 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8:
# 306 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BIG_PEARL
# 307 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 308 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14
	checkitemspace ITEM_BIG_PEARL
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22:
# 314 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 315 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 316 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_BIG_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9:
# 318 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREAT_ORB, 5
# 319 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 320 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17
	checkitemspace ITEM_GREAT_ORB, 5
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25:
# 326 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 327 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 328 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GREAT_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20:
# 297 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23:
# 312 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26:
# 324 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25


Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart::
# 337 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 338 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 339 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_0, 0
# 340 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_1, 1
# 341 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_2, 2
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_3, 3
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_4, 4
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_5, 5
# 345 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_6, 6
# 346 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 7
# 347 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 348 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_2
# 351 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 352 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_6
# 364 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_7
# 376 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_8
# 388 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_9
# 400 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_10
# 412 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 5, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_11
# 424 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 6, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_12
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4:
# 437 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 438 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 439 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_6:
# 353 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POWER_HEART
# 354 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 355 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_14
	checkitemspace ITEM_POWER_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_35
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_34:
# 361 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 362 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 363 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_POWER_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_7:
# 365 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GUARD_HEART
# 366 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 367 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_17
	checkitemspace ITEM_GUARD_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_38
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_37:
# 373 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 374 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 375 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GUARD_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_8:
# 377 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SWIFT_HEART
# 378 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 379 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_20
	checkitemspace ITEM_SWIFT_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_41
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_40:
# 385 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 386 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 387 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_SWIFT_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_9:
# 389 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TECH_HEART
# 390 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 391 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_23
	checkitemspace ITEM_TECH_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_44
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_43:
# 397 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 398 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 399 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_TECH_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_10:
# 401 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELPER_HEART
# 402 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 403 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_26
	checkitemspace ITEM_HELPER_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_47
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_46:
# 409 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 410 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 411 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_HELPER_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_11:
# 413 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JUST_HEART
# 414 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 415 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_29
	checkitemspace ITEM_JUST_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_50
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_49:
# 421 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 422 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 423 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_JUST_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_12:
# 425 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JUST_HEART
# 426 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 427 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_32
	checkitemspace ITEM_JUST_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_53
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_52:
# 433 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 434 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 435 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_JUST_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_20:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_23:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_26:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_29:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_32:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_35:
# 359 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_34

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_38:
# 371 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_37

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_41:
# 383 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_40

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_44:
# 395 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_43

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_47:
# 407 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_46

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_50:
# 419 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_49

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_53:
# 431 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_52


Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV::
# 444 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 445 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 446 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 447 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2
# 450 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 451 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4:
# 454 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 455 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 456 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 457 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8
# 460 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 461 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12
# 470 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13
# 479 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14
# 488 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15
# 497 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16
# 506 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10:
# 516 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_Text_0
# 517 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 518 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 519 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5:
# 452 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12:
# 462 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect, MSGBOX_YESNO
# 463 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_19
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36:
# 469 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13:
# 471 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect, MSGBOX_YESNO
# 472 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_22
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39:
# 478 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14:
# 480 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect, MSGBOX_YESNO
# 481 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_25
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42:
# 487 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15:
# 489 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect, MSGBOX_YESNO
# 490 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_28
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45:
# 496 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16:
# 498 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect, MSGBOX_YESNO
# 499 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_31
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48:
# 505 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17:
# 507 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect, MSGBOX_YESNO
# 508 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_34
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51:
# 514 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 467 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40:
# 476 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43:
# 485 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46:
# 494 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49:
# 503 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52:
# 512 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO::
# 524 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_0
# 525 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 526 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_1, 0
# 527 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_2, 1
# 528 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_3, 2
# 529 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_4, 3
# 530 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_5, 4
# 531 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 5
# 532 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 533 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2
# 536 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_BLUE_UFO
# 537 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 538 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6
# 540 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7
# 552 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8
# 554 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9
# 566 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_10
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4:
# 579 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 580 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 581 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6:
# 539 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7:
# 541 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_PATCH
# 542 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 543 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_12
	checkitemspace ITEM_ABILITY_PATCH
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_21
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20:
# 549 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 550 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 551 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8:
# 553 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9:
# 555 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL_STRING
# 556 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 557 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_15
	checkitemspace ITEM_PEARL_STRING
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_24
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23:
# 563 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 564 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 565 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL_STRING
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_10:
# 567 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_ULTRA_ORB, 5
# 568 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 569 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_18
	checkitemspace ITEM_ULTRA_ORB, 5
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_27
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26:
# 575 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 576 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 577 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ULTRA_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_12:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_15:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_18:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_21:
# 547 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_24:
# 561 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_27:
# 573 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26


Route116_TunnelersRestHouse_EventScript_UFOTraderTutor::
# 586 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_0
# 587 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 588 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_1, 0
# 589 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_2, 1
# 590 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 591 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 592 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2
# 595 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 596 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6
# 599 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4:
# 603 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9
# 606 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 607 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 608 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 609 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12
# 612 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 613 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15
# 617 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18
# 621 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 622 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 623 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21
# 626 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_7
# 627 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 628 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 629 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6:
# 597 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_REMINDER_LEARN_ALL_MOVES
# 598 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_3, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7:
# 600 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_TUTOR_EGG_MOVES
# 601 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_4, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15:
# 614 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_5
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18:
# 618 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_6
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21:
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV::
# 634 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 635 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 636 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 637 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_2
# 640 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 641 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_4:
# 644 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect, MSGBOX_YESNO
# 645 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_8
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_13
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10:
# 652 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 653 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 654 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 655 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 656 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 657 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 658 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_1
# 659 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 660 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 661 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_5:
# 642 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_11:
# 649 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_0
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_12:
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_17
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_13:
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_12
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_16:
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_20
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_17:
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_16
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_20:
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_11
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10


Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg::
# 666 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg_Text_0
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO::
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_3
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1:
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_8
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6:
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_13
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11:
# 680 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_Text_0
# 681 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	checkitem ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_17
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_16:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_19:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_22:
# 691 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 692 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 693 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_26
# 696 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 697 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_30
# 699 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_31
# 701 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_32
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2:
# 672 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_3:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7:
# 675 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_8:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12:
# 678 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_13:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_17:
# 683 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_16

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_20:
# 686 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_23:
# 689 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_26:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_30:
# 698 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_31:
# 700 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_32:
# 702 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_28


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO::
# 708 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_Text_0, MSGBOX_YESNO
# 709 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2
	checkitemspace ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4:
# 715 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 716 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 717 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 718 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO
# 719 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO, 2
# 720 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREEN_UFO, 2
# 721 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5:
# 713 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO::
	checkitem ITEM_RED_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_2
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_1:
# 729 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_Text_0
# 730 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 731 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
# 732 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
# 733 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 734 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 735 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_5
# 738 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 739 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_9
# 741 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_10
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_7:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_2:
# 727 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_5:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_9:
# 740 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_7

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_10:
# 742 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_7


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen::
# 748 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_Text_0, MSGBOX_YESNO
# 749 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_2
	checkitemspace ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_4:
# 755 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREEN_UFO, 2
# 756 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 757 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 758 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GREEN_UFO, 2
# 759 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 760 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 761 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_5:
# 753 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue::
# 766 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_Text_0, MSGBOX_YESNO
# 767 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_2
	checkitemspace ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_4:
# 773 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 774 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 775 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 776 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_BLUE_UFO
# 777 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO, 2
# 778 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_RED_UFO, 2
# 779 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_5:
# 771 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO::
# 784 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_Text_0, MSGBOX_YESNO
# 785 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2
	checkitemspace ITEM_RED_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4:
# 791 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_RED_UFO, 2
# 792 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 793 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 794 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO, 2
# 795 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 796 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 797 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5:
# 789 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4


# 1013 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 1014 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1015 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1016 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1019 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 1020 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1021 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1022 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1025 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 1026 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1027 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1028 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1029 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1032 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1033 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 1034 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 1035 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 1036 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1037 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 1038 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 1039 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1040 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1041 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 1042 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 1043 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1044 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1045 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 1046 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 1047 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1048 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1049 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 1050 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 1051 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 1052 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 1053 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 1054 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1055 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1056 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1057 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 1058 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 1059 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1060 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1061 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1062 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 1063 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That RUSTURF TUNNEL there…\p"
# 1064 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 1065 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 1066 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 1067 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 1068 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 1069 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 1070 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 1071 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 1072 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1073 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 1074 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 1075 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 1076 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 1077 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 1078 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 1079 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 1080 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 1081 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 1082 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1083 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 1084 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 1085 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 1086 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 1087 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 1088 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1089 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 1090 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 1091 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 1092 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 1093 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_0:
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I don't sense any UFOs with you\n"
	.string "right now.\p"
	.string "Do let me know when you get some\n"
	.string "though, I'll do some skills to get some.$"

Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_1:
# 97 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Exchange UFOs$"

Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_2:
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Well, if you have any UFOs, know I am the\n"
	.string "guy who will take them for whatever you\l"
	.string "want.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_0:
# 126 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}That's a nice-looking Green UFO there.\p"
	.string "I can give you these for the Green UFO.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_1:
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Worsen 1 IV$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_2:
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_3:
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Toho Orbs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace_Text_0:
# 172 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, you don't seem to have enough\n"
	.string "space for the exchange of the UFO\l"
	.string "there.\p"
	.string "Sorry, I wanna be fair to you at least.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_Text_0:
# 261 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me just try and worsen this\n"
	.string "IV here.\p"
	.string "And there, your Puppet now has the\n"
	.string "lowest potential for that stat there.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat_Text_0:
# 269 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, this Puppet already has the ideal\n"
	.string "stat you want.\p"
	.string "Hey, at least you don't have to waste\n"
	.string "one of your UFOs there.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_0:
# 274 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}That is a very good-looking Red UFO in\n"
	.string "your hands.\p"
	.string "I can give you these for the Red UFO.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_1:
# 276 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Evo Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_2:
# 277 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Capsule$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_3:
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nature Mint$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_4:
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect 1 IV$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_5:
# 280 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Big Pearl$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_6:
# 281 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Great Orbs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_0:
# 339 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Power Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_1:
# 340 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Guard Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_2:
# 341 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Swift Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_3:
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Tech Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_4:
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Helper Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_5:
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Just Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_6:
# 345 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Neutral Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_Text_0:
# 516 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me just try and perfect\n"
	.string "this IV here.\p"
	.string "And there, your Puppet now has\n"
	.string "perfected their potential!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_0:
# 524 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Oh my, that is a beautiful Blue UFO that\n"
	.string "you have, I must have it myself.\p"
	.string "I can give you these for the Blue UFO.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_1:
# 526 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_2:
# 527 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Patch$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_3:
# 528 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect All IVs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_4:
# 529 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl String$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_5:
# 530 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Ultra Orbs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_0:
# 586 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}What type of moves should I teach\n"
	.string "then?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_1:
# 588 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Any Level-Up$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_2:
# 589 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Egg Moves$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_3:
# 598 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}So you want me to teach a Puppet any\n"
	.string "move it naturally learns?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_4:
# 601 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}So you want me to teach a Puppet an egg\n"
	.string "move?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_5:
# 614 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}That's an egg. It hasn't even hatched\n"
	.string "for me to be able to teach any moves at\l"
	.string "all!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_6:
# 618 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, this Puppet doesn't have any moves\n"
	.string "I can teach of this specific kind.\p"
	.string "Sorry, I wanna be fair with getting your\n"
	.string "UFOs at least.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_7:
# 626 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}And there, the move is now taught to\n"
	.string "your Puppet!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_0:
# 649 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, it seems like this Puppet has\n"
	.string "already reached its max potential\l"
	.string "already.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_1:
# 658 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me just try and perfect all\n"
	.string "the IVs here.\p"
	.string "And there, your Puppet now has\n"
	.string "perfected their potential!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg_Text_0:
# 666 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That's an egg. I don't even know what\n"
	.string "the stats of the egg will be.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_Text_0:
# 680 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, which type of UFO are you going to\n"
	.string "exchange exactly?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_Text_0:
# 708 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you a single Red UFO for 2\n"
	.string "Green UFOs then.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_Text_0:
# 729 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, what type of UFO do you want to\n"
	.string "exchange for the Red UFO?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_Text_0:
# 748 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you 2 Green UFOs for a single\n"
	.string "Red UFO then.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_Text_0:
# 766 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you a single Blue UFO for 2\n"
	.string "Red UFOs then.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_Text_0:
# 784 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you 2 Red UFOs for a single\n"
	.string "Blue UFO then.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 801 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 805 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Ina::
# 809 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ina$"

Route116_TunnelersRestHouse_Text_Player::
# 813 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 817 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GreenUFO::
# 821 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Green UFO$"

Route116_TunnelersRestHouse_Text_RedUFO::
# 825 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Red UFO$"

Route116_TunnelersRestHouse_Text_BlueUFO::
# 829 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Blue UFO$"

Route116_TunnelersRestHouse_Text_UFOTrader::
# 833 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "UFO Trader$"

Route116_TunnelersRestHouse_Text_UFOTraderIntro::
# 837 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hey, the name's UFO Trader here!\p"
	.string "I just love collecting UFOs, but I can\n"
	.string "never seem to get enough of them.\p"
	.string "I'll do anything reasonable for me to\n"
	.string "get those UFOs.\p"
	.string "Whether you want items or for me to use\n"
	.string "one of my skills, I'll do it for those\l"
	.string "UFOs!$"

Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs::
# 842 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}You seem to have some UFOs with you\n"
	.string "right now.\p"
	.string "You mind letting me have a look at them?$"

Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY::
# 846 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}So you want the {STR_VAR_1}\n"
	.string "for a {STR_VAR_2}?$"

Route116_TunnelersRestHouse_Text_UFOTraderGiveItem::
# 850 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, here's your\n"
	.string "{STR_VAR_1}.$"

Route116_TunnelersRestHouse_Text_TakeUfo::
# 854 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I'll take the {STR_VAR_1} then,\n"
	.string "thank you very much.$"

Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify::
# 858 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, which stat should I modify?$"

Route116_TunnelersRestHouse_Text_UFOTraderHPWorse::
# 862 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the HP IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse::
# 866 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Attack IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse::
# 870 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Defense IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse::
# 874 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Speed IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse::
# 878 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Atk IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse::
# 882 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect::
# 886 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the HP IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect::
# 890 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Attack IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect::
# 894 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Defense IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect::
# 898 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Speed IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect::
# 902 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Atk IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect::
# 906 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet::
# 910 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me see the Puppet in\n"
	.string "question.$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 914 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 918 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 923 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 928 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 932 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 936 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 942 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 948 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 952 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 958 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_InaWah::
# 963 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wah!\n"
	.string "Hello there, {PLAYER}.\p"
	.string "My name is Ina and I'm just visiting my\n"
	.string "friends here, Gigi and Bae.$"

Route116_TunnelersRestHouse_Text_BaelzNoMugshots::
# 968 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Yo Ina, look at this nice mugshot I got\n"
	.string "here!\p"
	.string "Looks pretty nice, doesn't it?$"

Route116_TunnelersRestHouse_Text_InaAdmit::
# 973 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "I'll admit, it looks pretty nice,\n"
	.string "especially for you, Bae.\p"
	.string "Too bad I don't have one though.\p"
	.string "I don't have enough in me to make one\n"
	.string "right now.$"

Route116_TunnelersRestHouse_Text_BaelzCheerUp::
# 980 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Hey, cheer up, Ina.\p"
	.string "You'll get one eventually as well, I'm\n"
	.string "sure of it.$"

Route116_TunnelersRestHouse_Text_GigiCookie::
# 985 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah, Ina, I have some cookies for\n"
	.string "you, by the way.\p"
	.string "Maybe this will cheer you up as well.$"

Route116_TunnelersRestHouse_Text_InaThankYou::
# 990 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Thank you both.\p"
	.string "I appreciate it, you guys looking after\n"
	.string "me as well.\p"
	.string "What kind of cookie is it exactly\n"
	.string "anyways, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiLavaridge::
# 996 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}I found these near Lavaridge, where\n"
	.string "someone called Mokou was giving them\l"
	.string "away.\p"
	.string "Dunno why exactly, but I was nearby and\n"
	.string "she was giving them away, so I took a\l"
	.string "decent amount and I still have some\l"
	.string "left over.$"

Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted::
# 1001 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Boat goes Binted?$"

Route116_TunnelersRestHouse_Text_GigiMurinLaugh::
# 1005 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}HAHAHAHAHAHA!!$"

Route116_TunnelersRestHouse_Text_NueBogosBinted::
# 1009 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nuuu-e?$"
