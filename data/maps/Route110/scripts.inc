# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 3 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 4 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 5 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 6 "data/maps/Route110/scripts.pory"
	.byte 0
# 7 "data/maps/Route110/scripts.pory"

# 8 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 9 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 10 "data/maps/Route110/scripts.pory"
	end
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 13 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 15 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 16 "data/maps/Route110/scripts.pory"
	end
# 17 "data/maps/Route110/scripts.pory"

# 18 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 19 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 20 "data/maps/Route110/scripts.pory"
	return
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 23 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 24 "data/maps/Route110/scripts.pory"
	.2byte 0
# 25 "data/maps/Route110/scripts.pory"

# 26 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 27 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 28 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 29 "data/maps/Route110/scripts.pory"
	return
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 32 "data/maps/Route110/scripts.pory"
	lock
# 33 "data/maps/Route110/scripts.pory"
	faceplayer
# 34 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 35 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 36 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route110/scripts.pory"
	release
# 38 "data/maps/Route110/scripts.pory"
	end
# 39 "data/maps/Route110/scripts.pory"

# 40 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 41 "data/maps/Route110/scripts.pory"
	lock
# 42 "data/maps/Route110/scripts.pory"
	faceplayer
# 43 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 44 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route110/scripts.pory"
	release
# 47 "data/maps/Route110/scripts.pory"
	end
# 48 "data/maps/Route110/scripts.pory"

# 49 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 50 "data/maps/Route110/scripts.pory"
	lock
# 51 "data/maps/Route110/scripts.pory"
	faceplayer
# 52 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 53 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 54 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route110/scripts.pory"
	release
# 56 "data/maps/Route110/scripts.pory"
	end
# 57 "data/maps/Route110/scripts.pory"

# 58 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 59 "data/maps/Route110/scripts.pory"
	lock
# 60 "data/maps/Route110/scripts.pory"
	faceplayer
# 61 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 62 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 63 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route110/scripts.pory"
	release
# 65 "data/maps/Route110/scripts.pory"
	end
# 66 "data/maps/Route110/scripts.pory"

# 67 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 68 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 77 "data/maps/Route110/scripts.pory"
	end
# 78 "data/maps/Route110/scripts.pory"

# 79 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 81 "data/maps/Route110/scripts.pory"
	end
# 82 "data/maps/Route110/scripts.pory"

# 83 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 84 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 128 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 129 "data/maps/Route110/scripts.pory"
	end
# 130 "data/maps/Route110/scripts.pory"

# 131 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 132 "data/maps/Route110/scripts.pory"
	lockall
# 133 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 134 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 135 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 136 "data/maps/Route110/scripts.pory"
	releaseall
# 137 "data/maps/Route110/scripts.pory"
	end
# 138 "data/maps/Route110/scripts.pory"

# 139 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 141 "data/maps/Route110/scripts.pory"
	releaseall
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 145 "data/maps/Route110/scripts.pory"
	lock
# 146 "data/maps/Route110/scripts.pory"
	faceplayer
# 147 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 148 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 149 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 151 "data/maps/Route110/scripts.pory"
	release
# 152 "data/maps/Route110/scripts.pory"
	end
# 153 "data/maps/Route110/scripts.pory"

# 154 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	release
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 165 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 166 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 170 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 175 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 176 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 178 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 179 "data/maps/Route110/scripts.pory"
	release
# 180 "data/maps/Route110/scripts.pory"
	end
# 181 "data/maps/Route110/scripts.pory"

# 182 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 183 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 184 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 186 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 187 "data/maps/Route110/scripts.pory"
	release
# 188 "data/maps/Route110/scripts.pory"
	end
# 189 "data/maps/Route110/scripts.pory"

# 190 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 191 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 192 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route110/scripts.pory"
	end
# 194 "data/maps/Route110/scripts.pory"

# 195 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 196 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 197 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route110/scripts.pory"
	end
# 199 "data/maps/Route110/scripts.pory"

# 200 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 201 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 202 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 206 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 212 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 213 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 214 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 215 "data/maps/Route110/scripts.pory"
	release
# 216 "data/maps/Route110/scripts.pory"
	end
# 217 "data/maps/Route110/scripts.pory"

# 218 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 219 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 220 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 222 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 223 "data/maps/Route110/scripts.pory"
	release
# 224 "data/maps/Route110/scripts.pory"
	end
# 225 "data/maps/Route110/scripts.pory"

# 226 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 227 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 228 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route110/scripts.pory"
	end
# 230 "data/maps/Route110/scripts.pory"

# 231 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 232 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 238 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 239 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 241 "data/maps/Route110/scripts.pory"
	release
# 242 "data/maps/Route110/scripts.pory"
	end
# 243 "data/maps/Route110/scripts.pory"

# 244 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 245 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 246 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 248 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 249 "data/maps/Route110/scripts.pory"
	release
# 250 "data/maps/Route110/scripts.pory"
	end
# 251 "data/maps/Route110/scripts.pory"

# 252 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 253 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 254 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route110/scripts.pory"
	end
# 256 "data/maps/Route110/scripts.pory"

# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 258 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 259 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 260 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 262 "data/maps/Route110/scripts.pory"
	release
# 263 "data/maps/Route110/scripts.pory"
	end
# 264 "data/maps/Route110/scripts.pory"

# 265 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 266 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 267 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 269 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 270 "data/maps/Route110/scripts.pory"
	release
# 271 "data/maps/Route110/scripts.pory"
	end
# 272 "data/maps/Route110/scripts.pory"

# 273 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 274 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 275 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/Route110/scripts.pory"
	end
# 277 "data/maps/Route110/scripts.pory"

# 278 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 279 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 280 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route110/scripts.pory"
	end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 284 "data/maps/Route110/scripts.pory"
	end
# 285 "data/maps/Route110/scripts.pory"

# 286 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 287 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 288 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route110/scripts.pory"
	end
# 290 "data/maps/Route110/scripts.pory"

# 291 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 292 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 293 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route110/scripts.pory"
	end
# 295 "data/maps/Route110/scripts.pory"

# 296 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 297 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 298 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route110/scripts.pory"
	end
# 300 "data/maps/Route110/scripts.pory"

# 301 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 302 "data/maps/Route110/scripts.pory"
	lockall
# 303 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 304 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 306 "data/maps/Route110/scripts.pory"
	releaseall
# 307 "data/maps/Route110/scripts.pory"
	end
# 308 "data/maps/Route110/scripts.pory"

# 309 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 310 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 311 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 312 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 313 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 314 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 315 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 316 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 317 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 318 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 319 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 320 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 321 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 322 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 323 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 324 "data/maps/Route110/scripts.pory"
	end
# 325 "data/maps/Route110/scripts.pory"

# 326 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 327 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 328 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 329 "data/maps/Route110/scripts.pory"
	end
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 332 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 333 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 342 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 347 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 348 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 349 "data/maps/Route110/scripts.pory"
	end
# 350 "data/maps/Route110/scripts.pory"

# 351 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 352 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 353 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 354 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 355 "data/maps/Route110/scripts.pory"
	return
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 358 "data/maps/Route110/scripts.pory"
	lockall
# 359 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 360 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 361 "data/maps/Route110/scripts.pory"

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 363 "data/maps/Route110/scripts.pory"
	lockall
# 364 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 365 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 368 "data/maps/Route110/scripts.pory"
	lockall
# 369 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 370 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 371 "data/maps/Route110/scripts.pory"

# 372 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 373 "data/maps/Route110/scripts.pory"
	lockall
# 374 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 375 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 376 "data/maps/Route110/scripts.pory"

# 377 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 378 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 379 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 380 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 382 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 383 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 385 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 387 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 388 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 389 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 390 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 391 "data/maps/Route110/scripts.pory"
	closemessage
# 392 "data/maps/Route110/scripts.pory"
	delay 20
# 393 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 394 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route110/scripts.pory"
	delay 10
# 396 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 397 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route110/scripts.pory"
	delay 20
# 399 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 400 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route110/scripts.pory"
	delay 30
# 402 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 403 "data/maps/Route110/scripts.pory"
	closemessage
# 404 "data/maps/Route110/scripts.pory"
	delay 30
# 405 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 406 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 407 "data/maps/Route110/scripts.pory"
	waitfanfare
# 408 "data/maps/Route110/scripts.pory"
	closemessage
# 409 "data/maps/Route110/scripts.pory"
	delay 30
# 410 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 411 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 412 "data/maps/Route110/scripts.pory"
	closemessage
# 413 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 414 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 415 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 416 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 417 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 418 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 419 "data/maps/Route110/scripts.pory"
	releaseall
# 420 "data/maps/Route110/scripts.pory"
	end
# 421 "data/maps/Route110/scripts.pory"

# 422 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 423 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 424 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route110/scripts.pory"
	return
# 426 "data/maps/Route110/scripts.pory"

# 427 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 428 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 429 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route110/scripts.pory"
	return
# 431 "data/maps/Route110/scripts.pory"

# 432 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 433 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 434 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route110/scripts.pory"
	return
# 436 "data/maps/Route110/scripts.pory"

# 437 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 438 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 439 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 440 "data/maps/Route110/scripts.pory"
	return
# 441 "data/maps/Route110/scripts.pory"

# 442 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 443 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 444 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 445 "data/maps/Route110/scripts.pory"
	return
# 446 "data/maps/Route110/scripts.pory"

# 447 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 448 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 449 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route110/scripts.pory"
	return
# 451 "data/maps/Route110/scripts.pory"

# 452 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 453 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 454 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route110/scripts.pory"
	return
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 458 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 459 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route110/scripts.pory"
	return
# 461 "data/maps/Route110/scripts.pory"

# 462 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 463 "data/maps/Route110/scripts.pory"
	walk_down
# 464 "data/maps/Route110/scripts.pory"
	walk_down
# 465 "data/maps/Route110/scripts.pory"
	walk_down
# 466 "data/maps/Route110/scripts.pory"
	step_end
# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 469 "data/maps/Route110/scripts.pory"
	walk_down
# 470 "data/maps/Route110/scripts.pory"
	walk_left
# 471 "data/maps/Route110/scripts.pory"
	walk_left
# 472 "data/maps/Route110/scripts.pory"
	walk_down
# 473 "data/maps/Route110/scripts.pory"
	step_end
# 474 "data/maps/Route110/scripts.pory"

# 475 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 476 "data/maps/Route110/scripts.pory"
	walk_down
# 477 "data/maps/Route110/scripts.pory"
	walk_left
# 478 "data/maps/Route110/scripts.pory"
	walk_down
# 479 "data/maps/Route110/scripts.pory"
	step_end
# 480 "data/maps/Route110/scripts.pory"

# 481 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 482 "data/maps/Route110/scripts.pory"
	walk_down
# 483 "data/maps/Route110/scripts.pory"
	walk_down
# 484 "data/maps/Route110/scripts.pory"
	step_end
# 485 "data/maps/Route110/scripts.pory"

# 486 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 487 "data/maps/Route110/scripts.pory"
	walk_down
# 488 "data/maps/Route110/scripts.pory"
	walk_right
# 489 "data/maps/Route110/scripts.pory"
	walk_down
# 490 "data/maps/Route110/scripts.pory"
	step_end
# 491 "data/maps/Route110/scripts.pory"

# 492 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 493 "data/maps/Route110/scripts.pory"
	walk_up
# 494 "data/maps/Route110/scripts.pory"
	walk_up
# 495 "data/maps/Route110/scripts.pory"
	walk_right
# 496 "data/maps/Route110/scripts.pory"
	walk_up
# 497 "data/maps/Route110/scripts.pory"
	walk_up
# 498 "data/maps/Route110/scripts.pory"
	walk_up
# 499 "data/maps/Route110/scripts.pory"
	step_end
# 500 "data/maps/Route110/scripts.pory"

# 501 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 502 "data/maps/Route110/scripts.pory"
	walk_up
# 503 "data/maps/Route110/scripts.pory"
	walk_up
# 504 "data/maps/Route110/scripts.pory"
	walk_up
# 505 "data/maps/Route110/scripts.pory"
	walk_up
# 506 "data/maps/Route110/scripts.pory"
	walk_up
# 507 "data/maps/Route110/scripts.pory"
	step_end
# 508 "data/maps/Route110/scripts.pory"

# 509 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 510 "data/maps/Route110/scripts.pory"
	walk_up
# 511 "data/maps/Route110/scripts.pory"
	walk_up
# 512 "data/maps/Route110/scripts.pory"
	walk_up
# 513 "data/maps/Route110/scripts.pory"
	walk_up
# 514 "data/maps/Route110/scripts.pory"
	walk_up
# 515 "data/maps/Route110/scripts.pory"
	step_end
# 516 "data/maps/Route110/scripts.pory"

# 517 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 518 "data/maps/Route110/scripts.pory"
	walk_up
# 519 "data/maps/Route110/scripts.pory"
	walk_up
# 520 "data/maps/Route110/scripts.pory"
	walk_up
# 521 "data/maps/Route110/scripts.pory"
	walk_up
# 522 "data/maps/Route110/scripts.pory"
	walk_up
# 523 "data/maps/Route110/scripts.pory"
	step_end
# 524 "data/maps/Route110/scripts.pory"

# 525 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 526 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 527 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 528 "data/maps/Route110/scripts.pory"

# 529 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 530 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 531 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 532 "data/maps/Route110/scripts.pory"

# 533 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 534 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 535 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 538 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 539 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 542 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 543 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 544 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 545 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 546 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 547 "data/maps/Route110/scripts.pory"

# 548 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 549 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 550 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 551 "data/maps/Route110/scripts.pory"

# 552 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 553 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 554 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 555 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 556 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 557 "data/maps/Route110/scripts.pory"

# 558 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 559 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 560 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 561 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 562 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 563 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 564 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 565 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 566 "data/maps/Route110/scripts.pory"

# 567 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 568 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 569 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 570 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 571 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 572 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 573 "data/maps/Route110/scripts.pory"

# 574 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 575 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 576 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 577 "data/maps/Route110/scripts.pory"

# 578 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 579 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 580 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 581 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 582 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 583 "data/maps/Route110/scripts.pory"

# 584 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 585 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 586 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 587 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 588 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 589 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 590 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 591 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 592 "data/maps/Route110/scripts.pory"

# 593 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 594 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 595 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 596 "data/maps/Route110/scripts.pory"

# 597 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 598 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 599 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 600 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 601 "data/maps/Route110/scripts.pory"

# 602 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 603 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 604 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 605 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 606 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 607 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 608 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 609 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 610 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 611 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 612 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 613 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 614 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 615 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 616 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 617 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 618 "data/maps/Route110/scripts.pory"

# 619 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 620 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 621 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 622 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 623 "data/maps/Route110/scripts.pory"

# 624 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 625 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 626 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 627 "data/maps/Route110/scripts.pory"

# 628 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 629 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 630 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 631 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 632 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 633 "data/maps/Route110/scripts.pory"

# 634 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 635 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 636 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 637 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 638 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 639 "data/maps/Route110/scripts.pory"

# 640 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 641 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 642 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 643 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 644 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 645 "data/maps/Route110/scripts.pory"

# 646 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 647 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 648 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 649 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 650 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 651 "data/maps/Route110/scripts.pory"

# 652 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 653 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 654 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 655 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 658 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 659 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 660 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 661 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 662 "data/maps/Route110/scripts.pory"

# 663 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 664 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 665 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 666 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 667 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 668 "data/maps/Route110/scripts.pory"

# 669 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 670 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 671 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 672 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 673 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 674 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 675 "data/maps/Route110/scripts.pory"

# 676 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 677 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 678 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 679 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 680 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 681 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 682 "data/maps/Route110/scripts.pory"

# 683 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 684 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 685 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 686 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 689 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 690 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 691 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 692 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 693 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 694 "data/maps/Route110/scripts.pory"

# 695 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 696 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 697 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 698 "data/maps/Route110/scripts.pory"

# 699 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 700 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 701 "data/maps/Route110/scripts.pory"

# 702 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 703 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 704 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 705 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 706 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 707 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 708 "data/maps/Route110/scripts.pory"

# 709 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 710 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 711 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 712 "data/maps/Route110/scripts.pory"

# 713 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 714 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 715 "data/maps/Route110/scripts.pory"

# 716 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 717 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 718 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 719 "data/maps/Route110/scripts.pory"

# 720 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 721 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 722 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 723 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 724 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 725 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 728 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 729 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 730 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 731 "data/maps/Route110/scripts.pory"

# 732 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 733 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 734 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 735 "data/maps/Route110/scripts.pory"

# 736 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 737 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 738 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 739 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 740 "data/maps/Route110/scripts.pory"

# 741 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 742 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 743 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 744 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 745 "data/maps/Route110/scripts.pory"

# 746 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 747 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 748 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 749 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 750 "data/maps/Route110/scripts.pory"

# 751 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 752 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 753 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 754 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 755 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 756 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 757 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 758 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 759 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 760 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 761 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 762 "data/maps/Route110/scripts.pory"

# 763 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 764 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 765 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 766 "data/maps/Route110/scripts.pory"

# 767 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 768 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 769 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 771 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 772 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
