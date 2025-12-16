# 1 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_MapScripts::
# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChooseBoxMon
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareSeedotSize
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChooseBoxMon
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the POKéMON SEEDOT?\n"
# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It's hardly ever seen in SOOTOPOLIS.\p"
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Anyway, I love big SEEDOT.\n"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The bigger the better.\p"
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But my younger brother, he says that\n"
# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "LOTAD is bigger.\p"
# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "That's silly.\n"
# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "SEEDOT has to be bigger than that!\p"
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Huh? Do you have a SEEDOT with you?\n"
# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "P-p-please, show me!$"
# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 121 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
# 122 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
# 123 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Oh, my gosh, this is a big one!\p"
# 124 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It might even beat the big LOTAD\n"
# 125 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "my younger brother saw!\p"
# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Thanks for showing me.\n"
# 127 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "This is my thanks!$"
# 128 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 129 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 130 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
# 131 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 132 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 133 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
# 135 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Your BAG is crammed full.$"
# 136 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 137 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
# 138 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}, is it?\p"
# 139 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hmm… I've seen a bigger SEEDOT\n"
# 140 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "than this one.$"
# 141 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 142 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
# 143 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Oh, now this is quite something…\n"
# 144 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But it's not a SEEDOT!$"
# 145 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 146 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
# 147 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "You don't have a big SEEDOT?\n"
# 148 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "That's too bad…\p"
# 149 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "If you get a big SEEDOT, please\n"
# 150 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "come show me.$"
# 151 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
# 153 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest SEEDOT in history!\n"
# 154 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}'s {STR_VAR_3} giant!\p"
# 155 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "A SEEDOT bigger than a LOTAD\n"
# 156 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "always wanted!$"
# 157 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 158 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
# 159 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the POKéMON LOTAD?\n"
# 160 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It's rarely seen in SOOTOPOLIS.\p"
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "I love, I mean love, big LOTAD!\p"
# 162 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "My big brother says that SEEDOT is\n"
# 163 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "bigger.\p"
# 164 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But that's wrong! Everyone knows that\n"
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "LOTAD is a lot bigger.\p"
# 166 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh? Do you have a LOTAD?\n"
# 167 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "P-p-please show me!$"
# 168 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 169 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
# 171 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wow, that is big!\p"
# 172 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "It might be even bigger than the huge\n"
# 173 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "SEEDOT my big brother saw.\p"
# 174 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Thanks for showing me!\n"
# 175 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "This is my thanks!$"
# 176 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 177 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 178 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
# 179 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 180 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 181 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
# 182 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
# 183 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Your BAG is crammed full.$"
# 184 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 185 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
# 186 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}?\p"
# 187 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hmm… I've seen a bigger LOTAD\n"
# 188 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "than this one here.$"
# 189 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 190 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
# 191 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Well, isn't this something!\n"
# 192 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "But it's no LOTAD!$"
# 193 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 194 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
# 195 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Don't you have a big LOTAD?\n"
# 196 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "How disappointing…\p"
# 197 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "If you get a big LOTAD, please\n"
# 198 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "come show me!$"
# 199 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 200 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
# 201 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest LOTAD in history!\n"
# 202 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}'s {STR_VAR_3} colossus!\p"
# 203 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "A LOTAD bigger than a SEEDOT\n"
# 204 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "always wanted!$"
