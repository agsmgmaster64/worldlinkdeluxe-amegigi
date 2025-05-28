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


RustboroCity_EventScript_Gigi::
# 20 "data/maps/RustboroCity/scripts.pory"
	lockall
# 21 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_Gigi_2
RustboroCity_EventScript_Gigi_1:
# 24 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_FacePlayer
# 25 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return

RustboroCity_EventScript_Gigi_2:
# 22 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
	goto RustboroCity_EventScript_Gigi_1


RustboroCity_EventScript_GigiEncounter::
# 30 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_2
RustboroCity_EventScript_GigiEncounter_1:
# 33 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_5
RustboroCity_EventScript_GigiEncounter_4:
# 36 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 37 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 38 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiHiLetsRegister
# 39 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 40 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 41 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 42 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredGigi
# 43 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 44 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 45 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 46 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 47 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 48 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 49 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 50 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 51 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiPassedBrineyWantToBattle, MSGBOX_YESNO
# 52 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiEncounter_8
RustboroCity_EventScript_GigiEncounter_7:
# 55 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 56 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 57 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiEncounter_2:
# 31 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	goto RustboroCity_EventScript_GigiEncounter_1

RustboroCity_EventScript_GigiEncounter_5:
# 34 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiAskToBattle
	goto RustboroCity_EventScript_GigiEncounter_4

RustboroCity_EventScript_GigiEncounter_8:
# 53 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiEncounter_7


RustboroCity_EventScript_GigiAskToBattle::
# 62 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 63 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 64 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiWantToBattle, MSGBOX_YESNO
# 65 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiAskToBattle_2
RustboroCity_EventScript_GigiAskToBattle_1:
# 68 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 69 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiAskToBattle_2:
# 66 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiAskToBattle_1


RustboroCity_EventScript_BattleGigi::
# 74 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiImNotGoingToLose
# 75 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_GigiDefeat
# 77 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 78 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	end


RustboroCity_EventScript_GigiBrineyHint::
# 83 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 84 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiMrBrineyHint
# 85 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 86 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_GigiBrineyHint_2
RustboroCity_EventScript_GigiBrineyHint_1:
# 89 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiBrineyHint_2:
# 87 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_GigiBrineyHint_1


# 129 "data/maps/RustboroCity/scripts.pory"

# 130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 131 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 132 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 133 "data/maps/RustboroCity/scripts.pory"
	end
# 134 "data/maps/RustboroCity/scripts.pory"

# 135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 136 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 137 "data/maps/RustboroCity/scripts.pory"
	end
# 138 "data/maps/RustboroCity/scripts.pory"

# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 140 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 141 "data/maps/RustboroCity/scripts.pory"
	return
# 142 "data/maps/RustboroCity/scripts.pory"

# 143 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 144 "data/maps/RustboroCity/scripts.pory"
	lockall
# 145 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 146 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 147 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 149 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 150 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 151 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 152 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 154 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 155 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 157 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 159 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 161 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 164 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 165 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 166 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 168 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 169 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 170 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 171 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 172 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 173 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 174 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 175 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 176 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 179 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 180 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 181 "data/maps/RustboroCity/scripts.pory"

# 182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 183 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 185 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 186 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 187 "data/maps/RustboroCity/scripts.pory"

# 188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 189 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 190 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 191 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 192 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 194 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 195 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 196 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 197 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 198 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 199 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 200 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 201 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 202 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 203 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 204 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 205 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 206 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 207 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 209 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 210 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 211 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 212 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 213 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 214 "data/maps/RustboroCity/scripts.pory"
	end
# 215 "data/maps/RustboroCity/scripts.pory"

# 216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 217 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 218 "data/maps/RustboroCity/scripts.pory"
	step_end
# 219 "data/maps/RustboroCity/scripts.pory"

# 220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 221 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 222 "data/maps/RustboroCity/scripts.pory"
	step_end
# 223 "data/maps/RustboroCity/scripts.pory"

# 224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 225 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 226 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 227 "data/maps/RustboroCity/scripts.pory"
	step_end
# 228 "data/maps/RustboroCity/scripts.pory"

# 229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 230 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 231 "data/maps/RustboroCity/scripts.pory"
	step_end
# 232 "data/maps/RustboroCity/scripts.pory"

# 233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 234 "data/maps/RustboroCity/scripts.pory"
	lock
# 235 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 236 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 237 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 238 "data/maps/RustboroCity/scripts.pory"
	release
# 239 "data/maps/RustboroCity/scripts.pory"
	end
# 240 "data/maps/RustboroCity/scripts.pory"

# 241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 242 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 243 "data/maps/RustboroCity/scripts.pory"
	release
# 244 "data/maps/RustboroCity/scripts.pory"
	end
# 245 "data/maps/RustboroCity/scripts.pory"

# 246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 247 "data/maps/RustboroCity/scripts.pory"
	lock
# 248 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 249 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 250 "data/maps/RustboroCity/scripts.pory"
	release
# 251 "data/maps/RustboroCity/scripts.pory"
	end
# 252 "data/maps/RustboroCity/scripts.pory"

# 253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 254 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 255 "data/maps/RustboroCity/scripts.pory"
	end
# 256 "data/maps/RustboroCity/scripts.pory"

# 257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 258 "data/maps/RustboroCity/scripts.pory"
	lock
# 259 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 260 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 261 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 262 "data/maps/RustboroCity/scripts.pory"
	release
# 263 "data/maps/RustboroCity/scripts.pory"
	end
# 264 "data/maps/RustboroCity/scripts.pory"

# 265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 266 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 267 "data/maps/RustboroCity/scripts.pory"
	release
# 268 "data/maps/RustboroCity/scripts.pory"
	end
# 269 "data/maps/RustboroCity/scripts.pory"

# 270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 271 "data/maps/RustboroCity/scripts.pory"
	lock
# 272 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 273 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 274 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 275 "data/maps/RustboroCity/scripts.pory"
	release
# 276 "data/maps/RustboroCity/scripts.pory"
	end
# 277 "data/maps/RustboroCity/scripts.pory"

# 278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 279 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 280 "data/maps/RustboroCity/scripts.pory"
	release
# 281 "data/maps/RustboroCity/scripts.pory"
	end
# 282 "data/maps/RustboroCity/scripts.pory"

# 283 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 284 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 285 "data/maps/RustboroCity/scripts.pory"
	end
# 286 "data/maps/RustboroCity/scripts.pory"

# 287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 288 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 289 "data/maps/RustboroCity/scripts.pory"
	end
# 290 "data/maps/RustboroCity/scripts.pory"

# 291 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 292 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 293 "data/maps/RustboroCity/scripts.pory"
	end
# 294 "data/maps/RustboroCity/scripts.pory"

# 295 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 296 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 297 "data/maps/RustboroCity/scripts.pory"
	end
# 298 "data/maps/RustboroCity/scripts.pory"

# 299 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 300 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 301 "data/maps/RustboroCity/scripts.pory"
	end
# 302 "data/maps/RustboroCity/scripts.pory"

# 303 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 304 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 305 "data/maps/RustboroCity/scripts.pory"
	end
# 306 "data/maps/RustboroCity/scripts.pory"

# 307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 308 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 309 "data/maps/RustboroCity/scripts.pory"
	end
# 310 "data/maps/RustboroCity/scripts.pory"

# 311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 312 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 313 "data/maps/RustboroCity/scripts.pory"
	end
# 314 "data/maps/RustboroCity/scripts.pory"

# 315 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 316 "data/maps/RustboroCity/scripts.pory"
	lock
# 317 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 318 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 319 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 320 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/RustboroCity/scripts.pory"
	release
# 322 "data/maps/RustboroCity/scripts.pory"
	end
# 323 "data/maps/RustboroCity/scripts.pory"

# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 325 "data/maps/RustboroCity/scripts.pory"
	lock
# 326 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 327 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 328 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 329 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/RustboroCity/scripts.pory"
	release
# 331 "data/maps/RustboroCity/scripts.pory"
	end
# 332 "data/maps/RustboroCity/scripts.pory"

# 333 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 334 "data/maps/RustboroCity/scripts.pory"
	lock
# 335 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 336 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 337 "data/maps/RustboroCity/scripts.pory"
	release
# 338 "data/maps/RustboroCity/scripts.pory"
	end
# 339 "data/maps/RustboroCity/scripts.pory"

# 340 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 341 "data/maps/RustboroCity/scripts.pory"
	lockall
# 342 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 343 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 344 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 345 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 346 "data/maps/RustboroCity/scripts.pory"
	end
# 347 "data/maps/RustboroCity/scripts.pory"

# 348 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 349 "data/maps/RustboroCity/scripts.pory"
	lockall
# 350 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 351 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 352 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 353 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 354 "data/maps/RustboroCity/scripts.pory"
	end
# 355 "data/maps/RustboroCity/scripts.pory"

# 356 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 357 "data/maps/RustboroCity/scripts.pory"
	lockall
# 358 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 359 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 360 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 361 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 362 "data/maps/RustboroCity/scripts.pory"
	end
# 363 "data/maps/RustboroCity/scripts.pory"

# 364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 365 "data/maps/RustboroCity/scripts.pory"
	lockall
# 366 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 367 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 368 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 369 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 370 "data/maps/RustboroCity/scripts.pory"
	end
# 371 "data/maps/RustboroCity/scripts.pory"

# 372 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 373 "data/maps/RustboroCity/scripts.pory"
	lockall
# 374 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 375 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 376 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 377 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 378 "data/maps/RustboroCity/scripts.pory"
	end
# 379 "data/maps/RustboroCity/scripts.pory"

# 380 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 381 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Grunt
# 382 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 383 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 384 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 385 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 386 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 387 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 388 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 390 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 391 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 393 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 394 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 395 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 396 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 397 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 398 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 399 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 400 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 401 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 402 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 403 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 404 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 405 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 406 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 407 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 408 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 409 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 410 "data/maps/RustboroCity/scripts.pory"
	end
# 411 "data/maps/RustboroCity/scripts.pory"

# 412 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 429 "data/maps/RustboroCity/scripts.pory"
	step_end
# 430 "data/maps/RustboroCity/scripts.pory"

# 431 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
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
	walk_right
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 439 "data/maps/RustboroCity/scripts.pory"
	step_end
# 440 "data/maps/RustboroCity/scripts.pory"

# 441 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
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
	walk_up
# 449 "data/maps/RustboroCity/scripts.pory"
	step_end
# 450 "data/maps/RustboroCity/scripts.pory"

# 451 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 452 "data/maps/RustboroCity/scripts.pory"
	lock
# 453 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 454 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 455 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 456 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 457 "data/maps/RustboroCity/scripts.pory"
	release
# 458 "data/maps/RustboroCity/scripts.pory"
	end
# 459 "data/maps/RustboroCity/scripts.pory"

# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 461 "data/maps/RustboroCity/scripts.pory"
	waitse
# 462 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 463 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 464 "data/maps/RustboroCity/scripts.pory"
	end
# 465 "data/maps/RustboroCity/scripts.pory"

# 466 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 467 "data/maps/RustboroCity/scripts.pory"
	lockall
# 468 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 469 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 470 "data/maps/RustboroCity/scripts.pory"
	end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 473 "data/maps/RustboroCity/scripts.pory"
	lockall
# 474 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 475 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 476 "data/maps/RustboroCity/scripts.pory"
	end
# 477 "data/maps/RustboroCity/scripts.pory"

# 478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 479 "data/maps/RustboroCity/scripts.pory"
	lockall
# 480 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 481 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 482 "data/maps/RustboroCity/scripts.pory"
	end
# 483 "data/maps/RustboroCity/scripts.pory"

# 484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 485 "data/maps/RustboroCity/scripts.pory"
	lockall
# 486 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 487 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 488 "data/maps/RustboroCity/scripts.pory"
	end
# 489 "data/maps/RustboroCity/scripts.pory"

# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 491 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 492 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 493 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 494 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 495 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 496 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 497 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 498 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 499 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 500 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 505 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 506 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 508 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 509 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 511 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 513 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/RustboroCity/scripts.pory"
	return
# 515 "data/maps/RustboroCity/scripts.pory"

# 516 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 520 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 521 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	return
# 527 "data/maps/RustboroCity/scripts.pory"

# 528 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	return
# 539 "data/maps/RustboroCity/scripts.pory"

# 540 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 547 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	return
# 553 "data/maps/RustboroCity/scripts.pory"

# 554 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 555 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 556 "data/maps/RustboroCity/scripts.pory"
	step_end
# 557 "data/maps/RustboroCity/scripts.pory"

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 559 "data/maps/RustboroCity/scripts.pory"
	lockall
# 560 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 561 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 562 "data/maps/RustboroCity/scripts.pory"
	end
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 565 "data/maps/RustboroCity/scripts.pory"
	lockall
# 566 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 567 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 568 "data/maps/RustboroCity/scripts.pory"
	end
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 571 "data/maps/RustboroCity/scripts.pory"
	lockall
# 572 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 573 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 574 "data/maps/RustboroCity/scripts.pory"
	end
# 575 "data/maps/RustboroCity/scripts.pory"

# 576 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 577 "data/maps/RustboroCity/scripts.pory"
	lockall
# 578 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 579 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 580 "data/maps/RustboroCity/scripts.pory"
	end
# 581 "data/maps/RustboroCity/scripts.pory"

# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 583 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 584 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 585 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 586 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 587 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 588 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 589 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 590 "data/maps/RustboroCity/scripts.pory"
	hidespeakername
# 591 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 592 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 593 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 594 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 595 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 596 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 597 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 598 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 599 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 600 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 601 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 602 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 603 "data/maps/RustboroCity/scripts.pory"
	end
# 604 "data/maps/RustboroCity/scripts.pory"

# 605 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 606 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 607 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 608 "data/maps/RustboroCity/scripts.pory"
	return
# 609 "data/maps/RustboroCity/scripts.pory"

# 610 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 611 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 612 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 614 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 615 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 617 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 619 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/RustboroCity/scripts.pory"
	return
# 621 "data/maps/RustboroCity/scripts.pory"

# 622 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 623 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 624 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 626 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 627 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 629 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	return
# 633 "data/maps/RustboroCity/scripts.pory"

# 634 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 639 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	return
# 645 "data/maps/RustboroCity/scripts.pory"

# 646 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	return
# 659 "data/maps/RustboroCity/scripts.pory"

# 660 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 665 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	return
# 669 "data/maps/RustboroCity/scripts.pory"

# 670 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 671 "data/maps/RustboroCity/scripts.pory"
	lockall
# 672 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 673 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_FacePlayer
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 676 "data/maps/RustboroCity/scripts.pory"

# 677 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 678 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 679 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 680 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 681 "data/maps/RustboroCity/scripts.pory"
	return
# 682 "data/maps/RustboroCity/scripts.pory"

# 683 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 684 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 685 "data/maps/RustboroCity/scripts.pory"
	return
# 686 "data/maps/RustboroCity/scripts.pory"

# 687 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 688 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 689 "data/maps/RustboroCity/scripts.pory"
	return
# 690 "data/maps/RustboroCity/scripts.pory"

# 691 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 692 "data/maps/RustboroCity/scripts.pory"
	lockall
# 693 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 694 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 695 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 698 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer0
# 702 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 703 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 704 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 705 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 706 "data/maps/RustboroCity/scripts.pory"

# 707 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 708 "data/maps/RustboroCity/scripts.pory"
	lockall
# 709 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 710 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 711 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 712 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer1
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 720 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 722 "data/maps/RustboroCity/scripts.pory"

# 723 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 724 "data/maps/RustboroCity/scripts.pory"
	lockall
# 725 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer2
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 736 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 738 "data/maps/RustboroCity/scripts.pory"

# 739 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 740 "data/maps/RustboroCity/scripts.pory"
	lockall
# 741 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer3
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 752 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 754 "data/maps/RustboroCity/scripts.pory"

# 755 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 756 "data/maps/RustboroCity/scripts.pory"
	lockall
# 757 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer4
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 768 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 769 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 770 "data/maps/RustboroCity/scripts.pory"

# 771 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 772 "data/maps/RustboroCity/scripts.pory"
	lockall
# 773 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer5
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 784 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 786 "data/maps/RustboroCity/scripts.pory"

# 787 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 788 "data/maps/RustboroCity/scripts.pory"
	lockall
# 789 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer6
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 800 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 801 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 802 "data/maps/RustboroCity/scripts.pory"

# 803 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 804 "data/maps/RustboroCity/scripts.pory"
	lockall
# 805 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer7
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 816 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 817 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 818 "data/maps/RustboroCity/scripts.pory"

# 819 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 820 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
# 821 "data/maps/RustboroCity/scripts.pory"
	end
# 822 "data/maps/RustboroCity/scripts.pory"

# 823 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 824 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 825 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 826 "data/maps/RustboroCity/scripts.pory"
	return
# 827 "data/maps/RustboroCity/scripts.pory"

# 828 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 830 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 831 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 832 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 833 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 834 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 835 "data/maps/RustboroCity/scripts.pory"
	step_end
# 836 "data/maps/RustboroCity/scripts.pory"

# 837 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 838 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 839 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 840 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 841 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 842 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 843 "data/maps/RustboroCity/scripts.pory"
	step_end
# 844 "data/maps/RustboroCity/scripts.pory"

# 845 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 847 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 848 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 849 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 850 "data/maps/RustboroCity/scripts.pory"
	step_end
# 851 "data/maps/RustboroCity/scripts.pory"

# 852 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 853 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 854 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 855 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 856 "data/maps/RustboroCity/scripts.pory"
	step_end
# 857 "data/maps/RustboroCity/scripts.pory"

# 858 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 859 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 860 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 861 "data/maps/RustboroCity/scripts.pory"
	step_end
# 862 "data/maps/RustboroCity/scripts.pory"

# 863 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 864 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 865 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 866 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 867 "data/maps/RustboroCity/scripts.pory"
	step_end
# 868 "data/maps/RustboroCity/scripts.pory"

# 869 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 870 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 873 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 874 "data/maps/RustboroCity/scripts.pory"
	step_end
# 875 "data/maps/RustboroCity/scripts.pory"

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 878 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 879 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 880 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 881 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 882 "data/maps/RustboroCity/scripts.pory"
	step_end
# 883 "data/maps/RustboroCity/scripts.pory"

# 884 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 885 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 886 "data/maps/RustboroCity/scripts.pory"
	end
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Grunt:
# 889 "data/maps/RustboroCity/scripts.pory"
	.string "Grunt$"
# 890 "data/maps/RustboroCity/scripts.pory"

# 891 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Researcher:
# 892 "data/maps/RustboroCity/scripts.pory"
	.string "Researcher$"
# 893 "data/maps/RustboroCity/scripts.pory"

# 894 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 895 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 896 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 897 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 898 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 899 "data/maps/RustboroCity/scripts.pory"

# 900 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 901 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 902 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 903 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 904 "data/maps/RustboroCity/scripts.pory"

# 905 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 907 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 908 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 909 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 910 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 911 "data/maps/RustboroCity/scripts.pory"

# 912 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 913 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 914 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 915 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 916 "data/maps/RustboroCity/scripts.pory"

# 917 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 918 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 919 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 920 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 921 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 922 "data/maps/RustboroCity/scripts.pory"

# 923 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 924 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 926 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 927 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 928 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 929 "data/maps/RustboroCity/scripts.pory"

# 930 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 931 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 932 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 933 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 934 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 935 "data/maps/RustboroCity/scripts.pory"

# 936 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 937 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 939 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 940 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 941 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 945 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 946 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 947 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 948 "data/maps/RustboroCity/scripts.pory"

# 949 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 950 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 951 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 952 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 953 "data/maps/RustboroCity/scripts.pory"

# 954 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 955 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 956 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 957 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 958 "data/maps/RustboroCity/scripts.pory"

# 959 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 960 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 961 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 962 "data/maps/RustboroCity/scripts.pory"

# 963 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 964 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 965 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 966 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 967 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 968 "data/maps/RustboroCity/scripts.pory"

# 969 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 970 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 971 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 974 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 975 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 976 "data/maps/RustboroCity/scripts.pory"

# 977 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 978 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 980 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 981 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 982 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 983 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 984 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 985 "data/maps/RustboroCity/scripts.pory"

# 986 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 987 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 988 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 989 "data/maps/RustboroCity/scripts.pory"

# 990 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 991 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 992 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 993 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 994 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 995 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 996 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 997 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Orb!$"
# 998 "data/maps/RustboroCity/scripts.pory"

# 999 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1000 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1001 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 1002 "data/maps/RustboroCity/scripts.pory"

# 1003 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1004 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1006 "data/maps/RustboroCity/scripts.pory"

# 1007 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredGigi:
# 1008 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
# 1009 "data/maps/RustboroCity/scripts.pory"
	.string "in the iDollNav.$"
# 1010 "data/maps/RustboroCity/scripts.pory"

# 1011 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GigiDefeat:
# 1012 "data/maps/RustboroCity/scripts.pory"
	.string "Oh boy!\n"
# 1013 "data/maps/RustboroCity/scripts.pory"
	.string "No wonder he ran away!$"
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1026 "data/maps/RustboroCity/scripts.pory"

# 1027 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1031 "data/maps/RustboroCity/scripts.pory"

# 1032 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1033 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1036 "data/maps/RustboroCity/scripts.pory"

# 1037 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1041 "data/maps/RustboroCity/scripts.pory"

# 1042 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1046 "data/maps/RustboroCity/scripts.pory"

# 1047 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1049 "data/maps/RustboroCity/scripts.pory"

# 1050 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1056 "data/maps/RustboroCity/scripts.pory"

# 1057 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1071 "data/maps/RustboroCity/scripts.pory"

# 1072 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1075 "data/maps/RustboroCity/scripts.pory"

# 1076 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_Text_GigiHiLetsRegister::
# 93 "data/maps/RustboroCity/scripts.pory"
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
# 102 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You're heading towards Dreamford, huh?\p"
	.string "I believe Murasa's all settled now in\n"
	.string "being able to take people there again.\p"
	.string "Since we're here anyways, I want to see\n"
	.string "how strong you are exactly, if you're up\l"
	.string "for it, of course.{DESTROY_MUGSHOT}$"

RustboroCity_Text_GigiOhHaventRaisedPokemonEnough::
# 108 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Not feeling prepared for what's coming\n"
	.string "up, huh?\p"
	.string "I get it, I got you all of a sudden here,\n"
	.string "wanting to battle you immediately.\p"
	.string "I'll let you off for this once, but let it\n"
	.string "be known that I will be prepared to\l"
	.string "battle you!$"

RustboroCity_Text_GigiWantToBattle::
# 114 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}So how are you feeling now?\n"
	.string "Up for a test of your Puppets,\l"
	.string "{PLAYER}?{DESTROY_MUGSHOT}$"

RustboroCity_Text_GigiImNotGoingToLose::
# 118 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Well, you should know, you may be as\n"
	.string "strong as me, but I know better about\l"
	.string "what I'm doing!\p"
	.string "Bring it on, {PLAYER}!$"

RustboroCity_Text_GigiMrBrineyHint::
# 123 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, you certainly are much more than I\n"
	.string "expected at first.\p"
	.string "Let this be known though, we are now\n"
	.string "officially rivals of the Gym Leader\l"
	.string "challenge!\p"
	.string "I'll have to train my Puppets further\n"
	.string "now, but we shall meet again later!$"
