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
	setspeakername RustboroCity_Text_Gigi
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


# 123 "data/maps/RustboroCity/scripts.pory"

# 124 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 125 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 126 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 127 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 128 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 129 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 132 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 133 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 134 "data/maps/RustboroCity/scripts.pory"
	end
# 135 "data/maps/RustboroCity/scripts.pory"

# 136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 137 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 138 "data/maps/RustboroCity/scripts.pory"
	end
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 141 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 142 "data/maps/RustboroCity/scripts.pory"
	return
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 145 "data/maps/RustboroCity/scripts.pory"
	lockall
# 146 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 147 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 148 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 150 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 151 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 152 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 153 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 155 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 156 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 158 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 160 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 162 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 164 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 165 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 166 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 167 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
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
	delay 10
# 174 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 175 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 176 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 177 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 178 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 180 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 181 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 182 "data/maps/RustboroCity/scripts.pory"

# 183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 184 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 185 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 186 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 187 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 188 "data/maps/RustboroCity/scripts.pory"

# 189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 190 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 191 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 192 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 193 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 195 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 196 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 197 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 198 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 199 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 200 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 201 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 202 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 203 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 204 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 205 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 206 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 207 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 208 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 210 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 211 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 212 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 213 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 214 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 215 "data/maps/RustboroCity/scripts.pory"
	end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 218 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 219 "data/maps/RustboroCity/scripts.pory"
	step_end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 222 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 223 "data/maps/RustboroCity/scripts.pory"
	step_end
# 224 "data/maps/RustboroCity/scripts.pory"

# 225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 226 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 227 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 228 "data/maps/RustboroCity/scripts.pory"
	step_end
# 229 "data/maps/RustboroCity/scripts.pory"

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 231 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 232 "data/maps/RustboroCity/scripts.pory"
	step_end
# 233 "data/maps/RustboroCity/scripts.pory"

# 234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 235 "data/maps/RustboroCity/scripts.pory"
	lock
# 236 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 237 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 238 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 239 "data/maps/RustboroCity/scripts.pory"
	release
# 240 "data/maps/RustboroCity/scripts.pory"
	end
# 241 "data/maps/RustboroCity/scripts.pory"

# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 243 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 244 "data/maps/RustboroCity/scripts.pory"
	release
# 245 "data/maps/RustboroCity/scripts.pory"
	end
# 246 "data/maps/RustboroCity/scripts.pory"

# 247 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 248 "data/maps/RustboroCity/scripts.pory"
	lock
# 249 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 250 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 251 "data/maps/RustboroCity/scripts.pory"
	release
# 252 "data/maps/RustboroCity/scripts.pory"
	end
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 255 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 256 "data/maps/RustboroCity/scripts.pory"
	end
# 257 "data/maps/RustboroCity/scripts.pory"

# 258 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 259 "data/maps/RustboroCity/scripts.pory"
	lock
# 260 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 261 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 262 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 263 "data/maps/RustboroCity/scripts.pory"
	release
# 264 "data/maps/RustboroCity/scripts.pory"
	end
# 265 "data/maps/RustboroCity/scripts.pory"

# 266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 267 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 268 "data/maps/RustboroCity/scripts.pory"
	release
# 269 "data/maps/RustboroCity/scripts.pory"
	end
# 270 "data/maps/RustboroCity/scripts.pory"

# 271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 272 "data/maps/RustboroCity/scripts.pory"
	lock
# 273 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 274 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 275 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 276 "data/maps/RustboroCity/scripts.pory"
	release
# 277 "data/maps/RustboroCity/scripts.pory"
	end
# 278 "data/maps/RustboroCity/scripts.pory"

# 279 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 280 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 281 "data/maps/RustboroCity/scripts.pory"
	release
# 282 "data/maps/RustboroCity/scripts.pory"
	end
# 283 "data/maps/RustboroCity/scripts.pory"

# 284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 285 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 286 "data/maps/RustboroCity/scripts.pory"
	end
# 287 "data/maps/RustboroCity/scripts.pory"

# 288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 289 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 290 "data/maps/RustboroCity/scripts.pory"
	end
# 291 "data/maps/RustboroCity/scripts.pory"

# 292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 293 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 294 "data/maps/RustboroCity/scripts.pory"
	end
# 295 "data/maps/RustboroCity/scripts.pory"

# 296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 298 "data/maps/RustboroCity/scripts.pory"
	end
# 299 "data/maps/RustboroCity/scripts.pory"

# 300 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 301 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 302 "data/maps/RustboroCity/scripts.pory"
	end
# 303 "data/maps/RustboroCity/scripts.pory"

# 304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 305 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 306 "data/maps/RustboroCity/scripts.pory"
	end
# 307 "data/maps/RustboroCity/scripts.pory"

# 308 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 310 "data/maps/RustboroCity/scripts.pory"
	end
# 311 "data/maps/RustboroCity/scripts.pory"

# 312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 313 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 314 "data/maps/RustboroCity/scripts.pory"
	end
# 315 "data/maps/RustboroCity/scripts.pory"

# 316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 317 "data/maps/RustboroCity/scripts.pory"
	lock
# 318 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 319 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 320 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 321 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/RustboroCity/scripts.pory"
	release
# 323 "data/maps/RustboroCity/scripts.pory"
	end
# 324 "data/maps/RustboroCity/scripts.pory"

# 325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 326 "data/maps/RustboroCity/scripts.pory"
	lock
# 327 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 328 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 329 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 330 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/RustboroCity/scripts.pory"
	release
# 332 "data/maps/RustboroCity/scripts.pory"
	end
# 333 "data/maps/RustboroCity/scripts.pory"

# 334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 335 "data/maps/RustboroCity/scripts.pory"
	lock
# 336 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 337 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 338 "data/maps/RustboroCity/scripts.pory"
	release
# 339 "data/maps/RustboroCity/scripts.pory"
	end
# 340 "data/maps/RustboroCity/scripts.pory"

# 341 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 342 "data/maps/RustboroCity/scripts.pory"
	lockall
# 343 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 344 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 345 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 346 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 347 "data/maps/RustboroCity/scripts.pory"
	end
# 348 "data/maps/RustboroCity/scripts.pory"

# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 350 "data/maps/RustboroCity/scripts.pory"
	lockall
# 351 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 352 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 353 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 354 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 355 "data/maps/RustboroCity/scripts.pory"
	end
# 356 "data/maps/RustboroCity/scripts.pory"

# 357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 358 "data/maps/RustboroCity/scripts.pory"
	lockall
# 359 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 360 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 361 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 362 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 363 "data/maps/RustboroCity/scripts.pory"
	end
# 364 "data/maps/RustboroCity/scripts.pory"

# 365 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 366 "data/maps/RustboroCity/scripts.pory"
	lockall
# 367 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 368 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 369 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 370 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 371 "data/maps/RustboroCity/scripts.pory"
	end
# 372 "data/maps/RustboroCity/scripts.pory"

# 373 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 374 "data/maps/RustboroCity/scripts.pory"
	lockall
# 375 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 376 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 377 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 378 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 379 "data/maps/RustboroCity/scripts.pory"
	end
# 380 "data/maps/RustboroCity/scripts.pory"

# 381 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 382 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Grunt
# 383 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 384 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 385 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 386 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 387 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 388 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 389 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 391 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 392 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 393 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 394 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 395 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 396 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 398 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 399 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 400 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 401 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 402 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 403 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 404 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 405 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 406 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 407 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 408 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 409 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 410 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 411 "data/maps/RustboroCity/scripts.pory"
	end
# 412 "data/maps/RustboroCity/scripts.pory"

# 413 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 430 "data/maps/RustboroCity/scripts.pory"
	step_end
# 431 "data/maps/RustboroCity/scripts.pory"

# 432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 440 "data/maps/RustboroCity/scripts.pory"
	step_end
# 441 "data/maps/RustboroCity/scripts.pory"

# 442 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
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
	walk_up
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 450 "data/maps/RustboroCity/scripts.pory"
	step_end
# 451 "data/maps/RustboroCity/scripts.pory"

# 452 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 453 "data/maps/RustboroCity/scripts.pory"
	lock
# 454 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 455 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 456 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 457 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 458 "data/maps/RustboroCity/scripts.pory"
	release
# 459 "data/maps/RustboroCity/scripts.pory"
	end
# 460 "data/maps/RustboroCity/scripts.pory"

# 461 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 462 "data/maps/RustboroCity/scripts.pory"
	waitse
# 463 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 464 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 465 "data/maps/RustboroCity/scripts.pory"
	end
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 468 "data/maps/RustboroCity/scripts.pory"
	lockall
# 469 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 470 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 471 "data/maps/RustboroCity/scripts.pory"
	end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 474 "data/maps/RustboroCity/scripts.pory"
	lockall
# 475 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 476 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 477 "data/maps/RustboroCity/scripts.pory"
	end
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 480 "data/maps/RustboroCity/scripts.pory"
	lockall
# 481 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 482 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 483 "data/maps/RustboroCity/scripts.pory"
	end
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 486 "data/maps/RustboroCity/scripts.pory"
	lockall
# 487 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 488 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 492 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 493 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 494 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 495 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 496 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 497 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 498 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 499 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 500 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 501 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 502 "data/maps/RustboroCity/scripts.pory"
	end
# 503 "data/maps/RustboroCity/scripts.pory"

# 504 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 505 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 506 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 507 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 508 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 509 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 510 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 512 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 514 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/RustboroCity/scripts.pory"
	return
# 516 "data/maps/RustboroCity/scripts.pory"

# 517 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 518 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 519 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 520 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	return
# 528 "data/maps/RustboroCity/scripts.pory"

# 529 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 530 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 531 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	return
# 540 "data/maps/RustboroCity/scripts.pory"

# 541 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	return
# 554 "data/maps/RustboroCity/scripts.pory"

# 555 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 556 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 557 "data/maps/RustboroCity/scripts.pory"
	step_end
# 558 "data/maps/RustboroCity/scripts.pory"

# 559 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 560 "data/maps/RustboroCity/scripts.pory"
	lockall
# 561 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 562 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 563 "data/maps/RustboroCity/scripts.pory"
	end
# 564 "data/maps/RustboroCity/scripts.pory"

# 565 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 566 "data/maps/RustboroCity/scripts.pory"
	lockall
# 567 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 568 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 569 "data/maps/RustboroCity/scripts.pory"
	end
# 570 "data/maps/RustboroCity/scripts.pory"

# 571 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 572 "data/maps/RustboroCity/scripts.pory"
	lockall
# 573 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 574 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 575 "data/maps/RustboroCity/scripts.pory"
	end
# 576 "data/maps/RustboroCity/scripts.pory"

# 577 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 578 "data/maps/RustboroCity/scripts.pory"
	lockall
# 579 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 580 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 581 "data/maps/RustboroCity/scripts.pory"
	end
# 582 "data/maps/RustboroCity/scripts.pory"

# 583 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 584 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 585 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 586 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 587 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 588 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 589 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 590 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 591 "data/maps/RustboroCity/scripts.pory"
	hidespeakername
# 592 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 593 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 594 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 595 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 596 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 597 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 598 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 599 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 600 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 601 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 602 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 603 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 604 "data/maps/RustboroCity/scripts.pory"
	end
# 605 "data/maps/RustboroCity/scripts.pory"

# 606 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 607 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity/scripts.pory"
	return
# 610 "data/maps/RustboroCity/scripts.pory"

# 611 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 612 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 613 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 620 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/RustboroCity/scripts.pory"
	return
# 622 "data/maps/RustboroCity/scripts.pory"

# 623 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	return
# 646 "data/maps/RustboroCity/scripts.pory"

# 647 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	return
# 660 "data/maps/RustboroCity/scripts.pory"

# 661 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	return
# 670 "data/maps/RustboroCity/scripts.pory"

# 671 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 672 "data/maps/RustboroCity/scripts.pory"
	lockall
# 673 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 677 "data/maps/RustboroCity/scripts.pory"

# 678 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 679 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 680 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 681 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 682 "data/maps/RustboroCity/scripts.pory"
	return
# 683 "data/maps/RustboroCity/scripts.pory"

# 684 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 685 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 686 "data/maps/RustboroCity/scripts.pory"
	return
# 687 "data/maps/RustboroCity/scripts.pory"

# 688 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 689 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 690 "data/maps/RustboroCity/scripts.pory"
	return
# 691 "data/maps/RustboroCity/scripts.pory"

# 692 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 693 "data/maps/RustboroCity/scripts.pory"
	lockall
# 694 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 695 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 696 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 697 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 701 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 703 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 705 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 707 "data/maps/RustboroCity/scripts.pory"

# 708 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 709 "data/maps/RustboroCity/scripts.pory"
	lockall
# 710 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 721 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 723 "data/maps/RustboroCity/scripts.pory"

# 724 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 725 "data/maps/RustboroCity/scripts.pory"
	lockall
# 726 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 735 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 739 "data/maps/RustboroCity/scripts.pory"

# 740 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 741 "data/maps/RustboroCity/scripts.pory"
	lockall
# 742 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 753 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 755 "data/maps/RustboroCity/scripts.pory"

# 756 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 757 "data/maps/RustboroCity/scripts.pory"
	lockall
# 758 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 767 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 771 "data/maps/RustboroCity/scripts.pory"

# 772 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 773 "data/maps/RustboroCity/scripts.pory"
	lockall
# 774 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 787 "data/maps/RustboroCity/scripts.pory"

# 788 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 789 "data/maps/RustboroCity/scripts.pory"
	lockall
# 790 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 803 "data/maps/RustboroCity/scripts.pory"

# 804 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 805 "data/maps/RustboroCity/scripts.pory"
	lockall
# 806 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 819 "data/maps/RustboroCity/scripts.pory"

# 820 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 821 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
# 822 "data/maps/RustboroCity/scripts.pory"
	end
# 823 "data/maps/RustboroCity/scripts.pory"

# 824 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 825 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 826 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 827 "data/maps/RustboroCity/scripts.pory"
	return
# 828 "data/maps/RustboroCity/scripts.pory"

# 829 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 830 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 831 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 832 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 833 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 834 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 835 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 836 "data/maps/RustboroCity/scripts.pory"
	step_end
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 839 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 840 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 841 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 842 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 843 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 844 "data/maps/RustboroCity/scripts.pory"
	step_end
# 845 "data/maps/RustboroCity/scripts.pory"

# 846 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 847 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 848 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 849 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 850 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 851 "data/maps/RustboroCity/scripts.pory"
	step_end
# 852 "data/maps/RustboroCity/scripts.pory"

# 853 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 854 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 855 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 856 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 857 "data/maps/RustboroCity/scripts.pory"
	step_end
# 858 "data/maps/RustboroCity/scripts.pory"

# 859 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 860 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 861 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 862 "data/maps/RustboroCity/scripts.pory"
	step_end
# 863 "data/maps/RustboroCity/scripts.pory"

# 864 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 865 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 866 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 867 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 868 "data/maps/RustboroCity/scripts.pory"
	step_end
# 869 "data/maps/RustboroCity/scripts.pory"

# 870 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 873 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 874 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 875 "data/maps/RustboroCity/scripts.pory"
	step_end
# 876 "data/maps/RustboroCity/scripts.pory"

# 877 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 878 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 879 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 880 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 881 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 882 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 883 "data/maps/RustboroCity/scripts.pory"
	step_end
# 884 "data/maps/RustboroCity/scripts.pory"

# 885 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 886 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 887 "data/maps/RustboroCity/scripts.pory"
	end
# 888 "data/maps/RustboroCity/scripts.pory"

# 889 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Grunt:
# 890 "data/maps/RustboroCity/scripts.pory"
	.string "Grunt$"
# 891 "data/maps/RustboroCity/scripts.pory"

# 892 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Researcher:
# 893 "data/maps/RustboroCity/scripts.pory"
	.string "Researcher$"
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 896 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 897 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 898 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 899 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 900 "data/maps/RustboroCity/scripts.pory"

# 901 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 902 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 903 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 904 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 905 "data/maps/RustboroCity/scripts.pory"

# 906 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 907 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 908 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 909 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 910 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 911 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 912 "data/maps/RustboroCity/scripts.pory"

# 913 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 914 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 915 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 916 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 917 "data/maps/RustboroCity/scripts.pory"

# 918 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 919 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 920 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 921 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 922 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 923 "data/maps/RustboroCity/scripts.pory"

# 924 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 926 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 927 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 928 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 929 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 930 "data/maps/RustboroCity/scripts.pory"

# 931 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 932 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 933 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 934 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 935 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 936 "data/maps/RustboroCity/scripts.pory"

# 937 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 939 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 940 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 941 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 943 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 944 "data/maps/RustboroCity/scripts.pory"

# 945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 946 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 947 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 948 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 949 "data/maps/RustboroCity/scripts.pory"

# 950 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 951 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 952 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 953 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 954 "data/maps/RustboroCity/scripts.pory"

# 955 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 956 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 957 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 958 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 959 "data/maps/RustboroCity/scripts.pory"

# 960 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 961 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 962 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 963 "data/maps/RustboroCity/scripts.pory"

# 964 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 965 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 966 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 967 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 968 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 971 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 972 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 975 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 976 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 980 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 981 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 982 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 983 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 984 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 985 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 986 "data/maps/RustboroCity/scripts.pory"

# 987 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 988 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 989 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 990 "data/maps/RustboroCity/scripts.pory"

# 991 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 992 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 993 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 994 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 995 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 996 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 997 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 998 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Orb!$"
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1001 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1002 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1007 "data/maps/RustboroCity/scripts.pory"

# 1008 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredGigi:
# 1009 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
# 1010 "data/maps/RustboroCity/scripts.pory"
	.string "in the iDollNav.$"
# 1011 "data/maps/RustboroCity/scripts.pory"

# 1012 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GigiDefeat:
# 1013 "data/maps/RustboroCity/scripts.pory"
	.string "Oh boy!\n"
# 1014 "data/maps/RustboroCity/scripts.pory"
	.string "No wonder he ran away!$"
# 1015 "data/maps/RustboroCity/scripts.pory"

# 1016 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1021 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1022 "data/maps/RustboroCity/scripts.pory"

# 1023 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1026 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1027 "data/maps/RustboroCity/scripts.pory"

# 1028 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1037 "data/maps/RustboroCity/scripts.pory"

# 1038 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1042 "data/maps/RustboroCity/scripts.pory"

# 1043 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1047 "data/maps/RustboroCity/scripts.pory"

# 1048 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1050 "data/maps/RustboroCity/scripts.pory"

# 1051 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1057 "data/maps/RustboroCity/scripts.pory"

# 1058 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1069 "data/maps/RustboroCity/scripts.pory"

# 1070 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1076 "data/maps/RustboroCity/scripts.pory"

# 1077 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_Text_Gigi::
# 83 "data/maps/RustboroCity/scripts.pory"
	.string "Gigi$"

RustboroCity_Text_GigiHiLetsRegister::
# 87 "data/maps/RustboroCity/scripts.pory"
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
# 96 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You're heading towards Dreamford, huh?\p"
	.string "I believe Murasa's all settled now in\n"
	.string "being able to take people there again.\p"
	.string "Since we're here anyways, I want to see\n"
	.string "how strong you are exactly, if you're up\l"
	.string "for it, of course.{DESTROY_MUGSHOT}$"

RustboroCity_Text_GigiOhHaventRaisedPokemonEnough::
# 102 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Not feeling prepared for what's coming\n"
	.string "up, huh?\p"
	.string "I get it, I got you all of a sudden here,\n"
	.string "wanting to battle you immediately.\p"
	.string "I'll let you off for this once, but let it\n"
	.string "be known that I will be prepared to\l"
	.string "battle you!$"

RustboroCity_Text_GigiWantToBattle::
# 108 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}So how are you feeling now?\n"
	.string "Up for a test of your Puppets,\l"
	.string "{PLAYER}?{DESTROY_MUGSHOT}$"

RustboroCity_Text_GigiImNotGoingToLose::
# 112 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, you should know, you may be as\n"
	.string "strong as me, but I know better about\l"
	.string "what I'm doing!\p"
	.string "Bring it on, {PLAYER}!$"

RustboroCity_Text_GigiMrBrineyHint::
# 117 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, you certainly are much more than I\n"
	.string "expected at first.\p"
	.string "Let this be known though, we are now\n"
	.string "officially rivals of the Gym Leader\l"
	.string "challenge!\p"
	.string "I'll have to train my Puppets further\n"
	.string "now, but we shall meet again later!$"
