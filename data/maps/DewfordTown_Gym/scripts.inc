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
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 164 "data/maps/DewfordTown_Gym/scripts.pory"

# 165 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 168 "data/maps/DewfordTown_Gym/scripts.pory"

# 169 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 180 "data/maps/DewfordTown_Gym/scripts.pory"

# 181 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 184 "data/maps/DewfordTown_Gym/scripts.pory"

# 185 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 189 "data/maps/DewfordTown_Gym/scripts.pory"

# 190 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 193 "data/maps/DewfordTown_Gym/scripts.pory"

# 194 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 197 "data/maps/DewfordTown_Gym/scripts.pory"

# 198 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 201 "data/maps/DewfordTown_Gym/scripts.pory"

# 202 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 205 "data/maps/DewfordTown_Gym/scripts.pory"

# 206 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 209 "data/maps/DewfordTown_Gym/scripts.pory"

# 210 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 214 "data/maps/DewfordTown_Gym/scripts.pory"

# 215 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 229 "data/maps/DewfordTown_Gym/scripts.pory"

# 230 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 242 "data/maps/DewfordTown_Gym/scripts.pory"

# 243 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 248 "data/maps/DewfordTown_Gym/scripts.pory"

# 249 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 254 "data/maps/DewfordTown_Gym/scripts.pory"

# 255 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 260 "data/maps/DewfordTown_Gym/scripts.pory"

# 261 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 266 "data/maps/DewfordTown_Gym/scripts.pory"

# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 272 "data/maps/DewfordTown_Gym/scripts.pory"

# 273 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 294 "data/maps/DewfordTown_Gym/scripts.pory"

# 295 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 303 "data/maps/DewfordTown_Gym/scripts.pory"

# 304 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 329 "data/maps/DewfordTown_Gym/scripts.pory"

# 330 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 336 "data/maps/DewfordTown_Gym/scripts.pory"

# 337 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 344 "data/maps/DewfordTown_Gym/scripts.pory"

# 345 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 349 "data/maps/DewfordTown_Gym/scripts.pory"

# 350 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 354 "data/maps/DewfordTown_Gym/scripts.pory"

# 355 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 359 "data/maps/DewfordTown_Gym/scripts.pory"

# 360 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 364 "data/maps/DewfordTown_Gym/scripts.pory"

# 365 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 369 "data/maps/DewfordTown_Gym/scripts.pory"

# 370 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 374 "data/maps/DewfordTown_Gym/scripts.pory"

# 375 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 379 "data/maps/DewfordTown_Gym/scripts.pory"

# 380 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 389 "data/maps/DewfordTown_Gym/scripts.pory"

# 390 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 399 "data/maps/DewfordTown_Gym/scripts.pory"

# 400 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 404 "data/maps/DewfordTown_Gym/scripts.pory"

# 405 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 409 "data/maps/DewfordTown_Gym/scripts.pory"

# 410 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 417 "data/maps/DewfordTown_Gym/scripts.pory"

# 418 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 422 "data/maps/DewfordTown_Gym/scripts.pory"

# 423 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 428 "data/maps/DewfordTown_Gym/scripts.pory"

# 429 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 434 "data/maps/DewfordTown_Gym/scripts.pory"

# 435 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 439 "data/maps/DewfordTown_Gym/scripts.pory"

# 440 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 444 "data/maps/DewfordTown_Gym/scripts.pory"

# 445 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"

# 461 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"

# 465 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"

# 469 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"

# 472 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"

# 476 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"

# 481 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"

# 485 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 491 "data/maps/DewfordTown_Gym/scripts.pory"

# 492 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 494 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 495 "data/maps/DewfordTown_Gym/scripts.pory"

# 496 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 499 "data/maps/DewfordTown_Gym/scripts.pory"

# 500 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"

# 506 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"

# 510 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"

# 514 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"

# 518 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"

# 522 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 523 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"

# 526 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"

# 530 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 533 "data/maps/DewfordTown_Gym/scripts.pory"

# 534 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"

# 538 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"

# 542 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 549 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 550 "data/maps/DewfordTown_Gym/scripts.pory"

# 551 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 557 "data/maps/DewfordTown_Gym/scripts.pory"

# 558 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 561 "data/maps/DewfordTown_Gym/scripts.pory"

# 562 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 565 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 570 "data/maps/DewfordTown_Gym/scripts.pory"

# 571 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 576 "data/maps/DewfordTown_Gym/scripts.pory"

# 577 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 578 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"

# 581 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 582 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 585 "data/maps/DewfordTown_Gym/scripts.pory"

# 586 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"

# 589 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 593 "data/maps/DewfordTown_Gym/scripts.pory"

# 594 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 595 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 599 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 600 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 601 "data/maps/DewfordTown_Gym/scripts.pory"

# 602 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 605 "data/maps/DewfordTown_Gym/scripts.pory"

# 606 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 609 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 610 "data/maps/DewfordTown_Gym/scripts.pory"

# 611 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 612 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 613 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 614 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 615 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 616 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 617 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 618 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 619 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
