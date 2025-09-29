OldaleTown_MapScripts::
# 6 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 8 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 10 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 12, 14
# 14 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


OldaleTown_EventScript_TownSign::
# 21 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


OldaleTown_EventScript_Girl::
# 27 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Girl_Text_0, MSGBOX_NPC
	end


OldaleTown_EventScript_ShowRivalMessage::
# 32 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_ShowRivalMessage_Text_0
# 33 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 34 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_eq OldaleTown_EventScript_ShowRivalMessage_3
OldaleTown_EventScript_ShowRivalMessage_1:
# 37 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8009, 1
	goto_if_eq OldaleTown_EventScript_ShowRivalMessage_7
OldaleTown_EventScript_ShowRivalMessage_6:
# 40 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 41 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 43 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 44 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 45 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_ShowRivalMessage_2:
# 35 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
	goto OldaleTown_EventScript_ShowRivalMessage_1

OldaleTown_EventScript_ShowRivalMessage_3:
# 34 "data/maps/OldaleTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne OldaleTown_EventScript_ShowRivalMessage_2
	goto OldaleTown_EventScript_ShowRivalMessage_1

OldaleTown_EventScript_ShowRivalMessage_7:
# 38 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
	goto OldaleTown_EventScript_ShowRivalMessage_6


OldaleTown_EventScript_MartEmployee::
# 50 "data/maps/OldaleTown/scripts.pory"
	lock
# 51 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 52 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MartEmployee_2
# 52 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_MartEmployee_2
# 57 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 58 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ZGS_FOLLOW_ME, FALSE
# 59 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart
# 60 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 61 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 62 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_MartEmployee_8
# 66 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_MartEmployee_9
# 70 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_MartEmployee_10
OldaleTown_EventScript_MartEmployee_6:
# 75 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart
# 76 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 77 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_EventScript_MartEmployee_12
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation
# 84 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 85 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 86 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_MartEmployee_2:
# 53 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation
# 54 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_MartEmployee_8:
# 63 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 64 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 65 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_9:
# 67 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 69 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_10:
# 71 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 72 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 73 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_12:
# 78 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull
# 79 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/OldaleTown/scripts.pory"
	release
	end


OldaleTown_EventScript_FootprintsMan::
# 91 "data/maps/OldaleTown/scripts.pory"
	lock
# 92 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 93 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_FootprintsMan_2
# 99 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_FootprintsMan_Text_1
# 101 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 102 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 103 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_FootprintsMan_2:
# 94 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_FootprintsMan_Text_0
# 96 "data/maps/OldaleTown/scripts.pory"
	release
	end


OldaleTown_EventScript_BlockedPath::
# 109 "data/maps/OldaleTown/scripts.pory"
	lockall
# 110 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 111 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 112 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_BlockedPath_Text_0
# 117 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 118 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 119 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


# 124 "data/maps/OldaleTown/scripts.pory"

# 125 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 134 "data/maps/OldaleTown/scripts.pory"
	step_end
# 135 "data/maps/OldaleTown/scripts.pory"

# 136 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 147 "data/maps/OldaleTown/scripts.pory"
	step_end
# 148 "data/maps/OldaleTown/scripts.pory"

# 149 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/OldaleTown/scripts.pory"
	step_end
# 159 "data/maps/OldaleTown/scripts.pory"

# 160 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	step_end
# 169 "data/maps/OldaleTown/scripts.pory"

# 170 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 171 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 172 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 173 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 174 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	step_end
# 181 "data/maps/OldaleTown/scripts.pory"

# 182 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 190 "data/maps/OldaleTown/scripts.pory"
	step_end
# 191 "data/maps/OldaleTown/scripts.pory"

# 192 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 193 "data/maps/OldaleTown/scripts.pory"
	lockall
# 194 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 195 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 197 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 198 "data/maps/OldaleTown/scripts.pory"
	end
# 199 "data/maps/OldaleTown/scripts.pory"

# 200 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 201 "data/maps/OldaleTown/scripts.pory"
	lockall
# 202 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 203 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 205 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 207 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 208 "data/maps/OldaleTown/scripts.pory"
	end
# 209 "data/maps/OldaleTown/scripts.pory"

# 210 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 211 "data/maps/OldaleTown/scripts.pory"
	lockall
# 212 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 213 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 217 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 218 "data/maps/OldaleTown/scripts.pory"
	end
# 219 "data/maps/OldaleTown/scripts.pory"

# 220 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 221 "data/maps/OldaleTown/scripts.pory"
	lockall
# 222 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 223 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 225 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 227 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 228 "data/maps/OldaleTown/scripts.pory"
	end
# 229 "data/maps/OldaleTown/scripts.pory"

# 230 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 233 "data/maps/OldaleTown/scripts.pory"
	step_end
# 234 "data/maps/OldaleTown/scripts.pory"

# 235 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 236 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 237 "data/maps/OldaleTown/scripts.pory"
	step_end
# 238 "data/maps/OldaleTown/scripts.pory"

# 239 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 240 "data/maps/OldaleTown/scripts.pory"
	face_left
# 241 "data/maps/OldaleTown/scripts.pory"
	step_end
# 242 "data/maps/OldaleTown/scripts.pory"

# 243 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 244 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 245 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 246 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 247 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 248 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 249 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 250 "data/maps/OldaleTown/scripts.pory"
	step_end
# 251 "data/maps/OldaleTown/scripts.pory"

# 252 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 253 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 254 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 255 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 256 "data/maps/OldaleTown/scripts.pory"
	step_end
# 257 "data/maps/OldaleTown/scripts.pory"

# 258 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 259 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 260 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 261 "data/maps/OldaleTown/scripts.pory"
	step_end
# 262 "data/maps/OldaleTown/scripts.pory"

# 263 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 264 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 265 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 266 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 268 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 269 "data/maps/OldaleTown/scripts.pory"
	step_end
# 270 "data/maps/OldaleTown/scripts.pory"

# 271 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 272 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 273 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 274 "data/maps/OldaleTown/scripts.pory"
	step_end
# 275 "data/maps/OldaleTown/scripts.pory"

# 276 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 277 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 278 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a Puppet Mart.\p"
# 279 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 280 "data/maps/OldaleTown/scripts.pory"

# 281 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 282 "data/maps/OldaleTown/scripts.pory"
	.string "This is a Puppet Mart.\n"
# 283 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 284 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 285 "data/maps/OldaleTown/scripts.pory"
	.string "Toho Orbs for catching Puppets.\p"
# 286 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 287 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 288 "data/maps/OldaleTown/scripts.pory"

# 289 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 290 "data/maps/OldaleTown/scripts.pory"
	.string "A Potion can be used anytime, so it's\n"
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a Puppet Center\l"
# 292 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"

OldaleTown_EventScript_TownSign_Text_0:
# 21 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town\n"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_Girl_Text_0:
# 27 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_EventScript_ShowRivalMessage_Text_0:
# 32 "data/maps/OldaleTown/scripts.pory"
	.string "WIP Akyuu returns to Littleroot$"

OldaleTown_EventScript_FootprintsMan_Text_0:
# 94 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
	.string "a rare Puppet.\p"
	.string "But it turns out they were only my own\n"
	.string "footprints…$"

OldaleTown_EventScript_FootprintsMan_Text_1:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of a\n"
	.string "rare Puppet!\p"
	.string "Wait until I finish sketching them,\n"
	.string "okay?$"

OldaleTown_EventScript_BlockedPath_Text_0:
# 113 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of a\n"
	.string "rare Puppet!\p"
	.string "Wait until I finish sketching them,\n"
	.string "okay?$"
