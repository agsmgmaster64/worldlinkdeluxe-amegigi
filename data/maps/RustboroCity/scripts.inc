RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 4 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 5 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_HideMapNamePopup
	goto RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PositionScientistForExit
	goto RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0


RustboroCity_EventScript_GigiEncounter::
# 20 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_2
RustboroCity_EventScript_GigiEncounter_1:
# 23 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_5
RustboroCity_EventScript_GigiEncounter_4:
# 26 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 27 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Gigi
# 28 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiHiLetsRegister
# 29 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 30 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 31 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 32 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredGigi
# 33 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 34 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 36 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 37 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 38 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 39 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 40 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Gigi
# 41 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiPassedBrineyWantToBattle, MSGBOX_YESNO
# 42 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiEncounter_8
RustboroCity_EventScript_GigiEncounter_7:
# 45 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 46 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 47 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiEncounter_2:
# 21 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	goto RustboroCity_EventScript_GigiEncounter_1

RustboroCity_EventScript_GigiEncounter_5:
# 24 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiAskToBattle
	goto RustboroCity_EventScript_GigiEncounter_4

RustboroCity_EventScript_GigiEncounter_8:
# 43 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiEncounter_7


RustboroCity_EventScript_GigiAskToBattle::
# 52 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 53 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Gigi
# 54 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiWantToBattle, MSGBOX_YESNO
# 55 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiAskToBattle_2
RustboroCity_EventScript_GigiAskToBattle_1:
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 59 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiAskToBattle_2:
# 56 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiAskToBattle_1


RustboroCity_EventScript_BattleGigi::
# 64 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiImNotGoingToLose
# 65 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_GigiDefeat
# 66 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 67 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	end


RustboroCity_EventScript_GigiBrineyHint::
# 72 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Gigi
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiMrBrineyHint
# 74 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_GigiBrineyHint_2
RustboroCity_EventScript_GigiBrineyHint_1:
# 77 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiBrineyHint_2:
# 75 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_GigiBrineyHint_1


# 121 "data/maps/RustboroCity/scripts.pory"

# 122 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 123 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 124 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 125 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 126 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 127 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 128 "data/maps/RustboroCity/scripts.pory"

# 129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 130 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 131 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 132 "data/maps/RustboroCity/scripts.pory"
	end
# 133 "data/maps/RustboroCity/scripts.pory"

# 134 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 135 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 136 "data/maps/RustboroCity/scripts.pory"
	end
# 137 "data/maps/RustboroCity/scripts.pory"

# 138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 139 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 140 "data/maps/RustboroCity/scripts.pory"
	return
# 141 "data/maps/RustboroCity/scripts.pory"

# 142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 143 "data/maps/RustboroCity/scripts.pory"
	lockall
# 144 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 145 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 146 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 148 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 149 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 150 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 151 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 153 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 154 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 156 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 158 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 160 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 163 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 164 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 165 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 167 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 168 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 169 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 170 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 171 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 172 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 173 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 174 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 175 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 178 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 179 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 180 "data/maps/RustboroCity/scripts.pory"

# 181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 183 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 184 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 185 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 186 "data/maps/RustboroCity/scripts.pory"

# 187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 188 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 189 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 190 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 191 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 193 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 194 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 195 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 196 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 197 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 198 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 199 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 200 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 201 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 202 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 204 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 205 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 206 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 207 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 208 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 209 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 210 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 211 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 212 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 213 "data/maps/RustboroCity/scripts.pory"
	end
# 214 "data/maps/RustboroCity/scripts.pory"

# 215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 216 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 217 "data/maps/RustboroCity/scripts.pory"
	step_end
# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 220 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 221 "data/maps/RustboroCity/scripts.pory"
	step_end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 224 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 225 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 226 "data/maps/RustboroCity/scripts.pory"
	step_end
# 227 "data/maps/RustboroCity/scripts.pory"

# 228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 229 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 230 "data/maps/RustboroCity/scripts.pory"
	step_end
# 231 "data/maps/RustboroCity/scripts.pory"

# 232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 233 "data/maps/RustboroCity/scripts.pory"
	lock
# 234 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 235 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 236 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 237 "data/maps/RustboroCity/scripts.pory"
	release
# 238 "data/maps/RustboroCity/scripts.pory"
	end
# 239 "data/maps/RustboroCity/scripts.pory"

# 240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 242 "data/maps/RustboroCity/scripts.pory"
	release
# 243 "data/maps/RustboroCity/scripts.pory"
	end
# 244 "data/maps/RustboroCity/scripts.pory"

# 245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 246 "data/maps/RustboroCity/scripts.pory"
	lock
# 247 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 248 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 249 "data/maps/RustboroCity/scripts.pory"
	release
# 250 "data/maps/RustboroCity/scripts.pory"
	end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 253 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 254 "data/maps/RustboroCity/scripts.pory"
	end
# 255 "data/maps/RustboroCity/scripts.pory"

# 256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 257 "data/maps/RustboroCity/scripts.pory"
	lock
# 258 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 259 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 260 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 261 "data/maps/RustboroCity/scripts.pory"
	release
# 262 "data/maps/RustboroCity/scripts.pory"
	end
# 263 "data/maps/RustboroCity/scripts.pory"

# 264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 265 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 266 "data/maps/RustboroCity/scripts.pory"
	release
# 267 "data/maps/RustboroCity/scripts.pory"
	end
# 268 "data/maps/RustboroCity/scripts.pory"

# 269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 270 "data/maps/RustboroCity/scripts.pory"
	lock
# 271 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 272 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 273 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 274 "data/maps/RustboroCity/scripts.pory"
	release
# 275 "data/maps/RustboroCity/scripts.pory"
	end
# 276 "data/maps/RustboroCity/scripts.pory"

# 277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 278 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 279 "data/maps/RustboroCity/scripts.pory"
	release
# 280 "data/maps/RustboroCity/scripts.pory"
	end
# 281 "data/maps/RustboroCity/scripts.pory"

# 282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 283 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 284 "data/maps/RustboroCity/scripts.pory"
	end
# 285 "data/maps/RustboroCity/scripts.pory"

# 286 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 287 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 288 "data/maps/RustboroCity/scripts.pory"
	end
# 289 "data/maps/RustboroCity/scripts.pory"

# 290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 291 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 292 "data/maps/RustboroCity/scripts.pory"
	end
# 293 "data/maps/RustboroCity/scripts.pory"

# 294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 295 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 296 "data/maps/RustboroCity/scripts.pory"
	end
# 297 "data/maps/RustboroCity/scripts.pory"

# 298 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 299 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 300 "data/maps/RustboroCity/scripts.pory"
	end
# 301 "data/maps/RustboroCity/scripts.pory"

# 302 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 303 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 304 "data/maps/RustboroCity/scripts.pory"
	end
# 305 "data/maps/RustboroCity/scripts.pory"

# 306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 308 "data/maps/RustboroCity/scripts.pory"
	end
# 309 "data/maps/RustboroCity/scripts.pory"

# 310 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 311 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 312 "data/maps/RustboroCity/scripts.pory"
	end
# 313 "data/maps/RustboroCity/scripts.pory"

# 314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 315 "data/maps/RustboroCity/scripts.pory"
	lock
# 316 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 317 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 318 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 319 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/RustboroCity/scripts.pory"
	release
# 321 "data/maps/RustboroCity/scripts.pory"
	end
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 324 "data/maps/RustboroCity/scripts.pory"
	lock
# 325 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 326 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 327 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 328 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 329 "data/maps/RustboroCity/scripts.pory"
	release
# 330 "data/maps/RustboroCity/scripts.pory"
	end
# 331 "data/maps/RustboroCity/scripts.pory"

# 332 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 333 "data/maps/RustboroCity/scripts.pory"
	lock
# 334 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 335 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 336 "data/maps/RustboroCity/scripts.pory"
	release
# 337 "data/maps/RustboroCity/scripts.pory"
	end
# 338 "data/maps/RustboroCity/scripts.pory"

# 339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 340 "data/maps/RustboroCity/scripts.pory"
	lockall
# 341 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 342 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 343 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 344 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 345 "data/maps/RustboroCity/scripts.pory"
	end
# 346 "data/maps/RustboroCity/scripts.pory"

# 347 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 348 "data/maps/RustboroCity/scripts.pory"
	lockall
# 349 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 350 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 351 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 352 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 353 "data/maps/RustboroCity/scripts.pory"
	end
# 354 "data/maps/RustboroCity/scripts.pory"

# 355 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 356 "data/maps/RustboroCity/scripts.pory"
	lockall
# 357 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 358 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 359 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 360 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 361 "data/maps/RustboroCity/scripts.pory"
	end
# 362 "data/maps/RustboroCity/scripts.pory"

# 363 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 364 "data/maps/RustboroCity/scripts.pory"
	lockall
# 365 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 366 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 367 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 368 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 369 "data/maps/RustboroCity/scripts.pory"
	end
# 370 "data/maps/RustboroCity/scripts.pory"

# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 372 "data/maps/RustboroCity/scripts.pory"
	lockall
# 373 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 374 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 375 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 376 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 377 "data/maps/RustboroCity/scripts.pory"
	end
# 378 "data/maps/RustboroCity/scripts.pory"

# 379 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 380 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Grunt
# 381 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 382 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 383 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 384 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 385 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 386 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 387 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 388 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 389 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 390 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 392 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 393 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 394 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 395 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 396 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 397 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 398 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 399 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 400 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 401 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 402 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 403 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 404 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 405 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 406 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 407 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 408 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 409 "data/maps/RustboroCity/scripts.pory"
	end
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 438 "data/maps/RustboroCity/scripts.pory"
	step_end
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 448 "data/maps/RustboroCity/scripts.pory"
	step_end
# 449 "data/maps/RustboroCity/scripts.pory"

# 450 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 451 "data/maps/RustboroCity/scripts.pory"
	lock
# 452 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 453 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 454 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 455 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 456 "data/maps/RustboroCity/scripts.pory"
	release
# 457 "data/maps/RustboroCity/scripts.pory"
	end
# 458 "data/maps/RustboroCity/scripts.pory"

# 459 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 460 "data/maps/RustboroCity/scripts.pory"
	waitse
# 461 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 462 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 463 "data/maps/RustboroCity/scripts.pory"
	end
# 464 "data/maps/RustboroCity/scripts.pory"

# 465 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 466 "data/maps/RustboroCity/scripts.pory"
	lockall
# 467 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 468 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 469 "data/maps/RustboroCity/scripts.pory"
	end
# 470 "data/maps/RustboroCity/scripts.pory"

# 471 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 472 "data/maps/RustboroCity/scripts.pory"
	lockall
# 473 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 474 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 475 "data/maps/RustboroCity/scripts.pory"
	end
# 476 "data/maps/RustboroCity/scripts.pory"

# 477 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 478 "data/maps/RustboroCity/scripts.pory"
	lockall
# 479 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 480 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 481 "data/maps/RustboroCity/scripts.pory"
	end
# 482 "data/maps/RustboroCity/scripts.pory"

# 483 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 484 "data/maps/RustboroCity/scripts.pory"
	lockall
# 485 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 486 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 487 "data/maps/RustboroCity/scripts.pory"
	end
# 488 "data/maps/RustboroCity/scripts.pory"

# 489 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 490 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 491 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 492 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 493 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 494 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 495 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 496 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 497 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 498 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 499 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 500 "data/maps/RustboroCity/scripts.pory"
	end
# 501 "data/maps/RustboroCity/scripts.pory"

# 502 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 504 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 505 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 506 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 507 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 508 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 510 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 512 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/RustboroCity/scripts.pory"
	return
# 514 "data/maps/RustboroCity/scripts.pory"

# 515 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 516 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 517 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 519 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 520 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	return
# 526 "data/maps/RustboroCity/scripts.pory"

# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	return
# 538 "data/maps/RustboroCity/scripts.pory"

# 539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	return
# 552 "data/maps/RustboroCity/scripts.pory"

# 553 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 554 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 555 "data/maps/RustboroCity/scripts.pory"
	step_end
# 556 "data/maps/RustboroCity/scripts.pory"

# 557 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 558 "data/maps/RustboroCity/scripts.pory"
	lockall
# 559 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 560 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 561 "data/maps/RustboroCity/scripts.pory"
	end
# 562 "data/maps/RustboroCity/scripts.pory"

# 563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 564 "data/maps/RustboroCity/scripts.pory"
	lockall
# 565 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 566 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 567 "data/maps/RustboroCity/scripts.pory"
	end
# 568 "data/maps/RustboroCity/scripts.pory"

# 569 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 570 "data/maps/RustboroCity/scripts.pory"
	lockall
# 571 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 572 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 573 "data/maps/RustboroCity/scripts.pory"
	end
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 576 "data/maps/RustboroCity/scripts.pory"
	lockall
# 577 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 578 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 579 "data/maps/RustboroCity/scripts.pory"
	end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 582 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 583 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 584 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 585 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 586 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 587 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 588 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 589 "data/maps/RustboroCity/scripts.pory"
	hidespeakername
# 590 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 591 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 592 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 593 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 594 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 595 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 596 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 597 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 598 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 599 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 600 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 601 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 602 "data/maps/RustboroCity/scripts.pory"
	end
# 603 "data/maps/RustboroCity/scripts.pory"

# 604 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 605 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 606 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 607 "data/maps/RustboroCity/scripts.pory"
	return
# 608 "data/maps/RustboroCity/scripts.pory"

# 609 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 610 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 611 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 613 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 614 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/RustboroCity/scripts.pory"
	return
# 620 "data/maps/RustboroCity/scripts.pory"

# 621 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 622 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 623 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	return
# 632 "data/maps/RustboroCity/scripts.pory"

# 633 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	return
# 644 "data/maps/RustboroCity/scripts.pory"

# 645 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	return
# 658 "data/maps/RustboroCity/scripts.pory"

# 659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	return
# 668 "data/maps/RustboroCity/scripts.pory"

# 669 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 670 "data/maps/RustboroCity/scripts.pory"
	lockall
# 671 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 675 "data/maps/RustboroCity/scripts.pory"

# 676 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 677 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 678 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 679 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 680 "data/maps/RustboroCity/scripts.pory"
	return
# 681 "data/maps/RustboroCity/scripts.pory"

# 682 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 683 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 684 "data/maps/RustboroCity/scripts.pory"
	return
# 685 "data/maps/RustboroCity/scripts.pory"

# 686 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 687 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 688 "data/maps/RustboroCity/scripts.pory"
	return
# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 691 "data/maps/RustboroCity/scripts.pory"
	lockall
# 692 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 693 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 694 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 696 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 697 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 701 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 703 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 705 "data/maps/RustboroCity/scripts.pory"

# 706 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 707 "data/maps/RustboroCity/scripts.pory"
	lockall
# 708 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 709 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 712 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 713 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 721 "data/maps/RustboroCity/scripts.pory"

# 722 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 723 "data/maps/RustboroCity/scripts.pory"
	lockall
# 724 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 726 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 735 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 736 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 737 "data/maps/RustboroCity/scripts.pory"

# 738 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 739 "data/maps/RustboroCity/scripts.pory"
	lockall
# 740 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 741 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 742 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 753 "data/maps/RustboroCity/scripts.pory"

# 754 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 755 "data/maps/RustboroCity/scripts.pory"
	lockall
# 756 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 757 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 758 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 767 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 769 "data/maps/RustboroCity/scripts.pory"

# 770 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 771 "data/maps/RustboroCity/scripts.pory"
	lockall
# 772 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 773 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 774 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 785 "data/maps/RustboroCity/scripts.pory"

# 786 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 787 "data/maps/RustboroCity/scripts.pory"
	lockall
# 788 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 789 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 790 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 801 "data/maps/RustboroCity/scripts.pory"

# 802 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 803 "data/maps/RustboroCity/scripts.pory"
	lockall
# 804 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 805 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 806 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 817 "data/maps/RustboroCity/scripts.pory"

# 818 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 819 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
# 820 "data/maps/RustboroCity/scripts.pory"
	end
# 821 "data/maps/RustboroCity/scripts.pory"

# 822 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 823 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 824 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 825 "data/maps/RustboroCity/scripts.pory"
	return
# 826 "data/maps/RustboroCity/scripts.pory"

# 827 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 828 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 830 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 831 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 832 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 833 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 834 "data/maps/RustboroCity/scripts.pory"
	step_end
# 835 "data/maps/RustboroCity/scripts.pory"

# 836 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 837 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 838 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 839 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 840 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 841 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 842 "data/maps/RustboroCity/scripts.pory"
	step_end
# 843 "data/maps/RustboroCity/scripts.pory"

# 844 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 845 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 847 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 848 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 849 "data/maps/RustboroCity/scripts.pory"
	step_end
# 850 "data/maps/RustboroCity/scripts.pory"

# 851 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 852 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 853 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 854 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 855 "data/maps/RustboroCity/scripts.pory"
	step_end
# 856 "data/maps/RustboroCity/scripts.pory"

# 857 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 858 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 859 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 860 "data/maps/RustboroCity/scripts.pory"
	step_end
# 861 "data/maps/RustboroCity/scripts.pory"

# 862 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 863 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 864 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 865 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 866 "data/maps/RustboroCity/scripts.pory"
	step_end
# 867 "data/maps/RustboroCity/scripts.pory"

# 868 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 869 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 870 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 873 "data/maps/RustboroCity/scripts.pory"
	step_end
# 874 "data/maps/RustboroCity/scripts.pory"

# 875 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 876 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 878 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 879 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 880 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 881 "data/maps/RustboroCity/scripts.pory"
	step_end
# 882 "data/maps/RustboroCity/scripts.pory"

# 883 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 884 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 885 "data/maps/RustboroCity/scripts.pory"
	end
# 886 "data/maps/RustboroCity/scripts.pory"

# 887 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Grunt:
# 888 "data/maps/RustboroCity/scripts.pory"
	.string "Grunt$"
# 889 "data/maps/RustboroCity/scripts.pory"

# 890 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Researcher:
# 891 "data/maps/RustboroCity/scripts.pory"
	.string "Researcher$"
# 892 "data/maps/RustboroCity/scripts.pory"

# 893 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 894 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 895 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 896 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 897 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 898 "data/maps/RustboroCity/scripts.pory"

# 899 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 900 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 901 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 902 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 903 "data/maps/RustboroCity/scripts.pory"

# 904 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 905 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 907 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 908 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 909 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 910 "data/maps/RustboroCity/scripts.pory"

# 911 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 912 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 913 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 914 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 915 "data/maps/RustboroCity/scripts.pory"

# 916 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 917 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 918 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 919 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 920 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 921 "data/maps/RustboroCity/scripts.pory"

# 922 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 923 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 924 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 926 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 927 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 928 "data/maps/RustboroCity/scripts.pory"

# 929 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 930 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 931 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 932 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 933 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 934 "data/maps/RustboroCity/scripts.pory"

# 935 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 936 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 937 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 939 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 940 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 941 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 942 "data/maps/RustboroCity/scripts.pory"

# 943 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 944 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 945 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 946 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 947 "data/maps/RustboroCity/scripts.pory"

# 948 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 949 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 950 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 951 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 952 "data/maps/RustboroCity/scripts.pory"

# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 954 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 955 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 956 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 957 "data/maps/RustboroCity/scripts.pory"

# 958 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 959 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 960 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 961 "data/maps/RustboroCity/scripts.pory"

# 962 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 963 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 964 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 965 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 966 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 967 "data/maps/RustboroCity/scripts.pory"

# 968 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 969 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 970 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 971 "data/maps/RustboroCity/scripts.pory"

# 972 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 973 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 974 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 975 "data/maps/RustboroCity/scripts.pory"

# 976 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 977 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 978 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 980 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 981 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 982 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 983 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 986 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 987 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 988 "data/maps/RustboroCity/scripts.pory"

# 989 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 990 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 991 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 992 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 993 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 994 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 995 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 996 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Orb!$"
# 997 "data/maps/RustboroCity/scripts.pory"

# 998 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 999 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1000 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 1001 "data/maps/RustboroCity/scripts.pory"

# 1002 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1003 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1004 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1005 "data/maps/RustboroCity/scripts.pory"

# 1006 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredGigi:
# 1007 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
# 1008 "data/maps/RustboroCity/scripts.pory"
	.string "in the iDollNav.$"
# 1009 "data/maps/RustboroCity/scripts.pory"

# 1010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GigiDefeat:
# 1011 "data/maps/RustboroCity/scripts.pory"
	.string "Oh boy!\n"
# 1012 "data/maps/RustboroCity/scripts.pory"
	.string "No wonder he ran away!$"
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1015 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1020 "data/maps/RustboroCity/scripts.pory"

# 1021 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1022 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1025 "data/maps/RustboroCity/scripts.pory"

# 1026 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1027 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1030 "data/maps/RustboroCity/scripts.pory"

# 1031 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1033 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1035 "data/maps/RustboroCity/scripts.pory"

# 1036 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1040 "data/maps/RustboroCity/scripts.pory"

# 1041 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1048 "data/maps/RustboroCity/scripts.pory"

# 1049 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1067 "data/maps/RustboroCity/scripts.pory"

# 1068 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1070 "data/maps/RustboroCity/scripts.pory"

# 1071 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1074 "data/maps/RustboroCity/scripts.pory"

# 1075 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_Text_Gigi::
# 81 "data/maps/RustboroCity/scripts.pory"
	.string "Gigi$"

RustboroCity_Text_GigiHiLetsRegister::
# 85 "data/maps/RustboroCity/scripts.pory"
	.string "Hey you!\n"
	.string "{PLAYER}, was it?\p"
	.string "The name's Gigi Murin, and I head you\n"
	.string "made the new Noiseboro gym leader run\l"
	.string "away like a coward!\p"
	.string "I won't lie, that's pretty impressive for\n"
	.string "someone who just started out fairly\l"
	.string "recently!\p"
	.string "You know what, how about we register\n"
	.string "each other on that new iDollNav you\l"
	.string "just have?\p"
	.string "That way, I can know better of the\n"
	.string "methods you pulled from earlier!\p"
	.string "… … … … … …$"

RustboroCity_Text_GigiPassedBrineyWantToBattle::
# 94 "data/maps/RustboroCity/scripts.pory"
	.string "You're heading towards Dreamford, huh?\p"
	.string "I believe Murasa's all settled now in\n"
	.string "being able to take people there again.\p"
	.string "Since we're here anyways, I want to see\n"
	.string "how strong you are exactly, if you're up\l"
	.string "for it, of course.$"

RustboroCity_Text_GigiOhHaventRaisedPokemonEnough::
# 100 "data/maps/RustboroCity/scripts.pory"
	.string "Not feeling prepared for what's coming\n"
	.string "up, huh?\p"
	.string "I get it, I got you all of a sudden here,\n"
	.string "wanting to battle you immediately.\p"
	.string "I'll let you off for this once, but let it\n"
	.string "be known that I will be prepared to\l"
	.string "battle you!$"

RustboroCity_Text_GigiWantToBattle::
# 106 "data/maps/RustboroCity/scripts.pory"
	.string "So how are you feeling now?\n"
	.string "Up for a test of your Puppets,\l"
	.string "{PLAYER}?$"

RustboroCity_Text_GigiImNotGoingToLose::
# 110 "data/maps/RustboroCity/scripts.pory"
	.string "Well, you should know, you may be as\n"
	.string "strong as me, but I know better about\l"
	.string "what I'm doing!\p"
	.string "Bring it on, {PLAYER}!$"

RustboroCity_Text_GigiMrBrineyHint::
# 115 "data/maps/RustboroCity/scripts.pory"
	.string "Well, you certainly are much more than I\n"
	.string "expected at first.\p"
	.string "Let this be known though, we are now\n"
	.string "officially rivals of the Gym Leader\l"
	.string "challenge! I'll have to train my Puppets\l"
	.string "further now, but we shall meet again\l"
	.string "later!$"
