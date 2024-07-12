# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 57 "data/maps/MtChimney/scripts.pory"
	delay 30
# 58 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 63 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 64 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 66 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 69 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 71 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 72 "data/maps/MtChimney/scripts.pory"
	closemessage
# 73 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 75 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 76 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 78 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 79 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 81 "data/maps/MtChimney/scripts.pory"
	releaseall
# 82 "data/maps/MtChimney/scripts.pory"
	end
# 83 "data/maps/MtChimney/scripts.pory"

# 84 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 85 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 86 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 87 "data/maps/MtChimney/scripts.pory"
	return
# 88 "data/maps/MtChimney/scripts.pory"

# 89 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 90 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 91 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 92 "data/maps/MtChimney/scripts.pory"
	return
# 93 "data/maps/MtChimney/scripts.pory"

# 94 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtChimney/scripts.pory"
	return
# 98 "data/maps/MtChimney/scripts.pory"

# 99 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 100 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 101 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtChimney/scripts.pory"
	return
# 103 "data/maps/MtChimney/scripts.pory"

# 104 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 105 "data/maps/MtChimney/scripts.pory"
	lock
# 106 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 107 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 108 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 109 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 110 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 111 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 112 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 113 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 114 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 115 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 116 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 117 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 118 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 119 "data/maps/MtChimney/scripts.pory"
	release
# 120 "data/maps/MtChimney/scripts.pory"
	end
# 121 "data/maps/MtChimney/scripts.pory"

# 122 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 123 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 124 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 125 "data/maps/MtChimney/scripts.pory"
	release
# 126 "data/maps/MtChimney/scripts.pory"
	end
# 127 "data/maps/MtChimney/scripts.pory"
.else
# 128 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 129 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 130 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 131 "data/maps/MtChimney/scripts.pory"
	release
# 132 "data/maps/MtChimney/scripts.pory"
	end
# 133 "data/maps/MtChimney/scripts.pory"

# 134 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 135 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 136 "data/maps/MtChimney/scripts.pory"
	release
# 137 "data/maps/MtChimney/scripts.pory"
	end
# 138 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 139 "data/maps/MtChimney/scripts.pory"

# 140 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 141 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 142 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 143 "data/maps/MtChimney/scripts.pory"
	return
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 146 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 147 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 148 "data/maps/MtChimney/scripts.pory"
	release
# 149 "data/maps/MtChimney/scripts.pory"
	end
# 150 "data/maps/MtChimney/scripts.pory"

# 151 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 152 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 153 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 154 "data/maps/MtChimney/scripts.pory"
	release
# 155 "data/maps/MtChimney/scripts.pory"
	end
# 156 "data/maps/MtChimney/scripts.pory"

# 157 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 158 "data/maps/MtChimney/scripts.pory"
	walk_up
# 159 "data/maps/MtChimney/scripts.pory"
	walk_up
# 160 "data/maps/MtChimney/scripts.pory"
	walk_up
# 161 "data/maps/MtChimney/scripts.pory"
	walk_up
# 162 "data/maps/MtChimney/scripts.pory"
	walk_up
# 163 "data/maps/MtChimney/scripts.pory"
	walk_up
# 164 "data/maps/MtChimney/scripts.pory"
	walk_right
# 165 "data/maps/MtChimney/scripts.pory"
	step_end
# 166 "data/maps/MtChimney/scripts.pory"

# 167 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 168 "data/maps/MtChimney/scripts.pory"
	walk_left
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_down
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	walk_down
# 173 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 175 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	step_end
# 177 "data/maps/MtChimney/scripts.pory"

# 178 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 179 "data/maps/MtChimney/scripts.pory"
	walk_up
# 180 "data/maps/MtChimney/scripts.pory"
	walk_up
# 181 "data/maps/MtChimney/scripts.pory"
	walk_up
# 182 "data/maps/MtChimney/scripts.pory"
	walk_up
# 183 "data/maps/MtChimney/scripts.pory"
	walk_up
# 184 "data/maps/MtChimney/scripts.pory"
	walk_right
# 185 "data/maps/MtChimney/scripts.pory"
	walk_right
# 186 "data/maps/MtChimney/scripts.pory"
	step_end
# 187 "data/maps/MtChimney/scripts.pory"

# 188 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 189 "data/maps/MtChimney/scripts.pory"
	walk_left
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	step_end
# 199 "data/maps/MtChimney/scripts.pory"

# 200 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 203 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_left
# 207 "data/maps/MtChimney/scripts.pory"
	walk_left
# 208 "data/maps/MtChimney/scripts.pory"
	walk_down
# 209 "data/maps/MtChimney/scripts.pory"
	walk_down
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_left
# 216 "data/maps/MtChimney/scripts.pory"
	walk_left
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	step_end
# 219 "data/maps/MtChimney/scripts.pory"

# 220 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_left
# 226 "data/maps/MtChimney/scripts.pory"
	walk_left
# 227 "data/maps/MtChimney/scripts.pory"
	walk_left
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 229 "data/maps/MtChimney/scripts.pory"
	step_end
# 230 "data/maps/MtChimney/scripts.pory"

# 231 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 232 "data/maps/MtChimney/scripts.pory"
	walk_right
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	walk_down
# 235 "data/maps/MtChimney/scripts.pory"
	walk_down
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_left
# 238 "data/maps/MtChimney/scripts.pory"
	walk_left
# 239 "data/maps/MtChimney/scripts.pory"
	walk_left
# 240 "data/maps/MtChimney/scripts.pory"
	walk_left
# 241 "data/maps/MtChimney/scripts.pory"
	walk_left
# 242 "data/maps/MtChimney/scripts.pory"
	walk_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_down
# 246 "data/maps/MtChimney/scripts.pory"
	step_end
# 247 "data/maps/MtChimney/scripts.pory"

# 248 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_down
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_down
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	walk_left
# 268 "data/maps/MtChimney/scripts.pory"
	walk_left
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	step_end
# 274 "data/maps/MtChimney/scripts.pory"

# 275 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 276 "data/maps/MtChimney/scripts.pory"
	delay_16
# 277 "data/maps/MtChimney/scripts.pory"
	delay_16
# 278 "data/maps/MtChimney/scripts.pory"
	delay_16
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_left
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	step_end
# 287 "data/maps/MtChimney/scripts.pory"

# 288 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 289 "data/maps/MtChimney/scripts.pory"
	delay_16
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_down
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_left
# 299 "data/maps/MtChimney/scripts.pory"
	walk_left
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_down
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	step_end
# 305 "data/maps/MtChimney/scripts.pory"

# 306 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 307 "data/maps/MtChimney/scripts.pory"
	delay_16
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_down
# 323 "data/maps/MtChimney/scripts.pory"
	step_end
# 324 "data/maps/MtChimney/scripts.pory"

# 325 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 326 "data/maps/MtChimney/scripts.pory"
	delay_16
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_left
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 333 "data/maps/MtChimney/scripts.pory"
	step_end
# 334 "data/maps/MtChimney/scripts.pory"

# 335 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 336 "data/maps/MtChimney/scripts.pory"
	walk_down
# 337 "data/maps/MtChimney/scripts.pory"
	walk_down
# 338 "data/maps/MtChimney/scripts.pory"
	walk_down
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	walk_left
# 341 "data/maps/MtChimney/scripts.pory"
	walk_left
# 342 "data/maps/MtChimney/scripts.pory"
	walk_left
# 343 "data/maps/MtChimney/scripts.pory"
	walk_left
# 344 "data/maps/MtChimney/scripts.pory"
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	step_end
# 350 "data/maps/MtChimney/scripts.pory"

# 351 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	step_end
# 354 "data/maps/MtChimney/scripts.pory"

# 355 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	step_end
# 364 "data/maps/MtChimney/scripts.pory"

# 365 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 366 "data/maps/MtChimney/scripts.pory"
	delay_16
# 367 "data/maps/MtChimney/scripts.pory"
	delay_16
# 368 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 369 "data/maps/MtChimney/scripts.pory"
	delay_16
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	step_end
# 376 "data/maps/MtChimney/scripts.pory"

# 377 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	delay_16
# 380 "data/maps/MtChimney/scripts.pory"
	delay_16
# 381 "data/maps/MtChimney/scripts.pory"
	delay_16
# 382 "data/maps/MtChimney/scripts.pory"
	delay_16
# 383 "data/maps/MtChimney/scripts.pory"
	delay_16
# 384 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 385 "data/maps/MtChimney/scripts.pory"
	delay_16
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	step_end
# 389 "data/maps/MtChimney/scripts.pory"

# 390 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 391 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 392 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 393 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 394 "data/maps/MtChimney/scripts.pory"
	face_right
# 395 "data/maps/MtChimney/scripts.pory"
	step_end
# 396 "data/maps/MtChimney/scripts.pory"

# 397 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 398 "data/maps/MtChimney/scripts.pory"
	walk_left
# 399 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 400 "data/maps/MtChimney/scripts.pory"
	delay_16
# 401 "data/maps/MtChimney/scripts.pory"
	step_end
# 402 "data/maps/MtChimney/scripts.pory"

# 403 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 404 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 405 "data/maps/MtChimney/scripts.pory"
	end
# 406 "data/maps/MtChimney/scripts.pory"

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 408 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 409 "data/maps/MtChimney/scripts.pory"
	end
# 410 "data/maps/MtChimney/scripts.pory"

# 411 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 412 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 413 "data/maps/MtChimney/scripts.pory"
	end
# 414 "data/maps/MtChimney/scripts.pory"

# 415 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 416 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 417 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/MtChimney/scripts.pory"
	end
# 419 "data/maps/MtChimney/scripts.pory"

# 420 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 421 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 422 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/MtChimney/scripts.pory"
	end
# 424 "data/maps/MtChimney/scripts.pory"

# 425 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 426 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 427 "data/maps/MtChimney/scripts.pory"
	end
# 428 "data/maps/MtChimney/scripts.pory"

# 429 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 430 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 431 "data/maps/MtChimney/scripts.pory"
	end
# 432 "data/maps/MtChimney/scripts.pory"

# 433 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 434 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 435 "data/maps/MtChimney/scripts.pory"
	end
# 436 "data/maps/MtChimney/scripts.pory"

# 437 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 438 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 439 "data/maps/MtChimney/scripts.pory"
	end
# 440 "data/maps/MtChimney/scripts.pory"

# 441 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 442 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 443 "data/maps/MtChimney/scripts.pory"
	end
# 444 "data/maps/MtChimney/scripts.pory"

# 445 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 446 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 447 "data/maps/MtChimney/scripts.pory"
	end
# 448 "data/maps/MtChimney/scripts.pory"

# 449 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 451 "data/maps/MtChimney/scripts.pory"
	end
# 452 "data/maps/MtChimney/scripts.pory"

# 453 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 454 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 455 "data/maps/MtChimney/scripts.pory"
	end
# 456 "data/maps/MtChimney/scripts.pory"

# 457 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 458 "data/maps/MtChimney/scripts.pory"
	lockall
# 459 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 460 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 461 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 462 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 463 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 464 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 465 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 466 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 467 "data/maps/MtChimney/scripts.pory"
	releaseall
# 468 "data/maps/MtChimney/scripts.pory"
	end
# 469 "data/maps/MtChimney/scripts.pory"

# 470 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 471 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 472 "data/maps/MtChimney/scripts.pory"
	releaseall
# 473 "data/maps/MtChimney/scripts.pory"
	end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 476 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 477 "data/maps/MtChimney/scripts.pory"
	releaseall
# 478 "data/maps/MtChimney/scripts.pory"
	end
# 479 "data/maps/MtChimney/scripts.pory"

# 480 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 481 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 482 "data/maps/MtChimney/scripts.pory"
	releaseall
# 483 "data/maps/MtChimney/scripts.pory"
	end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 486 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 487 "data/maps/MtChimney/scripts.pory"
	end
# 488 "data/maps/MtChimney/scripts.pory"

# 489 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 490 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 491 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 492 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 493 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 494 "data/maps/MtChimney/scripts.pory"
	release
# 495 "data/maps/MtChimney/scripts.pory"
	end
# 496 "data/maps/MtChimney/scripts.pory"

# 497 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 498 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 499 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 500 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 501 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 502 "data/maps/MtChimney/scripts.pory"
	release
# 503 "data/maps/MtChimney/scripts.pory"
	end
# 504 "data/maps/MtChimney/scripts.pory"

# 505 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 506 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 507 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 508 "data/maps/MtChimney/scripts.pory"
	end
# 509 "data/maps/MtChimney/scripts.pory"

# 510 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 511 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 512 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/MtChimney/scripts.pory"
	end
# 514 "data/maps/MtChimney/scripts.pory"

# 515 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 516 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 517 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/MtChimney/scripts.pory"
	end
# 519 "data/maps/MtChimney/scripts.pory"

# 520 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 521 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 522 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/MtChimney/scripts.pory"
	end
# 524 "data/maps/MtChimney/scripts.pory"

# 525 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 526 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 527 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/MtChimney/scripts.pory"
	end
# 529 "data/maps/MtChimney/scripts.pory"

# 530 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 531 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 532 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 533 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 534 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 535 "data/maps/MtChimney/scripts.pory"
	release
# 536 "data/maps/MtChimney/scripts.pory"
	end
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 539 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 540 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 541 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 542 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 543 "data/maps/MtChimney/scripts.pory"
	release
# 544 "data/maps/MtChimney/scripts.pory"
	end
# 545 "data/maps/MtChimney/scripts.pory"

# 546 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 547 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 548 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 549 "data/maps/MtChimney/scripts.pory"
	end
# 550 "data/maps/MtChimney/scripts.pory"

# 551 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 552 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 559 "data/maps/MtChimney/scripts.pory"

# 560 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 561 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 589 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 593 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 600 "data/maps/MtChimney/scripts.pory"

# 601 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 602 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 607 "data/maps/MtChimney/scripts.pory"

# 608 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 609 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 619 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 624 "data/maps/MtChimney/scripts.pory"

# 625 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 630 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 631 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 634 "data/maps/MtChimney/scripts.pory"

# 635 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 636 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 642 "data/maps/MtChimney/scripts.pory"

# 643 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 644 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 645 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 646 "data/maps/MtChimney/scripts.pory"

# 647 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 648 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 649 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 652 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 653 "data/maps/MtChimney/scripts.pory"

# 654 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 655 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 658 "data/maps/MtChimney/scripts.pory"

# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 660 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 661 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 664 "data/maps/MtChimney/scripts.pory"

# 665 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 666 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 668 "data/maps/MtChimney/scripts.pory"

# 669 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 670 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 671 "data/maps/MtChimney/scripts.pory"

# 672 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 673 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 674 "data/maps/MtChimney/scripts.pory"

# 675 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 676 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 684 "data/maps/MtChimney/scripts.pory"

# 685 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 686 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 691 "data/maps/MtChimney/scripts.pory"

# 692 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 693 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 703 "data/maps/MtChimney/scripts.pory"

# 704 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 705 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 707 "data/maps/MtChimney/scripts.pory"

# 708 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 709 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 717 "data/maps/MtChimney/scripts.pory"

# 718 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 719 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 720 "data/maps/MtChimney/scripts.pory"

# 721 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 722 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 723 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 725 "data/maps/MtChimney/scripts.pory"

# 726 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 727 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 728 "data/maps/MtChimney/scripts.pory"

# 729 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 730 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 735 "data/maps/MtChimney/scripts.pory"

# 736 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 737 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 741 "data/maps/MtChimney/scripts.pory"

# 742 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 743 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 746 "data/maps/MtChimney/scripts.pory"

# 747 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 748 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 750 "data/maps/MtChimney/scripts.pory"

# 751 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 752 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 753 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 754 "data/maps/MtChimney/scripts.pory"

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 756 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 764 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 781 "data/maps/MtChimney/scripts.pory"

# 782 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 783 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 786 "data/maps/MtChimney/scripts.pory"

# 787 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 788 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 794 "data/maps/MtChimney/scripts.pory"

# 795 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 796 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 801 "data/maps/MtChimney/scripts.pory"

# 802 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 803 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 809 "data/maps/MtChimney/scripts.pory"

# 810 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 811 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 820 "data/maps/MtChimney/scripts.pory"

# 821 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 822 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 825 "data/maps/MtChimney/scripts.pory"

# 826 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 827 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 834 "data/maps/MtChimney/scripts.pory"

# 835 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 836 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 841 "data/maps/MtChimney/scripts.pory"

# 842 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 843 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 847 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 849 "data/maps/MtChimney/scripts.pory"

# 850 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 851 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 853 "data/maps/MtChimney/scripts.pory"

# 854 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 855 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 856 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 859 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
