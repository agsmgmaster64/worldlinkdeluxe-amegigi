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
	playbgm MUS_RG_PEWTER, FALSE
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartDerby
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Snake::
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Onix_Not_Enough
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Snake, MSGBOX_YESNO
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartSnake
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FlappyBird::
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Butterfree_Not_Enough
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bird, MSGBOX_YESNO
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartFlappyBird
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BlockStacker::
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, BlockStacker_Not_Enough
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BS, MSGBOX_YESNO
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_1, FALSE
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlockStacker
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BlockStacker_Not_Enough::
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox BS_Not_Enough, MSGBOX_DEFAULT
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Pinball_Not_Enough::
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_Not_Enough, MSGBOX_DEFAULT
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Onix_Not_Enough::
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Snake_Not_Enough, MSGBOX_DEFAULT
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Juice_Not_Enough::
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bjuice_Not_Enough, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Butterfree_Not_Enough::
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bird_Not_Enough, MSGBOX_DEFAULT
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Not_Enough::
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Flip_Not_Enough, MSGBOX_DEFAULT
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Pachinko::	
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pachinko, MSGBOX_YESNO
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_ZGS_DARK_BLOW_HOLE, FALSE
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayPachinko
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballMeowth::
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Meowth, MSGBOX_YESNO
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_2, FALSE
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayMeowthPinballGame
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballDiglett::
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, Pinball_Not_Enough
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Diglett, MSGBOX_YESNO
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_3, FALSE
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayDiglettPinballGame
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballSeel::
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Seel, MSGBOX_YESNO
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_9, FALSE
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlaySeelPinballGame
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate 
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballGengar::
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, Pinball_Not_Enough
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Gengar, MSGBOX_YESNO
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_5, FALSE
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayGengarPinballGame
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VoltorbFlip::
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, VF_Not_Enough
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF, MSGBOX_YESNO
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_HGSS_CASINO, FALSE
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again::
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox VF_Come_Again_Text, MSGBOX_DEFAULT
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Go_On::
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS	
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF_Keep_Going, MSGBOX_YESNO
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VF_Cash_Out
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto VF_Loop
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Loop::
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Cash_Out::	
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if FLIP_VAR_LEVEL != 0
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar FLIP_VAR_LEVEL, 0
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Basic::
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Great::
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Ultra::
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Master::
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelBJ::
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_NoWin::
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelVF::
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew::
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew2::
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage::
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2::
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize::
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2::
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize::
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW, FALSE
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_RareCandy
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_SunStone
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MoonStone
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChoiceBand
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BrightPowder
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize2::
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW2, FALSE
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_FireStone
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ThunderStone
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_WaterStone
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_LeafStone
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoiceBand::
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CHOICE_RIBBON
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_CHOICE_RIBBON
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BrightPowder::
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BRIGHT_POWDER
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_BRIGHT_POWDER
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RareCandy::
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RARE_CANDY
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_RARE_CANDY
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SunStone::
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JUST_HEART
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_JUST_HEART
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MoonStone::
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELPER_HEART
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_HELPER_HEART
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ThunderStone::
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POWER_HEART
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_POWER_HEART
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_WaterStone::
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GUARD_HEART
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_GUARD_HEART
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_LeafStone::
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SWIFT_HEART
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_SWIFT_HEART
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FireStone::
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TECH_HEART
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TECH_HEART
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmNewPrize::
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//special BufferItemName
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX, MSGBOX_YESNO
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyRareCandy
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuySunStone
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMoonStone
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyFireStone
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyThunderStone
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyWaterStone
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyLeafStone
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyChoiceBand
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyBrightPowder
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyBrightPowder::
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, BRIGHTPOWDER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_BRIGHT_POWDER
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins BRIGHTPOWDER_COINS
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_BRIGHT_POWDER
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyChoiceBand::
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, CHOICEBAND_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_CHOICE_RIBBON
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins CHOICEBAND_COINS
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_CHOICE_RIBBON
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyRareCandy::
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, RARECANDY_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_RARE_CANDY
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins RARECANDY_COINS
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_RARE_CANDY
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuySunStone::
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, SUNSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_JUST_HEART
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins SUNSTONE_COINS
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_JUST_HEART
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMoonStone::
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, MOONSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_HELPER_HEART
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins MOONSTONE_COINS
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_HELPER_HEART
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyFireStone::
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, FIRESTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_POWER_HEART
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins FIRESTONE_COINS
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_POWER_HEART
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyThunderStone::
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, THUNDERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_GUARD_HEART
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins THUNDERSTONE_COINS
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_GUARD_HEART
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyWaterStone::
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, WATERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_SWIFT_HEART
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins WATERSTONE_COINS
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_SWIFT_HEART
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyLeafStone::
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, LEAFSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TECH_HEART
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins LEAFSTONE_COINS
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TECH_HEART
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_MANA_BURST
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_MANA_BURST
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_MANA_BURST
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_MANA_BURST
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew::
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2::
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew::
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew2::
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer::
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer, MSGBOX_NPC
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer2::
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer2, MSGBOX_NPC
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy1::
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy1, MSGBOX_NPC
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy2::
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy2, MSGBOX_NPC
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PachinkoGuy::
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_PachinkoGuy, MSGBOX_DEFAULT
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Hiker::
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Hiker, MSGBOX_DEFAULT
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Bouncer::
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer2, MSGBOX_DEFAULT
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady1::
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_1, MSGBOX_DEFAULT
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady2::
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_2, MSGBOX_DEFAULT
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fisherman::
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Fisherman, MSGBOX_DEFAULT
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gachalady::
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Gachalady, MSGBOX_DEFAULT
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Employee::
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Employee, MSGBOX_DEFAULT
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_JuiceLady::	
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase2
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Juice, MSGBOX_YESNO
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 10, Juice_Not_Enough
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 10
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine_rg VAR_RESULT
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase2::
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase, MSGBOX_DEFAULT
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_PachinkoGuy:
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I used to own one of these dusty old\n"
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DROPSPIN MACHINES.\p"
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The manual always said 'Use the\n"
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DIRECTIONAL BUTTONS to TILT and\l"
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "change the DROP SPEED…'\p"
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I've always wondered what that\n"
# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "means.$"
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Hiker:
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gah!\n"
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I blew it all on that ONIX game.\p"
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be careful…\p"
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You only win 2 Coins for\n"
# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "every point in these machines.$"
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_1:
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Looking to bet on the DERBY?\n"
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We've gone digital!\p"
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Use one of the tablets\n"
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in front of the counter.$"	
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_2:
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's not all about CONDITION.\p"
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "At the end of the day, it's\n"
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "really all luck.\p"
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sometimes it's best to just\n"
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick your favorite!$"	
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Fisherman:
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I come here for the food.\p"
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's no CELADON CAFE…\n"
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But it'll do.$"		
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachalady:
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The LOTTERY MACHINES have odds,\n"
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "but nothing is guaranteed.\p"
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some machines are better than\n"
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "others, and there are different\l"
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rarities in all of them.\p"
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "New POKéMON are also weighted\n"
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "By your POKéDEX, so be wary.$"	
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Employee:
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm on the lookout for cheaters.\n"
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nobody likes a cheater!$"
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer1:
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need a valid TRAINER ID\n"
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "to enter the GAME CORNER.\p"
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Let's see…\p"
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hmm…\p"
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Everything looks good here.\n"
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer2:
# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pachinko:
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "A DROPSPIN MACHINE!\n"
# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's 3 Coins per BALL.$"
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some Coins for\n"
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the Coins.$"
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for Coins?\p"
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 Coins.\n"
# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your Coins!$"
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need Coins, then?\n"
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your Coins for\n"
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX:
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1}?$"
# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BlackJack:
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a BLACKJACK TABLE!\n"
# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to play?$"
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby:
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's the MAUVILLE DERBY!\n"
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to place a bet?$"	
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Snake:
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\n"
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"		
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bird:
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\n"
# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"		
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Meowth:
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BS:
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\n"
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Seel:
# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 Coins to play.$"
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Diglett:
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 Coins to play.$"
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Gengar:
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 100 Coins to play.$"
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF:
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\n"
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 Coins to play.$"
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again_Text:
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Too bad.\n"
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try again soon!$"
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough Coins.$"
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_YOU_WON_TEXT:
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You won\n"
# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Coins!$"
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_Not_Enough:
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\p"
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Snake_Not_Enough:
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\p"
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bjuice_Not_Enough:
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough Coins.$"	
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bird_Not_Enough:
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\p"
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"		
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BS_Not_Enough:
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\p"
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Flip_Not_Enough:
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\p"
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF_Keep_Going:
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You've made {STR_VAR_1} Coins.\n"
# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Keep going?$"
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some Coins before\l"
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 1755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 1756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 1757 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 1759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 1760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 1761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 1762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 1763 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 1765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 1766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 1767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some Coins!$"
# 1768 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 1770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 1771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 1772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 1773 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 1775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 1776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 1777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your Coins if you're going to\n"
# 1778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 1779 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 1781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 1782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 1783 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 1785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Coins are needed to play here\n"
# 1786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 1787 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Dealer:
# 1789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some say BLACKJACK is about skill.\n"
# 1790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Others say it's about luck.\p"
# 1791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I say it's about having fun…\n"
# 1792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "and maybe winning big!$"
# 1793 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Dealer2:
# 1795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can bet anything divisible\n"
# 1796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "by 10 here.\p"
# 1797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Maybe you should go all in!$"	
# 1798 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy1:
# 1800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to play VOLTORB FLIP?\p"
# 1801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be on the other\n"
# 1802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "side of the table.$"
# 1803 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy2:
# 1805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try the other side of\n"
# 1806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the table, pal.$"
# 1807 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 1809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 1810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 1811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 1812 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 1814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three Coins can be used to play\n"
# 1815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 1816 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 1818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 1819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 1820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 1821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra Coins.$"
# 1822 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 1824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 1826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 1827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 1828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 1829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 1830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 1831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 1832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 Coins, but it's\n"
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 1837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1838 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase:
# 1840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh? Looks like you need\n"
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Juice:
# 1844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "BERRY JUICE!\n"
# 1845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Just 10 Coins.$"
