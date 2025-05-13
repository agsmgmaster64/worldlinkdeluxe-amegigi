Route103_EventScript_Ralsei::
# 4 "data/maps/Route103/scripts.pory"
	lockall
# 5 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RalseiRoute103Pokemon
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
	msgbox Route103_Text_RalseiLetsBattle
# 15 "data/maps/Route103/scripts.pory"
	closemessage
# 16 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_RalseiDefeated
# 17 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RalseiTimeToHeadBack
# 18 "data/maps/Route103/scripts.pory"
	closemessage
# 19 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 20 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_Ralsei_3
# 22 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_Ralsei_4
# 24 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_Ralsei_5
# 25 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_Ralsei_5
Route103_EventScript_Ralsei_1:
	end

Route103_EventScript_Ralsei_3:
# 21 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingSouth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_4:
# 23 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingNorth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_5:
# 26 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingEastOrWest
	goto Route103_EventScript_Ralsei_1


Route103_EventScript_RalseiExitFacingNorth::
# 33 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 34 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExitFacingNorth1
# 35 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 37 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExitFacingNorth2
# 38 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingEastOrWest::
# 44 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 45 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit1
# 46 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 48 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit2
# 49 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingSouth::
# 55 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit1
# 56 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 58 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit2
# 59 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiEnd::
# 65 "data/maps/Route103/scripts.pory"
	removeobject 2
# 66 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 67 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 68 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 69 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 70 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 71 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 72 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/Route103/scripts.pory"
	releaseall
	end


# 98 "data/maps/Route103/scripts.pory"

# 99 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 102 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 103 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 104 "data/maps/Route103/scripts.pory"
	.byte 0
# 105 "data/maps/Route103/scripts.pory"

# 106 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 107 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 111 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 112 "data/maps/Route103/scripts.pory"
	end
# 113 "data/maps/Route103/scripts.pory"

# 114 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 115 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 116 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 117 "data/maps/Route103/scripts.pory"
	return
# 118 "data/maps/Route103/scripts.pory"

# 119 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 120 "data/maps/Route103/scripts.pory"
	lockall
# 121 "data/maps/Route103/scripts.pory"
	checkplayergender
# 122 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 123 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 124 "data/maps/Route103/scripts.pory"
	end
# 125 "data/maps/Route103/scripts.pory"

# 126 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 127 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 128 "data/maps/Route103/scripts.pory"
	closemessage
# 129 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 130 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 131 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 133 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 137 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartMayBattleTreecko
# 138 "data/maps/Route103/scripts.pory"
	end
# 139 "data/maps/Route103/scripts.pory"

# 140 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 141 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 142 "data/maps/Route103/scripts.pory"
	closemessage
# 143 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 144 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 145 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 147 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 149 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 151 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartBrendanBattleTreecko
# 152 "data/maps/Route103/scripts.pory"
	end
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 155 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 156 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 157 "data/maps/Route103/scripts.pory"
	end
# 158 "data/maps/Route103/scripts.pory"

# 159 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 160 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 161 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 162 "data/maps/Route103/scripts.pory"
	end
# 163 "data/maps/Route103/scripts.pory"

# 164 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 165 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 166 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 167 "data/maps/Route103/scripts.pory"
	end
# 168 "data/maps/Route103/scripts.pory"

# 169 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 170 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 171 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 172 "data/maps/Route103/scripts.pory"
	end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 175 "data/maps/Route103/scripts.pory"
	closemessage
# 176 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 177 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 178 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 179 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 180 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 181 "data/maps/Route103/scripts.pory"
	end
# 182 "data/maps/Route103/scripts.pory"

# 183 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 184 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 185 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 186 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 188 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 189 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 191 "data/maps/Route103/scripts.pory"
	end
# 192 "data/maps/Route103/scripts.pory"

# 193 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 194 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 195 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 196 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 198 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 199 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 201 "data/maps/Route103/scripts.pory"
	end
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 204 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 205 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 207 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 208 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 210 "data/maps/Route103/scripts.pory"
	end
# 211 "data/maps/Route103/scripts.pory"

# 212 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 213 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 214 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 215 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 216 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 217 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 218 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 219 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 220 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 221 "data/maps/Route103/scripts.pory"
	releaseall
# 222 "data/maps/Route103/scripts.pory"
	end
# 223 "data/maps/Route103/scripts.pory"

# 224 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 225 "data/maps/Route103/scripts.pory"
	walk_left
# 226 "data/maps/Route103/scripts.pory"
	walk_down
# 227 "data/maps/Route103/scripts.pory"
	step_end
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 230 "data/maps/Route103/scripts.pory"
	jump_2_down
# 231 "data/maps/Route103/scripts.pory"
	delay_16
# 232 "data/maps/Route103/scripts.pory"
	walk_down
# 233 "data/maps/Route103/scripts.pory"
	walk_down
# 234 "data/maps/Route103/scripts.pory"
	walk_down
# 235 "data/maps/Route103/scripts.pory"
	walk_down
# 236 "data/maps/Route103/scripts.pory"
	step_end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 239 "data/maps/Route103/scripts.pory"
	delay_16
# 240 "data/maps/Route103/scripts.pory"
	delay_4
# 241 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 242 "data/maps/Route103/scripts.pory"
	delay_16
# 243 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 244 "data/maps/Route103/scripts.pory"
	step_end
# 245 "data/maps/Route103/scripts.pory"

# 246 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 247 "data/maps/Route103/scripts.pory"
	walk_down
# 248 "data/maps/Route103/scripts.pory"
	step_end
# 249 "data/maps/Route103/scripts.pory"

# 250 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 251 "data/maps/Route103/scripts.pory"
	jump_2_down
# 252 "data/maps/Route103/scripts.pory"
	delay_16
# 253 "data/maps/Route103/scripts.pory"
	walk_down
# 254 "data/maps/Route103/scripts.pory"
	walk_down
# 255 "data/maps/Route103/scripts.pory"
	walk_down
# 256 "data/maps/Route103/scripts.pory"
	step_end
# 257 "data/maps/Route103/scripts.pory"

# 258 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 259 "data/maps/Route103/scripts.pory"
	delay_16
# 260 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 261 "data/maps/Route103/scripts.pory"
	step_end
# 262 "data/maps/Route103/scripts.pory"

# 263 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 264 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 265 "data/maps/Route103/scripts.pory"
	end
# 266 "data/maps/Route103/scripts.pory"

# 267 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 268 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 269 "data/maps/Route103/scripts.pory"
	end
# 270 "data/maps/Route103/scripts.pory"

# 271 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 272 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 273 "data/maps/Route103/scripts.pory"
	end
# 274 "data/maps/Route103/scripts.pory"

# 275 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 276 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 277 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route103/scripts.pory"
	end
# 279 "data/maps/Route103/scripts.pory"

# 280 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 281 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 282 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 283 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 284 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route103/scripts.pory"
	end
# 286 "data/maps/Route103/scripts.pory"

# 287 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 288 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 289 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 290 "data/maps/Route103/scripts.pory"
	release
# 291 "data/maps/Route103/scripts.pory"
	end
# 292 "data/maps/Route103/scripts.pory"

# 293 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 294 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 295 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route103/scripts.pory"
	end
# 297 "data/maps/Route103/scripts.pory"

# 298 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 299 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 300 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 301 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 302 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route103/scripts.pory"
	end
# 304 "data/maps/Route103/scripts.pory"

# 305 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 306 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 307 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 308 "data/maps/Route103/scripts.pory"
	release
# 309 "data/maps/Route103/scripts.pory"
	end
# 310 "data/maps/Route103/scripts.pory"

# 311 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 312 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 313 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route103/scripts.pory"
	end
# 315 "data/maps/Route103/scripts.pory"

# 316 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 317 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 318 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route103/scripts.pory"
	end
# 320 "data/maps/Route103/scripts.pory"

# 321 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 322 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 323 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 324 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 325 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 326 "data/maps/Route103/scripts.pory"
	release
# 327 "data/maps/Route103/scripts.pory"
	end
# 328 "data/maps/Route103/scripts.pory"

# 329 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 330 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 331 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 332 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 333 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 334 "data/maps/Route103/scripts.pory"
	release
# 335 "data/maps/Route103/scripts.pory"
	end
# 336 "data/maps/Route103/scripts.pory"

# 337 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 338 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 339 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route103/scripts.pory"
	end
# 341 "data/maps/Route103/scripts.pory"

# 342 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 343 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 344 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route103/scripts.pory"
	end
# 346 "data/maps/Route103/scripts.pory"

# 347 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 348 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 349 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route103/scripts.pory"
	end
# 351 "data/maps/Route103/scripts.pory"

# 352 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 353 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 354 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route103/scripts.pory"
	end
# 356 "data/maps/Route103/scripts.pory"

# 357 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 358 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 359 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route103/scripts.pory"
	end
# 361 "data/maps/Route103/scripts.pory"

# 362 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 363 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 364 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 365 "data/maps/Route103/scripts.pory"

# 366 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 367 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 368 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 369 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 370 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 371 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 372 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 373 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 374 "data/maps/Route103/scripts.pory"

# 375 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 376 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 377 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 378 "data/maps/Route103/scripts.pory"

# 379 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 380 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 381 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 382 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 383 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 384 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 385 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 386 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 387 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 388 "data/maps/Route103/scripts.pory"

# 389 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 390 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 391 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 392 "data/maps/Route103/scripts.pory"

# 393 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 394 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 395 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 396 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 397 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 398 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 399 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 400 "data/maps/Route103/scripts.pory"

# 401 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 402 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 403 "data/maps/Route103/scripts.pory"

# 404 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 405 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 406 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 407 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 408 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 409 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 410 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 411 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 412 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 413 "data/maps/Route103/scripts.pory"

# 414 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 415 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 416 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 417 "data/maps/Route103/scripts.pory"

# 418 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 419 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 420 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 421 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 422 "data/maps/Route103/scripts.pory"

# 423 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 424 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 425 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_Text_RalseiRoute103Pokemon::
# 77 "data/maps/Route103/scripts.pory"
	.string "Now, what did Shiori want me to find in\n"
	.string "here again?$"

Route103_Text_RalseiLetsBattle::
# 81 "data/maps/Route103/scripts.pory"
	.string "Oh hello there, what are you doing here?\p"
	.string "I see, so you're {PLAYER}\n"
	.string "and my partner Shiori has sent you to\l"
	.string "retrieve me back, huh?\p"
	.string "She even trusted you with your own\n"
	.string "Puppet as well, that's pretty nice.\p"
	.string "Forgive me, but may I test your skills\n"
	.string "here to see if you're worthy of holding\l"
	.string "that Puppet there?\p"
	.string "I promise not to be too hard on you with\n"
	.string "this battle here, since this must be\l"
	.string "your first trainer battle here.$"

Route103_Text_RalseiDefeated::
# 89 "data/maps/Route103/scripts.pory"
	.string "Good job!\n"
	.string "You managed to beat me here!$"

Route103_Text_RalseiTimeToHeadBack::
# 93 "data/maps/Route103/scripts.pory"
	.string "I see you carry great potential within,\n"
	.string "even if you are new to this whole\l"
	.string "Puppet thing.\p"
	.string "No wonder Shiori trusted you with this\n"
	.string "Puppet that you have with you.\p"
	.string "Very well, I guess I'll have to go back\n"
	.string "to the Lab to see what Shiori wants me\l"
	.string "to do.$"
