# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.set LOCALID_BOUNCER, 24
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerId_Onframe
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    @ Game Corner prices
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_DOUBLE_TEAM_COINS, 1500
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_PSYCHIC_COINS, 3500
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_FLAMETHROWER_COINS, 4000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_THUNDERBOLT_COINS, 4000
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_ICE_BEAM_COINS, 4000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS, 1000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set RARECANDY_COINS, 4000
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set SUNSTONE_COINS, 2000
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set MOONSTONE_COINS, 2000
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set FIRESTONE_COINS, 2000
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set THUNDERSTONE_COINS, 2000
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set WATERSTONE_COINS, 2000
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set LEAFSTONE_COINS, 2000
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set CHOICEBAND_COINS, 4500
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set BRIGHTPOWDER_COINS, 4500
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
TrainerId_Onframe:
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script_2 VAR_TRAINER_ID_CHECK, 0, BouncerCheck
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.2byte 0
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BouncerCheck::
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_ExclamationMark
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_Delay48
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Movement_Bouncer_Approach
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer1, MSGBOX_DEFAULT
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TRAINER_ID_CHECK, 1
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Movement_Bouncer_Leave
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	playbgm MUS_CASINO_PLUS_7, FALSE
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	goto_if_eq VAR_FLIP_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_FLIP_WINNINGS
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
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
	setvar VAR_FLIP_WINNINGS, 0
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
	setvar VAR_FLIP_WINNINGS, 0
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
	buffernumberstring STR_VAR_1, VAR_FLIP_WINNINGS	
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
	addcoins VAR_FLIP_WINNINGS
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_WINNINGS, 0
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_FLIP_LEVEL, 0
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Basic::
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Great::
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Ultra::
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Master::
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelBJ::
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_NoWin::
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelVF::
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew::
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew2::
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage::
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2::
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize::
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2::
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize::
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW, FALSE
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_RareCandy
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_SunStone
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MoonStone
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChoiceBand
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BrightPowder
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize2::
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW2, FALSE
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_FireStone
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ThunderStone
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_WaterStone
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_LeafStone
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoiceBand::
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CHOICE_BAND
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_CHOICE_BAND
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BrightPowder::
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BRIGHT_POWDER
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_BRIGHT_POWDER
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RareCandy::
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RARE_CANDY
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_RARE_CANDY
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SunStone::
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SUN_STONE
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_SUN_STONE
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MoonStone::
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MOON_STONE
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_MOON_STONE
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ThunderStone::
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_THUNDER_STONE
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_THUNDER_STONE
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_WaterStone::
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_WATER_STONE
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_WATER_STONE
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_LeafStone::
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LEAF_STONE
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_LEAF_STONE
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FireStone::
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FIRE_STONE
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_FIRE_STONE
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmNewPrize::
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//special BufferItemName
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX, MSGBOX_YESNO
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyRareCandy
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuySunStone
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMoonStone
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyFireStone
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyThunderStone
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyWaterStone
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyLeafStone
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyChoiceBand
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyBrightPowder
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyBrightPowder::
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, BRIGHTPOWDER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_BRIGHT_POWDER
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins BRIGHTPOWDER_COINS
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_BRIGHT_POWDER
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyChoiceBand::
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, CHOICEBAND_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_CHOICE_BAND
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins CHOICEBAND_COINS
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_CHOICE_BAND
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyRareCandy::
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, RARECANDY_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_RARE_CANDY
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins RARECANDY_COINS
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_RARE_CANDY
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuySunStone::
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, SUNSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_SUN_STONE
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins SUNSTONE_COINS
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_SUN_STONE
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMoonStone::
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, MOONSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins MOONSTONE_COINS
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_MOON_STONE
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyFireStone::
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, FIRESTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_FIRE_STONE
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins FIRESTONE_COINS
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_FIRE_STONE
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyThunderStone::
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, THUNDERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_THUNDER_STONE
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins THUNDERSTONE_COINS
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_THUNDER_STONE
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyWaterStone::
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, WATERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_WATER_STONE
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins WATERSTONE_COINS
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_WATER_STONE
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyLeafStone::
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, LEAFSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_LEAF_STONE
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins LEAFSTONE_COINS
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_LEAF_STONE
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_MANA_BURST
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_MANA_BURST
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_MANA_BURST
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_MANA_BURST
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew::
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2::
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew::
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew2::
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer::
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer, MSGBOX_NPC
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer2::
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer2, MSGBOX_NPC
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy1::
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy1, MSGBOX_NPC
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy2::
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy2, MSGBOX_NPC
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PachinkoGuy::
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_PachinkoGuy, MSGBOX_DEFAULT
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Hiker::
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Hiker, MSGBOX_DEFAULT
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Bouncer::
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer2, MSGBOX_DEFAULT
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady1::
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_1, MSGBOX_DEFAULT
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady2::
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_2, MSGBOX_DEFAULT
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fisherman::
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Fisherman, MSGBOX_DEFAULT
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gachalady::
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Gachalady, MSGBOX_DEFAULT
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Employee::
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Employee, MSGBOX_DEFAULT
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_JuiceLady::	
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase2
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Juice, MSGBOX_YESNO
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 10, Juice_Not_Enough
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 10
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase2::
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase, MSGBOX_DEFAULT
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_PachinkoGuy:
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I used to own one of these dusty old\n"
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DROPSPIN MACHINES.\p"
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The manual always said 'Use the\n"
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DIRECTIONAL BUTTONS to TILT and\l"
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "change the DROP SPEED…'\p"
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I've always wondered what that\n"
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "means.$"
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Hiker:
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gah!\n"
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I blew it all on that ONIX game.\p"
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be careful…\p"
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You only win 2 COINS for\n"
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "every point in these machines.$"
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_1:
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Looking to bet on the DERBY?\n"
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We've gone digital!\p"
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Use one of the tablets\n"
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in front of the counter.$"	
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_2:
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's not all about CONDITION.\p"
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "At the end of the day, it's\n"
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "really all luck.\p"
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sometimes it's best to just\n"
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick your favorite!$"	
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Fisherman:
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I come here for the food.\p"
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's no CELADON CAFE…\n"
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But it'll do.$"		
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachalady:
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The LOTTERY MACHINES have odds,\n"
# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "but nothing is guaranteed.\p"
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some machines are better than\n"
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "others, and there are different\l"
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rarities in all of them.\p"
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "New POKéMON are also weighted\n"
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "By your POKéDEX, so be wary.$"	
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Employee:
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm on the lookout for cheaters.\n"
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nobody likes a cheater!$"
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer1:
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need a valid TRAINER ID\n"
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "to enter the GAME CORNER.\p"
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Let's see…\p"
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hmm…\p"
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Everything looks good here.\n"
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer2:
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pachinko:
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "A DROPSPIN MACHINE!\n"
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's 3 COINS per BALL.$"
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX:
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1}?$"
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BlackJack:
# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a BLACKJACK TABLE!\n"
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to play?$"
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby:
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's the MAUVILLE DERBY!\n"
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to place a bet?$"	
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Snake:
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\n"
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"		
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bird:
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\n"
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"		
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Meowth:
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BS:
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\n"
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Seel:
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"
# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Diglett:
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 COINS to play.$"
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Gengar:
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 100 COINS to play.$"
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF:
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\n"
# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 COINS to play.$"
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again_Text:
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Too bad.\n"
# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try again soon!$"
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_YOU_WON_TEXT:
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You won\n"
# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} COINS!$"
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_Not_Enough:
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\p"
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Snake_Not_Enough:
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\p"
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bjuice_Not_Enough:
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"	
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bird_Not_Enough:
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\p"
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"		
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BS_Not_Enough:
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\p"
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Flip_Not_Enough:
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\p"
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF_Keep_Going:
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You've made {STR_VAR_1} COINS.\n"
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Keep going?$"
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 1754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 1755 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 1757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 1758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 1759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 1760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 1761 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 1763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 1764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 1765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 1766 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 1768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 1769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 1770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 1771 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 1773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 1774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 1775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 1776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 1777 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 1779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 1780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 1781 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 1783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 1784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 1785 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Dealer:
# 1787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some say BLACKJACK is about skill.\n"
# 1788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Others say it's about luck.\p"
# 1789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I say it's about having fun…\n"
# 1790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "and maybe winning big!$"
# 1791 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Dealer2:
# 1793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can bet anything divisible\n"
# 1794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "by 10 here.\p"
# 1795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Maybe you should go all in!$"	
# 1796 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy1:
# 1798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to play VOLTORB FLIP?\p"
# 1799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be on the other\n"
# 1800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "side of the table.$"
# 1801 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy2:
# 1803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try the other side of\n"
# 1804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the table, pal.$"
# 1805 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 1807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 1808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 1809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 1810 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 1812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 1813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 1814 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 1816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 1817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 1818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 1819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 1820 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 1822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 1823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 1824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 1826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 1827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 1828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 1829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 1830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 1831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 1832 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase:
# 1838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh? Looks like you need\n"
# 1839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Juice:
# 1842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "BERRY JUICE!\n"
# 1843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Just 10 COINS.$"
