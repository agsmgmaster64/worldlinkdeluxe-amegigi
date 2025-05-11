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
	call Common_EventScript_SetupGigiGfxId
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
	setspeakername gText_Gigi
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
	setspeakername gText_Gigi
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
	setspeakername gText_Gigi
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
	closemessage
# 66 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_GigiDefeat
# 67 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 68 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	end


RustboroCity_EventScript_GigiBrineyHint::
# 73 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 74 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiMrBrineyHint
# 75 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_GigiBrineyHint_2
RustboroCity_EventScript_GigiBrineyHint_1:
# 79 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiBrineyHint_2:
# 77 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_GigiBrineyHint_1


# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 121 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 122 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 123 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 124 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 125 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 126 "data/maps/RustboroCity/scripts.pory"

# 127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 128 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 129 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 130 "data/maps/RustboroCity/scripts.pory"
	end
# 131 "data/maps/RustboroCity/scripts.pory"

# 132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 133 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 134 "data/maps/RustboroCity/scripts.pory"
	end
# 135 "data/maps/RustboroCity/scripts.pory"

# 136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 137 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 138 "data/maps/RustboroCity/scripts.pory"
	return
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 141 "data/maps/RustboroCity/scripts.pory"
	lockall
# 142 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 143 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 144 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 146 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 147 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 148 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 149 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 151 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 152 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 154 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 156 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 158 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 161 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 162 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 163 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 165 "data/maps/RustboroCity/scripts.pory"
	delay 10
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
	delay 20
# 172 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 173 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 175 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 176 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 177 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 178 "data/maps/RustboroCity/scripts.pory"

# 179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 180 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 181 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 182 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 183 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 186 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 187 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 188 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 189 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 191 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 192 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 193 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 194 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 195 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 196 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 197 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 198 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 199 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 200 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 201 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 202 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 203 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 204 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 206 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 207 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 208 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 209 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 210 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 211 "data/maps/RustboroCity/scripts.pory"
	end
# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 214 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 215 "data/maps/RustboroCity/scripts.pory"
	step_end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 218 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 219 "data/maps/RustboroCity/scripts.pory"
	step_end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 222 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 223 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 224 "data/maps/RustboroCity/scripts.pory"
	step_end
# 225 "data/maps/RustboroCity/scripts.pory"

# 226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 227 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 228 "data/maps/RustboroCity/scripts.pory"
	step_end
# 229 "data/maps/RustboroCity/scripts.pory"

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 231 "data/maps/RustboroCity/scripts.pory"
	lock
# 232 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 233 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 234 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 235 "data/maps/RustboroCity/scripts.pory"
	release
# 236 "data/maps/RustboroCity/scripts.pory"
	end
# 237 "data/maps/RustboroCity/scripts.pory"

# 238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 239 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity/scripts.pory"
	release
# 241 "data/maps/RustboroCity/scripts.pory"
	end
# 242 "data/maps/RustboroCity/scripts.pory"

# 243 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 244 "data/maps/RustboroCity/scripts.pory"
	lock
# 245 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 246 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 247 "data/maps/RustboroCity/scripts.pory"
	release
# 248 "data/maps/RustboroCity/scripts.pory"
	end
# 249 "data/maps/RustboroCity/scripts.pory"

# 250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 251 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 252 "data/maps/RustboroCity/scripts.pory"
	end
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 255 "data/maps/RustboroCity/scripts.pory"
	lock
# 256 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 257 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 258 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 259 "data/maps/RustboroCity/scripts.pory"
	release
# 260 "data/maps/RustboroCity/scripts.pory"
	end
# 261 "data/maps/RustboroCity/scripts.pory"

# 262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 263 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 264 "data/maps/RustboroCity/scripts.pory"
	release
# 265 "data/maps/RustboroCity/scripts.pory"
	end
# 266 "data/maps/RustboroCity/scripts.pory"

# 267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 268 "data/maps/RustboroCity/scripts.pory"
	lock
# 269 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 270 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 271 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 272 "data/maps/RustboroCity/scripts.pory"
	release
# 273 "data/maps/RustboroCity/scripts.pory"
	end
# 274 "data/maps/RustboroCity/scripts.pory"

# 275 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 276 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 277 "data/maps/RustboroCity/scripts.pory"
	release
# 278 "data/maps/RustboroCity/scripts.pory"
	end
# 279 "data/maps/RustboroCity/scripts.pory"

# 280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 281 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 282 "data/maps/RustboroCity/scripts.pory"
	end
# 283 "data/maps/RustboroCity/scripts.pory"

# 284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 285 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 286 "data/maps/RustboroCity/scripts.pory"
	end
# 287 "data/maps/RustboroCity/scripts.pory"

# 288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 289 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 290 "data/maps/RustboroCity/scripts.pory"
	end
# 291 "data/maps/RustboroCity/scripts.pory"

# 292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 293 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 294 "data/maps/RustboroCity/scripts.pory"
	end
# 295 "data/maps/RustboroCity/scripts.pory"

# 296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 298 "data/maps/RustboroCity/scripts.pory"
	end
# 299 "data/maps/RustboroCity/scripts.pory"

# 300 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 301 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 302 "data/maps/RustboroCity/scripts.pory"
	end
# 303 "data/maps/RustboroCity/scripts.pory"

# 304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 305 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 306 "data/maps/RustboroCity/scripts.pory"
	end
# 307 "data/maps/RustboroCity/scripts.pory"

# 308 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 310 "data/maps/RustboroCity/scripts.pory"
	end
# 311 "data/maps/RustboroCity/scripts.pory"

# 312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 313 "data/maps/RustboroCity/scripts.pory"
	lock
# 314 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 315 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 316 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 317 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/RustboroCity/scripts.pory"
	release
# 319 "data/maps/RustboroCity/scripts.pory"
	end
# 320 "data/maps/RustboroCity/scripts.pory"

# 321 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 322 "data/maps/RustboroCity/scripts.pory"
	lock
# 323 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 324 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 325 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 326 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/RustboroCity/scripts.pory"
	release
# 328 "data/maps/RustboroCity/scripts.pory"
	end
# 329 "data/maps/RustboroCity/scripts.pory"

# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 331 "data/maps/RustboroCity/scripts.pory"
	lock
# 332 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 333 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 334 "data/maps/RustboroCity/scripts.pory"
	release
# 335 "data/maps/RustboroCity/scripts.pory"
	end
# 336 "data/maps/RustboroCity/scripts.pory"

# 337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 338 "data/maps/RustboroCity/scripts.pory"
	lockall
# 339 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 340 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 341 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 342 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 343 "data/maps/RustboroCity/scripts.pory"
	end
# 344 "data/maps/RustboroCity/scripts.pory"

# 345 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 346 "data/maps/RustboroCity/scripts.pory"
	lockall
# 347 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 348 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 349 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 350 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 351 "data/maps/RustboroCity/scripts.pory"
	end
# 352 "data/maps/RustboroCity/scripts.pory"

# 353 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 354 "data/maps/RustboroCity/scripts.pory"
	lockall
# 355 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 356 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 357 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 358 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 359 "data/maps/RustboroCity/scripts.pory"
	end
# 360 "data/maps/RustboroCity/scripts.pory"

# 361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 362 "data/maps/RustboroCity/scripts.pory"
	lockall
# 363 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 364 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 365 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 366 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 367 "data/maps/RustboroCity/scripts.pory"
	end
# 368 "data/maps/RustboroCity/scripts.pory"

# 369 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 370 "data/maps/RustboroCity/scripts.pory"
	lockall
# 371 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 372 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 373 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 374 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 375 "data/maps/RustboroCity/scripts.pory"
	end
# 376 "data/maps/RustboroCity/scripts.pory"

# 377 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 378 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Grunt
# 379 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 380 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 381 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 382 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 383 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 384 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 385 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 387 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 388 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 390 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 391 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 392 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 393 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 394 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 395 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 396 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 397 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 398 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 399 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 400 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 401 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 402 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 403 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 404 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 405 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 406 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 407 "data/maps/RustboroCity/scripts.pory"
	end
# 408 "data/maps/RustboroCity/scripts.pory"

# 409 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
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
	step_end
# 427 "data/maps/RustboroCity/scripts.pory"

# 428 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/RustboroCity/scripts.pory"
	step_end
# 437 "data/maps/RustboroCity/scripts.pory"

# 438 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_up
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
	step_end
# 447 "data/maps/RustboroCity/scripts.pory"

# 448 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 449 "data/maps/RustboroCity/scripts.pory"
	lock
# 450 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 451 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 452 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 453 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 454 "data/maps/RustboroCity/scripts.pory"
	release
# 455 "data/maps/RustboroCity/scripts.pory"
	end
# 456 "data/maps/RustboroCity/scripts.pory"

# 457 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 458 "data/maps/RustboroCity/scripts.pory"
	waitse
# 459 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 460 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 461 "data/maps/RustboroCity/scripts.pory"
	end
# 462 "data/maps/RustboroCity/scripts.pory"

# 463 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 464 "data/maps/RustboroCity/scripts.pory"
	lockall
# 465 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 466 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 467 "data/maps/RustboroCity/scripts.pory"
	end
# 468 "data/maps/RustboroCity/scripts.pory"

# 469 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 470 "data/maps/RustboroCity/scripts.pory"
	lockall
# 471 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 472 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 473 "data/maps/RustboroCity/scripts.pory"
	end
# 474 "data/maps/RustboroCity/scripts.pory"

# 475 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 476 "data/maps/RustboroCity/scripts.pory"
	lockall
# 477 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 478 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 479 "data/maps/RustboroCity/scripts.pory"
	end
# 480 "data/maps/RustboroCity/scripts.pory"

# 481 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 482 "data/maps/RustboroCity/scripts.pory"
	lockall
# 483 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 484 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 485 "data/maps/RustboroCity/scripts.pory"
	end
# 486 "data/maps/RustboroCity/scripts.pory"

# 487 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 488 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 489 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 490 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 491 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 492 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 493 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 494 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 495 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 496 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 497 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 498 "data/maps/RustboroCity/scripts.pory"
	end
# 499 "data/maps/RustboroCity/scripts.pory"

# 500 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 502 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 503 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 504 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 505 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 506 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 508 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 510 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/RustboroCity/scripts.pory"
	return
# 512 "data/maps/RustboroCity/scripts.pory"

# 513 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 514 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 516 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 520 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	return
# 524 "data/maps/RustboroCity/scripts.pory"

# 525 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	return
# 536 "data/maps/RustboroCity/scripts.pory"

# 537 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	return
# 550 "data/maps/RustboroCity/scripts.pory"

# 551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 552 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 553 "data/maps/RustboroCity/scripts.pory"
	step_end
# 554 "data/maps/RustboroCity/scripts.pory"

# 555 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 556 "data/maps/RustboroCity/scripts.pory"
	lockall
# 557 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 558 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 559 "data/maps/RustboroCity/scripts.pory"
	end
# 560 "data/maps/RustboroCity/scripts.pory"

# 561 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 562 "data/maps/RustboroCity/scripts.pory"
	lockall
# 563 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 564 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 565 "data/maps/RustboroCity/scripts.pory"
	end
# 566 "data/maps/RustboroCity/scripts.pory"

# 567 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 568 "data/maps/RustboroCity/scripts.pory"
	lockall
# 569 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 570 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 571 "data/maps/RustboroCity/scripts.pory"
	end
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 574 "data/maps/RustboroCity/scripts.pory"
	lockall
# 575 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 576 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 577 "data/maps/RustboroCity/scripts.pory"
	end
# 578 "data/maps/RustboroCity/scripts.pory"

# 579 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 580 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 581 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 582 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 583 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 584 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 585 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 586 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 587 "data/maps/RustboroCity/scripts.pory"
	hidespeakername
# 588 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 589 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 590 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 591 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 592 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 593 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 594 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 595 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 596 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 597 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 598 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 599 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 600 "data/maps/RustboroCity/scripts.pory"
	end
# 601 "data/maps/RustboroCity/scripts.pory"

# 602 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 603 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 604 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 605 "data/maps/RustboroCity/scripts.pory"
	return
# 606 "data/maps/RustboroCity/scripts.pory"

# 607 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 608 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 609 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 611 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 612 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 614 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	return
# 618 "data/maps/RustboroCity/scripts.pory"

# 619 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 620 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 621 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 623 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 624 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	return
# 630 "data/maps/RustboroCity/scripts.pory"

# 631 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 632 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 633 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	return
# 642 "data/maps/RustboroCity/scripts.pory"

# 643 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 644 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 645 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	return
# 656 "data/maps/RustboroCity/scripts.pory"

# 657 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 658 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 659 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	return
# 666 "data/maps/RustboroCity/scripts.pory"

# 667 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 668 "data/maps/RustboroCity/scripts.pory"
	lockall
# 669 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 670 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 673 "data/maps/RustboroCity/scripts.pory"

# 674 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 675 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 676 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 677 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 678 "data/maps/RustboroCity/scripts.pory"
	return
# 679 "data/maps/RustboroCity/scripts.pory"

# 680 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 681 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 682 "data/maps/RustboroCity/scripts.pory"
	return
# 683 "data/maps/RustboroCity/scripts.pory"

# 684 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 685 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 686 "data/maps/RustboroCity/scripts.pory"
	return
# 687 "data/maps/RustboroCity/scripts.pory"

# 688 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 689 "data/maps/RustboroCity/scripts.pory"
	lockall
# 690 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 691 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 692 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 694 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 695 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 697 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 701 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 702 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 703 "data/maps/RustboroCity/scripts.pory"

# 704 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 705 "data/maps/RustboroCity/scripts.pory"
	lockall
# 706 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 707 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 708 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 709 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 710 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 711 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 712 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 713 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 719 "data/maps/RustboroCity/scripts.pory"

# 720 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 721 "data/maps/RustboroCity/scripts.pory"
	lockall
# 722 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 723 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 724 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 735 "data/maps/RustboroCity/scripts.pory"

# 736 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 737 "data/maps/RustboroCity/scripts.pory"
	lockall
# 738 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 739 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 740 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 751 "data/maps/RustboroCity/scripts.pory"

# 752 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 753 "data/maps/RustboroCity/scripts.pory"
	lockall
# 754 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 767 "data/maps/RustboroCity/scripts.pory"

# 768 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 769 "data/maps/RustboroCity/scripts.pory"
	lockall
# 770 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 771 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 772 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 783 "data/maps/RustboroCity/scripts.pory"

# 784 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 785 "data/maps/RustboroCity/scripts.pory"
	lockall
# 786 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 787 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 788 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 799 "data/maps/RustboroCity/scripts.pory"

# 800 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 801 "data/maps/RustboroCity/scripts.pory"
	lockall
# 802 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 803 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 804 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 815 "data/maps/RustboroCity/scripts.pory"

# 816 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 817 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
# 818 "data/maps/RustboroCity/scripts.pory"
	end
# 819 "data/maps/RustboroCity/scripts.pory"

# 820 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 821 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 822 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 823 "data/maps/RustboroCity/scripts.pory"
	return
# 824 "data/maps/RustboroCity/scripts.pory"

# 825 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 826 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 827 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 828 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 830 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 831 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 832 "data/maps/RustboroCity/scripts.pory"
	step_end
# 833 "data/maps/RustboroCity/scripts.pory"

# 834 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 835 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 836 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 837 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 838 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 839 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 840 "data/maps/RustboroCity/scripts.pory"
	step_end
# 841 "data/maps/RustboroCity/scripts.pory"

# 842 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 843 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 844 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 845 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 847 "data/maps/RustboroCity/scripts.pory"
	step_end
# 848 "data/maps/RustboroCity/scripts.pory"

# 849 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 850 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 851 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 852 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 853 "data/maps/RustboroCity/scripts.pory"
	step_end
# 854 "data/maps/RustboroCity/scripts.pory"

# 855 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 856 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 857 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 858 "data/maps/RustboroCity/scripts.pory"
	step_end
# 859 "data/maps/RustboroCity/scripts.pory"

# 860 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 861 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 862 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 863 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 864 "data/maps/RustboroCity/scripts.pory"
	step_end
# 865 "data/maps/RustboroCity/scripts.pory"

# 866 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 867 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 868 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 869 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 870 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 871 "data/maps/RustboroCity/scripts.pory"
	step_end
# 872 "data/maps/RustboroCity/scripts.pory"

# 873 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 874 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 875 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 876 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 878 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 879 "data/maps/RustboroCity/scripts.pory"
	step_end
# 880 "data/maps/RustboroCity/scripts.pory"

# 881 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 882 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 883 "data/maps/RustboroCity/scripts.pory"
	end
# 884 "data/maps/RustboroCity/scripts.pory"

# 885 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Grunt:
# 886 "data/maps/RustboroCity/scripts.pory"
	.string "Grunt$"
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Researcher:
# 889 "data/maps/RustboroCity/scripts.pory"
	.string "Researcher$"
# 890 "data/maps/RustboroCity/scripts.pory"

# 891 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 892 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 893 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 894 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 895 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 896 "data/maps/RustboroCity/scripts.pory"

# 897 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 898 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 899 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 900 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 901 "data/maps/RustboroCity/scripts.pory"

# 902 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 903 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 904 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 905 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 907 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 908 "data/maps/RustboroCity/scripts.pory"

# 909 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 910 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 911 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 912 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 913 "data/maps/RustboroCity/scripts.pory"

# 914 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 915 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 916 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 917 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 918 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 919 "data/maps/RustboroCity/scripts.pory"

# 920 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 921 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 922 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 923 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 924 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 926 "data/maps/RustboroCity/scripts.pory"

# 927 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 928 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 929 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 930 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 931 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 932 "data/maps/RustboroCity/scripts.pory"

# 933 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 934 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 935 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 936 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 937 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 939 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 940 "data/maps/RustboroCity/scripts.pory"

# 941 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 943 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 944 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 945 "data/maps/RustboroCity/scripts.pory"

# 946 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 947 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 948 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 949 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 950 "data/maps/RustboroCity/scripts.pory"

# 951 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 952 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 953 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 954 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 957 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 958 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 959 "data/maps/RustboroCity/scripts.pory"

# 960 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 961 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 962 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 963 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 964 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 965 "data/maps/RustboroCity/scripts.pory"

# 966 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 967 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 968 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 971 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 972 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 975 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 976 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 977 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 978 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 980 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 981 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 982 "data/maps/RustboroCity/scripts.pory"

# 983 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 984 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 985 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 986 "data/maps/RustboroCity/scripts.pory"

# 987 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 988 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 989 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 990 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 991 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 992 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 993 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 994 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Orb!$"
# 995 "data/maps/RustboroCity/scripts.pory"

# 996 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 997 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 998 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1001 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1002 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredGigi:
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "in the iDollNav.$"
# 1007 "data/maps/RustboroCity/scripts.pory"

# 1008 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GigiDefeat:
# 1009 "data/maps/RustboroCity/scripts.pory"
	.string "Oh boy!\n"
# 1010 "data/maps/RustboroCity/scripts.pory"
	.string "No wonder he ran away!$"
# 1011 "data/maps/RustboroCity/scripts.pory"

# 1012 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1013 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1014 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1015 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1018 "data/maps/RustboroCity/scripts.pory"

# 1019 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1021 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1022 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1023 "data/maps/RustboroCity/scripts.pory"

# 1024 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1026 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1027 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1028 "data/maps/RustboroCity/scripts.pory"

# 1029 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1033 "data/maps/RustboroCity/scripts.pory"

# 1034 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1043 "data/maps/RustboroCity/scripts.pory"

# 1044 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1046 "data/maps/RustboroCity/scripts.pory"

# 1047 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1053 "data/maps/RustboroCity/scripts.pory"

# 1054 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1065 "data/maps/RustboroCity/scripts.pory"

# 1066 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_Text_GigiHiLetsRegister::
# 83 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Hey you!\n"
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
# 92 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You're heading towards Dreamford, huh?\p"
	.string "I believe Murasa's all settled now in\n"
	.string "being able to take people there again.\p"
	.string "Since we're here anyways, I want to see\n"
	.string "how strong you are exactly, if you're up\l"
	.string "for it, of course.{DESTROY_MUGSHOT}$"

RustboroCity_Text_GigiOhHaventRaisedPokemonEnough::
# 98 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Not feeling prepared for what's coming\n"
	.string "up, huh?\p"
	.string "I get it, I got you all of a sudden here,\n"
	.string "wanting to battle you immediately.\p"
	.string "I'll let you off for this once, but let it\n"
	.string "be known that I will be prepared to\l"
	.string "battle you!$"

RustboroCity_Text_GigiWantToBattle::
# 104 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}So how are you feeling now?\n"
	.string "Up for a test of your Puppets,\l"
	.string "{PLAYER}?{DESTROY_MUGSHOT}$"

RustboroCity_Text_GigiImNotGoingToLose::
# 108 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Well, you should know, you may be as\n"
	.string "strong as me, but I know better about\l"
	.string "what I'm doing!\p"
	.string "Bring it on, {PLAYER}!$"

RustboroCity_Text_GigiMrBrineyHint::
# 113 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, you certainly are much more than I\n"
	.string "expected at first.\p"
	.string "Let this be known though, we are now\n"
	.string "officially rivals of the Gym Leader\l"
	.string "challenge!\p"
	.string "I'll have to train my Puppets further\n"
	.string "now, but we shall meet again later!$"
