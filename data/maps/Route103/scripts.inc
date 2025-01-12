Route103_EventScript_Ralsei::
# 4 "data/maps/Route103/scripts.pory"
	lockall
# 5 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon
# 6 "data/maps/Route103/scripts.pory"
	closemessage
# 7 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 8 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 9 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 11 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 13 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle
# 15 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 16 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack
# 17 "data/maps/Route103/scripts.pory"
	closemessage
# 18 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 19 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_Ralsei_3
# 21 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_Ralsei_4
# 23 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_Ralsei_5
# 24 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_Ralsei_5
Route103_EventScript_Ralsei_1:
	end

Route103_EventScript_Ralsei_3:
# 20 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingSouth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_4:
# 22 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingNorth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_5:
# 25 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingEastOrWest
	goto Route103_EventScript_Ralsei_1


Route103_EventScript_RalseiExitFacingNorth::
# 32 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 33 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExitFacingNorth1
# 34 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 36 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExitFacingNorth2
# 37 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingEastOrWest::
# 43 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 44 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit1
# 45 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 47 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit2
# 48 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingSouth::
# 54 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit1
# 55 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 57 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit2
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiEnd::
# 64 "data/maps/Route103/scripts.pory"
	removeobject 2
# 65 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 66 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 67 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 68 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 69 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 70 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 71 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 72 "data/maps/Route103/scripts.pory"
	releaseall
	end


# 76 "data/maps/Route103/scripts.pory"

# 77 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 78 "data/maps/Route103/scripts.pory"

# 79 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 80 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 81 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 82 "data/maps/Route103/scripts.pory"
	.byte 0
# 83 "data/maps/Route103/scripts.pory"

# 84 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 85 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 86 "data/maps/Route103/scripts.pory"
	end
# 87 "data/maps/Route103/scripts.pory"

# 88 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 89 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 90 "data/maps/Route103/scripts.pory"
	end
# 91 "data/maps/Route103/scripts.pory"

# 92 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 93 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 94 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 95 "data/maps/Route103/scripts.pory"
	return
# 96 "data/maps/Route103/scripts.pory"

# 97 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 98 "data/maps/Route103/scripts.pory"
	lockall
# 99 "data/maps/Route103/scripts.pory"
	checkplayergender
# 100 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 101 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 102 "data/maps/Route103/scripts.pory"
	end
# 103 "data/maps/Route103/scripts.pory"

# 104 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 105 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 106 "data/maps/Route103/scripts.pory"
	closemessage
# 107 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 108 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 109 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 111 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 113 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 115 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartMayBattleTreecko
# 116 "data/maps/Route103/scripts.pory"
	end
# 117 "data/maps/Route103/scripts.pory"

# 118 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 119 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 120 "data/maps/Route103/scripts.pory"
	closemessage
# 121 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 122 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 123 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 125 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 127 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 129 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartBrendanBattleTreecko
# 130 "data/maps/Route103/scripts.pory"
	end
# 131 "data/maps/Route103/scripts.pory"

# 132 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 133 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 134 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 135 "data/maps/Route103/scripts.pory"
	end
# 136 "data/maps/Route103/scripts.pory"

# 137 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 138 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 139 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 140 "data/maps/Route103/scripts.pory"
	end
# 141 "data/maps/Route103/scripts.pory"

# 142 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 143 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 144 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 145 "data/maps/Route103/scripts.pory"
	end
# 146 "data/maps/Route103/scripts.pory"

# 147 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 148 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 149 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 150 "data/maps/Route103/scripts.pory"
	end
# 151 "data/maps/Route103/scripts.pory"

# 152 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 153 "data/maps/Route103/scripts.pory"
	closemessage
# 154 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 155 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 156 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 157 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 158 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 159 "data/maps/Route103/scripts.pory"
	end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 162 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 163 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 164 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 166 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 167 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 169 "data/maps/Route103/scripts.pory"
	end
# 170 "data/maps/Route103/scripts.pory"

# 171 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 172 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 173 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 174 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 176 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 177 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 179 "data/maps/Route103/scripts.pory"
	end
# 180 "data/maps/Route103/scripts.pory"

# 181 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 182 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 183 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 185 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 186 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 188 "data/maps/Route103/scripts.pory"
	end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 191 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 192 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 193 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 194 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 195 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 196 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 197 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 198 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 199 "data/maps/Route103/scripts.pory"
	releaseall
# 200 "data/maps/Route103/scripts.pory"
	end
# 201 "data/maps/Route103/scripts.pory"

# 202 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 203 "data/maps/Route103/scripts.pory"
	walk_left
# 204 "data/maps/Route103/scripts.pory"
	walk_down
# 205 "data/maps/Route103/scripts.pory"
	step_end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 208 "data/maps/Route103/scripts.pory"
	jump_2_down
# 209 "data/maps/Route103/scripts.pory"
	delay_16
# 210 "data/maps/Route103/scripts.pory"
	walk_down
# 211 "data/maps/Route103/scripts.pory"
	walk_down
# 212 "data/maps/Route103/scripts.pory"
	walk_down
# 213 "data/maps/Route103/scripts.pory"
	walk_down
# 214 "data/maps/Route103/scripts.pory"
	step_end
# 215 "data/maps/Route103/scripts.pory"

# 216 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 217 "data/maps/Route103/scripts.pory"
	delay_16
# 218 "data/maps/Route103/scripts.pory"
	delay_4
# 219 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 220 "data/maps/Route103/scripts.pory"
	delay_16
# 221 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 222 "data/maps/Route103/scripts.pory"
	step_end
# 223 "data/maps/Route103/scripts.pory"

# 224 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 225 "data/maps/Route103/scripts.pory"
	walk_down
# 226 "data/maps/Route103/scripts.pory"
	step_end
# 227 "data/maps/Route103/scripts.pory"

# 228 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 229 "data/maps/Route103/scripts.pory"
	jump_2_down
# 230 "data/maps/Route103/scripts.pory"
	delay_16
# 231 "data/maps/Route103/scripts.pory"
	walk_down
# 232 "data/maps/Route103/scripts.pory"
	walk_down
# 233 "data/maps/Route103/scripts.pory"
	walk_down
# 234 "data/maps/Route103/scripts.pory"
	step_end
# 235 "data/maps/Route103/scripts.pory"

# 236 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 237 "data/maps/Route103/scripts.pory"
	delay_16
# 238 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 239 "data/maps/Route103/scripts.pory"
	step_end
# 240 "data/maps/Route103/scripts.pory"

# 241 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 242 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 243 "data/maps/Route103/scripts.pory"
	end
# 244 "data/maps/Route103/scripts.pory"

# 245 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 246 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 247 "data/maps/Route103/scripts.pory"
	end
# 248 "data/maps/Route103/scripts.pory"

# 249 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 250 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 251 "data/maps/Route103/scripts.pory"
	end
# 252 "data/maps/Route103/scripts.pory"

# 253 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 254 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 255 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route103/scripts.pory"
	end
# 257 "data/maps/Route103/scripts.pory"

# 258 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 259 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 260 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 261 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 262 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route103/scripts.pory"
	end
# 264 "data/maps/Route103/scripts.pory"

# 265 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 266 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 267 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 268 "data/maps/Route103/scripts.pory"
	release
# 269 "data/maps/Route103/scripts.pory"
	end
# 270 "data/maps/Route103/scripts.pory"

# 271 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 272 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 273 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 274 "data/maps/Route103/scripts.pory"
	end
# 275 "data/maps/Route103/scripts.pory"

# 276 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 277 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 278 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 279 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 280 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route103/scripts.pory"
	end
# 282 "data/maps/Route103/scripts.pory"

# 283 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 284 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 285 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 286 "data/maps/Route103/scripts.pory"
	release
# 287 "data/maps/Route103/scripts.pory"
	end
# 288 "data/maps/Route103/scripts.pory"

# 289 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 290 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 291 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route103/scripts.pory"
	end
# 293 "data/maps/Route103/scripts.pory"

# 294 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 295 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 296 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route103/scripts.pory"
	end
# 298 "data/maps/Route103/scripts.pory"

# 299 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 300 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 301 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 302 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 303 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 304 "data/maps/Route103/scripts.pory"
	release
# 305 "data/maps/Route103/scripts.pory"
	end
# 306 "data/maps/Route103/scripts.pory"

# 307 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 308 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 309 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 311 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 312 "data/maps/Route103/scripts.pory"
	release
# 313 "data/maps/Route103/scripts.pory"
	end
# 314 "data/maps/Route103/scripts.pory"

# 315 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 316 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 317 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route103/scripts.pory"
	end
# 319 "data/maps/Route103/scripts.pory"

# 320 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 321 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 322 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route103/scripts.pory"
	end
# 324 "data/maps/Route103/scripts.pory"

# 325 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 326 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 327 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route103/scripts.pory"
	end
# 329 "data/maps/Route103/scripts.pory"

# 330 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 331 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 332 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/Route103/scripts.pory"
	end
# 334 "data/maps/Route103/scripts.pory"

# 335 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 336 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 337 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route103/scripts.pory"
	end
# 339 "data/maps/Route103/scripts.pory"

# 340 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 341 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 342 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 343 "data/maps/Route103/scripts.pory"

# 344 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 345 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 346 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 347 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 348 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 349 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 350 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 351 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 352 "data/maps/Route103/scripts.pory"

# 353 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 354 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 355 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 356 "data/maps/Route103/scripts.pory"

# 357 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 358 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 359 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 360 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 361 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 362 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 363 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 364 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 365 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 366 "data/maps/Route103/scripts.pory"

# 367 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 368 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 369 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 370 "data/maps/Route103/scripts.pory"

# 371 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 372 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 373 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 374 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 375 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 376 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 377 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 378 "data/maps/Route103/scripts.pory"

# 379 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 380 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 381 "data/maps/Route103/scripts.pory"

# 382 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 383 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 384 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 385 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 386 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 387 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 388 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 389 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 390 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 391 "data/maps/Route103/scripts.pory"

# 392 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 393 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 394 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 395 "data/maps/Route103/scripts.pory"

# 396 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 397 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 398 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 399 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 400 "data/maps/Route103/scripts.pory"

# 401 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 402 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 403 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
