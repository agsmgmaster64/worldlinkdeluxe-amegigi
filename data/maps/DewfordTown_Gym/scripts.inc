DewfordTown_Gym_EventScript_Diamond1::
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_TEMP_A, 1
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Diamond1_2
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_A
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Diamond1_6
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Diamond1_7
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Diamond1_8
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Diamond1_9
DewfordTown_Gym_EventScript_Diamond1_4:
	end

DewfordTown_Gym_EventScript_Diamond1_2:
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Diamond1_6:
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_7:
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 2
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_8:
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 2
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_9:
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 2
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4


DewfordTown_Gym_EventScript_Spade1::
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_TEMP_A, 1
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Spade1_2
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_A
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Spade1_6
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Spade1_7
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Spade1_8
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Spade1_9
DewfordTown_Gym_EventScript_Spade1_4:
	end

DewfordTown_Gym_EventScript_Spade1_2:
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Spade1_6:
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_7:
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 1
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_8:
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 1
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_9:
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4


DewfordTown_Gym_EventScript_Swap1::
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_4
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_3
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_4
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_5
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_6
DewfordTown_Gym_EventScript_Swap1_1:
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_5
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_9
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_10
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_11
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_12
DewfordTown_Gym_EventScript_Swap1_7:
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_6
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_15
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_16
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_17
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_18
DewfordTown_Gym_EventScript_Swap1_13:
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_7
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Swap1_21
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Swap1_22
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Swap1_23
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Swap1_24
DewfordTown_Gym_EventScript_Swap1_19:
	end

DewfordTown_Gym_EventScript_Swap1_3:
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 3
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_4:
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 4
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_5:
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 1
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_6:
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 2
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_9:
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 3
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_10:
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 4
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_11:
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 1
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_12:
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 2
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_15:
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 3
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_16:
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 4
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_17:
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 1
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_18:
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 2
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_21:
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 3
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_22:
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 4
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_23:
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 1
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_24:
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 2
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19


DewfordTown_Gym_EventScript_ClearPuzzle1::
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_4, 0
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_5, 0
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_6, 0
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_7, 0
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_A, 0
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	special DrawWholeMapView
	return


# 160 "data/maps/DewfordTown_Gym/scripts.pory"

# 161 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 167 "data/maps/DewfordTown_Gym/scripts.pory"

# 168 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 179 "data/maps/DewfordTown_Gym/scripts.pory"

# 180 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 188 "data/maps/DewfordTown_Gym/scripts.pory"

# 189 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 192 "data/maps/DewfordTown_Gym/scripts.pory"

# 193 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 196 "data/maps/DewfordTown_Gym/scripts.pory"

# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 200 "data/maps/DewfordTown_Gym/scripts.pory"

# 201 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 204 "data/maps/DewfordTown_Gym/scripts.pory"

# 205 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 208 "data/maps/DewfordTown_Gym/scripts.pory"

# 209 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 213 "data/maps/DewfordTown_Gym/scripts.pory"

# 214 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 225 "data/maps/DewfordTown_Gym/scripts.pory"

# 226 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 228 "data/maps/DewfordTown_Gym/scripts.pory"

# 229 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 235 "data/maps/DewfordTown_Gym/scripts.pory"

# 236 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 241 "data/maps/DewfordTown_Gym/scripts.pory"

# 242 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 247 "data/maps/DewfordTown_Gym/scripts.pory"

# 248 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 253 "data/maps/DewfordTown_Gym/scripts.pory"

# 254 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 259 "data/maps/DewfordTown_Gym/scripts.pory"

# 260 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 265 "data/maps/DewfordTown_Gym/scripts.pory"

# 266 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 271 "data/maps/DewfordTown_Gym/scripts.pory"

# 272 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 293 "data/maps/DewfordTown_Gym/scripts.pory"

# 294 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 302 "data/maps/DewfordTown_Gym/scripts.pory"

# 303 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 328 "data/maps/DewfordTown_Gym/scripts.pory"

# 329 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 335 "data/maps/DewfordTown_Gym/scripts.pory"

# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 343 "data/maps/DewfordTown_Gym/scripts.pory"

# 344 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 348 "data/maps/DewfordTown_Gym/scripts.pory"

# 349 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 353 "data/maps/DewfordTown_Gym/scripts.pory"

# 354 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 358 "data/maps/DewfordTown_Gym/scripts.pory"

# 359 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 363 "data/maps/DewfordTown_Gym/scripts.pory"

# 364 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 368 "data/maps/DewfordTown_Gym/scripts.pory"

# 369 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 373 "data/maps/DewfordTown_Gym/scripts.pory"

# 374 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 378 "data/maps/DewfordTown_Gym/scripts.pory"

# 379 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 383 "data/maps/DewfordTown_Gym/scripts.pory"

# 384 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 388 "data/maps/DewfordTown_Gym/scripts.pory"

# 389 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 393 "data/maps/DewfordTown_Gym/scripts.pory"

# 394 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 398 "data/maps/DewfordTown_Gym/scripts.pory"

# 399 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 403 "data/maps/DewfordTown_Gym/scripts.pory"

# 404 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 408 "data/maps/DewfordTown_Gym/scripts.pory"

# 409 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 416 "data/maps/DewfordTown_Gym/scripts.pory"

# 417 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 421 "data/maps/DewfordTown_Gym/scripts.pory"

# 422 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 427 "data/maps/DewfordTown_Gym/scripts.pory"

# 428 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 433 "data/maps/DewfordTown_Gym/scripts.pory"

# 434 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 438 "data/maps/DewfordTown_Gym/scripts.pory"

# 439 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 443 "data/maps/DewfordTown_Gym/scripts.pory"

# 444 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"

# 460 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"

# 464 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"

# 468 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"

# 471 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"

# 475 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"

# 480 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"

# 484 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"

# 491 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 494 "data/maps/DewfordTown_Gym/scripts.pory"

# 495 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"

# 499 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"

# 505 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 506 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 508 "data/maps/DewfordTown_Gym/scripts.pory"

# 509 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 510 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 512 "data/maps/DewfordTown_Gym/scripts.pory"

# 513 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 514 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 516 "data/maps/DewfordTown_Gym/scripts.pory"

# 517 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 518 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"

# 521 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 522 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 523 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 524 "data/maps/DewfordTown_Gym/scripts.pory"

# 525 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"

# 529 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 530 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 532 "data/maps/DewfordTown_Gym/scripts.pory"

# 533 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"

# 537 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 540 "data/maps/DewfordTown_Gym/scripts.pory"

# 541 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 542 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 549 "data/maps/DewfordTown_Gym/scripts.pory"

# 550 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"

# 557 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 558 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 560 "data/maps/DewfordTown_Gym/scripts.pory"

# 561 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 565 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"

# 570 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 575 "data/maps/DewfordTown_Gym/scripts.pory"

# 576 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 577 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 578 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 579 "data/maps/DewfordTown_Gym/scripts.pory"

# 580 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 581 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 582 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 584 "data/maps/DewfordTown_Gym/scripts.pory"

# 585 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 587 "data/maps/DewfordTown_Gym/scripts.pory"

# 588 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 592 "data/maps/DewfordTown_Gym/scripts.pory"

# 593 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 594 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 595 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 599 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 600 "data/maps/DewfordTown_Gym/scripts.pory"

# 601 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 602 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 604 "data/maps/DewfordTown_Gym/scripts.pory"

# 605 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 606 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 609 "data/maps/DewfordTown_Gym/scripts.pory"

# 610 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 611 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 612 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 613 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 614 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 615 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 616 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 617 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 618 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
