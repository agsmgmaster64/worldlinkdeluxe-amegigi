GraniteCave_StevensRoom_EventScript_Baelz::
# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_BaelzIntro
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenFacePlayer
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_WitnessMe
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_StevensRoom_EventScript_Baelz_2
GraniteCave_StevensRoom_EventScript_Baelz_1:
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_FACING
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_Baelz_6
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_Baelz_7
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_Baelz_8
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_Baelz_8
GraniteCave_StevensRoom_EventScript_Baelz_4:
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_BAELZ
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	end

GraniteCave_StevensRoom_EventScript_Baelz_2:
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_BagFull
	goto GraniteCave_StevensRoom_EventScript_Baelz_1

GraniteCave_StevensRoom_EventScript_Baelz_6:
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitNorth
	goto GraniteCave_StevensRoom_EventScript_Baelz_4

GraniteCave_StevensRoom_EventScript_Baelz_7:
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitSouth
	goto GraniteCave_StevensRoom_EventScript_Baelz_4

GraniteCave_StevensRoom_EventScript_Baelz_8:
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	goto GraniteCave_StevensRoom_EventScript_Baelz_4


# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_StevenExit
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_StevenExit
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeakername gText_Baelz
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace::
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth::
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_WalkInPlaceUp
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth::
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, Common_Movement_WalkInPlaceDown
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast::
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, Common_Movement_WalkInPlaceLeft
# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest::
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_BAELZ, Common_Movement_WalkInPlaceRight
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_WalkInPlaceUp::
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayer::
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth::
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_SOUTH
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth::
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_NORTH
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast::
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_WEST
# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest::
# 194 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_EAST
# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 198 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Baelz\n"
# 199 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the iDollNav.$"

GraniteCave_StevensRoom_Text_BaelzIntro::
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wazzup!\p"
	.string "I am Chaos, the end of ends.\p"
	.string "A steel rose trapped in a cage of ice.\p"
	.string "Your best friend, Baelz Hakos from\n"
	.string "Hololive EN.$"

GraniteCave_StevensRoom_Text_WitnessMe::
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}WITNESS ME!\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup, you need something from me?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Huh, a letter?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
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
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Oh wow,$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
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
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, I gotta figure out what to do with\n"
	.string "Team Aqua and Magma now.\p"
	.string "With that being said, see you later\n"
	.string "then, {PLAYER}!$"
