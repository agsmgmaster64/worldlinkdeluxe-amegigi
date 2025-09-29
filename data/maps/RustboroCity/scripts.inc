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
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto RustboroCity_EventScript_Gigi_1


RustboroCity_EventScript_RivalTrigger0::
# 24 "data/maps/RustboroCity/scripts.pory"
	lockall
# 25 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 26 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 27 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 29 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 30 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 31 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 32 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer0
# 34 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger1::
# 41 "data/maps/RustboroCity/scripts.pory"
	lockall
# 42 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 43 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 44 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 46 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 47 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 49 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer1
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger2::
# 58 "data/maps/RustboroCity/scripts.pory"
	lockall
# 59 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 60 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 66 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer2
# 68 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 70 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger3::
# 75 "data/maps/RustboroCity/scripts.pory"
	lockall
# 76 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 77 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 78 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 80 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 81 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 83 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer3
# 85 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 87 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger4::
# 92 "data/maps/RustboroCity/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 94 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 97 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 98 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 100 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer4
# 102 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger5::
# 109 "data/maps/RustboroCity/scripts.pory"
	lockall
# 110 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 111 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 112 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 114 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 115 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 117 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer5
# 119 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 121 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger6::
# 126 "data/maps/RustboroCity/scripts.pory"
	lockall
# 127 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 128 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 129 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 130 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 131 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 132 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 134 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer6
# 136 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 139 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_RivalTrigger7::
# 143 "data/maps/RustboroCity/scripts.pory"
	lockall
# 144 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 145 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_WalkInPlaceFasterDown
# 146 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 148 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_ExclamationMark
# 149 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, Common_Movement_Delay48
# 151 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GIGI, RustboroCity_Movement_RivalApproachPlayer7
# 153 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 155 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiEncounter
	return


RustboroCity_EventScript_GigiEncounter::
# 160 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_2
RustboroCity_EventScript_GigiEncounter_1:
# 163 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_GigiEncounter_5
RustboroCity_EventScript_GigiEncounter_4:
# 166 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 167 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GigiEncounter_Text_0
# 174 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 175 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 176 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GigiEncounter_Text_1
# 179 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 180 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 181 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 182 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 183 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 184 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 185 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 186 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 187 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GigiEncounter_Text_2, MSGBOX_YESNO
# 190 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiEncounter_8
RustboroCity_EventScript_GigiEncounter_7:
# 193 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 194 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 195 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 196 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiEncounter_2:
# 161 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	goto RustboroCity_EventScript_GigiEncounter_1

RustboroCity_EventScript_GigiEncounter_5:
# 164 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiAskToBattle
	goto RustboroCity_EventScript_GigiEncounter_4

RustboroCity_EventScript_GigiEncounter_8:
# 191 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiEncounter_7


RustboroCity_EventScript_GigiAskToBattle::
# 201 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 202 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GigiAskToBattle_Text_0, MSGBOX_YESNO
# 205 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_GigiAskToBattle_2
RustboroCity_EventScript_GigiAskToBattle_1:
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GigiOhHaventRaisedPokemonEnough
# 209 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiAskToBattle_2:
# 206 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleGigi
	goto RustboroCity_EventScript_GigiAskToBattle_1


RustboroCity_EventScript_BattleGigi::
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_BattleGigi_Text_0
# 216 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 217 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_GigiDefeat
# 218 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 219 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_GigiBrineyHint
	end


RustboroCity_EventScript_GigiBrineyHint::
# 224 "data/maps/RustboroCity/scripts.pory"
	setspeakername gText_Gigi
# 225 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GigiBrineyHint_Text_0
# 228 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 229 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_GigiBrineyHint_2
RustboroCity_EventScript_GigiBrineyHint_1:
# 233 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_GigiBrineyHint_2:
# 230 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 231 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
	goto RustboroCity_EventScript_GigiBrineyHint_1


# 243 "data/maps/RustboroCity/scripts.pory"

# 244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 245 "data/maps/RustboroCity/scripts.pory"
	lockall
# 246 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 247 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 248 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 249 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 250 "data/maps/RustboroCity/scripts.pory"
	end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 253 "data/maps/RustboroCity/scripts.pory"
	lock
# 254 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 255 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 256 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 257 "data/maps/RustboroCity/scripts.pory"
	release
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 261 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 262 "data/maps/RustboroCity/scripts.pory"
	release
# 263 "data/maps/RustboroCity/scripts.pory"
	end
# 264 "data/maps/RustboroCity/scripts.pory"

# 265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 266 "data/maps/RustboroCity/scripts.pory"
	lock
# 267 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 268 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 269 "data/maps/RustboroCity/scripts.pory"
	release
# 270 "data/maps/RustboroCity/scripts.pory"
	end
# 271 "data/maps/RustboroCity/scripts.pory"

# 272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 273 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 274 "data/maps/RustboroCity/scripts.pory"
	end
# 275 "data/maps/RustboroCity/scripts.pory"

# 276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 277 "data/maps/RustboroCity/scripts.pory"
	lock
# 278 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 279 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 280 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 281 "data/maps/RustboroCity/scripts.pory"
	release
# 282 "data/maps/RustboroCity/scripts.pory"
	end
# 283 "data/maps/RustboroCity/scripts.pory"

# 284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 285 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 286 "data/maps/RustboroCity/scripts.pory"
	release
# 287 "data/maps/RustboroCity/scripts.pory"
	end
# 288 "data/maps/RustboroCity/scripts.pory"

# 289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 290 "data/maps/RustboroCity/scripts.pory"
	lock
# 291 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 292 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 293 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 294 "data/maps/RustboroCity/scripts.pory"
	release
# 295 "data/maps/RustboroCity/scripts.pory"
	end
# 296 "data/maps/RustboroCity/scripts.pory"

# 297 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 298 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 299 "data/maps/RustboroCity/scripts.pory"
	release
# 300 "data/maps/RustboroCity/scripts.pory"
	end
# 301 "data/maps/RustboroCity/scripts.pory"

# 302 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 303 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 304 "data/maps/RustboroCity/scripts.pory"
	end
# 305 "data/maps/RustboroCity/scripts.pory"

# 306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 308 "data/maps/RustboroCity/scripts.pory"
	end
# 309 "data/maps/RustboroCity/scripts.pory"

# 310 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 311 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 312 "data/maps/RustboroCity/scripts.pory"
	end
# 313 "data/maps/RustboroCity/scripts.pory"

# 314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 315 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 316 "data/maps/RustboroCity/scripts.pory"
	end
# 317 "data/maps/RustboroCity/scripts.pory"

# 318 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 319 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 320 "data/maps/RustboroCity/scripts.pory"
	end
# 321 "data/maps/RustboroCity/scripts.pory"

# 322 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 323 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 324 "data/maps/RustboroCity/scripts.pory"
	end
# 325 "data/maps/RustboroCity/scripts.pory"

# 326 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 327 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 328 "data/maps/RustboroCity/scripts.pory"
	end
# 329 "data/maps/RustboroCity/scripts.pory"

# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 331 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 332 "data/maps/RustboroCity/scripts.pory"
	end
# 333 "data/maps/RustboroCity/scripts.pory"

# 334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 335 "data/maps/RustboroCity/scripts.pory"
	lock
# 336 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 337 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 338 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/RustboroCity/scripts.pory"
	release
# 341 "data/maps/RustboroCity/scripts.pory"
	end
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 344 "data/maps/RustboroCity/scripts.pory"
	lock
# 345 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 346 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 347 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 348 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/RustboroCity/scripts.pory"
	release
# 350 "data/maps/RustboroCity/scripts.pory"
	end
# 351 "data/maps/RustboroCity/scripts.pory"

# 352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 353 "data/maps/RustboroCity/scripts.pory"
	lock
# 354 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 355 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 356 "data/maps/RustboroCity/scripts.pory"
	release
# 357 "data/maps/RustboroCity/scripts.pory"
	end
# 358 "data/maps/RustboroCity/scripts.pory"

# 359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 360 "data/maps/RustboroCity/scripts.pory"
	lockall
# 361 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 362 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 363 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 364 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 365 "data/maps/RustboroCity/scripts.pory"
	end
# 366 "data/maps/RustboroCity/scripts.pory"

# 367 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 368 "data/maps/RustboroCity/scripts.pory"
	lockall
# 369 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 370 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 371 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 372 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 373 "data/maps/RustboroCity/scripts.pory"
	end
# 374 "data/maps/RustboroCity/scripts.pory"

# 375 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 376 "data/maps/RustboroCity/scripts.pory"
	lockall
# 377 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 378 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 379 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 380 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 381 "data/maps/RustboroCity/scripts.pory"
	end
# 382 "data/maps/RustboroCity/scripts.pory"

# 383 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 384 "data/maps/RustboroCity/scripts.pory"
	lockall
# 385 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 386 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 387 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 388 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 389 "data/maps/RustboroCity/scripts.pory"
	end
# 390 "data/maps/RustboroCity/scripts.pory"

# 391 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 392 "data/maps/RustboroCity/scripts.pory"
	lockall
# 393 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 394 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 395 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 396 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 397 "data/maps/RustboroCity/scripts.pory"
	end
# 398 "data/maps/RustboroCity/scripts.pory"

# 399 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 400 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Grunt
# 401 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 402 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 403 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 404 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 405 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 406 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 407 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 409 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 410 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 411 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 412 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 413 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 414 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 415 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 416 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 417 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 418 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 419 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 420 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 421 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 422 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 423 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 424 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 425 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 426 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 427 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 428 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 429 "data/maps/RustboroCity/scripts.pory"
	end
# 430 "data/maps/RustboroCity/scripts.pory"

# 431 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 448 "data/maps/RustboroCity/scripts.pory"
	step_end
# 449 "data/maps/RustboroCity/scripts.pory"

# 450 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 458 "data/maps/RustboroCity/scripts.pory"
	step_end
# 459 "data/maps/RustboroCity/scripts.pory"

# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 468 "data/maps/RustboroCity/scripts.pory"
	step_end
# 469 "data/maps/RustboroCity/scripts.pory"

# 470 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 471 "data/maps/RustboroCity/scripts.pory"
	lock
# 472 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 473 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 474 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 475 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 476 "data/maps/RustboroCity/scripts.pory"
	release
# 477 "data/maps/RustboroCity/scripts.pory"
	end
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 480 "data/maps/RustboroCity/scripts.pory"
	waitse
# 481 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 482 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 483 "data/maps/RustboroCity/scripts.pory"
	end
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 486 "data/maps/RustboroCity/scripts.pory"
	lockall
# 487 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 488 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 492 "data/maps/RustboroCity/scripts.pory"
	lockall
# 493 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 494 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 495 "data/maps/RustboroCity/scripts.pory"
	end
# 496 "data/maps/RustboroCity/scripts.pory"

# 497 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 498 "data/maps/RustboroCity/scripts.pory"
	lockall
# 499 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 500 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 504 "data/maps/RustboroCity/scripts.pory"
	lockall
# 505 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 506 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 507 "data/maps/RustboroCity/scripts.pory"
	end
# 508 "data/maps/RustboroCity/scripts.pory"

# 509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 510 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 511 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 512 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 513 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 514 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 515 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 516 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 517 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 518 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 519 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 520 "data/maps/RustboroCity/scripts.pory"
	end
# 521 "data/maps/RustboroCity/scripts.pory"

# 522 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 523 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 527 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 528 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	return
# 534 "data/maps/RustboroCity/scripts.pory"

# 535 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 539 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	return
# 546 "data/maps/RustboroCity/scripts.pory"

# 547 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 554 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 556 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/RustboroCity/scripts.pory"
	return
# 558 "data/maps/RustboroCity/scripts.pory"

# 559 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 560 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 561 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 563 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 564 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 566 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 570 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/RustboroCity/scripts.pory"
	return
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 574 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 575 "data/maps/RustboroCity/scripts.pory"
	step_end
# 576 "data/maps/RustboroCity/scripts.pory"

# 577 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 578 "data/maps/RustboroCity/scripts.pory"
	lockall
# 579 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 580 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 581 "data/maps/RustboroCity/scripts.pory"
	end
# 582 "data/maps/RustboroCity/scripts.pory"

# 583 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 584 "data/maps/RustboroCity/scripts.pory"
	lockall
# 585 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 586 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 587 "data/maps/RustboroCity/scripts.pory"
	end
# 588 "data/maps/RustboroCity/scripts.pory"

# 589 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 590 "data/maps/RustboroCity/scripts.pory"
	lockall
# 591 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 592 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 593 "data/maps/RustboroCity/scripts.pory"
	end
# 594 "data/maps/RustboroCity/scripts.pory"

# 595 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 596 "data/maps/RustboroCity/scripts.pory"
	lockall
# 597 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 598 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 599 "data/maps/RustboroCity/scripts.pory"
	end
# 600 "data/maps/RustboroCity/scripts.pory"

# 601 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 602 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 607 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity/scripts.pory"
	hidespeakername
# 610 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 611 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 612 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 613 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 614 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 615 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 616 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 617 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 618 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 619 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 620 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 621 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 622 "data/maps/RustboroCity/scripts.pory"
	end
# 623 "data/maps/RustboroCity/scripts.pory"

# 624 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 625 "data/maps/RustboroCity/scripts.pory"
	setspeakername RustboroCity_Text_Researcher
# 626 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 627 "data/maps/RustboroCity/scripts.pory"
	return
# 628 "data/maps/RustboroCity/scripts.pory"

# 629 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 633 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 634 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	return
# 640 "data/maps/RustboroCity/scripts.pory"

# 641 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	return
# 652 "data/maps/RustboroCity/scripts.pory"

# 653 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	return
# 664 "data/maps/RustboroCity/scripts.pory"

# 665 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 672 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	return
# 678 "data/maps/RustboroCity/scripts.pory"

# 679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 686 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/RustboroCity/scripts.pory"
	return
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 690 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 691 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 692 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 693 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 694 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 695 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 696 "data/maps/RustboroCity/scripts.pory"
	step_end
# 697 "data/maps/RustboroCity/scripts.pory"

# 698 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 699 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 700 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 701 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 702 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 703 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 704 "data/maps/RustboroCity/scripts.pory"
	step_end
# 705 "data/maps/RustboroCity/scripts.pory"

# 706 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 707 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 708 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 709 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 710 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 711 "data/maps/RustboroCity/scripts.pory"
	step_end
# 712 "data/maps/RustboroCity/scripts.pory"

# 713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 714 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 715 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 716 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 717 "data/maps/RustboroCity/scripts.pory"
	step_end
# 718 "data/maps/RustboroCity/scripts.pory"

# 719 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 720 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 721 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 722 "data/maps/RustboroCity/scripts.pory"
	step_end
# 723 "data/maps/RustboroCity/scripts.pory"

# 724 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 725 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 726 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 727 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 728 "data/maps/RustboroCity/scripts.pory"
	step_end
# 729 "data/maps/RustboroCity/scripts.pory"

# 730 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 731 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 732 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 733 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 734 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 735 "data/maps/RustboroCity/scripts.pory"
	step_end
# 736 "data/maps/RustboroCity/scripts.pory"

# 737 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 738 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 739 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 740 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 741 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 742 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 743 "data/maps/RustboroCity/scripts.pory"
	step_end
# 744 "data/maps/RustboroCity/scripts.pory"

# 745 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 746 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 747 "data/maps/RustboroCity/scripts.pory"
	end
# 748 "data/maps/RustboroCity/scripts.pory"

# 749 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Grunt:
# 750 "data/maps/RustboroCity/scripts.pory"
	.string "Grunt$"
# 751 "data/maps/RustboroCity/scripts.pory"

# 752 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_Researcher:
# 753 "data/maps/RustboroCity/scripts.pory"
	.string "Researcher$"
# 754 "data/maps/RustboroCity/scripts.pory"

# 755 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 756 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 757 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 758 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 759 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 760 "data/maps/RustboroCity/scripts.pory"

# 761 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 762 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 763 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 764 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 767 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 768 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 769 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 770 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 771 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 772 "data/maps/RustboroCity/scripts.pory"

# 773 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 774 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 775 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 776 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 777 "data/maps/RustboroCity/scripts.pory"

# 778 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 779 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 780 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 781 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 782 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 783 "data/maps/RustboroCity/scripts.pory"

# 784 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 785 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 786 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 787 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 788 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 789 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 790 "data/maps/RustboroCity/scripts.pory"

# 791 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 792 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 793 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 794 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 795 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 796 "data/maps/RustboroCity/scripts.pory"

# 797 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 798 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 799 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 800 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 801 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 802 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 803 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 804 "data/maps/RustboroCity/scripts.pory"

# 805 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 806 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 807 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 808 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 809 "data/maps/RustboroCity/scripts.pory"

# 810 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 811 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 812 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 813 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 814 "data/maps/RustboroCity/scripts.pory"

# 815 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 816 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 817 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 818 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 819 "data/maps/RustboroCity/scripts.pory"

# 820 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 821 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 822 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 823 "data/maps/RustboroCity/scripts.pory"

# 824 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 825 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 826 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 827 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 828 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 829 "data/maps/RustboroCity/scripts.pory"

# 830 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 831 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 832 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 833 "data/maps/RustboroCity/scripts.pory"

# 834 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 835 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 836 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 839 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 840 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 841 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 842 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 843 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 844 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 845 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 846 "data/maps/RustboroCity/scripts.pory"

# 847 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 848 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 849 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 850 "data/maps/RustboroCity/scripts.pory"

# 851 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 852 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 853 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 854 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 855 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 856 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 857 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 858 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Orb!$"
# 859 "data/maps/RustboroCity/scripts.pory"

# 860 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 861 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 862 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 863 "data/maps/RustboroCity/scripts.pory"

# 864 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 865 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 866 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 867 "data/maps/RustboroCity/scripts.pory"

# 868 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredGigi:
# 869 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
# 870 "data/maps/RustboroCity/scripts.pory"
	.string "in the iDollNav.$"
# 871 "data/maps/RustboroCity/scripts.pory"

# 872 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GigiDefeat:
# 873 "data/maps/RustboroCity/scripts.pory"
	.string "Oh boy!\n"
# 874 "data/maps/RustboroCity/scripts.pory"
	.string "No wonder he ran away!$"
# 875 "data/maps/RustboroCity/scripts.pory"

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 877 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 878 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 879 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 880 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 881 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 882 "data/maps/RustboroCity/scripts.pory"

# 883 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 884 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 885 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 886 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 889 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 890 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 891 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 892 "data/maps/RustboroCity/scripts.pory"

# 893 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 894 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 895 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 896 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 897 "data/maps/RustboroCity/scripts.pory"

# 898 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 899 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 900 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 901 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 902 "data/maps/RustboroCity/scripts.pory"

# 903 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 904 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 905 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 907 "data/maps/RustboroCity/scripts.pory"

# 908 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 909 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 910 "data/maps/RustboroCity/scripts.pory"

# 911 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 912 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 913 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 914 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 915 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 916 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 917 "data/maps/RustboroCity/scripts.pory"

# 918 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 919 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 920 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 921 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 922 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 923 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 924 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 926 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 927 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 928 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 929 "data/maps/RustboroCity/scripts.pory"

# 930 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 931 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 932 "data/maps/RustboroCity/scripts.pory"

# 933 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 934 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 935 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 936 "data/maps/RustboroCity/scripts.pory"

# 937 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 939 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 940 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 941 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 943 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 944 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 945 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_GigiEncounter_Text_0:
# 168 "data/maps/RustboroCity/scripts.pory"
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

RustboroCity_EventScript_GigiEncounter_Text_1:
# 177 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Gigi\n"
	.string "in the iDollNav.$"

RustboroCity_EventScript_GigiEncounter_Text_2:
# 187 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You're heading towards Dreamford, huh?\p"
	.string "I believe Murasa's all settled now in\n"
	.string "being able to take people there again.\p"
	.string "Since we're here anyways, I want to see\n"
	.string "how strong you are exactly, if you're up\l"
	.string "for it, of course.{DESTROY_MUGSHOT}$"

RustboroCity_EventScript_GigiAskToBattle_Text_0:
# 203 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}So how are you feeling now?\n"
	.string "Up for a test of your Puppets,\l"
	.string "{PLAYER}?{DESTROY_MUGSHOT}$"

RustboroCity_EventScript_BattleGigi_Text_0:
# 214 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Well, you should know, you may be as\n"
	.string "strong as me, but I know better about\l"
	.string "what I'm doing!\p"
	.string "Bring it on, {PLAYER}!$"

RustboroCity_EventScript_GigiBrineyHint_Text_0:
# 225 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, you certainly are much more than I\n"
	.string "expected at first.\p"
	.string "Let this be known though, we are now\n"
	.string "officially rivals of the Gym Leader\l"
	.string "challenge!\p"
	.string "I'll have to train my Puppets further\n"
	.string "now, but we shall meet again later!$"

RustboroCity_Text_GigiOhHaventRaisedPokemonEnough::
# 237 "data/maps/RustboroCity/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Not feeling prepared for what's coming\n"
	.string "up, huh?\p"
	.string "I get it, I got you all of a sudden here,\n"
	.string "wanting to battle you immediately.\p"
	.string "I'll let you off for this once, but let it\n"
	.string "be known that I will be prepared to\l"
	.string "battle you!$"
