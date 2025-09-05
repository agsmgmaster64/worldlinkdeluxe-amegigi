RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 4 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupGigiGfxId
# 5 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	end

RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0


RustboroCity_EventScript_Gigi::
# 14 "data/maps/RustboroCity/scripts.pory"
	lockall
# 15 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_Gigi_2
RustboroCity_EventScript_Gigi_1:
# 18 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_FacePlayer
# 19 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 20 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return

RustboroCity_EventScript_Gigi_2:
# 16 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
	goto RustboroCity_EventScript_Gigi_1


RustboroCity_EventScript_GigiEncounter::
# 24 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_2
RustboroCity_EventScript_GigiEncounter_1:
# 27 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_5
RustboroCity_EventScript_GigiEncounter_4:
# 30 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 31 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 32 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiHiLetsRegister
# 33 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 34 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 35 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 36 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredGigi
# 37 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 38 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 39 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 40 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 41 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 42 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 43 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 44 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 45 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiPassedBrineyWantToBattle, MSGBOX_YESNO
# 46 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiEncounter_8
RustboroCity_EventScript_GigiEncounter_7:
# 49 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 50 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 51 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiEncounter_2:
# 25 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	goto RustboroCity_EventScript_GigiEncounter_1

RustboroCity_EventScript_GigiEncounter_5:
# 28 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiAskToBattle
	goto RustboroCity_EventScript_GigiEncounter_4

RustboroCity_EventScript_GigiEncounter_8:
# 47 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiEncounter_7


RustboroCity_EventScript_GigiAskToBattle::
# 56 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 57 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiWantToBattle, MSGBOX_YESNO
# 59 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiAskToBattle_2
RustboroCity_EventScript_GigiAskToBattle_1:
# 62 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 63 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiAskToBattle_2:
# 60 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiAskToBattle_1


RustboroCity_EventScript_BattleGigi::
# 68 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiImNotGoingToLose
# 69 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 70 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_GigiDefeat
# 71 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 72 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	end


RustboroCity_EventScript_GigiBrineyHint::
# 77 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 78 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiMrBrineyHint
# 79 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 80 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_GigiBrineyHint_2
RustboroCity_EventScript_GigiBrineyHint_1:
# 83 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiBrineyHint_2:
# 81 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_GigiBrineyHint_1


# 123 "data/maps/RustboroCity/scripts.pory"

# 124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 125 "data/maps/RustboroCity/scripts.pory"
	lockall
# 126 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 127 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 128 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 129 "data/maps/RustboroCity/scripts.pory"
	end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 132 "data/maps/RustboroCity/scripts.pory"
	lock
# 133 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 134 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 135 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 136 "data/maps/RustboroCity/scripts.pory"
	release
# 137 "data/maps/RustboroCity/scripts.pory"
	end
# 138 "data/maps/RustboroCity/scripts.pory"

# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 140 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 141 "data/maps/RustboroCity/scripts.pory"
	release
# 142 "data/maps/RustboroCity/scripts.pory"
	end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 145 "data/maps/RustboroCity/scripts.pory"
	lock
# 146 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 147 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity/scripts.pory"
	release
# 149 "data/maps/RustboroCity/scripts.pory"
	end
# 150 "data/maps/RustboroCity/scripts.pory"

# 151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 152 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 153 "data/maps/RustboroCity/scripts.pory"
	end
# 154 "data/maps/RustboroCity/scripts.pory"

# 155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 156 "data/maps/RustboroCity/scripts.pory"
	lock
# 157 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 158 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity/scripts.pory"
	release
# 161 "data/maps/RustboroCity/scripts.pory"
	end
# 162 "data/maps/RustboroCity/scripts.pory"

# 163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity/scripts.pory"
	release
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 169 "data/maps/RustboroCity/scripts.pory"
	lock
# 170 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 171 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 172 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 173 "data/maps/RustboroCity/scripts.pory"
	release
# 174 "data/maps/RustboroCity/scripts.pory"
	end
# 175 "data/maps/RustboroCity/scripts.pory"

# 176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity/scripts.pory"
	release
# 179 "data/maps/RustboroCity/scripts.pory"
	end
# 180 "data/maps/RustboroCity/scripts.pory"

# 181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 187 "data/maps/RustboroCity/scripts.pory"
	end
# 188 "data/maps/RustboroCity/scripts.pory"

# 189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 190 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 191 "data/maps/RustboroCity/scripts.pory"
	end
# 192 "data/maps/RustboroCity/scripts.pory"

# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 194 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 195 "data/maps/RustboroCity/scripts.pory"
	end
# 196 "data/maps/RustboroCity/scripts.pory"

# 197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 198 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 199 "data/maps/RustboroCity/scripts.pory"
	end
# 200 "data/maps/RustboroCity/scripts.pory"

# 201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 202 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 207 "data/maps/RustboroCity/scripts.pory"
	end
# 208 "data/maps/RustboroCity/scripts.pory"

# 209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 210 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 211 "data/maps/RustboroCity/scripts.pory"
	end
# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 214 "data/maps/RustboroCity/scripts.pory"
	lock
# 215 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 216 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 217 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 218 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 219 "data/maps/RustboroCity/scripts.pory"
	release
# 220 "data/maps/RustboroCity/scripts.pory"
	end
# 221 "data/maps/RustboroCity/scripts.pory"

# 222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 223 "data/maps/RustboroCity/scripts.pory"
	lock
# 224 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 225 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 226 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 227 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/RustboroCity/scripts.pory"
	release
# 229 "data/maps/RustboroCity/scripts.pory"
	end
# 230 "data/maps/RustboroCity/scripts.pory"

# 231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 232 "data/maps/RustboroCity/scripts.pory"
	lock
# 233 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 234 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 235 "data/maps/RustboroCity/scripts.pory"
	release
# 236 "data/maps/RustboroCity/scripts.pory"
	end
# 237 "data/maps/RustboroCity/scripts.pory"

# 238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 239 "data/maps/RustboroCity/scripts.pory"
	lockall
# 240 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 241 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 242 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 243 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 244 "data/maps/RustboroCity/scripts.pory"
	end
# 245 "data/maps/RustboroCity/scripts.pory"

# 246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 247 "data/maps/RustboroCity/scripts.pory"
	lockall
# 248 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 249 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 250 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 251 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 252 "data/maps/RustboroCity/scripts.pory"
	end
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 255 "data/maps/RustboroCity/scripts.pory"
	lockall
# 256 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 257 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 258 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 259 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 260 "data/maps/RustboroCity/scripts.pory"
	end
# 261 "data/maps/RustboroCity/scripts.pory"

# 262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 263 "data/maps/RustboroCity/scripts.pory"
	lockall
# 264 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 265 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 266 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 267 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 268 "data/maps/RustboroCity/scripts.pory"
	end
# 269 "data/maps/RustboroCity/scripts.pory"

# 270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 271 "data/maps/RustboroCity/scripts.pory"
	lockall
# 272 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 273 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 274 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 275 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 276 "data/maps/RustboroCity/scripts.pory"
	end
# 277 "data/maps/RustboroCity/scripts.pory"

# 278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 279 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Grunt
# 280 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 281 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 282 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 283 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 284 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 285 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 286 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 288 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 289 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 291 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 292 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 293 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 295 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 296 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 297 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 298 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 299 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 300 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 301 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 302 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 303 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 304 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 305 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 306 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 307 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 308 "data/maps/RustboroCity/scripts.pory"
	end
# 309 "data/maps/RustboroCity/scripts.pory"

# 310 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 311 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 312 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 313 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 314 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 315 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 317 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 318 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 319 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 320 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 321 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 322 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 323 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 324 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 325 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 326 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 327 "data/maps/RustboroCity/scripts.pory"
	step_end
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 330 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 331 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 332 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 333 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 334 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 335 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 336 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 337 "data/maps/RustboroCity/scripts.pory"
	step_end
# 338 "data/maps/RustboroCity/scripts.pory"

# 339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 340 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 341 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 342 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 343 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 344 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 345 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 346 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 347 "data/maps/RustboroCity/scripts.pory"
	step_end
# 348 "data/maps/RustboroCity/scripts.pory"

# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 350 "data/maps/RustboroCity/scripts.pory"
	lock
# 351 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 352 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 353 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 354 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 355 "data/maps/RustboroCity/scripts.pory"
	release
# 356 "data/maps/RustboroCity/scripts.pory"
	end
# 357 "data/maps/RustboroCity/scripts.pory"

# 358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 359 "data/maps/RustboroCity/scripts.pory"
	waitse
# 360 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 361 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 362 "data/maps/RustboroCity/scripts.pory"
	end
# 363 "data/maps/RustboroCity/scripts.pory"

# 364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 365 "data/maps/RustboroCity/scripts.pory"
	lockall
# 366 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 367 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 368 "data/maps/RustboroCity/scripts.pory"
	end
# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 371 "data/maps/RustboroCity/scripts.pory"
	lockall
# 372 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 373 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 374 "data/maps/RustboroCity/scripts.pory"
	end
# 375 "data/maps/RustboroCity/scripts.pory"

# 376 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 377 "data/maps/RustboroCity/scripts.pory"
	lockall
# 378 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 379 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 380 "data/maps/RustboroCity/scripts.pory"
	end
# 381 "data/maps/RustboroCity/scripts.pory"

# 382 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 383 "data/maps/RustboroCity/scripts.pory"
	lockall
# 384 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 385 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 386 "data/maps/RustboroCity/scripts.pory"
	end
# 387 "data/maps/RustboroCity/scripts.pory"

# 388 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 389 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 390 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 391 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 392 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 393 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 394 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 395 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 396 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 397 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 398 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 399 "data/maps/RustboroCity/scripts.pory"
	end
# 400 "data/maps/RustboroCity/scripts.pory"

# 401 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 402 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 403 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 404 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 406 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 407 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 409 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 410 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 411 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 412 "data/maps/RustboroCity/scripts.pory"
	return
# 413 "data/maps/RustboroCity/scripts.pory"

# 414 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 415 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 418 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 419 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 421 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 422 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 423 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 424 "data/maps/RustboroCity/scripts.pory"
	return
# 425 "data/maps/RustboroCity/scripts.pory"

# 426 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 427 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 428 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 430 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 431 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 432 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 433 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 435 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 436 "data/maps/RustboroCity/scripts.pory"
	return
# 437 "data/maps/RustboroCity/scripts.pory"

# 438 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 439 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 440 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 442 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 443 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 444 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 445 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 446 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 447 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 448 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 449 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 450 "data/maps/RustboroCity/scripts.pory"
	return
# 451 "data/maps/RustboroCity/scripts.pory"

# 452 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 454 "data/maps/RustboroCity/scripts.pory"
	step_end
# 455 "data/maps/RustboroCity/scripts.pory"

# 456 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 457 "data/maps/RustboroCity/scripts.pory"
	lockall
# 458 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 459 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 460 "data/maps/RustboroCity/scripts.pory"
	end
# 461 "data/maps/RustboroCity/scripts.pory"

# 462 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 463 "data/maps/RustboroCity/scripts.pory"
	lockall
# 464 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 465 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 466 "data/maps/RustboroCity/scripts.pory"
	end
# 467 "data/maps/RustboroCity/scripts.pory"

# 468 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 469 "data/maps/RustboroCity/scripts.pory"
	lockall
# 470 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 471 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 472 "data/maps/RustboroCity/scripts.pory"
	end
# 473 "data/maps/RustboroCity/scripts.pory"

# 474 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 475 "data/maps/RustboroCity/scripts.pory"
	lockall
# 476 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 477 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 478 "data/maps/RustboroCity/scripts.pory"
	end
# 479 "data/maps/RustboroCity/scripts.pory"

# 480 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 481 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 482 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 483 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 484 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 485 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 486 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 487 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 488 "data/maps/RustboroCity/scripts.pory"
	hidespeakername
# 489 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 490 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 491 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 492 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 493 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 494 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 495 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 496 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 497 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 498 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 499 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 500 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 504 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 505 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 506 "data/maps/RustboroCity/scripts.pory"
	return
# 507 "data/maps/RustboroCity/scripts.pory"

# 508 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 509 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 510 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 512 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 513 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 515 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 516 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 517 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/RustboroCity/scripts.pory"
	return
# 519 "data/maps/RustboroCity/scripts.pory"

# 520 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	return
# 531 "data/maps/RustboroCity/scripts.pory"

# 532 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	return
# 543 "data/maps/RustboroCity/scripts.pory"

# 544 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 555 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/RustboroCity/scripts.pory"
	return
# 557 "data/maps/RustboroCity/scripts.pory"

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 559 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 563 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	return
# 567 "data/maps/RustboroCity/scripts.pory"

# 568 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 569 "data/maps/RustboroCity/scripts.pory"
	lockall
# 570 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 571 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_FacePlayer
# 572 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 576 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 577 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 578 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 579 "data/maps/RustboroCity/scripts.pory"
	return
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 582 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 583 "data/maps/RustboroCity/scripts.pory"
	return
# 584 "data/maps/RustboroCity/scripts.pory"

# 585 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 586 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 587 "data/maps/RustboroCity/scripts.pory"
	return
# 588 "data/maps/RustboroCity/scripts.pory"

# 589 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 590 "data/maps/RustboroCity/scripts.pory"
	lockall
# 591 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 592 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 593 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 595 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 596 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 598 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer0
# 600 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 602 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 604 "data/maps/RustboroCity/scripts.pory"

# 605 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 606 "data/maps/RustboroCity/scripts.pory"
	lockall
# 607 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 608 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 609 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 611 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 612 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 614 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer1
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 620 "data/maps/RustboroCity/scripts.pory"

# 621 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 622 "data/maps/RustboroCity/scripts.pory"
	lockall
# 623 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer2
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 634 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 636 "data/maps/RustboroCity/scripts.pory"

# 637 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 638 "data/maps/RustboroCity/scripts.pory"
	lockall
# 639 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer3
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 652 "data/maps/RustboroCity/scripts.pory"

# 653 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 654 "data/maps/RustboroCity/scripts.pory"
	lockall
# 655 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer4
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 668 "data/maps/RustboroCity/scripts.pory"

# 669 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 670 "data/maps/RustboroCity/scripts.pory"
	lockall
# 671 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer5
# 680 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 681 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 682 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 683 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 684 "data/maps/RustboroCity/scripts.pory"

# 685 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 686 "data/maps/RustboroCity/scripts.pory"
	lockall
# 687 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 688 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 689 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 690 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 691 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 692 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 694 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer6
# 696 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 698 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 700 "data/maps/RustboroCity/scripts.pory"

# 701 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 702 "data/maps/RustboroCity/scripts.pory"
	lockall
# 703 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 704 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 705 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 707 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 708 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 709 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer7
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 716 "data/maps/RustboroCity/scripts.pory"

# 717 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 718 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
# 719 "data/maps/RustboroCity/scripts.pory"
	end
# 720 "data/maps/RustboroCity/scripts.pory"

# 721 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 722 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 723 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 724 "data/maps/RustboroCity/scripts.pory"
	return
# 725 "data/maps/RustboroCity/scripts.pory"

# 726 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 727 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 728 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 729 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 730 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 731 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 732 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 733 "data/maps/RustboroCity/scripts.pory"
	step_end
# 734 "data/maps/RustboroCity/scripts.pory"

# 735 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 736 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 737 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 738 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 739 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 740 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 741 "data/maps/RustboroCity/scripts.pory"
	step_end
# 742 "data/maps/RustboroCity/scripts.pory"

# 743 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 744 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 745 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 746 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 747 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 748 "data/maps/RustboroCity/scripts.pory"
	step_end
# 749 "data/maps/RustboroCity/scripts.pory"

# 750 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 751 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 752 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 753 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 754 "data/maps/RustboroCity/scripts.pory"
	step_end
# 755 "data/maps/RustboroCity/scripts.pory"

# 756 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 757 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 758 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 759 "data/maps/RustboroCity/scripts.pory"
	step_end
# 760 "data/maps/RustboroCity/scripts.pory"

# 761 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 762 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 763 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 764 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 765 "data/maps/RustboroCity/scripts.pory"
	step_end
# 766 "data/maps/RustboroCity/scripts.pory"

# 767 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 768 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 769 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 770 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 771 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 772 "data/maps/RustboroCity/scripts.pory"
	step_end
# 773 "data/maps/RustboroCity/scripts.pory"

# 774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 775 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 776 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 777 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 778 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 779 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 780 "data/maps/RustboroCity/scripts.pory"
	step_end
# 781 "data/maps/RustboroCity/scripts.pory"

# 782 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 783 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 784 "data/maps/RustboroCity/scripts.pory"
	end
# 785 "data/maps/RustboroCity/scripts.pory"

# 786 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Grunt:
# 787 "data/maps/RustboroCity/scripts.pory"
	.string "Grunt$"
# 788 "data/maps/RustboroCity/scripts.pory"

# 789 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Researcher:
# 790 "data/maps/RustboroCity/scripts.pory"
	.string "Researcher$"
# 791 "data/maps/RustboroCity/scripts.pory"

# 792 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 793 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 794 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 795 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 796 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 797 "data/maps/RustboroCity/scripts.pory"

# 798 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 799 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 800 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 801 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 802 "data/maps/RustboroCity/scripts.pory"

# 803 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 804 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 805 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 806 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 807 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 808 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 809 "data/maps/RustboroCity/scripts.pory"

# 810 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 811 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 812 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 813 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 814 "data/maps/RustboroCity/scripts.pory"

# 815 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 816 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 817 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 818 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 819 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 820 "data/maps/RustboroCity/scripts.pory"

# 821 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 822 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 823 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 824 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 825 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 826 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 827 "data/maps/RustboroCity/scripts.pory"

# 828 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 829 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 830 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 831 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 832 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 833 "data/maps/RustboroCity/scripts.pory"

# 834 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 835 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 836 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 837 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 838 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 839 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 840 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 841 "data/maps/RustboroCity/scripts.pory"

# 842 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 843 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 844 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 845 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 846 "data/maps/RustboroCity/scripts.pory"

# 847 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 848 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 849 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 850 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 851 "data/maps/RustboroCity/scripts.pory"

# 852 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 853 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 854 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 855 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 856 "data/maps/RustboroCity/scripts.pory"

# 857 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 858 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 859 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 860 "data/maps/RustboroCity/scripts.pory"

# 861 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 862 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 863 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 864 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 865 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 866 "data/maps/RustboroCity/scripts.pory"

# 867 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 868 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 869 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 870 "data/maps/RustboroCity/scripts.pory"

# 871 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 872 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 873 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 874 "data/maps/RustboroCity/scripts.pory"

# 875 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 876 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 877 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 878 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 879 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 880 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 881 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 882 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 883 "data/maps/RustboroCity/scripts.pory"

# 884 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 885 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 886 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 889 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 890 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 891 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 892 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 893 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 894 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 895 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Orb!$"
# 896 "data/maps/RustboroCity/scripts.pory"

# 897 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 898 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 899 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 900 "data/maps/RustboroCity/scripts.pory"

# 901 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 902 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 903 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 904 "data/maps/RustboroCity/scripts.pory"

# 905 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredGigi:
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
# 907 "data/maps/RustboroCity/scripts.pory"
	.string "in the iDollNav.$"
# 908 "data/maps/RustboroCity/scripts.pory"

# 909 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GigiDefeat:
# 910 "data/maps/RustboroCity/scripts.pory"
	.string "Oh boy!\n"
# 911 "data/maps/RustboroCity/scripts.pory"
	.string "No wonder he ran away!$"
# 912 "data/maps/RustboroCity/scripts.pory"

# 913 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 914 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 915 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 916 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 917 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 918 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 919 "data/maps/RustboroCity/scripts.pory"

# 920 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 921 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 922 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 923 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 924 "data/maps/RustboroCity/scripts.pory"

# 925 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 926 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 927 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 928 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 929 "data/maps/RustboroCity/scripts.pory"

# 930 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 931 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 932 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 933 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 934 "data/maps/RustboroCity/scripts.pory"

# 935 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 936 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 937 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 939 "data/maps/RustboroCity/scripts.pory"

# 940 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 941 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 943 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 944 "data/maps/RustboroCity/scripts.pory"

# 945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 946 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 947 "data/maps/RustboroCity/scripts.pory"

# 948 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 949 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 950 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 951 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 952 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 953 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 954 "data/maps/RustboroCity/scripts.pory"

# 955 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 956 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 957 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 958 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 959 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 960 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 961 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 962 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 963 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 964 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 965 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 966 "data/maps/RustboroCity/scripts.pory"

# 967 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 968 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 971 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 972 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 975 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 976 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 977 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 978 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 980 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 981 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 982 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

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
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Well, you should know, you may be as\n"
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
