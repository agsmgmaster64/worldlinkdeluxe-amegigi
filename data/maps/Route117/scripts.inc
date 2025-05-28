# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 3 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 4 "data/maps/Route117/scripts.pory"
	.byte 0
# 5 "data/maps/Route117/scripts.pory"

# 6 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 7 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 8 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 9 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 10 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 14 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 15 "data/maps/Route117/scripts.pory"
	end
# 16 "data/maps/Route117/scripts.pory"

# 17 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 18 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 19 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 20 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 21 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 22 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 23 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 24 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 25 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 26 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 27 "data/maps/Route117/scripts.pory"
	end
# 28 "data/maps/Route117/scripts.pory"

# 29 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 30 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 31 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 32 "data/maps/Route117/scripts.pory"
	return
# 33 "data/maps/Route117/scripts.pory"

# 34 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 35 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 36 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 37 "data/maps/Route117/scripts.pory"
	return
# 38 "data/maps/Route117/scripts.pory"

# 39 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 40 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 41 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 42 "data/maps/Route117/scripts.pory"
	return
# 43 "data/maps/Route117/scripts.pory"

# 44 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 45 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 46 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 47 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 48 "data/maps/Route117/scripts.pory"
	return
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 51 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 52 "data/maps/Route117/scripts.pory"
	end
# 53 "data/maps/Route117/scripts.pory"

# 54 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 55 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 59 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 60 "data/maps/Route117/scripts.pory"
	end
# 61 "data/maps/Route117/scripts.pory"

# 62 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 63 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 64 "data/maps/Route117/scripts.pory"
	end
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 68 "data/maps/Route117/scripts.pory"
	end
# 69 "data/maps/Route117/scripts.pory"

# 70 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 71 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 72 "data/maps/Route117/scripts.pory"
	end
# 73 "data/maps/Route117/scripts.pory"

# 74 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 75 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 76 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 77 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 78 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 79 "data/maps/Route117/scripts.pory"
	release
# 80 "data/maps/Route117/scripts.pory"
	end
# 81 "data/maps/Route117/scripts.pory"

# 82 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 83 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 84 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 86 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 87 "data/maps/Route117/scripts.pory"
	release
# 88 "data/maps/Route117/scripts.pory"
	end
# 89 "data/maps/Route117/scripts.pory"

# 90 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 91 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 92 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route117/scripts.pory"
	end
# 94 "data/maps/Route117/scripts.pory"

# 95 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 96 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 97 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 98 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 99 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 100 "data/maps/Route117/scripts.pory"
	release
# 101 "data/maps/Route117/scripts.pory"
	end
# 102 "data/maps/Route117/scripts.pory"

# 103 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 104 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 105 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 107 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 108 "data/maps/Route117/scripts.pory"
	release
# 109 "data/maps/Route117/scripts.pory"
	end
# 110 "data/maps/Route117/scripts.pory"

# 111 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 112 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 113 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route117/scripts.pory"
	end
# 115 "data/maps/Route117/scripts.pory"

# 116 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 117 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 118 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 119 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 120 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 121 "data/maps/Route117/scripts.pory"
	release
# 122 "data/maps/Route117/scripts.pory"
	end
# 123 "data/maps/Route117/scripts.pory"

# 124 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 125 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 126 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 128 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 129 "data/maps/Route117/scripts.pory"
	release
# 130 "data/maps/Route117/scripts.pory"
	end
# 131 "data/maps/Route117/scripts.pory"

# 132 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 133 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 134 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route117/scripts.pory"
	end
# 136 "data/maps/Route117/scripts.pory"

# 137 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 138 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 139 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 140 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 141 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 142 "data/maps/Route117/scripts.pory"
	release
# 143 "data/maps/Route117/scripts.pory"
	end
# 144 "data/maps/Route117/scripts.pory"

# 145 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 146 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 147 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 149 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 150 "data/maps/Route117/scripts.pory"
	release
# 151 "data/maps/Route117/scripts.pory"
	end
# 152 "data/maps/Route117/scripts.pory"

# 153 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 154 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 155 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route117/scripts.pory"
	end
# 157 "data/maps/Route117/scripts.pory"

# 158 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 159 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 160 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route117/scripts.pory"
	end
# 162 "data/maps/Route117/scripts.pory"

# 163 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 164 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 165 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 166 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 167 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 168 "data/maps/Route117/scripts.pory"
	release
# 169 "data/maps/Route117/scripts.pory"
	end
# 170 "data/maps/Route117/scripts.pory"

# 171 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 172 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 173 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 174 "data/maps/Route117/scripts.pory"
	release
# 175 "data/maps/Route117/scripts.pory"
	end
# 176 "data/maps/Route117/scripts.pory"

# 177 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 178 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 179 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route117/scripts.pory"
	end
# 181 "data/maps/Route117/scripts.pory"

# 182 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 183 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 184 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 185 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 186 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 187 "data/maps/Route117/scripts.pory"
	release
# 188 "data/maps/Route117/scripts.pory"
	end
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 191 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 192 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 193 "data/maps/Route117/scripts.pory"
	release
# 194 "data/maps/Route117/scripts.pory"
	end
# 195 "data/maps/Route117/scripts.pory"

# 196 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 197 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 198 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route117/scripts.pory"
	end
# 200 "data/maps/Route117/scripts.pory"

# 201 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 202 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 203 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route117/scripts.pory"
	end
# 205 "data/maps/Route117/scripts.pory"

# 206 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 207 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 208 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route117/scripts.pory"
	end
# 210 "data/maps/Route117/scripts.pory"

# 211 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 212 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 213 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route117/scripts.pory"
	end
# 215 "data/maps/Route117/scripts.pory"

# 216 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 217 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 218 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 219 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 220 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 221 "data/maps/Route117/scripts.pory"

# 222 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 223 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 224 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 225 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 226 "data/maps/Route117/scripts.pory"

# 227 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 228 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 229 "data/maps/Route117/scripts.pory"

# 230 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 231 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 232 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 233 "data/maps/Route117/scripts.pory"

# 234 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 235 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 236 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 237 "data/maps/Route117/scripts.pory"

# 238 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 239 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 240 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
