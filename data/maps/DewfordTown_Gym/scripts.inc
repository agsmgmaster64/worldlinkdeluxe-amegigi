DewfordTown_Gym_EventScript_Diamond1::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_TEMP_A, 1
# 6 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Diamond1_2
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_A
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Diamond1_6
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Diamond1_7
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Diamond1_8
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Diamond1_9
DewfordTown_Gym_EventScript_Diamond1_4:
	end

DewfordTown_Gym_EventScript_Diamond1_2:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Diamond1_6:
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_1
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_7:
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_2
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_8:
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_3
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_9:
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_4
	goto DewfordTown_Gym_EventScript_Diamond1_4


DewfordTown_Gym_EventScript_Spade1::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_TEMP_A, 1
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Spade1_2
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_TEMP_A
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Spade1_6
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Spade1_7
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Spade1_8
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Spade1_9
DewfordTown_Gym_EventScript_Spade1_4:
	end

DewfordTown_Gym_EventScript_Spade1_2:
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Spade1_6:
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_5
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_7:
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_6
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_8:
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_7
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_9:
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_8
	goto DewfordTown_Gym_EventScript_Spade1_4


DewfordTown_Gym_EventScript_Swap1::
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
	end


DewfordTown_Gym_EventScript_ClearPuzzle1::
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_2
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_3
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_4
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_5
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_6
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_7
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_TEMP_8
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_A, 0
	return


# 77 "data/maps/DewfordTown_Gym/scripts.pory"

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 81 "data/maps/DewfordTown_Gym/scripts.pory"

# 82 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 85 "data/maps/DewfordTown_Gym/scripts.pory"

# 86 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 97 "data/maps/DewfordTown_Gym/scripts.pory"

# 98 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 106 "data/maps/DewfordTown_Gym/scripts.pory"

# 107 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 110 "data/maps/DewfordTown_Gym/scripts.pory"

# 111 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 114 "data/maps/DewfordTown_Gym/scripts.pory"

# 115 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 118 "data/maps/DewfordTown_Gym/scripts.pory"

# 119 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 122 "data/maps/DewfordTown_Gym/scripts.pory"

# 123 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 126 "data/maps/DewfordTown_Gym/scripts.pory"

# 127 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 131 "data/maps/DewfordTown_Gym/scripts.pory"

# 132 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 143 "data/maps/DewfordTown_Gym/scripts.pory"

# 144 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 146 "data/maps/DewfordTown_Gym/scripts.pory"

# 147 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 153 "data/maps/DewfordTown_Gym/scripts.pory"

# 154 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 159 "data/maps/DewfordTown_Gym/scripts.pory"

# 160 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 165 "data/maps/DewfordTown_Gym/scripts.pory"

# 166 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 177 "data/maps/DewfordTown_Gym/scripts.pory"

# 178 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 189 "data/maps/DewfordTown_Gym/scripts.pory"

# 190 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 246 "data/maps/DewfordTown_Gym/scripts.pory"

# 247 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 253 "data/maps/DewfordTown_Gym/scripts.pory"

# 254 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 261 "data/maps/DewfordTown_Gym/scripts.pory"

# 262 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 266 "data/maps/DewfordTown_Gym/scripts.pory"

# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 271 "data/maps/DewfordTown_Gym/scripts.pory"

# 272 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 276 "data/maps/DewfordTown_Gym/scripts.pory"

# 277 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 281 "data/maps/DewfordTown_Gym/scripts.pory"

# 282 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 286 "data/maps/DewfordTown_Gym/scripts.pory"

# 287 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 291 "data/maps/DewfordTown_Gym/scripts.pory"

# 292 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 296 "data/maps/DewfordTown_Gym/scripts.pory"

# 297 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 301 "data/maps/DewfordTown_Gym/scripts.pory"

# 302 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 311 "data/maps/DewfordTown_Gym/scripts.pory"

# 312 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 316 "data/maps/DewfordTown_Gym/scripts.pory"

# 317 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 321 "data/maps/DewfordTown_Gym/scripts.pory"

# 322 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 326 "data/maps/DewfordTown_Gym/scripts.pory"

# 327 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 334 "data/maps/DewfordTown_Gym/scripts.pory"

# 335 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 339 "data/maps/DewfordTown_Gym/scripts.pory"

# 340 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 351 "data/maps/DewfordTown_Gym/scripts.pory"

# 352 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 356 "data/maps/DewfordTown_Gym/scripts.pory"

# 357 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 361 "data/maps/DewfordTown_Gym/scripts.pory"

# 362 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 377 "data/maps/DewfordTown_Gym/scripts.pory"

# 378 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"

# 382 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"

# 386 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"

# 389 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"

# 393 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"

# 398 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"

# 402 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"

# 409 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"

# 417 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"

# 423 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"

# 427 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"

# 431 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"

# 435 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"

# 439 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"

# 443 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"

# 447 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"

# 451 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"

# 455 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"

# 459 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"

# 468 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"

# 475 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"

# 479 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 487 "data/maps/DewfordTown_Gym/scripts.pory"

# 488 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"

# 494 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"

# 498 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"

# 503 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"

# 506 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 510 "data/maps/DewfordTown_Gym/scripts.pory"

# 511 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 514 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 518 "data/maps/DewfordTown_Gym/scripts.pory"

# 519 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 522 "data/maps/DewfordTown_Gym/scripts.pory"

# 523 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 527 "data/maps/DewfordTown_Gym/scripts.pory"

# 528 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 530 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
