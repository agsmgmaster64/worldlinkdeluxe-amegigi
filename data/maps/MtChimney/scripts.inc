# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 3 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 4 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 5 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 6 "data/maps/MtChimney/scripts.pory"

# 7 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 8 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 9 "data/maps/MtChimney/scripts.pory"
	end
# 10 "data/maps/MtChimney/scripts.pory"

# 11 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 12 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 13 "data/maps/MtChimney/scripts.pory"
	end
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 16 "data/maps/MtChimney/scripts.pory"
	lock
# 17 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 18 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 19 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 20 "data/maps/MtChimney/scripts.pory"
	closemessage
# 21 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 22 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 23 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 24 "data/maps/MtChimney/scripts.pory"
	release
# 25 "data/maps/MtChimney/scripts.pory"
	end
# 26 "data/maps/MtChimney/scripts.pory"

# 27 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 28 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 29 "data/maps/MtChimney/scripts.pory"
	return
# 30 "data/maps/MtChimney/scripts.pory"

# 31 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 32 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 33 "data/maps/MtChimney/scripts.pory"
	return
# 34 "data/maps/MtChimney/scripts.pory"

# 35 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 36 "data/maps/MtChimney/scripts.pory"
	lockall
# 37 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 38 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 39 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 40 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 42 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 43 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 44 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 45 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 48 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 49 "data/maps/MtChimney/scripts.pory"
	closemessage
# 50 "data/maps/MtChimney/scripts.pory"
	delay 30
# 51 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 53 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 54 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 55 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 56 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 57 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 58 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 59 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 60 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 61 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 62 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 65 "data/maps/MtChimney/scripts.pory"
	closemessage
# 66 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 68 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 69 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 70 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 71 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 72 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 73 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 74 "data/maps/MtChimney/scripts.pory"
	releaseall
# 75 "data/maps/MtChimney/scripts.pory"
	end
# 76 "data/maps/MtChimney/scripts.pory"

# 77 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 78 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 79 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtChimney/scripts.pory"
	return
# 81 "data/maps/MtChimney/scripts.pory"

# 82 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 83 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 84 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 85 "data/maps/MtChimney/scripts.pory"
	return
# 86 "data/maps/MtChimney/scripts.pory"

# 87 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 88 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 89 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 90 "data/maps/MtChimney/scripts.pory"
	return
# 91 "data/maps/MtChimney/scripts.pory"

# 92 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 93 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 94 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtChimney/scripts.pory"
	return
# 96 "data/maps/MtChimney/scripts.pory"

# 97 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 98 "data/maps/MtChimney/scripts.pory"
	lock
# 99 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 100 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 101 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 102 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 103 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 104 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 105 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 106 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 107 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 108 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 109 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 111 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 112 "data/maps/MtChimney/scripts.pory"
	release
# 113 "data/maps/MtChimney/scripts.pory"
	end
# 114 "data/maps/MtChimney/scripts.pory"

# 115 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 116 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 117 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 118 "data/maps/MtChimney/scripts.pory"
	release
# 119 "data/maps/MtChimney/scripts.pory"
	end
# 120 "data/maps/MtChimney/scripts.pory"
.else
# 121 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 122 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 123 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 124 "data/maps/MtChimney/scripts.pory"
	release
# 125 "data/maps/MtChimney/scripts.pory"
	end
# 126 "data/maps/MtChimney/scripts.pory"

# 127 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 128 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 129 "data/maps/MtChimney/scripts.pory"
	release
# 130 "data/maps/MtChimney/scripts.pory"
	end
# 131 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 134 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 135 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 136 "data/maps/MtChimney/scripts.pory"
	return
# 137 "data/maps/MtChimney/scripts.pory"

# 138 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 139 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 140 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 141 "data/maps/MtChimney/scripts.pory"
	release
# 142 "data/maps/MtChimney/scripts.pory"
	end
# 143 "data/maps/MtChimney/scripts.pory"

# 144 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 145 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 146 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 147 "data/maps/MtChimney/scripts.pory"
	release
# 148 "data/maps/MtChimney/scripts.pory"
	end
# 149 "data/maps/MtChimney/scripts.pory"

# 150 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 151 "data/maps/MtChimney/scripts.pory"
	walk_up
# 152 "data/maps/MtChimney/scripts.pory"
	walk_up
# 153 "data/maps/MtChimney/scripts.pory"
	walk_up
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_right
# 158 "data/maps/MtChimney/scripts.pory"
	step_end
# 159 "data/maps/MtChimney/scripts.pory"

# 160 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 161 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_down
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	step_end
# 170 "data/maps/MtChimney/scripts.pory"

# 171 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 172 "data/maps/MtChimney/scripts.pory"
	walk_up
# 173 "data/maps/MtChimney/scripts.pory"
	walk_up
# 174 "data/maps/MtChimney/scripts.pory"
	walk_up
# 175 "data/maps/MtChimney/scripts.pory"
	walk_up
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_right
# 178 "data/maps/MtChimney/scripts.pory"
	walk_right
# 179 "data/maps/MtChimney/scripts.pory"
	step_end
# 180 "data/maps/MtChimney/scripts.pory"

# 181 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 182 "data/maps/MtChimney/scripts.pory"
	walk_left
# 183 "data/maps/MtChimney/scripts.pory"
	walk_left
# 184 "data/maps/MtChimney/scripts.pory"
	walk_down
# 185 "data/maps/MtChimney/scripts.pory"
	walk_down
# 186 "data/maps/MtChimney/scripts.pory"
	walk_down
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	step_end
# 192 "data/maps/MtChimney/scripts.pory"

# 193 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_left
# 200 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 203 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_left
# 206 "data/maps/MtChimney/scripts.pory"
	walk_left
# 207 "data/maps/MtChimney/scripts.pory"
	walk_left
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	step_end
# 212 "data/maps/MtChimney/scripts.pory"

# 213 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_left
# 219 "data/maps/MtChimney/scripts.pory"
	walk_left
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	step_end
# 223 "data/maps/MtChimney/scripts.pory"

# 224 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 225 "data/maps/MtChimney/scripts.pory"
	walk_right
# 226 "data/maps/MtChimney/scripts.pory"
	walk_down
# 227 "data/maps/MtChimney/scripts.pory"
	walk_down
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_left
# 231 "data/maps/MtChimney/scripts.pory"
	walk_left
# 232 "data/maps/MtChimney/scripts.pory"
	walk_left
# 233 "data/maps/MtChimney/scripts.pory"
	walk_left
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_down
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	step_end
# 240 "data/maps/MtChimney/scripts.pory"

# 241 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 242 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_left
# 252 "data/maps/MtChimney/scripts.pory"
	walk_left
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_left
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_down
# 266 "data/maps/MtChimney/scripts.pory"
	step_end
# 267 "data/maps/MtChimney/scripts.pory"

# 268 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 269 "data/maps/MtChimney/scripts.pory"
	delay_16
# 270 "data/maps/MtChimney/scripts.pory"
	delay_16
# 271 "data/maps/MtChimney/scripts.pory"
	delay_16
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	walk_left
# 276 "data/maps/MtChimney/scripts.pory"
	walk_left
# 277 "data/maps/MtChimney/scripts.pory"
	walk_left
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	step_end
# 280 "data/maps/MtChimney/scripts.pory"

# 281 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 282 "data/maps/MtChimney/scripts.pory"
	delay_16
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_down
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_left
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	step_end
# 298 "data/maps/MtChimney/scripts.pory"

# 299 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 300 "data/maps/MtChimney/scripts.pory"
	delay_16
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_left
# 312 "data/maps/MtChimney/scripts.pory"
	walk_left
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	step_end
# 317 "data/maps/MtChimney/scripts.pory"

# 318 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 319 "data/maps/MtChimney/scripts.pory"
	delay_16
# 320 "data/maps/MtChimney/scripts.pory"
	walk_down
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 326 "data/maps/MtChimney/scripts.pory"
	step_end
# 327 "data/maps/MtChimney/scripts.pory"

# 328 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_left
# 335 "data/maps/MtChimney/scripts.pory"
	walk_left
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_down
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	step_end
# 343 "data/maps/MtChimney/scripts.pory"

# 344 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	step_end
# 347 "data/maps/MtChimney/scripts.pory"

# 348 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	step_end
# 357 "data/maps/MtChimney/scripts.pory"

# 358 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 359 "data/maps/MtChimney/scripts.pory"
	delay_16
# 360 "data/maps/MtChimney/scripts.pory"
	delay_16
# 361 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 362 "data/maps/MtChimney/scripts.pory"
	delay_16
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	step_end
# 369 "data/maps/MtChimney/scripts.pory"

# 370 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 371 "data/maps/MtChimney/scripts.pory"
	delay_16
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	delay_16
# 374 "data/maps/MtChimney/scripts.pory"
	delay_16
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	delay_16
# 377 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	walk_down
# 380 "data/maps/MtChimney/scripts.pory"
	walk_down
# 381 "data/maps/MtChimney/scripts.pory"
	step_end
# 382 "data/maps/MtChimney/scripts.pory"

# 383 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 384 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 385 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 386 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 387 "data/maps/MtChimney/scripts.pory"
	face_right
# 388 "data/maps/MtChimney/scripts.pory"
	step_end
# 389 "data/maps/MtChimney/scripts.pory"

# 390 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 393 "data/maps/MtChimney/scripts.pory"
	delay_16
# 394 "data/maps/MtChimney/scripts.pory"
	step_end
# 395 "data/maps/MtChimney/scripts.pory"

# 396 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 397 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 398 "data/maps/MtChimney/scripts.pory"
	end
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 401 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 402 "data/maps/MtChimney/scripts.pory"
	end
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 405 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 406 "data/maps/MtChimney/scripts.pory"
	end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 409 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 410 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 411 "data/maps/MtChimney/scripts.pory"
	end
# 412 "data/maps/MtChimney/scripts.pory"

# 413 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 414 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 415 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 416 "data/maps/MtChimney/scripts.pory"
	end
# 417 "data/maps/MtChimney/scripts.pory"

# 418 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 419 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 420 "data/maps/MtChimney/scripts.pory"
	end
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 423 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 424 "data/maps/MtChimney/scripts.pory"
	end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 427 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 428 "data/maps/MtChimney/scripts.pory"
	end
# 429 "data/maps/MtChimney/scripts.pory"

# 430 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 431 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 432 "data/maps/MtChimney/scripts.pory"
	end
# 433 "data/maps/MtChimney/scripts.pory"

# 434 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 435 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 436 "data/maps/MtChimney/scripts.pory"
	end
# 437 "data/maps/MtChimney/scripts.pory"

# 438 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 439 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 440 "data/maps/MtChimney/scripts.pory"
	end
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 443 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 444 "data/maps/MtChimney/scripts.pory"
	end
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 447 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 448 "data/maps/MtChimney/scripts.pory"
	end
# 449 "data/maps/MtChimney/scripts.pory"

# 450 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 451 "data/maps/MtChimney/scripts.pory"
	lockall
# 452 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 453 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 454 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 455 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 456 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 457 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 458 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 459 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 460 "data/maps/MtChimney/scripts.pory"
	releaseall
# 461 "data/maps/MtChimney/scripts.pory"
	end
# 462 "data/maps/MtChimney/scripts.pory"

# 463 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 464 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 465 "data/maps/MtChimney/scripts.pory"
	releaseall
# 466 "data/maps/MtChimney/scripts.pory"
	end
# 467 "data/maps/MtChimney/scripts.pory"

# 468 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 469 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 470 "data/maps/MtChimney/scripts.pory"
	releaseall
# 471 "data/maps/MtChimney/scripts.pory"
	end
# 472 "data/maps/MtChimney/scripts.pory"

# 473 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 474 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 475 "data/maps/MtChimney/scripts.pory"
	releaseall
# 476 "data/maps/MtChimney/scripts.pory"
	end
# 477 "data/maps/MtChimney/scripts.pory"

# 478 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 479 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 480 "data/maps/MtChimney/scripts.pory"
	end
# 481 "data/maps/MtChimney/scripts.pory"

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 483 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 484 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 485 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 486 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 487 "data/maps/MtChimney/scripts.pory"
	release
# 488 "data/maps/MtChimney/scripts.pory"
	end
# 489 "data/maps/MtChimney/scripts.pory"

# 490 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 491 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 492 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 493 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 494 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 495 "data/maps/MtChimney/scripts.pory"
	release
# 496 "data/maps/MtChimney/scripts.pory"
	end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 499 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 500 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 501 "data/maps/MtChimney/scripts.pory"
	end
# 502 "data/maps/MtChimney/scripts.pory"

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 504 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 505 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/MtChimney/scripts.pory"
	end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 509 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 510 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 511 "data/maps/MtChimney/scripts.pory"
	end
# 512 "data/maps/MtChimney/scripts.pory"

# 513 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 514 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 515 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/MtChimney/scripts.pory"
	end
# 517 "data/maps/MtChimney/scripts.pory"

# 518 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 519 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 520 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/MtChimney/scripts.pory"
	end
# 522 "data/maps/MtChimney/scripts.pory"

# 523 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 524 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 525 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 526 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 527 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 528 "data/maps/MtChimney/scripts.pory"
	release
# 529 "data/maps/MtChimney/scripts.pory"
	end
# 530 "data/maps/MtChimney/scripts.pory"

# 531 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 532 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 533 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 534 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 535 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 536 "data/maps/MtChimney/scripts.pory"
	release
# 537 "data/maps/MtChimney/scripts.pory"
	end
# 538 "data/maps/MtChimney/scripts.pory"

# 539 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 540 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 541 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 542 "data/maps/MtChimney/scripts.pory"
	end
# 543 "data/maps/MtChimney/scripts.pory"

# 544 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 545 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 546 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 547 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 554 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 580 "data/maps/MtChimney/scripts.pory"

# 581 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 582 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 584 "data/maps/MtChimney/scripts.pory"

# 585 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 586 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 593 "data/maps/MtChimney/scripts.pory"

# 594 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 595 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 600 "data/maps/MtChimney/scripts.pory"

# 601 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 602 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 605 "data/maps/MtChimney/scripts.pory"

# 606 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 607 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 610 "data/maps/MtChimney/scripts.pory"

# 611 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 612 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 619 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 621 "data/maps/MtChimney/scripts.pory"

# 622 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 623 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 627 "data/maps/MtChimney/scripts.pory"

# 628 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 629 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 630 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 631 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 632 "data/maps/MtChimney/scripts.pory"

# 633 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 634 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 635 "data/maps/MtChimney/scripts.pory"

# 636 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 637 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 642 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 643 "data/maps/MtChimney/scripts.pory"

# 644 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 645 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 646 "data/maps/MtChimney/scripts.pory"

# 647 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 648 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 649 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 653 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 655 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 657 "data/maps/MtChimney/scripts.pory"

# 658 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 659 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 660 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 661 "data/maps/MtChimney/scripts.pory"

# 662 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 663 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 664 "data/maps/MtChimney/scripts.pory"

# 665 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 666 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 667 "data/maps/MtChimney/scripts.pory"

# 668 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 669 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 677 "data/maps/MtChimney/scripts.pory"

# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 679 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 684 "data/maps/MtChimney/scripts.pory"

# 685 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 686 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 696 "data/maps/MtChimney/scripts.pory"

# 697 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 698 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 700 "data/maps/MtChimney/scripts.pory"

# 701 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 702 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 704 "data/maps/MtChimney/scripts.pory"

# 705 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 706 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 710 "data/maps/MtChimney/scripts.pory"

# 711 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 712 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 713 "data/maps/MtChimney/scripts.pory"

# 714 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 715 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 725 "data/maps/MtChimney/scripts.pory"

# 726 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 727 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 728 "data/maps/MtChimney/scripts.pory"

# 729 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 730 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 734 "data/maps/MtChimney/scripts.pory"

# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 736 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 743 "data/maps/MtChimney/scripts.pory"

# 744 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 745 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 747 "data/maps/MtChimney/scripts.pory"

# 748 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 749 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 755 "data/maps/MtChimney/scripts.pory"

# 756 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 757 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 758 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 760 "data/maps/MtChimney/scripts.pory"

# 761 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 762 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 766 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 776 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 779 "data/maps/MtChimney/scripts.pory"

# 780 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 789 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 791 "data/maps/MtChimney/scripts.pory"

# 792 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 794 "data/maps/MtChimney/scripts.pory"

# 795 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 796 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 818 "data/maps/MtChimney/scripts.pory"

# 819 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 822 "data/maps/MtChimney/scripts.pory"

# 823 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 824 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 833 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 834 "data/maps/MtChimney/scripts.pory"

# 835 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 836 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 846 "data/maps/MtChimney/scripts.pory"

# 847 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 848 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
