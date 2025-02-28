GraniteCave_StevensRoom_EventScript_Baelz::
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_BaelzIntro
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenFacePlayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_WitnessMe
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidespeakername
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removefieldmugshot
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	hidespeakername
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removefieldmugshot
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_StevensRoom_EventScript_Baelz_2
GraniteCave_StevensRoom_EventScript_Baelz_1:
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_FACING
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_Baelz_6
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_Baelz_7
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_Baelz_8
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_Baelz_8
GraniteCave_StevensRoom_EventScript_Baelz_4:
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 1
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	end

GraniteCave_StevensRoom_EventScript_Baelz_2:
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BagFull
	goto GraniteCave_StevensRoom_EventScript_Baelz_1

GraniteCave_StevensRoom_EventScript_Baelz_6:
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitNorth
	goto GraniteCave_StevensRoom_EventScript_Baelz_4

GraniteCave_StevensRoom_EventScript_Baelz_7:
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitSouth
	goto GraniteCave_StevensRoom_EventScript_Baelz_4

GraniteCave_StevensRoom_EventScript_Baelz_8:
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	goto GraniteCave_StevensRoom_EventScript_Baelz_4


# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace::
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth::
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_WalkInPlaceUp
# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth::
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast::
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest::
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_WalkInPlaceUp::
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayer::
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth::
# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_SOUTH
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth::
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 194 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast::
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_WEST
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 198 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 199 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest::
# 200 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_EAST
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 203 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 204 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Baelz\n"
# 205 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the iDollNav.$"

GraniteCave_StevensRoom_Text_BaelzIntro::
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wazzup!\p"
	.string "I am Chaos, the end of ends.\p"
	.string "A steel rose trapped in a cage of ice.\p"
	.string "Your best friend, Baelz Hakos from\n"
	.string "Hololive EN.$"

GraniteCave_StevensRoom_Text_WitnessMe::
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}WITNESS ME!\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup, you need something from me?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Huh, a letter?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Oh nice, a letter for me. Who sent this\n"
	.string "one here?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Huh, from Mr. Orange.\n"
	.string "I guess I should read what's in it.\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}You know what, before I read it, here's a\n"
	.string "little prize for delivering this for me.\p"
	.string "It's a TM that I have for the move Steel\n"
	.string "Wing, a pretty nice move for your\l"
	.string "Puppets.$"

GraniteCave_StevensRoom_Text_OhBagIsFull::
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Oh wow,$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Alright, so let's see what Mr. Orange has\n"
	.string "to say.\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Hmm, Team Aqua and Magma have been\n"
	.string "causing some unwanted chaos around\l"
	.string "their parts, and he needs me to take\l"
	.string "care of them?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, I'll see what I can do exactly with\n"
	.string "those guys there.\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}Either way, your Puppets do look like\n"
	.string "they can take care of a lot of trainers.\p"
	.string "Maybe you should try out the renewed\n"
	.string "Puppet League, with my friend Kronii as\l"
	.string "the Champion.\p"
	.string "You might even be able to beat her at\n"
	.string "her game.\p"
	.string "I should probably register you in our\n"
	.string "iDollNavs, just so you can get more info\l"
	.string "about it.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, I gotta figure out what to do with\n"
	.string "Team Aqua and Magma now.\p"
	.string "With that being said, see you later\n"
	.string "then, {PLAYER}!$"
