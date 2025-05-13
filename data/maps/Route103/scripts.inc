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
Route103_Movement_RivalExitFacingNorth1:
# 120 "data/maps/Route103/scripts.pory"
	walk_left
# 121 "data/maps/Route103/scripts.pory"
	walk_down
# 122 "data/maps/Route103/scripts.pory"
	step_end
# 123 "data/maps/Route103/scripts.pory"

# 124 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 125 "data/maps/Route103/scripts.pory"
	jump_2_down
# 126 "data/maps/Route103/scripts.pory"
	delay_16
# 127 "data/maps/Route103/scripts.pory"
	walk_down
# 128 "data/maps/Route103/scripts.pory"
	walk_down
# 129 "data/maps/Route103/scripts.pory"
	walk_down
# 130 "data/maps/Route103/scripts.pory"
	walk_down
# 131 "data/maps/Route103/scripts.pory"
	step_end
# 132 "data/maps/Route103/scripts.pory"

# 133 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 134 "data/maps/Route103/scripts.pory"
	delay_16
# 135 "data/maps/Route103/scripts.pory"
	delay_4
# 136 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 137 "data/maps/Route103/scripts.pory"
	delay_16
# 138 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/Route103/scripts.pory"
	step_end
# 140 "data/maps/Route103/scripts.pory"

# 141 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 142 "data/maps/Route103/scripts.pory"
	walk_down
# 143 "data/maps/Route103/scripts.pory"
	step_end
# 144 "data/maps/Route103/scripts.pory"

# 145 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 146 "data/maps/Route103/scripts.pory"
	jump_2_down
# 147 "data/maps/Route103/scripts.pory"
	delay_16
# 148 "data/maps/Route103/scripts.pory"
	walk_down
# 149 "data/maps/Route103/scripts.pory"
	walk_down
# 150 "data/maps/Route103/scripts.pory"
	walk_down
# 151 "data/maps/Route103/scripts.pory"
	step_end
# 152 "data/maps/Route103/scripts.pory"

# 153 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 154 "data/maps/Route103/scripts.pory"
	delay_16
# 155 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 156 "data/maps/Route103/scripts.pory"
	step_end
# 157 "data/maps/Route103/scripts.pory"

# 158 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 159 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 160 "data/maps/Route103/scripts.pory"
	end
# 161 "data/maps/Route103/scripts.pory"

# 162 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 163 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 164 "data/maps/Route103/scripts.pory"
	end
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 167 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 168 "data/maps/Route103/scripts.pory"
	end
# 169 "data/maps/Route103/scripts.pory"

# 170 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 171 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 172 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route103/scripts.pory"
	end
# 174 "data/maps/Route103/scripts.pory"

# 175 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 176 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 177 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 178 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 179 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route103/scripts.pory"
	end
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 183 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 184 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 185 "data/maps/Route103/scripts.pory"
	release
# 186 "data/maps/Route103/scripts.pory"
	end
# 187 "data/maps/Route103/scripts.pory"

# 188 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 189 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 190 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route103/scripts.pory"
	end
# 192 "data/maps/Route103/scripts.pory"

# 193 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 194 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 195 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 196 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 197 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route103/scripts.pory"
	end
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 201 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 202 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 203 "data/maps/Route103/scripts.pory"
	release
# 204 "data/maps/Route103/scripts.pory"
	end
# 205 "data/maps/Route103/scripts.pory"

# 206 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 207 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 208 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route103/scripts.pory"
	end
# 210 "data/maps/Route103/scripts.pory"

# 211 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 212 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 213 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route103/scripts.pory"
	end
# 215 "data/maps/Route103/scripts.pory"

# 216 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 217 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 218 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 219 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 220 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 221 "data/maps/Route103/scripts.pory"
	release
# 222 "data/maps/Route103/scripts.pory"
	end
# 223 "data/maps/Route103/scripts.pory"

# 224 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 225 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 226 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 228 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 229 "data/maps/Route103/scripts.pory"
	release
# 230 "data/maps/Route103/scripts.pory"
	end
# 231 "data/maps/Route103/scripts.pory"

# 232 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 233 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 234 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route103/scripts.pory"
	end
# 236 "data/maps/Route103/scripts.pory"

# 237 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 238 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 239 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route103/scripts.pory"
	end
# 241 "data/maps/Route103/scripts.pory"

# 242 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 243 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 244 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route103/scripts.pory"
	end
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 248 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 249 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route103/scripts.pory"
	end
# 251 "data/maps/Route103/scripts.pory"

# 252 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 253 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 254 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route103/scripts.pory"
	end
# 256 "data/maps/Route103/scripts.pory"

# 257 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 258 "data/maps/Route103/scripts.pory"
	.string "My Puppet is staggeringly tired…\n"
# 259 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion$"
# 260 "data/maps/Route103/scripts.pory"

# 261 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 262 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 263 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to Oldale Town.\p"
# 264 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 265 "data/maps/Route103/scripts.pory"

# 266 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 267 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 268 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} Oldale Town$"

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
