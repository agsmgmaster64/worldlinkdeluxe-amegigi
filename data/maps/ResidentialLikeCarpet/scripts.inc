ResidentialLikeCarpet_MapScripts::
# 5 "data/maps/ResidentialLikeCarpet/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ResidentialLikeCarpet_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ResidentialLikeCarpet_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/ResidentialLikeCarpet/scripts.pory"
	map_script_2 VAR_HOUSE_LIKE_CARPET_STATE, 0, ResidentialLikeCarpet_Script_GigiKroniiIntro3
	.2byte 0


ResidentialLikeCarpet_Script_GigiKroniiIntro::
# 11 "data/maps/ResidentialLikeCarpet/scripts.pory"
	lockall
# 12 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 13 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 14 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 15 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiSoThisIsTrainer
# 16 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 17 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 18 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 19 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 20 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiSomeRandomTrainer
# 21 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 22 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 23 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 24 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 25 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiWhatMakesYouThink
# 26 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 27 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 28 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 29 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 30 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiMayHavePokedAround
# 31 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 32 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 33 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 34 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 35 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiHowDangerous
# 36 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 37 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 38 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 39 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 40 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiYouGotAnyOtherIdeas
# 41 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 42 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 43 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 44 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 45 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiWellNo
# 46 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 47 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 48 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 49 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 50 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 0
# 51 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiBesidesGrabbedAll
# 52 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmoncry
# 53 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 54 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 55 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 56 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 57 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiOhMyGod
# 58 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 59 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 60 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 61 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 62 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiNoWeFightThem
# 63 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 64 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 65 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 66 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 67 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiWorstIdeasEver
# 68 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 69 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 70 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 71 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 72 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiRelaxHere
# 73 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 74 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
# 75 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 76 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 1
# 77 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_SURFBOARD
# 78 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_MUSIC_PLAYER
# 79 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_FULL_RESTORE, 8
# 80 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_TOHO_ORB, 20
# 81 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE01_GET
# 82 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE02_GET
# 83 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE03_GET
# 84 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE04_GET
# 85 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE05_GET
# 86 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE06_GET
# 87 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE07_GET
# 88 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE08_GET
# 89 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 90 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 91 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 92 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 93 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 94 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 95 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 96 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 97 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/ResidentialLikeCarpet/scripts.pory"
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
# 99 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitfanfare
# 100 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 101 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 102 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiTimeToFight
# 103 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 104 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 105 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 106 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 107 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiHopeThisWorks
# 108 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 109 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 110 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 111 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiSeeNatural
# 112 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 113 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 114 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 115 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiHopeThisWorks
# 116 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 117 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
# 118 "data/maps/ResidentialLikeCarpet/scripts.pory"
	releaseall
	end


ResidentialLikeCarpet_Script_GigiKroniiIntro2::
# 123 "data/maps/ResidentialLikeCarpet/scripts.pory"
	lockall
# 124 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 125 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 126 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 127 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiGigiWhatThe
# 128 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 129 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 130 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 131 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 132 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiTalkingAbout
# 133 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 134 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 135 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 136 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 137 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiIRemember
# 138 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 139 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 140 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 141 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 142 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiMakingStuffUp
# 143 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 144 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 145 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 146 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 147 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiPowerUpPunch
# 148 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 149 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 150 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 151 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 152 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiInternet
# 153 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 154 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 155 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 156 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 157 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiNotSurprised
# 158 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 159 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 160 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 161 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 162 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiFineIllGive
# 163 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 164 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
# 165 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 166 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 1
# 167 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_SURFBOARD
# 168 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_MUSIC_PLAYER
# 169 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_FULL_RESTORE, 8
# 170 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_TOHO_ORB, 20
# 171 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE01_GET
# 172 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE02_GET
# 173 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE03_GET
# 174 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE04_GET
# 175 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE05_GET
# 176 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE06_GET
# 177 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE07_GET
# 178 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE08_GET
# 179 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 180 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 181 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 182 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 183 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 184 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 185 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 186 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 187 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 188 "data/maps/ResidentialLikeCarpet/scripts.pory"
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
# 189 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitfanfare
# 190 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 191 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 192 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiFightMe
# 193 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 194 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 195 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 196 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 197 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiKnowYoullWin
# 198 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 199 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 200 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
# 201 "data/maps/ResidentialLikeCarpet/scripts.pory"
	releaseall
	end


ResidentialLikeCarpet_Script_GigiKroniiIntro3::
# 206 "data/maps/ResidentialLikeCarpet/scripts.pory"
	lockall
# 207 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 208 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 209 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 210 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiNoGigiRemember
# 211 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 212 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 213 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiPlayLeague
# 214 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 215 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 216 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 217 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 218 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiNotInvitation
# 219 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 220 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 221 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 222 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 223 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiOkBet
# 224 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 225 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 1, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
# 226 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 227 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 1
# 228 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_SURFBOARD
# 229 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_MUSIC_PLAYER
# 230 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_FULL_RESTORE, 8
# 231 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_TOHO_ORB, 20
# 232 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE01_GET
# 233 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE02_GET
# 234 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE03_GET
# 235 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE04_GET
# 236 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE05_GET
# 237 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE06_GET
# 238 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE07_GET
# 239 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE08_GET
# 240 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 241 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 242 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 243 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 244 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 245 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 246 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 247 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 248 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 249 "data/maps/ResidentialLikeCarpet/scripts.pory"
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
# 250 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitfanfare
# 251 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 252 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 253 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiLosePlayLeague
# 254 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 255 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 256 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 257 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 258 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiPleaseDontFail
# 259 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 260 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 261 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
# 262 "data/maps/ResidentialLikeCarpet/scripts.pory"
	releaseall
	end


# 266 "data/maps/ResidentialLikeCarpet/scripts.pory"
ResidentialLikeCarpet_Movement_GigiMoveToPlayer:
# 267 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_down
# 268 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_in_place_down
	step_end

# 271 "data/maps/ResidentialLikeCarpet/scripts.pory"
ResidentialLikeCarpet_Movement_KroniiMoveToPlayer:
# 272 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_down
# 272 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_down
# 273 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_in_place_left
	step_end

ResidentialLikeCarpet_Text_KroniiSoThisIsTrainer::
# 276 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}So this is the trainer we're deciding to\n"
	.string "have solve our problem, huh?$"

ResidentialLikeCarpet_Text_GigiSomeRandomTrainer::
# 280 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh, them? I just brought some random\n"
	.string "trainer who was destined to be champion\l"
	.string "in another region.$"

ResidentialLikeCarpet_Text_KroniiWhatMakesYouThink::
# 284 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}And what made you think that?$"

ResidentialLikeCarpet_Text_GigiMayHavePokedAround::
# 288 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, I make have poked a bit in your\n"
	.string "realm and saw some champion in the\l"
	.string "future.$"

ResidentialLikeCarpet_Text_KroniiHowDangerous::
# 292 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, what the frick? You know how\n"
	.string "dangerous it is to see in the future\l"
	.string "like that?$"

ResidentialLikeCarpet_Text_GigiYouGotAnyOtherIdeas::
# 296 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah? You got any brighter ideas to\n"
	.string "solve this problem in this little island\l"
	.string "here?$"

ResidentialLikeCarpet_Text_KroniiWellNo::
# 300 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Well, no, not at the moment at least,\n"
	.string "but-$"

ResidentialLikeCarpet_Text_GigiBesidesGrabbedAll::
# 304 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Besides, we didn't just gather these\n"
	.string "spare badges and money for nothing\l"
	.string "here.$"

ResidentialLikeCarpet_Text_KroniiOhMyGod::
# 308 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Oh my god, Gigi, you're not just gonna\n"
	.string "give it away to this trainer who doesn't\l"
	.string "even have any experience yet, are you?$"

ResidentialLikeCarpet_Text_GigiNoWeFightThem::
# 312 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, no, we're gonna fight them as well\n"
	.string "to show how worthy they are of carrying\l"
	.string "such a team.$"

ResidentialLikeCarpet_Text_KroniiWorstIdeasEver::
# 316 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, this is probably one of the worst\n"
	.string "ideas you've ever come up.$"

ResidentialLikeCarpet_Text_GigiRelaxHere::
# 320 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Relax, Kronii. You know what, {PLAYER},\n"
	.string "here, have absolutely everything you\l"
	.string "would ever want here.$"

ResidentialLikeCarpet_Text_YouGotABunchOfStuff::
# 324 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "You were handed a bunch of items and\n"
	.string "Puppets by Gigi.$"

ResidentialLikeCarpet_Text_GigiTimeToFight::
# 328 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Now, since you got everything you need,\n"
	.string "prepare to show your potential for\l"
	.string "battling now!$"

ResidentialLikeCarpet_Text_KroniiHopeThisWorks::
# 332 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}I hope this works Gigi, because I'm not\n"
	.string "gonna let this slide otherwise.$"

ResidentialLikeCarpet_Text_GigiSeeNatural::
# 336 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}See Kronii? They're a natural at this\n"
	.string "already!\p"
	.string "They can totally help us with what's\n"
	.string "going on here!$"

ResidentialLikeCarpet_Text_KroniiFineChallenge::
# 340 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}You know, this is certainly not what I\n"
	.string "hoped for today, but you show some\l"
	.string "potential there.\p"
	.string "I hope you know what you're getting\n"
	.string "yourself into.$"

ResidentialLikeCarpet_Text_GigiSeeYoureStrong::
# 345 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "See, you're pretty strong after all!$"

ResidentialLikeCarpet_Text_KroniiGigiWhatThe::
# 349 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, what the hell, I could have sworn\n"
	.string "we did this thing before with the\l"
	.string "trainer here.$"

ResidentialLikeCarpet_Text_GigiTalkingAbout::
# 353 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}What are you talking about? We just met\n"
	.string "this trainer here and we're gonna give\l"
	.string "them stuff to fight us!$"

ResidentialLikeCarpet_Text_KroniiIRemember::
# 357 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Didn't we do that already though? I\n"
	.string "remember we fought this trainer\l"
	.string "one-by-one here.$"

ResidentialLikeCarpet_Text_GigiMakingStuffUp::
# 361 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, like you remember Power-Up Punch\n"
	.string "not being a pulse move here as well!$"

ResidentialLikeCarpet_Text_KroniiPowerUpPunch::
# 365 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Power-Up Punch isn't a pulse move\n"
	.string "though, it's a punching move, like the\l"
	.string "fists you have there.\p"
	.string "What even made you think that was the\n"
	.string "case?$"

ResidentialLikeCarpet_Text_GigiInternet::
# 370 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Something on the internet told me that\n"
	.string "the move was a pulse move.\p"
	.string "You get it by upgrading Laser Focus at\n"
	.string "Lv 7.$"

ResidentialLikeCarpet_Text_KroniiNotSurprised::
# 375 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Why am I not surprised about what you\n"
	.string "said there?\p"
	.string "Regardless, it's not even remotely\n"
	.string "close to true at all about what you said\l"
	.string "there.$"

ResidentialLikeCarpet_Text_GigiFineIllGive::
# 380 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Fine, I'll give {PLAYER} here some\n"
	.string "stuff to challenge me with and\l"
	.string "hopefully win!\p"
	.string "I lose and you're gonna be correct here!$"

ResidentialLikeCarpet_Text_GigiFightMe::
# 385 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Alright, feast your eyes on the victor\n"
	.string "here already, because I'm gonna beat\l"
	.string "you up here!$"

ResidentialLikeCarpet_Text_KroniiKnowYoullWin::
# 389 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}You know what? I've seen you battle\n"
	.string "before, you can certainly take care of\l"
	.string "her no problem, I believe in you.$"

ResidentialLikeCarpet_Text_KroniiNoGigiRemember::
# 393 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}No, hold on. This already happened at\n"
	.string "least once before, I'm confident on\l"
	.string "that.\p"
	.string "First time you just give {PLAYER} a\n"
	.string "bunch of stuff and we fight them\l"
	.string "one-on-one.\p"
	.string "Then the next, the same thing happened\n"
	.string "but with you saying that Power-Up\l"
	.string "Punch is a pulse move for some reason.\p"
	.string "My patience is running thin now, but at\n"
	.string "least there's no League of Legends in\l"
	.string "sight.$"

ResidentialLikeCarpet_Text_GigiPlayLeague::
# 400 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh, so you do want to play League of\n"
	.string "Legends with me then, huh?\p"
	.string "Such a beautiful woman you are here to\n"
	.string "consider having time together later on\l"
	.string "with my favorite game!$"

ResidentialLikeCarpet_Text_KroniiNotInvitation::
# 405 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}That was not an invitation for me to\n"
	.string "play League.\p"
	.string "I'd rather stay far away from playing\n"
	.string "that game if I can, and I don't need you\l"
	.string "to ruin that.$"

ResidentialLikeCarpet_Text_GigiOkBet::
# 410 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You know what, I bet if {PLAYER} here\n"
	.string "can beat me up here, you don't have to\l"
	.string "play League with me.\p"
	.string "I got the stuff ready for them anyways,\n"
	.string "I just gotta actually give it to them.$"

ResidentialLikeCarpet_Text_GigiLosePlayLeague::
# 415 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Let's make this clear, you lose, you\n"
	.string "have to play League with me as well.\p"
	.string "It's only fair with how much stuff I've\n"
	.string "given you so far.$"

ResidentialLikeCarpet_Text_KroniiPleaseDontFail::
# 420 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Please don't fail me this time. We both\n"
	.string "know what our doom is if you don't at\l"
	.string "least try.$"
