DewfordTown_Gym_MapScripts::
	.byte 0


DewfordTown_Gym_EventScript_Diamond1::
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_TEMP_A, 1
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Diamond1_2
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_A
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Diamond1_6
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Diamond1_7
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Diamond1_8
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Diamond1_9
DewfordTown_Gym_EventScript_Diamond1_4:
	end

DewfordTown_Gym_EventScript_Diamond1_2:
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Diamond1_6:
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 2
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_7:
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 2
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_8:
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 2
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_9:
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 2
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4


DewfordTown_Gym_EventScript_Spade1::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_TEMP_A, 1
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Spade1_2
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_A
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Spade1_6
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Spade1_7
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Spade1_8
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Spade1_9
DewfordTown_Gym_EventScript_Spade1_4:
	end

DewfordTown_Gym_EventScript_Spade1_2:
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Spade1_6:
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_7:
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 1
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_8:
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 1
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_9:
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4


DewfordTown_Gym_EventScript_Swap1::
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_4
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_3
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_4
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_5
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_6
DewfordTown_Gym_EventScript_Swap1_1:
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_5
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_9
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_10
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_11
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_12
DewfordTown_Gym_EventScript_Swap1_7:
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_6
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_15
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_16
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_17
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_18
DewfordTown_Gym_EventScript_Swap1_13:
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_7
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_21
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_22
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_23
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_24
DewfordTown_Gym_EventScript_Swap1_19:
	end

DewfordTown_Gym_EventScript_Swap1_3:
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 3
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_4:
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 4
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_5:
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_6:
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 2
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_9:
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 3
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_10:
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 4
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_11:
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 1
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_12:
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 2
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_15:
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 3
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_16:
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 4
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_17:
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 1
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_18:
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 2
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_21:
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 3
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_22:
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 4
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_23:
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_24:
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 2
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19


DewfordTown_Gym_EventScript_ClearPuzzle1::
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 0
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 0
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 0
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 0
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_A, 0
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	return


DewfordTown_Gym_EventScript_Brawly::
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DewfordTown_Gym_EventScript_Brawly_2
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_Brawly_5
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Brawly_2:
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brawly_5:
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_8
DewfordTown_Gym_EventScript_Brawly_7:
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Brawly_8:
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_Brawly_7


DewfordTown_Gym_EventScript_BrawlyDefeated::
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_2
DewfordTown_Gym_EventScript_BrawlyDefeated_1:
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_5
DewfordTown_Gym_EventScript_BrawlyDefeated_4:
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated_2:
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_1

DewfordTown_Gym_EventScript_BrawlyDefeated_5:
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_4


# 217 "data/maps/DewfordTown_Gym/scripts.pory"

# 218 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 222 "data/maps/DewfordTown_Gym/scripts.pory"

# 223 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 231 "data/maps/DewfordTown_Gym/scripts.pory"

# 232 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 235 "data/maps/DewfordTown_Gym/scripts.pory"

# 236 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 240 "data/maps/DewfordTown_Gym/scripts.pory"

# 241 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 249 "data/maps/DewfordTown_Gym/scripts.pory"

# 250 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 253 "data/maps/DewfordTown_Gym/scripts.pory"

# 254 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 258 "data/maps/DewfordTown_Gym/scripts.pory"

# 259 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 262 "data/maps/DewfordTown_Gym/scripts.pory"

# 263 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 267 "data/maps/DewfordTown_Gym/scripts.pory"

# 268 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 271 "data/maps/DewfordTown_Gym/scripts.pory"

# 272 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 284 "data/maps/DewfordTown_Gym/scripts.pory"

# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 290 "data/maps/DewfordTown_Gym/scripts.pory"

# 291 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 296 "data/maps/DewfordTown_Gym/scripts.pory"

# 297 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 301 "data/maps/DewfordTown_Gym/scripts.pory"

# 302 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"

# 323 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"

# 327 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"

# 331 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"

# 334 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"

# 338 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"

# 343 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"

# 347 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"

# 354 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"

# 358 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"

# 362 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"

# 368 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"

# 372 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"

# 380 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"

# 384 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"

# 388 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"

# 392 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"

# 396 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"

# 400 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"

# 404 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"

# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"

# 424 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"

# 433 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"

# 439 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"

# 443 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"

# 448 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"

# 451 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"

# 456 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"

# 464 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"

# 468 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"

# 473 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
