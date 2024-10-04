# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 5 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 10 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	end
# 17 "data/maps/Route103/scripts.pory"

# 18 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 19 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 21 "data/maps/Route103/scripts.pory"
	return
# 22 "data/maps/Route103/scripts.pory"

# 23 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 24 "data/maps/Route103/scripts.pory"
	lockall
# 25 "data/maps/Route103/scripts.pory"
	checkplayergender
# 26 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 27 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 28 "data/maps/Route103/scripts.pory"
	end
# 29 "data/maps/Route103/scripts.pory"

# 30 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 31 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 32 "data/maps/Route103/scripts.pory"
	closemessage
# 33 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 34 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 35 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 37 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 39 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 41 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartMayBattleTreecko
# 42 "data/maps/Route103/scripts.pory"
	end
# 43 "data/maps/Route103/scripts.pory"

# 44 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 45 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 46 "data/maps/Route103/scripts.pory"
	closemessage
# 47 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 48 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 49 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 51 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 53 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 55 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartBrendanBattleTreecko
# 56 "data/maps/Route103/scripts.pory"
	end
# 57 "data/maps/Route103/scripts.pory"

# 58 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 59 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 60 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 61 "data/maps/Route103/scripts.pory"
	end
# 62 "data/maps/Route103/scripts.pory"

# 63 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 64 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 65 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 66 "data/maps/Route103/scripts.pory"
	end
# 67 "data/maps/Route103/scripts.pory"

# 68 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 69 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 70 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 71 "data/maps/Route103/scripts.pory"
	end
# 72 "data/maps/Route103/scripts.pory"

# 73 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 74 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 75 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 76 "data/maps/Route103/scripts.pory"
	end
# 77 "data/maps/Route103/scripts.pory"

# 78 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 79 "data/maps/Route103/scripts.pory"
	closemessage
# 80 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 81 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 82 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 83 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 84 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 85 "data/maps/Route103/scripts.pory"
	end
# 86 "data/maps/Route103/scripts.pory"

# 87 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 88 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 89 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 90 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 92 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 93 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 95 "data/maps/Route103/scripts.pory"
	end
# 96 "data/maps/Route103/scripts.pory"

# 97 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 98 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 99 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 100 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 102 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 103 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 105 "data/maps/Route103/scripts.pory"
	end
# 106 "data/maps/Route103/scripts.pory"

# 107 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 108 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 109 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 111 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 112 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 114 "data/maps/Route103/scripts.pory"
	end
# 115 "data/maps/Route103/scripts.pory"

# 116 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 117 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 118 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 119 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 120 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 121 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 122 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 123 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 124 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/Route103/scripts.pory"
	releaseall
# 126 "data/maps/Route103/scripts.pory"
	end
# 127 "data/maps/Route103/scripts.pory"

# 128 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 129 "data/maps/Route103/scripts.pory"
	walk_left
# 130 "data/maps/Route103/scripts.pory"
	walk_down
# 131 "data/maps/Route103/scripts.pory"
	step_end
# 132 "data/maps/Route103/scripts.pory"

# 133 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 134 "data/maps/Route103/scripts.pory"
	jump_2_down
# 135 "data/maps/Route103/scripts.pory"
	delay_16
# 136 "data/maps/Route103/scripts.pory"
	walk_down
# 137 "data/maps/Route103/scripts.pory"
	walk_down
# 138 "data/maps/Route103/scripts.pory"
	walk_down
# 139 "data/maps/Route103/scripts.pory"
	walk_down
# 140 "data/maps/Route103/scripts.pory"
	step_end
# 141 "data/maps/Route103/scripts.pory"

# 142 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 143 "data/maps/Route103/scripts.pory"
	delay_16
# 144 "data/maps/Route103/scripts.pory"
	delay_4
# 145 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 146 "data/maps/Route103/scripts.pory"
	delay_16
# 147 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 148 "data/maps/Route103/scripts.pory"
	step_end
# 149 "data/maps/Route103/scripts.pory"

# 150 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 151 "data/maps/Route103/scripts.pory"
	walk_down
# 152 "data/maps/Route103/scripts.pory"
	step_end
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 155 "data/maps/Route103/scripts.pory"
	jump_2_down
# 156 "data/maps/Route103/scripts.pory"
	delay_16
# 157 "data/maps/Route103/scripts.pory"
	walk_down
# 158 "data/maps/Route103/scripts.pory"
	walk_down
# 159 "data/maps/Route103/scripts.pory"
	walk_down
# 160 "data/maps/Route103/scripts.pory"
	step_end
# 161 "data/maps/Route103/scripts.pory"

# 162 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 163 "data/maps/Route103/scripts.pory"
	delay_16
# 164 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 165 "data/maps/Route103/scripts.pory"
	step_end
# 166 "data/maps/Route103/scripts.pory"

# 167 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 168 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 169 "data/maps/Route103/scripts.pory"
	end
# 170 "data/maps/Route103/scripts.pory"

# 171 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 172 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 173 "data/maps/Route103/scripts.pory"
	end
# 174 "data/maps/Route103/scripts.pory"

# 175 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 176 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 177 "data/maps/Route103/scripts.pory"
	end
# 178 "data/maps/Route103/scripts.pory"

# 179 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 180 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 181 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route103/scripts.pory"
	end
# 183 "data/maps/Route103/scripts.pory"

# 184 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 185 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 186 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 187 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 188 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route103/scripts.pory"
	end
# 190 "data/maps/Route103/scripts.pory"

# 191 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 192 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 193 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 194 "data/maps/Route103/scripts.pory"
	release
# 195 "data/maps/Route103/scripts.pory"
	end
# 196 "data/maps/Route103/scripts.pory"

# 197 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 198 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 199 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route103/scripts.pory"
	end
# 201 "data/maps/Route103/scripts.pory"

# 202 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 203 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 204 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 205 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 206 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route103/scripts.pory"
	end
# 208 "data/maps/Route103/scripts.pory"

# 209 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 210 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 211 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 212 "data/maps/Route103/scripts.pory"
	release
# 213 "data/maps/Route103/scripts.pory"
	end
# 214 "data/maps/Route103/scripts.pory"

# 215 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 216 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 217 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route103/scripts.pory"
	end
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 221 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 222 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route103/scripts.pory"
	end
# 224 "data/maps/Route103/scripts.pory"

# 225 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 226 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 227 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 228 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 229 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 230 "data/maps/Route103/scripts.pory"
	release
# 231 "data/maps/Route103/scripts.pory"
	end
# 232 "data/maps/Route103/scripts.pory"

# 233 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 234 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 235 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 237 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 238 "data/maps/Route103/scripts.pory"
	release
# 239 "data/maps/Route103/scripts.pory"
	end
# 240 "data/maps/Route103/scripts.pory"

# 241 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 242 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 243 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route103/scripts.pory"
	end
# 245 "data/maps/Route103/scripts.pory"

# 246 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 247 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 248 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route103/scripts.pory"
	end
# 250 "data/maps/Route103/scripts.pory"

# 251 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 252 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 253 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route103/scripts.pory"
	end
# 255 "data/maps/Route103/scripts.pory"

# 256 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 257 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 258 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route103/scripts.pory"
	end
# 260 "data/maps/Route103/scripts.pory"

# 261 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 262 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 263 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/Route103/scripts.pory"
	end
# 265 "data/maps/Route103/scripts.pory"

# 266 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 267 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 268 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 269 "data/maps/Route103/scripts.pory"

# 270 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 271 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 272 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 273 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 274 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 275 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 276 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 277 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 278 "data/maps/Route103/scripts.pory"

# 279 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 280 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 281 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 282 "data/maps/Route103/scripts.pory"

# 283 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 284 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 285 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 286 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 287 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 288 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 289 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 290 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 291 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 292 "data/maps/Route103/scripts.pory"

# 293 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 294 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 295 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 296 "data/maps/Route103/scripts.pory"

# 297 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 298 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 299 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 300 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 301 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 302 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 303 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 304 "data/maps/Route103/scripts.pory"

# 305 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 306 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 307 "data/maps/Route103/scripts.pory"

# 308 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 309 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 310 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 311 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 312 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 313 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 314 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 315 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 316 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 317 "data/maps/Route103/scripts.pory"

# 318 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 319 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 320 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 321 "data/maps/Route103/scripts.pory"

# 322 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 323 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 324 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 325 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 326 "data/maps/Route103/scripts.pory"

# 327 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 328 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 329 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
