Route103_EventScript_Ralsei::
# 2 "data/maps/Route103/scripts.pory"
	lockall
# 3 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RalseiRoute103Pokemon
# 4 "data/maps/Route103/scripts.pory"
	closemessage
# 5 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 6 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_FacePlayer
# 7 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_ExclamationMark
# 9 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_Delay48
# 11 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RalseiLetsBattle
# 13 "data/maps/Route103/scripts.pory"
	closemessage
# 14 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_RalseiDefeated
# 15 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RalseiTimeToHeadBack
# 16 "data/maps/Route103/scripts.pory"
	closemessage
# 17 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 18 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_Ralsei_3
# 20 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_Ralsei_4
# 22 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_Ralsei_5
# 23 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_Ralsei_5
Route103_EventScript_Ralsei_1:
	end

Route103_EventScript_Ralsei_3:
# 19 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingSouth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_4:
# 21 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingNorth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_5:
# 24 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingEastOrWest
	goto Route103_EventScript_Ralsei_1


Route103_EventScript_RalseiExitFacingNorth::
# 31 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 32 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExitFacingNorth1
# 33 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 35 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExitFacingNorth2
# 36 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingEastOrWest::
# 42 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 43 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit1
# 44 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 46 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit2
# 47 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingSouth::
# 53 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit1
# 54 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 56 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit2
# 57 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiEnd::
# 63 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RALSEI
# 64 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 65 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 66 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 67 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 68 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 69 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 70 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 71 "data/maps/Route103/scripts.pory"
	releaseall
	end


# 96 "data/maps/Route103/scripts.pory"

# 97 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 98 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 99 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 100 "data/maps/Route103/scripts.pory"
	.byte 0
# 101 "data/maps/Route103/scripts.pory"

# 102 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 103 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 104 "data/maps/Route103/scripts.pory"
	end
# 105 "data/maps/Route103/scripts.pory"

# 106 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 107 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 111 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 112 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 113 "data/maps/Route103/scripts.pory"
	return
# 114 "data/maps/Route103/scripts.pory"

# 115 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 116 "data/maps/Route103/scripts.pory"
	walk_left
# 117 "data/maps/Route103/scripts.pory"
	walk_down
# 118 "data/maps/Route103/scripts.pory"
	step_end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 121 "data/maps/Route103/scripts.pory"
	jump_2_down
# 122 "data/maps/Route103/scripts.pory"
	delay_16
# 123 "data/maps/Route103/scripts.pory"
	walk_down
# 124 "data/maps/Route103/scripts.pory"
	walk_down
# 125 "data/maps/Route103/scripts.pory"
	walk_down
# 126 "data/maps/Route103/scripts.pory"
	walk_down
# 127 "data/maps/Route103/scripts.pory"
	step_end
# 128 "data/maps/Route103/scripts.pory"

# 129 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 130 "data/maps/Route103/scripts.pory"
	delay_16
# 131 "data/maps/Route103/scripts.pory"
	delay_4
# 132 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 133 "data/maps/Route103/scripts.pory"
	delay_16
# 134 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 135 "data/maps/Route103/scripts.pory"
	step_end
# 136 "data/maps/Route103/scripts.pory"

# 137 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 138 "data/maps/Route103/scripts.pory"
	walk_down
# 139 "data/maps/Route103/scripts.pory"
	step_end
# 140 "data/maps/Route103/scripts.pory"

# 141 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 142 "data/maps/Route103/scripts.pory"
	jump_2_down
# 143 "data/maps/Route103/scripts.pory"
	delay_16
# 144 "data/maps/Route103/scripts.pory"
	walk_down
# 145 "data/maps/Route103/scripts.pory"
	walk_down
# 146 "data/maps/Route103/scripts.pory"
	walk_down
# 147 "data/maps/Route103/scripts.pory"
	step_end
# 148 "data/maps/Route103/scripts.pory"

# 149 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 150 "data/maps/Route103/scripts.pory"
	delay_16
# 151 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 152 "data/maps/Route103/scripts.pory"
	step_end
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 155 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 156 "data/maps/Route103/scripts.pory"
	end
# 157 "data/maps/Route103/scripts.pory"

# 158 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 159 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 160 "data/maps/Route103/scripts.pory"
	end
# 161 "data/maps/Route103/scripts.pory"

# 162 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 163 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 164 "data/maps/Route103/scripts.pory"
	end
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 167 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 168 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route103/scripts.pory"
	end
# 170 "data/maps/Route103/scripts.pory"

# 171 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 172 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 173 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 174 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 175 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route103/scripts.pory"
	end
# 177 "data/maps/Route103/scripts.pory"

# 178 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 179 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 180 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 181 "data/maps/Route103/scripts.pory"
	release
# 182 "data/maps/Route103/scripts.pory"
	end
# 183 "data/maps/Route103/scripts.pory"

# 184 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 185 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 186 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route103/scripts.pory"
	end
# 188 "data/maps/Route103/scripts.pory"

# 189 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 190 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 191 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 192 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 193 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route103/scripts.pory"
	end
# 195 "data/maps/Route103/scripts.pory"

# 196 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 197 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 198 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 199 "data/maps/Route103/scripts.pory"
	release
# 200 "data/maps/Route103/scripts.pory"
	end
# 201 "data/maps/Route103/scripts.pory"

# 202 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 203 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 208 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 209 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route103/scripts.pory"
	end
# 211 "data/maps/Route103/scripts.pory"

# 212 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 213 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 214 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 216 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 217 "data/maps/Route103/scripts.pory"
	release
# 218 "data/maps/Route103/scripts.pory"
	end
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 221 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 222 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 224 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 225 "data/maps/Route103/scripts.pory"
	release
# 226 "data/maps/Route103/scripts.pory"
	end
# 227 "data/maps/Route103/scripts.pory"

# 228 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 229 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 230 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route103/scripts.pory"
	end
# 232 "data/maps/Route103/scripts.pory"

# 233 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 234 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 235 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 239 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 240 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route103/scripts.pory"
	end
# 242 "data/maps/Route103/scripts.pory"

# 243 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 244 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 245 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route103/scripts.pory"
	end
# 247 "data/maps/Route103/scripts.pory"

# 248 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 249 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 250 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route103/scripts.pory"
	end
# 252 "data/maps/Route103/scripts.pory"

# 253 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 254 "data/maps/Route103/scripts.pory"
	.string "My Puppet is staggeringly tired…\n"
# 255 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion$"
# 256 "data/maps/Route103/scripts.pory"

# 257 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 258 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 259 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to Oldale Town.\p"
# 260 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 261 "data/maps/Route103/scripts.pory"

# 262 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 263 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 264 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} Oldale Town$"

Route103_Text_RalseiRoute103Pokemon::
# 75 "data/maps/Route103/scripts.pory"
	.string "Now, what did Shiori want me to find in\n"
	.string "here again?$"

Route103_Text_RalseiLetsBattle::
# 79 "data/maps/Route103/scripts.pory"
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
# 87 "data/maps/Route103/scripts.pory"
	.string "Good job!\n"
	.string "You managed to beat me here!$"

Route103_Text_RalseiTimeToHeadBack::
# 91 "data/maps/Route103/scripts.pory"
	.string "I see you carry great potential within,\n"
	.string "even if you are new to this whole\l"
	.string "Puppet thing.\p"
	.string "No wonder Shiori trusted you with this\n"
	.string "Puppet that you have with you.\p"
	.string "Very well, I guess I'll have to go back\n"
	.string "to the Lab to see what Shiori wants me\l"
	.string "to do.$"
