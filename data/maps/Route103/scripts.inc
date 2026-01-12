Route103_MapScripts::
# 10 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route103_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route103_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 16 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 17 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	goto Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route103_EventScript_Ralsei::
# 24 "data/maps/Route103/scripts.pory"
	lockall
# 25 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Ralsei_Text_0
# 26 "data/maps/Route103/scripts.pory"
	closemessage
# 27 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 28 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_FacePlayer
# 29 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_ExclamationMark
# 31 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_Delay48
# 33 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Ralsei_Text_1
# 39 "data/maps/Route103/scripts.pory"
	closemessage
# 40 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_EventScript_Ralsei_Text_2
# 41 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Ralsei_Text_3
# 44 "data/maps/Route103/scripts.pory"
	closemessage
# 45 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 46 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_Ralsei_3
# 48 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_Ralsei_4
# 50 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_Ralsei_5
# 51 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_Ralsei_5
Route103_EventScript_Ralsei_1:
	end

Route103_EventScript_Ralsei_3:
# 47 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingSouth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_4:
# 49 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingNorth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_5:
# 52 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiExitFacingEastOrWest
	goto Route103_EventScript_Ralsei_1


Route103_EventScript_RalseiExitFacingNorth::
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 60 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExitFacingNorth1
# 61 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 63 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExitFacingNorth2
# 64 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingEastOrWest::
# 70 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 71 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit1
# 72 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 74 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit2
# 75 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingSouth::
# 81 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit1
# 82 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 84 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit2
# 85 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiEnd::
# 91 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RALSEI
# 92 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 93 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 94 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 95 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 96 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 97 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 98 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 99 "data/maps/Route103/scripts.pory"
	releaseall
	end


Route103_EventScript_RouteSign::
# 104 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end


# 108 "data/maps/Route103/scripts.pory"

# 109 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 110 "data/maps/Route103/scripts.pory"
	walk_left
# 111 "data/maps/Route103/scripts.pory"
	walk_down
# 112 "data/maps/Route103/scripts.pory"
	step_end
# 113 "data/maps/Route103/scripts.pory"

# 114 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 115 "data/maps/Route103/scripts.pory"
	jump_2_down
# 116 "data/maps/Route103/scripts.pory"
	delay_16
# 117 "data/maps/Route103/scripts.pory"
	walk_down
# 118 "data/maps/Route103/scripts.pory"
	walk_down
# 119 "data/maps/Route103/scripts.pory"
	walk_down
# 120 "data/maps/Route103/scripts.pory"
	walk_down
# 121 "data/maps/Route103/scripts.pory"
	step_end
# 122 "data/maps/Route103/scripts.pory"

# 123 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 124 "data/maps/Route103/scripts.pory"
	delay_16
# 125 "data/maps/Route103/scripts.pory"
	delay_4
# 126 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 127 "data/maps/Route103/scripts.pory"
	delay_16
# 128 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 129 "data/maps/Route103/scripts.pory"
	step_end
# 130 "data/maps/Route103/scripts.pory"

# 131 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 132 "data/maps/Route103/scripts.pory"
	walk_down
# 133 "data/maps/Route103/scripts.pory"
	step_end
# 134 "data/maps/Route103/scripts.pory"

# 135 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 136 "data/maps/Route103/scripts.pory"
	jump_2_down
# 137 "data/maps/Route103/scripts.pory"
	delay_16
# 138 "data/maps/Route103/scripts.pory"
	walk_down
# 139 "data/maps/Route103/scripts.pory"
	walk_down
# 140 "data/maps/Route103/scripts.pory"
	walk_down
# 141 "data/maps/Route103/scripts.pory"
	step_end
# 142 "data/maps/Route103/scripts.pory"

# 143 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 144 "data/maps/Route103/scripts.pory"
	delay_16
# 145 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 146 "data/maps/Route103/scripts.pory"
	step_end
# 147 "data/maps/Route103/scripts.pory"

# 148 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 149 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 150 "data/maps/Route103/scripts.pory"
	end
# 151 "data/maps/Route103/scripts.pory"

# 152 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 153 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 154 "data/maps/Route103/scripts.pory"
	end
# 155 "data/maps/Route103/scripts.pory"

# 156 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 157 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 158 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route103/scripts.pory"
	end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 162 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 163 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 164 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 165 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route103/scripts.pory"
	end
# 167 "data/maps/Route103/scripts.pory"

# 168 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 169 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 170 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 171 "data/maps/Route103/scripts.pory"
	release
# 172 "data/maps/Route103/scripts.pory"
	end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 175 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 176 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route103/scripts.pory"
	end
# 178 "data/maps/Route103/scripts.pory"

# 179 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 180 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 181 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 182 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 183 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route103/scripts.pory"
	end
# 185 "data/maps/Route103/scripts.pory"

# 186 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 187 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 188 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 189 "data/maps/Route103/scripts.pory"
	release
# 190 "data/maps/Route103/scripts.pory"
	end
# 191 "data/maps/Route103/scripts.pory"

# 192 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 193 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 194 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route103/scripts.pory"
	end
# 196 "data/maps/Route103/scripts.pory"

# 197 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 198 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 199 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route103/scripts.pory"
	end
# 201 "data/maps/Route103/scripts.pory"

# 202 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 203 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 204 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 205 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 206 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 207 "data/maps/Route103/scripts.pory"
	release
# 208 "data/maps/Route103/scripts.pory"
	end
# 209 "data/maps/Route103/scripts.pory"

# 210 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 211 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 212 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 214 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 215 "data/maps/Route103/scripts.pory"
	release
# 216 "data/maps/Route103/scripts.pory"
	end
# 217 "data/maps/Route103/scripts.pory"

# 218 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 219 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 220 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route103/scripts.pory"
	end
# 222 "data/maps/Route103/scripts.pory"

# 223 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 224 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 225 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route103/scripts.pory"
	end
# 227 "data/maps/Route103/scripts.pory"

# 228 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 229 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 230 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route103/scripts.pory"
	end
# 232 "data/maps/Route103/scripts.pory"

# 233 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 234 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 235 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 239 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 240 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route103/scripts.pory"
	end
# 242 "data/maps/Route103/scripts.pory"

# 243 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 244 "data/maps/Route103/scripts.pory"
	.string "My Puppet is staggeringly tired…\n"
# 245 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion$"
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 248 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 249 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to Oldale Town.\p"
# 250 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"

Route103_EventScript_Ralsei_Text_0:
# 25 "data/maps/Route103/scripts.pory"
	.string "Now, what did Shiori want me to find in\n"
	.string "here again?$"

Route103_EventScript_Ralsei_Text_1:
# 34 "data/maps/Route103/scripts.pory"
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

Route103_EventScript_Ralsei_Text_2:
# 40 "data/maps/Route103/scripts.pory"
	.string "Good job!\nYou managed to beat me here!$"

Route103_EventScript_Ralsei_Text_3:
# 41 "data/maps/Route103/scripts.pory"
	.string "I see you carry great potential within,\n"
	.string "even if you are new to this whole\l"
	.string "Puppet thing.\p"
	.string "No wonder Shiori trusted you with this\n"
	.string "Puppet that you have with you.\p"
	.string "Very well, I guess I'll have to go back\n"
	.string "to the Lab to see what Shiori wants me\l"
	.string "to do.$"

Route103_EventScript_RouteSign_Text_0:
# 104 "data/maps/Route103/scripts.pory"
	.string "Ocean Split\n"
	.string "{DOWN_ARROW} Oldale Town$"
