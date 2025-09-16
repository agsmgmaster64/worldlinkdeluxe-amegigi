# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerId_Onframe
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    @ Game Corner prices
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_DOUBLE_TEAM_COINS, 1500
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_PSYCHIC_COINS, 3500
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_FLAMETHROWER_COINS, 4000
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_THUNDERBOLT_COINS, 4000
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_ICE_BEAM_COINS, 4000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS, 1000
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set RARECANDY_COINS, 4000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set SUNSTONE_COINS, 2000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set MOONSTONE_COINS, 2000
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set FIRESTONE_COINS, 2000
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set THUNDERSTONE_COINS, 2000
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set WATERSTONE_COINS, 2000
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set LEAFSTONE_COINS, 2000
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set CHOICEBAND_COINS, 4500
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set BRIGHTPOWDER_COINS, 4500
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
TrainerId_Onframe:
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if GAME_CORNER_VAR_ID_CHECK != 0
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script_2 GAME_CORNER_VAR_ID_CHECK, 0, BouncerCheck
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.2byte 0
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BouncerCheck::
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_BOUNCER, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_BOUNCER, Common_Movement_ExclamationMark
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_BOUNCER, Common_Movement_Delay48
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_BOUNCER, Movement_Bouncer_Approach
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer1, MSGBOX_DEFAULT
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_ID_CHECK, 1
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_BOUNCER, Movement_Bouncer_Leave
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Movement_Bouncer_Approach:
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	step_end	
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Movement_Bouncer_Leave:
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_in_place_faster_left
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	step_end		
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Blackjack::
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BlackJack, MSGBOX_YESNO
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlackJack
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Derby::
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby, MSGBOX_YESNO
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_ZGS_PEWTER, FALSE
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartDerby
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CheckWinnings::
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelVF::
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelBJ::
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_NoWin::
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Snake::
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Onix_Not_Enough
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Snake, MSGBOX_YESNO
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartSnake
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FlappyBird::
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Butterfree_Not_Enough
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bird, MSGBOX_YESNO
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartFlappyBird
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BlockStacker::
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, BlockStacker_Not_Enough
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BS, MSGBOX_YESNO
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_1, FALSE
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlockStacker
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BlockStacker_Not_Enough::
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox BS_Not_Enough, MSGBOX_DEFAULT
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Pinball_Not_Enough::
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_Not_Enough, MSGBOX_DEFAULT
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Onix_Not_Enough::
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Snake_Not_Enough, MSGBOX_DEFAULT
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Juice_Not_Enough::
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bjuice_Not_Enough, MSGBOX_DEFAULT
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Butterfree_Not_Enough::
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bird_Not_Enough, MSGBOX_DEFAULT
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Not_Enough::
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Flip_Not_Enough, MSGBOX_DEFAULT
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Pachinko::	
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pachinko, MSGBOX_YESNO
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_ZGS_DARK_BLOW_HOLE, FALSE
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayPachinko
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballMeowth::
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Meowth, MSGBOX_YESNO
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_2, FALSE
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayMeowthPinballGame
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballDiglett::
# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, Pinball_Not_Enough
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Diglett, MSGBOX_YESNO
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_3, FALSE
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayDiglettPinballGame
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballSeel::
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Seel, MSGBOX_YESNO
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_9, FALSE
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlaySeelPinballGame
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate 
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballGengar::
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, Pinball_Not_Enough
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Gengar, MSGBOX_YESNO
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_5, FALSE
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayGengarPinballGame
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VoltorbFlip::
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, VF_Not_Enough
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF, MSGBOX_YESNO
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_HGSS_CASINO, FALSE
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again::
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox VF_Come_Again_Text, MSGBOX_DEFAULT
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Go_On::
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS	
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF_Keep_Going, MSGBOX_YESNO
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VF_Cash_Out
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto VF_Loop
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Loop::
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Cash_Out::	
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if FLIP_VAR_LEVEL != 0
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar FLIP_VAR_LEVEL, 0
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Basic::
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GachaCommon::
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_ZGS_CINNABAR, FALSE
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_RecieveGachaMonParty
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_RecieveGachaMonPC
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GachaEnd:
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RecieveGachaMonParty:
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_GachaEnd
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GachaEnd
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RecieveGachaMonPC:
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_TransferGachaMonToPC
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TransferGachaMonToPC:
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GachaEnd
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Great::
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Ultra::
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Master::
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew::
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew2::
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage::
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2::
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize::
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2::
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize::
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW, FALSE
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_RareCandy
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_SunStone
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MoonStone
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChoiceBand
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BrightPowder
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize2::
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW2, FALSE
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_FireStone
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ThunderStone
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_WaterStone
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_LeafStone
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoiceBand::
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CHOICE_RIBBON
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_CHOICE_RIBBON
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BrightPowder::
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BRIGHT_POWDER
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_BRIGHT_POWDER
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RareCandy::
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RARE_CANDY
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_RARE_CANDY
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SunStone::
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JUST_HEART
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_JUST_HEART
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MoonStone::
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELPER_HEART
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_HELPER_HEART
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ThunderStone::
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POWER_HEART
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_POWER_HEART
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_WaterStone::
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GUARD_HEART
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_GUARD_HEART
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_LeafStone::
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SWIFT_HEART
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_SWIFT_HEART
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FireStone::
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TECH_HEART
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TECH_HEART
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmNewPrize::
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//special BufferItemName
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX, MSGBOX_YESNO
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyRareCandy
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuySunStone
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMoonStone
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyFireStone
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyThunderStone
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyWaterStone
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyLeafStone
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyChoiceBand
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyBrightPowder
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyBrightPowder::
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, BRIGHTPOWDER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_BRIGHT_POWDER
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins BRIGHTPOWDER_COINS
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_BRIGHT_POWDER
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyChoiceBand::
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, CHOICEBAND_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_CHOICE_RIBBON
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins CHOICEBAND_COINS
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_CHOICE_RIBBON
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyRareCandy::
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, RARECANDY_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_RARE_CANDY
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins RARECANDY_COINS
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_RARE_CANDY
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuySunStone::
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, SUNSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_JUST_HEART
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins SUNSTONE_COINS
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_JUST_HEART
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMoonStone::
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, MOONSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_HELPER_HEART
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins MOONSTONE_COINS
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_HELPER_HEART
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyFireStone::
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, FIRESTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_POWER_HEART
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins FIRESTONE_COINS
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_POWER_HEART
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyThunderStone::
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, THUNDERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_GUARD_HEART
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins THUNDERSTONE_COINS
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_GUARD_HEART
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyWaterStone::
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, WATERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_SWIFT_HEART
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins WATERSTONE_COINS
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_SWIFT_HEART
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyLeafStone::
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, LEAFSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TECH_HEART
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins LEAFSTONE_COINS
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TECH_HEART
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_MANA_BURST
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_MANA_BURST
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_MANA_BURST
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_MANA_BURST
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew::
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2::
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew::
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew2::
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer::
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer, MSGBOX_NPC
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer2::
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer2, MSGBOX_NPC
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy1::
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy1, MSGBOX_NPC
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy2::
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy2, MSGBOX_NPC
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PachinkoGuy::
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_PachinkoGuy, MSGBOX_DEFAULT
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Hiker::
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Hiker, MSGBOX_DEFAULT
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Bouncer::
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer2, MSGBOX_DEFAULT
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady1::
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_1, MSGBOX_DEFAULT
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady2::
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_2, MSGBOX_DEFAULT
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fisherman::
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Fisherman, MSGBOX_DEFAULT
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gachalady::
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Gachalady, MSGBOX_DEFAULT
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Employee::
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Employee, MSGBOX_DEFAULT
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_JuiceLady::	
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase2
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Juice, MSGBOX_YESNO
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 10, Juice_Not_Enough
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 10
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine_rg VAR_RESULT
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase2::
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase, MSGBOX_DEFAULT
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_PachinkoGuy:
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I used to own one of these dusty old\n"
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DROPSPIN MACHINES.\p"
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The manual always said 'Use the\n"
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DIRECTIONAL BUTTONS to TILT and\l"
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "change the DROP SPEED…'\p"
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I've always wondered what that\n"
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "means.$"
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Hiker:
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gah!\n"
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I blew it all on that ONIX game.\p"
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be careful…\p"
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You only win 2 Coins for\n"
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "every point in these machines.$"
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_1:
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Looking to bet on the DERBY?\n"
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We've gone digital!\p"
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Use one of the tablets\n"
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in front of the counter.$"	
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_2:
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's not all about CONDITION.\p"
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "At the end of the day, it's\n"
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "really all luck.\p"
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sometimes it's best to just\n"
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick your favorite!$"	
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Fisherman:
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I come here for the food.\p"
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's no CELADON CAFE…\n"
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But it'll do.$"		
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachalady:
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The LOTTERY MACHINES have odds,\n"
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "but nothing is guaranteed.\p"
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some machines are better than\n"
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "others, and there are different\l"
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rarities in all of them.\p"
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "New POKéMON are also weighted\n"
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "By your POKéDEX, so be wary.$"	
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Employee:
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm on the lookout for cheaters.\n"
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nobody likes a cheater!$"
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer1:
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need a valid TRAINER ID\n"
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "to enter the GAME CORNER.\p"
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Let's see…\p"
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hmm…\p"
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Everything looks good here.\n"
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer2:
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pachinko:
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "A DROPSPIN MACHINE!\n"
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's 3 Coins per BALL.$"
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some Coins for\n"
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the Coins.$"
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for Coins?\p"
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 Coins.\n"
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your Coins!$"
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need Coins, then?\n"
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your Coins for\n"
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX:
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1}?$"
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BlackJack:
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a BLACKJACK TABLE!\n"
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to play?$"
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby:
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's the MAUVILLE DERBY!\n"
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to place a bet?$"	
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Snake:
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\n"
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"		
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bird:
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\n"
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"		
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Meowth:
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BS:
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\n"
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Seel:
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Diglett:
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 Coins to play.$"
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Gengar:
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 100 Coins to play.$"
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF:
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\n"
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 Coins to play.$"
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again_Text:
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Too bad.\n"
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try again soon!$"
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough Coins.$"
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_YOU_WON_TEXT:
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You won\n"
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Coins!$"
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_Not_Enough:
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\p"
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Snake_Not_Enough:
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\p"
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bjuice_Not_Enough:
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough Coins.$"	
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bird_Not_Enough:
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\p"
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"		
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BS_Not_Enough:
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\p"
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Flip_Not_Enough:
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\p"
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF_Keep_Going:
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You've made {STR_VAR_1} Coins.\n"
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Keep going?$"
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some Coins before\l"
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some Coins!$"
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your Coins if you're going to\n"
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Coins are needed to play here\n"
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Dealer:
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some say BLACKJACK is about skill.\n"
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Others say it's about luck.\p"
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I say it's about having fun…\n"
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "and maybe winning big!$"
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Dealer2:
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can bet anything divisible\n"
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "by 10 here.\p"
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Maybe you should go all in!$"	
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy1:
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to play VOLTORB FLIP?\p"
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be on the other\n"
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "side of the table.$"
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy2:
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try the other side of\n"
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the table, pal.$"
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three Coins can be used to play\n"
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra Coins.$"
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 Coins, but it's\n"
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase:
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh? Looks like you need\n"
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Juice:
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "BERRY JUICE!\n"
# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Just 10 Coins.$"
