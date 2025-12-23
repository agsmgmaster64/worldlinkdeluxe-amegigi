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
	bankwithdrawmoney
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_InaFunEvent::
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bankdepositmoney
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end


Route116_TunnelersRestHouse_EventScript_MovePlayerInFront::
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_WEST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3
# 67 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_EAST, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case DIR_SOUTH, Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5
Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1:
	return

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_3:
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront
# 66 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_4:
# 68 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1

Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_5:
# 71 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront
# 72 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmovement 0
	goto Route116_TunnelersRestHouse_EventScript_MovePlayerInFront_1


Route116_TunnelersRestHouse_EventScript_UFOTrader::
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderIntro
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_4
Route116_TunnelersRestHouse_EventScript_UFOTrader_1:
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 101 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 102 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 103 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTrader_28
# 106 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTrader_32
# 109 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTrader_33
# 111 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTrader_34
# 113 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTrader_35
Route116_TunnelersRestHouse_EventScript_UFOTrader_30:
	checkitem ITEM_GREEN_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTrader_39
Route116_TunnelersRestHouse_EventScript_UFOTrader_36:
# 119 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs
# 120 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_9

Route116_TunnelersRestHouse_EventScript_UFOTrader_2:
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_0
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_2
# 123 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_UFOTrader_12:
# 90 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_11

Route116_TunnelersRestHouse_EventScript_UFOTrader_15:
# 93 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_RedUFO, 1
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_14

Route116_TunnelersRestHouse_EventScript_UFOTrader_18:
# 96 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_17

Route116_TunnelersRestHouse_EventScript_UFOTrader_21:
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_1, 3
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_20

Route116_TunnelersRestHouse_EventScript_UFOTrader_28:
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_8

Route116_TunnelersRestHouse_EventScript_UFOTrader_32:
# 108 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_33:
# 110 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_34:
# 112 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTrader_30

Route116_TunnelersRestHouse_EventScript_UFOTrader_35:
# 114 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_0
# 129 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_1, 0
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_2, 1
# 132 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_3, 2
# 133 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 134 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 135 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2
# 138 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_GREEN_UFO
# 139 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6
# 142 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7
# 154 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4:
# 167 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 168 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 169 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_6:
# 141 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_7:
# 143 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL
# 144 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 145 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10
	checkitemspace ITEM_PEARL
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15:
# 151 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 152 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 153 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_8:
# 155 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_TOHO_ORB, 5
# 156 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 157 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13
	checkitemspace ITEM_TOHO_ORB, 5
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19
Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18:
# 163 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 164 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 165 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_TOHO_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_10:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_13:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_16:
# 149 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_15

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_19:
# 161 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_18


Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace::
# 174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace_Text_0
	return


Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat::
# 179 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_HP3, STAT_HP
# 180 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Attack3, STAT_ATK
# 181 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Defense3, STAT_DEF
# 182 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_Speed2, STAT_SPEED
# 183 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpAtk3, STAT_SPATK
# 184 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush gText_SpDef3, STAT_SPDEF
# 185 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, NUM_STATS
# 186 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, STAT_HP, NULL
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV::
# 191 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 192 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 193 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 194 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2
# 197 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 198 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4:
# 201 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 202 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 203 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 204 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8
# 207 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12
# 217 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13
# 226 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14
# 235 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15
# 244 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16
# 253 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10:
# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_Text_0
# 264 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO
# 265 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREEN_UFO
# 266 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_5:
# 199 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_12:
# 209 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPWorse, MSGBOX_YESNO
# 210 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_19
	canunhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36:
# 216 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_13:
# 218 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse, MSGBOX_YESNO
# 219 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_22
	canunhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39:
# 225 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_14:
# 227 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse, MSGBOX_YESNO
# 228 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_25
	canunhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42:
# 234 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_15:
# 236 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse, MSGBOX_YESNO
# 237 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_28
	canunhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45:
# 243 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_16:
# 245 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse, MSGBOX_YESNO
# 246 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_31
	canunhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48:
# 252 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	unhypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_17:
# 254 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse, MSGBOX_YESNO
# 255 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_34
	canunhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51:
# 261 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 214 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_40:
# 223 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_43:
# 232 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_46:
# 241 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_49:
# 250 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_52:
# 259 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat::
# 271 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat_Text_0
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO::
# 276 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_0
# 277 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_1, 0
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_2, 1
# 280 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_3, 2
# 281 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_4, 3
# 282 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_5, 4
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_6, 5
# 284 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 6
# 285 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 286 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2
# 289 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_RED_UFO
# 290 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 292 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6
# 304 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 305 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7
# 307 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8
# 319 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 5, Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4:
# 332 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 333 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 334 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_6:
# 293 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_CAPSULE
# 294 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 295 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11
	checkitemspace ITEM_ABILITY_CAPSULE
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19:
# 301 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 302 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 303 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_7:
# 306 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_8:
# 308 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BIG_PEARL
# 309 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 310 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14
	checkitemspace ITEM_BIG_PEARL
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22:
# 316 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 317 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 318 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_BIG_PEARL
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_9:
# 320 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREAT_ORB, 5
# 321 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 322 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17
	checkitemspace ITEM_GREAT_ORB, 5
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26
Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25:
# 328 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 329 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 330 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GREAT_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_11:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_14:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_17:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_20:
# 299 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_19

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_23:
# 314 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_22

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_26:
# 326 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_25


Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart::
# 339 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 340 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 341 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_0, 0
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_1, 1
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_2, 2
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_3, 3
# 345 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_4, 4
# 346 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_5, 5
# 347 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_6, 6
# 348 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 7
# 349 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 350 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_2
# 353 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_6
# 366 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_7
# 378 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_8
# 390 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_9
# 402 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_10
# 414 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 5, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_11
# 426 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 6, Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_12
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4:
# 439 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 440 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 441 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_6:
# 355 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POWER_HEART
# 356 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 357 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_14
	checkitemspace ITEM_POWER_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_35
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_34:
# 363 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 364 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 365 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_POWER_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_7:
# 367 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GUARD_HEART
# 368 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 369 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_17
	checkitemspace ITEM_GUARD_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_38
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_37:
# 375 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 376 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 377 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GUARD_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_8:
# 379 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SWIFT_HEART
# 380 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 381 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_20
	checkitemspace ITEM_SWIFT_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_41
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_40:
# 387 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 388 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 389 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_SWIFT_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_9:
# 391 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TECH_HEART
# 392 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 393 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_23
	checkitemspace ITEM_TECH_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_44
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_43:
# 399 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 400 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 401 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_TECH_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_10:
# 403 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELPER_HEART
# 404 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 405 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_26
	checkitemspace ITEM_HELPER_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_47
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_46:
# 411 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 412 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 413 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_HELPER_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_11:
# 415 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JUST_HEART
# 416 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 417 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_29
	checkitemspace ITEM_JUST_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_50
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_49:
# 423 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 424 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 425 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_JUST_HEART
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_4

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_12:
# 427 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JUST_HEART
# 428 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 429 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_32
	checkitemspace ITEM_JUST_HEART
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_53
Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_52:
# 435 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 436 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 437 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 361 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_34

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_38:
# 373 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_37

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_41:
# 385 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_40

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_44:
# 397 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_43

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_47:
# 409 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_46

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_50:
# 421 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_49

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_53:
# 433 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_52


Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV::
# 446 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 447 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 448 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 449 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2
# 452 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 453 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4:
# 456 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify
# 457 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 458 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	call Route116_TunnelersRestHouse_UFOTrader_PrepareMultichoiceStat
# 459 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, STAT_SPDEF
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8
# 462 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 463 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_HP, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12
# 472 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_ATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13
# 481 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_DEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14
# 490 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPEED, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15
# 499 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPATK, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16
# 508 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case STAT_SPDEF, Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10:
# 518 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_Text_0
# 519 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 520 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 521 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_5:
# 454 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_12:
# 464 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect, MSGBOX_YESNO
# 465 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_19
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_37
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36:
# 471 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_13:
# 473 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect, MSGBOX_YESNO
# 474 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_22
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39:
# 480 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_14:
# 482 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect, MSGBOX_YESNO
# 483 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_25
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42:
# 489 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_15:
# 491 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect, MSGBOX_YESNO
# 492 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_28
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45:
# 498 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_16:
# 500 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect, MSGBOX_YESNO
# 501 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_31
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48:
# 507 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_10

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_17:
# 509 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect, MSGBOX_YESNO
# 510 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_34
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51:
# 516 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 469 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_36

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_40:
# 478 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_39

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_43:
# 487 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_42

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_46:
# 496 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_45

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_49:
# 505 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_48

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_52:
# 514 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_51


Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO::
# 526 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_0
# 527 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 528 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_1, 0
# 529 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_2, 1
# 530 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_3, 2
# 531 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_4, 3
# 532 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_5, 4
# 533 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 5
# 534 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 535 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2
# 538 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_BLUE_UFO
# 539 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 540 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6
# 542 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7
# 554 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8
# 556 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 3, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9
# 568 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 4, Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_10
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4:
# 581 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 582 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 583 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_6:
# 541 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_7:
# 543 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ABILITY_PATCH
# 544 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 545 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_12
	checkitemspace ITEM_ABILITY_PATCH
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_21
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20:
# 551 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 552 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 553 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_8:
# 555 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_9:
# 557 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PEARL_STRING
# 558 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 559 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_15
	checkitemspace ITEM_PEARL_STRING
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_24
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23:
# 565 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 566 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 567 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_PEARL_STRING
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_10:
# 569 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_ULTRA_ORB, 5
# 570 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY, MSGBOX_YESNO
# 571 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_18
	checkitemspace ITEM_ULTRA_ORB, 5
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_27
Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26:
# 577 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 578 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 579 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_ULTRA_ORB, 5
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_4

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_12:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_15:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_18:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_21:
# 549 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_20

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_24:
# 563 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_23

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_27:
# 575 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_26


Route116_TunnelersRestHouse_EventScript_UFOTraderTutor::
# 588 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_0
# 589 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 590 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_1, 0
# 591 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_2, 1
# 592 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 2
# 593 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 594 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2
# 597 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 598 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6
# 601 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 1, Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7
Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4:
# 605 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9
# 608 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 609 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 610 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 611 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12
# 614 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 615 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15
# 619 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18
# 623 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 624 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 625 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21
# 628 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_7
# 629 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 630 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 631 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_6:
# 599 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_REMINDER_LEARN_ALL_MOVES
# 600 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_3, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_7:
# 602 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setvar VAR_MOVE_MANAGER, MOVE_TUTOR_EGG_MOVES
# 603 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_4, MSGBOX_YESNO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_4

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_9:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_12:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_15:
# 616 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_5
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_18:
# 620 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_6
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_21:
	return


Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV::
# 636 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet
# 637 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special ChoosePartyMon
# 638 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitstate
# 639 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_2
# 642 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	special IsSelectedMonEgg
# 643 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_5
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_4:
# 646 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect, MSGBOX_YESNO
# 647 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_8
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_13
Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_10:
# 654 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 655 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 656 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 657 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 658 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 659 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 660 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_1
# 661 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 662 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 663 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_5:
# 644 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_4

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_8:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_11:
# 651 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 668 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
# 682 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_Text_0
# 683 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
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
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_2
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7:
# 677 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_8:
	checkitem ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_7
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_6

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_12:
# 680 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_11

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_13:
	checkitem ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
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
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_Text_0, MSGBOX_YESNO
# 711 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2
	checkitemspace ITEM_RED_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4:
# 717 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 718 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 719 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 720 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO
# 721 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_GREEN_UFO, 2
# 722 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREEN_UFO, 2
# 723 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_5:
# 715 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO::
	checkitem ITEM_RED_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_2
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_1:
# 731 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	message Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_Text_0
# 732 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	waitmessage
# 733 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_GreenUFO, 0
# 734 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_BlueUFO, 2
# 735 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultipush Route116_TunnelersRestHouse_Text_Nevermind, 4
# 736 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, NULL
# 737 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_5
# 740 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	switch VAR_RESULT
# 741 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 0, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_9
# 743 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	case 2, Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_10
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_7:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_2:
# 729 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_1

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_5:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_9:
# 742 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_7

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_10:
# 744 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_7


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen::
# 750 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_Text_0, MSGBOX_YESNO
# 751 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_2
	checkitemspace ITEM_GREEN_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_4:
# 757 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_GREEN_UFO, 2
# 758 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 759 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 760 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_GREEN_UFO, 2
# 761 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO
# 762 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RED_UFO
# 763 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_5:
# 755 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue::
# 768 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_Text_0, MSGBOX_YESNO
# 769 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_2
	checkitemspace ITEM_BLUE_UFO
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_4:
# 775 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 776 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 777 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 778 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_BLUE_UFO
# 779 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_RED_UFO, 2
# 780 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_RED_UFO, 2
# 781 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_5:
# 773 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_4


Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO::
# 786 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_Text_0, MSGBOX_YESNO
# 787 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2
	checkitemspace ITEM_RED_UFO, 2
# 0 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5
Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4:
# 793 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemnameplural STR_VAR_1, ITEM_RED_UFO, 2
# 794 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_UFOTraderGiveItem
# 795 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	hidespeakername
# 796 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	giveitem ITEM_RED_UFO, 2
# 797 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	removeitem ITEM_BLUE_UFO
# 798 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BLUE_UFO
# 799 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TakeUfo
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_2:
	return

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_5:
# 791 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace
	goto Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_4


# 1015 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveRightToFront:
# 1016 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1017 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1018 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1021 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveLeftToFront:
# 1022 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1023 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1024 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1027 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Movement_PlayerMoveTheWayToFront:
# 1028 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_left
# 1029 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_down
# 1030 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	walk_right
# 1031 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	face_up
	step_end

# 1034 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1035 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 1036 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 1037 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 1038 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1039 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 1040 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 1041 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1042 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1043 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 1044 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 1045 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1046 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1047 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 1048 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 1049 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1050 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1051 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 1052 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 1053 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 1054 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 1055 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 1056 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1057 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1058 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1059 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 1060 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 1061 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 1062 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 1063 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1064 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 1065 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That RUSTURF TUNNEL there…\p"
# 1066 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 1067 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 1068 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 1069 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 1070 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 1071 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 1072 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 1073 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 1074 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1075 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 1076 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 1077 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 1078 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 1079 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 1080 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 1081 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 1082 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 1083 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 1084 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1085 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 1086 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 1087 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 1088 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 1089 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 1090 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 1091 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 1092 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 1093 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 1094 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 1095 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"

Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_0:
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I don't sense any UFOs with you\n"
	.string "right now.\p"
	.string "Do let me know when you get some\n"
	.string "though, I'll do some skills to get some.$"

Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_1:
# 99 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Exchange UFOs$"

Route116_TunnelersRestHouse_EventScript_UFOTrader_Text_2:
# 122 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Well, if you have any UFOs, know I am the\n"
	.string "guy who will take them for whatever you\l"
	.string "want.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_0:
# 128 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}That's a nice-looking Green UFO there.\p"
	.string "I can give you these for the Green UFO.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_1:
# 130 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Worsen 1 IV$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_2:
# 131 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl$"

Route116_TunnelersRestHouse_EventScript_UFOTraderGreenUFO_Text_3:
# 132 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Toho Orbs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderNotEnoughSpace_Text_0:
# 174 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, you don't seem to have enough\n"
	.string "space for the exchange of the UFO\l"
	.string "there.\p"
	.string "Sorry, I wanna be fair to you at least.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderWorsenIV_Text_0:
# 263 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me just try and worsen this\n"
	.string "IV here.\p"
	.string "And there, your Puppet now has the\n"
	.string "lowest potential for that stat there.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderAlreadyIdealStat_Text_0:
# 271 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, this Puppet already has the ideal\n"
	.string "stat you want.\p"
	.string "Hey, at least you don't have to waste\n"
	.string "one of your UFOs there.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_0:
# 276 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}That is a very good-looking Red UFO in\n"
	.string "your hands.\p"
	.string "I can give you these for the Red UFO.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_1:
# 278 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Evo Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_2:
# 279 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Capsule$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_3:
# 280 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nature Mint$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_4:
# 281 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect 1 IV$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_5:
# 282 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Big Pearl$"

Route116_TunnelersRestHouse_EventScript_UFOTraderRedUFO_Text_6:
# 283 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Great Orbs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_0:
# 341 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Power Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_1:
# 342 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Guard Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_2:
# 343 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Swift Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_3:
# 344 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Tech Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_4:
# 345 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Helper Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_5:
# 346 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Just Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderEvoHeart_Text_6:
# 347 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Neutral Heart$"

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfect1IV_Text_0:
# 518 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me just try and perfect\n"
	.string "this IV here.\p"
	.string "And there, your Puppet now has\n"
	.string "perfected their potential!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_0:
# 526 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Oh my, that is a beautiful Blue UFO that\n"
	.string "you have, I must have it myself.\p"
	.string "I can give you these for the Blue UFO.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_1:
# 528 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Teach Moves$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_2:
# 529 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ability Patch$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_3:
# 530 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Perfect All IVs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_4:
# 531 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pearl String$"

Route116_TunnelersRestHouse_EventScript_UFOTraderBlueUFO_Text_5:
# 532 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "5 Ultra Orbs$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_0:
# 588 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}What type of moves should I teach\n"
	.string "then?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_1:
# 590 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Any Level-Up$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_2:
# 591 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Egg Moves$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_3:
# 600 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}So you want me to teach a Puppet any\n"
	.string "move it naturally learns?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_4:
# 603 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}So you want me to teach a Puppet an egg\n"
	.string "move?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_5:
# 616 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}That's an egg. It hasn't even hatched\n"
	.string "for me to be able to teach any moves at\l"
	.string "all!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_6:
# 620 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, this Puppet doesn't have any moves\n"
	.string "I can teach of this specific kind.\p"
	.string "Sorry, I wanna be fair with getting your\n"
	.string "UFOs at least.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderTutor_Text_7:
# 628 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}And there, the move is now taught to\n"
	.string "your Puppet!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_0:
# 651 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, it seems like this Puppet has\n"
	.string "already reached its max potential\l"
	.string "already.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderPerfectAllIV_Text_1:
# 660 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me just try and perfect all\n"
	.string "the IVs here.\p"
	.string "And there, your Puppet now has\n"
	.string "perfected their potential!$"

Route116_TunnelersRestHouse_EventScript_UFOTraderShowEgg_Text_0:
# 668 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That's an egg. I don't even know what\n"
	.string "the stats of the egg will be.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeUFO_Text_0:
# 682 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, which type of UFO are you going to\n"
	.string "exchange exactly?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeGreenUFO_Text_0:
# 710 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you a single Red UFO for 2\n"
	.string "Green UFOs then.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFO_Text_0:
# 731 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hmm, what type of UFO do you want to\n"
	.string "exchange for the Red UFO?$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForGreen_Text_0:
# 750 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you 2 Green UFOs for a single\n"
	.string "Red UFO then.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeRedUFOForBlue_Text_0:
# 768 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you a single Blue UFO for 2\n"
	.string "Red UFOs then.$"

Route116_TunnelersRestHouse_EventScript_UFOTraderExchangeBlueUFO_Text_0:
# 786 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I can give you 2 Red UFOs for a single\n"
	.string "Blue UFO then.$"

Route116_TunnelersRestHouse_Text_Gigi::
# 803 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Gigi$"

Route116_TunnelersRestHouse_Text_Baelz::
# 807 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Baelz$"

Route116_TunnelersRestHouse_Text_Ina::
# 811 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Ina$"

Route116_TunnelersRestHouse_Text_Player::
# 815 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{PLAYER}$"

Route116_TunnelersRestHouse_Text_Nevermind::
# 819 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nevermind$"

Route116_TunnelersRestHouse_Text_GreenUFO::
# 823 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Green UFO$"

Route116_TunnelersRestHouse_Text_RedUFO::
# 827 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Red UFO$"

Route116_TunnelersRestHouse_Text_BlueUFO::
# 831 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Blue UFO$"

Route116_TunnelersRestHouse_Text_UFOTrader::
# 835 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "UFO Trader$"

Route116_TunnelersRestHouse_Text_UFOTraderIntro::
# 839 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Hey, the name's UFO Trader here!\p"
	.string "I just love collecting UFOs, but I can\n"
	.string "never seem to get enough of them.\p"
	.string "I'll do anything reasonable for me to\n"
	.string "get those UFOs.\p"
	.string "Whether you want items or for me to use\n"
	.string "one of my skills, I'll do it for those\l"
	.string "UFOs!$"

Route116_TunnelersRestHouse_Text_UFOTraderHaveUFOs::
# 844 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}You seem to have some UFOs with you\n"
	.string "right now.\p"
	.string "You mind letting me have a look at them?$"

Route116_TunnelersRestHouse_Text_UFOTraderSoYouWantXForY::
# 848 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}So you want the {STR_VAR_1}\n"
	.string "for a {STR_VAR_2}?$"

Route116_TunnelersRestHouse_Text_UFOTraderGiveItem::
# 852 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, here's your\n"
	.string "{STR_VAR_1}.$"

Route116_TunnelersRestHouse_Text_TakeUfo::
# 856 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}I'll take the {STR_VAR_1} then,\n"
	.string "thank you very much.$"

Route116_TunnelersRestHouse_Text_UFOTraderWhichStatShouldModify::
# 860 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, which stat should I modify?$"

Route116_TunnelersRestHouse_Text_UFOTraderHPWorse::
# 864 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the HP IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackWorse::
# 868 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Attack IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefenseWorse::
# 872 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Defense IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedWorse::
# 876 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Speed IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackWorse::
# 880 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Atk IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefenseWorse::
# 884 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll worsen the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderHPPerfect::
# 888 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the HP IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderAttackPerfect::
# 892 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Attack IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderDefensePerfect::
# 896 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Defense IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpeedPerfect::
# 900 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Speed IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpAttackPerfect::
# 904 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Atk IV of this\n"
	.string "Puppet for a Red UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSpDefensePerfect::
# 908 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hmm, I'll perfect the Sp. Def IV of this\n"
	.string "Puppet for a Green UFO then.$"

Route116_TunnelersRestHouse_Text_UFOTraderSeePuppet::
# 912 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{SPEAKER NAME_UFO_TRADER}Alright, let me see the Puppet in\n"
	.string "question.$"

Route116_TunnelersRestHouse_Text_GigiMurinIntro::
# 916 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}GI MURIN!\p"
	.string "The name's Gigi Murin for you trainer.\p"
	.string "This red one with me is my friend here.$"

Route116_TunnelersRestHouse_Text_HakosBaelzIntro::
# 920 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}Wazzup!\p"
	.string "I am chaos, the end of ends.\p"
	.string "A steel rose trapped in an ice cage.\p"
	.string "Your best friend, Baelz Hakos.\p"
	.string "WITNESS ME!!\p"
	.string "Why do I not have the fancy mugshot\n"
	.string "like you by the way, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiOutOfBudget::
# 925 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}We didn't have the budget to afford a\n"
	.string "mugshot for you.\p"
	.string "We could only afford mines, Ame's, and\n"
	.string "even the player's mugshot.$"

Route116_TunnelersRestHouse_Text_RenkoFrickinTalking::
# 930 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_RENKO EMOTE_NORMAL}I guess I'm here.$"

Route116_TunnelersRestHouse_Text_MaribelFrickinTalking::
# 934 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_MARIBEL EMOTE_NORMAL}Yeah, I'm here.$"

Route116_TunnelersRestHouse_Text_BaelzInvested::
# 938 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup!\p"
	.string "I invested in Kronii coin, and now I was\n"
	.string "finally able to buy myself my own\l"
	.string "mugshot proper for you to see.\p"
	.string "How cool is that for you, {PLAYER}?$"

Route116_TunnelersRestHouse_Text_GigiBoughtIn::
# 944 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yo, you bought into the coin as well,\n"
	.string "Bae?\p"
	.string "Good for you, bet you can even get\n"
	.string "{PLAYER} here to buy into it as well.\p"
	.string "Just hope you didn't see Calli's video\n"
	.string "regarding the coin.$"

Route116_TunnelersRestHouse_Text_BaelzWhat::
# 950 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Calli's video?\p"
	.string "You mean she tried to expose it or\n"
	.string "something?$"

Route116_TunnelersRestHouse_Text_GigiDefense::
# 954 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, although I came in to her defense\n"
	.string "to keep the coin safe.\p"
	.string "I think I did a pretty good job making\n"
	.string "my case, especially against her.\p"
	.string "Gotta keep my coin's worth, you know?$"

Route116_TunnelersRestHouse_Text_BaelzHuh::
# 960 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, {PLAYER}, do you want some nice\n"
	.string "Kronii Coin?$"

Route116_TunnelersRestHouse_Text_InaWah::
# 965 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wah!\n"
	.string "Hello there, {PLAYER}.\p"
	.string "My name is Ina and I'm just visiting my\n"
	.string "friends here, Gigi and Bae.$"

Route116_TunnelersRestHouse_Text_BaelzNoMugshots::
# 970 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Yo Ina, look at this nice mugshot I got\n"
	.string "here!\p"
	.string "Looks pretty nice, doesn't it?$"

Route116_TunnelersRestHouse_Text_InaAdmit::
# 975 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Huh.\p"
	.string "I'll admit, it looks pretty nice,\n"
	.string "especially for you, Bae.\p"
	.string "Too bad I don't have one though.\p"
	.string "I don't have enough in me to make one\n"
	.string "right now.$"

Route116_TunnelersRestHouse_Text_BaelzCheerUp::
# 982 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Hey, cheer up, Ina.\p"
	.string "You'll get one eventually as well, I'm\n"
	.string "sure of it.$"

Route116_TunnelersRestHouse_Text_GigiCookie::
# 987 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah, Ina, I have some cookies for\n"
	.string "you, by the way.\p"
	.string "Maybe this will cheer you up as well.$"

Route116_TunnelersRestHouse_Text_InaThankYou::
# 992 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Thank you both.\p"
	.string "I appreciate it, you guys looking after\n"
	.string "me as well.\p"
	.string "What kind of cookie is it exactly\n"
	.string "anyways, Gigi?$"

Route116_TunnelersRestHouse_Text_GigiLavaridge::
# 998 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}I found these near Lavaridge, where\n"
	.string "someone called Mokou was giving them\l"
	.string "away.\p"
	.string "Dunno why exactly, but I was nearby and\n"
	.string "she was giving them away, so I took a\l"
	.string "decent amount and I still have some\l"
	.string "left over.$"

Route116_TunnelersRestHouse_Text_GigiMurinBogosBinted::
# 1003 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Boat goes Binted?$"

Route116_TunnelersRestHouse_Text_GigiMurinLaugh::
# 1007 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}HAHAHAHAHAHA!!$"

Route116_TunnelersRestHouse_Text_NueBogosBinted::
# 1011 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Nuuu-e?$"
