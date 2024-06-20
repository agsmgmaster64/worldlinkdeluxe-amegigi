# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername GraniteCave_StevensRoom_Text_HakosBaelzName
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenFacePlayer
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername GraniteCave_StevensRoom_Text_HakosBaelzName
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_WitnessMe, MSGBOX_DEFAULT
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidespeakername
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername GraniteCave_StevensRoom_Text_HakosBaelzName
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidespeakername
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername GraniteCave_StevensRoom_Text_HakosBaelzName
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername GraniteCave_StevensRoom_Text_HakosBaelzName
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername GraniteCave_StevensRoom_Text_HakosBaelzName
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace::
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth::
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_WalkInPlaceUp
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth::
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast::
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest::
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_WalkInPlaceUp::
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayer::
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth::
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_SOUTH
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth::
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast::
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_WEST
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest::
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_EAST
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_HakosBaelzName:
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Baelz$"
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wazzup!\p"
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I am Chaos, the end of ends.\p"
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A steel rose trapped in a cage of\n"
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "ice.\p"
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Your best friend, Baelz Hakos from\n"
# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hololive EN.$"
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_WitnessMe:
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "WITNESS ME!\p"
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wazzup, you need something from\n"
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "me?\p"
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Huh, a letter?$"
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh nice, a letter for me. Who sent\n"
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "this one here?\p"
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Huh, the Noise.\n"
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I guess that's nice of him?\p"
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You know what, since you came here,\n"
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "you can have this little TM for\l"
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "the move Steel Wing.$"
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now let's see what the letter has\n"
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "inside.\p"
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the CHAMPION of the POKéMON\l"
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "LEAGUE one day. That's what I think.\p"
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our POKéNAVS.\p"
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Baelz\n"
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the iDollNav.$"
# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 194 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your Bag is full…\n"
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
