ResidentialLikeCarpet_MapScripts::
# 2 "data/maps/ResidentialLikeCarpet/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ResidentialLikeCarpet_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ResidentialLikeCarpet_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ResidentialLikeCarpet/scripts.pory"
	map_script_2 VAR_HOUSE_LIKE_CARPET_STATE, 0, ResidentialLikeCarpet_Script_GigiKroniiIntro3
	.2byte 0


ResidentialLikeCarpet_Script_GigiKroniiIntro::
# 8 "data/maps/ResidentialLikeCarpet/scripts.pory"
	lockall
# 9 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 10 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 11 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 12 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiSoThisIsTrainer
# 13 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 14 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceDown
# 15 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 16 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 17 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiSomeRandomTrainer
# 18 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 19 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 20 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 21 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 22 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiWhatMakesYouThink
# 23 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 24 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 25 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 26 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 27 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiMayHavePokedAround
# 28 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 29 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 30 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 31 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 32 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiHowDangerous
# 33 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 34 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 35 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 36 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 37 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiYouGotAnyOtherIdeas
# 38 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 39 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 40 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 41 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 42 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiWellNo
# 43 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 44 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 45 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 46 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 47 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 0
# 48 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiBesidesGrabbedAll
# 49 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmoncry
# 50 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 51 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 52 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 53 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 54 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiOhMyGod
# 55 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 56 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceDown
# 57 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 58 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 59 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiNoWeFightThem
# 60 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 61 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 62 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 63 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 64 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiWorstIdeasEver
# 65 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 66 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 67 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 68 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 69 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiRelaxHere
# 70 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 71 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
# 72 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 73 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement LOCALID_RESIDENTIAL_GIGI
# 74 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_SURFBOARD
# 75 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_MUSIC_PLAYER
# 76 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_FULL_RESTORE, 8
# 77 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_TOHO_ORB, 20
# 78 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE01_GET
# 79 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE02_GET
# 80 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE03_GET
# 81 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE04_GET
# 82 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE05_GET
# 83 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE06_GET
# 84 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE07_GET
# 85 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE08_GET
# 86 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 87 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 88 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 89 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 90 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 91 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 92 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 93 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 94 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/ResidentialLikeCarpet/scripts.pory"
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
# 96 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitfanfare
# 97 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 98 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 99 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiTimeToFight
# 100 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 101 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 102 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 103 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 104 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiHopeThisWorks
# 105 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 106 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 107 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 108 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiSeeNatural
# 109 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 110 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 111 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 112 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiHopeThisWorks
# 113 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 114 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
# 115 "data/maps/ResidentialLikeCarpet/scripts.pory"
	releaseall
	end


ResidentialLikeCarpet_Script_GigiKroniiIntro2::
# 120 "data/maps/ResidentialLikeCarpet/scripts.pory"
	lockall
# 121 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 122 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 123 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 124 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiGigiWhatThe
# 125 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 126 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 127 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 128 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 129 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiTalkingAbout
# 130 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 131 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 132 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 133 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 134 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiIRemember
# 135 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 136 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 137 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 138 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 139 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiMakingStuffUp
# 140 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 141 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 142 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 143 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 144 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiPowerUpPunch
# 145 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 146 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 147 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 148 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 149 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiInternet
# 150 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 151 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 152 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 153 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 154 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiNotSurprised
# 155 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 156 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 157 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 158 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 159 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiFineIllGive
# 160 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 161 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
# 162 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 163 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement LOCALID_RESIDENTIAL_GIGI
# 164 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_SURFBOARD
# 165 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_MUSIC_PLAYER
# 166 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_FULL_RESTORE, 8
# 167 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_TOHO_ORB, 20
# 168 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE01_GET
# 169 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE02_GET
# 170 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE03_GET
# 171 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE04_GET
# 172 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE05_GET
# 173 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE06_GET
# 174 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE07_GET
# 175 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE08_GET
# 176 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 177 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 178 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 179 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 180 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 181 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 182 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 183 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 184 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 185 "data/maps/ResidentialLikeCarpet/scripts.pory"
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
# 186 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitfanfare
# 187 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 188 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 189 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiFightMe
# 190 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 191 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 192 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 193 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 194 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiKnowYoullWin
# 195 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 196 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 197 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
# 198 "data/maps/ResidentialLikeCarpet/scripts.pory"
	releaseall
	end


ResidentialLikeCarpet_Script_GigiKroniiIntro3::
# 203 "data/maps/ResidentialLikeCarpet/scripts.pory"
	lockall
# 204 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 205 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 206 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 207 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiNoGigiRemember
# 208 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 209 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 210 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiPlayLeague
# 211 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 212 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
# 213 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 214 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 215 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiNotInvitation
# 216 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 217 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
# 218 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 219 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 220 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiOkBet
# 221 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 222 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_GIGI, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
# 223 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 224 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement LOCALID_RESIDENTIAL_GIGI
# 225 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_SURFBOARD
# 226 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_MUSIC_PLAYER
# 227 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_FULL_RESTORE, 8
# 228 "data/maps/ResidentialLikeCarpet/scripts.pory"
	additem ITEM_TOHO_ORB, 20
# 229 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE01_GET
# 230 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE02_GET
# 231 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE03_GET
# 232 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE04_GET
# 233 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE05_GET
# 234 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE06_GET
# 235 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE07_GET
# 236 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_BADGE08_GET
# 237 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 238 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 239 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 240 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 241 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 242 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 243 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 244 "data/maps/ResidentialLikeCarpet/scripts.pory"
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 245 "data/maps/ResidentialLikeCarpet/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/ResidentialLikeCarpet/scripts.pory"
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
# 247 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitfanfare
# 248 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 249 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 250 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_GigiLosePlayLeague
# 251 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 252 "data/maps/ResidentialLikeCarpet/scripts.pory"
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
# 253 "data/maps/ResidentialLikeCarpet/scripts.pory"
	waitmovement 0
# 254 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 255 "data/maps/ResidentialLikeCarpet/scripts.pory"
	msgbox ResidentialLikeCarpet_Text_KroniiPleaseDontFail
# 256 "data/maps/ResidentialLikeCarpet/scripts.pory"
	closemessage
# 257 "data/maps/ResidentialLikeCarpet/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
# 258 "data/maps/ResidentialLikeCarpet/scripts.pory"
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
# 259 "data/maps/ResidentialLikeCarpet/scripts.pory"
	releaseall
	end


# 263 "data/maps/ResidentialLikeCarpet/scripts.pory"
ResidentialLikeCarpet_Movement_GigiMoveToPlayer:
# 264 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_down
# 265 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_in_place_down
	step_end

# 268 "data/maps/ResidentialLikeCarpet/scripts.pory"
ResidentialLikeCarpet_Movement_KroniiMoveToPlayer:
# 269 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_down
# 269 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_down
# 270 "data/maps/ResidentialLikeCarpet/scripts.pory"
	walk_in_place_left
	step_end

ResidentialLikeCarpet_Text_KroniiSoThisIsTrainer::
# 273 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}So this is the trainer we're deciding to\n"
	.string "have solve our problem, huh?$"

ResidentialLikeCarpet_Text_GigiSomeRandomTrainer::
# 277 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh, them? I just brought some random\n"
	.string "trainer who was destined to be champion\l"
	.string "in another region.$"

ResidentialLikeCarpet_Text_KroniiWhatMakesYouThink::
# 281 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}And what made you think that?$"

ResidentialLikeCarpet_Text_GigiMayHavePokedAround::
# 285 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, I make have poked a bit in your\n"
	.string "realm and saw some champion in the\l"
	.string "future.$"

ResidentialLikeCarpet_Text_KroniiHowDangerous::
# 289 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, what the frick? You know how\n"
	.string "dangerous it is to see in the future\l"
	.string "like that?$"

ResidentialLikeCarpet_Text_GigiYouGotAnyOtherIdeas::
# 293 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah? You got any brighter ideas to\n"
	.string "solve this problem in this little island\l"
	.string "here?$"

ResidentialLikeCarpet_Text_KroniiWellNo::
# 297 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Well, no, not at the moment at least,\n"
	.string "but-$"

ResidentialLikeCarpet_Text_GigiBesidesGrabbedAll::
# 301 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Besides, we didn't just gather these\n"
	.string "spare badges and money for nothing\l"
	.string "here.$"

ResidentialLikeCarpet_Text_KroniiOhMyGod::
# 305 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Oh my god, Gigi, you're not just gonna\n"
	.string "give it away to this trainer who doesn't\l"
	.string "even have any experience yet, are you?$"

ResidentialLikeCarpet_Text_GigiNoWeFightThem::
# 309 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, no, we're gonna fight them as well\n"
	.string "to show how worthy they are of carrying\l"
	.string "such a team.$"

ResidentialLikeCarpet_Text_KroniiWorstIdeasEver::
# 313 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, this is probably one of the worst\n"
	.string "ideas you've ever come up.$"

ResidentialLikeCarpet_Text_GigiRelaxHere::
# 317 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Relax, Kronii. You know what, {PLAYER},\n"
	.string "here, have absolutely everything you\l"
	.string "would ever want here.$"

ResidentialLikeCarpet_Text_YouGotABunchOfStuff::
# 321 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "You were handed a bunch of items and\n"
	.string "Puppets by Gigi.$"

ResidentialLikeCarpet_Text_GigiTimeToFight::
# 325 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Now, since you got everything you need,\n"
	.string "prepare to show your potential for\l"
	.string "battling now!$"

ResidentialLikeCarpet_Text_KroniiHopeThisWorks::
# 329 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}I hope this works Gigi, because I'm not\n"
	.string "gonna let this slide otherwise.$"

ResidentialLikeCarpet_Text_GigiSeeNatural::
# 333 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}See Kronii? They're a natural at this\n"
	.string "already!\p"
	.string "They can totally help us with what's\n"
	.string "going on here!$"

ResidentialLikeCarpet_Text_KroniiFineChallenge::
# 337 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}You know, this is certainly not what I\n"
	.string "hoped for today, but you show some\l"
	.string "potential there.\p"
	.string "I hope you know what you're getting\n"
	.string "yourself into.$"

ResidentialLikeCarpet_Text_GigiSeeYoureStrong::
# 342 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "See, you're pretty strong after all!$"

ResidentialLikeCarpet_Text_KroniiGigiWhatThe::
# 346 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, what the hell, I could have sworn\n"
	.string "we did this thing before with the\l"
	.string "trainer here.$"

ResidentialLikeCarpet_Text_GigiTalkingAbout::
# 350 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}What are you talking about? We just met\n"
	.string "this trainer here and we're gonna give\l"
	.string "them stuff to fight us!$"

ResidentialLikeCarpet_Text_KroniiIRemember::
# 354 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Didn't we do that already though? I\n"
	.string "remember we fought this trainer\l"
	.string "one-by-one here.$"

ResidentialLikeCarpet_Text_GigiMakingStuffUp::
# 358 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, like you remember Power-Up Punch\n"
	.string "not being a pulse move here as well!$"

ResidentialLikeCarpet_Text_KroniiPowerUpPunch::
# 362 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Power-Up Punch isn't a pulse move\n"
	.string "though, it's a punching move, like the\l"
	.string "fists you have there.\p"
	.string "What even made you think that was the\n"
	.string "case?$"

ResidentialLikeCarpet_Text_GigiInternet::
# 367 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Something on the internet told me that\n"
	.string "the move was a pulse move.\p"
	.string "You get it by upgrading Laser Focus at\n"
	.string "Lv 7.$"

ResidentialLikeCarpet_Text_KroniiNotSurprised::
# 372 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Why am I not surprised about what you\n"
	.string "said there?\p"
	.string "Regardless, it's not even remotely\n"
	.string "close to true at all about what you said\l"
	.string "there.$"

ResidentialLikeCarpet_Text_GigiFineIllGive::
# 377 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Fine, I'll give {PLAYER} here some\n"
	.string "stuff to challenge me with and\l"
	.string "hopefully win!\p"
	.string "I lose and you're gonna be correct here!$"

ResidentialLikeCarpet_Text_GigiFightMe::
# 382 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Alright, feast your eyes on the victor\n"
	.string "here already, because I'm gonna beat\l"
	.string "you up here!$"

ResidentialLikeCarpet_Text_KroniiKnowYoullWin::
# 386 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}You know what? I've seen you battle\n"
	.string "before, you can certainly take care of\l"
	.string "her no problem, I believe in you.$"

ResidentialLikeCarpet_Text_KroniiNoGigiRemember::
# 390 "data/maps/ResidentialLikeCarpet/scripts.pory"
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
# 397 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh, so you do want to play League of\n"
	.string "Legends with me then, huh?\p"
	.string "Such a beautiful woman you are here to\n"
	.string "consider having time together later on\l"
	.string "with my favorite game!$"

ResidentialLikeCarpet_Text_KroniiNotInvitation::
# 402 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}That was not an invitation for me to\n"
	.string "play League.\p"
	.string "I'd rather stay far away from playing\n"
	.string "that game if I can, and I don't need you\l"
	.string "to ruin that.$"

ResidentialLikeCarpet_Text_GigiOkBet::
# 407 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You know what, I bet if {PLAYER} here\n"
	.string "can beat me up here, you don't have to\l"
	.string "play League with me.\p"
	.string "I got the stuff ready for them anyways,\n"
	.string "I just gotta actually give it to them.$"

ResidentialLikeCarpet_Text_GigiLosePlayLeague::
# 412 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Let's make this clear, you lose, you\n"
	.string "have to play League with me as well.\p"
	.string "It's only fair with how much stuff I've\n"
	.string "given you so far.$"

ResidentialLikeCarpet_Text_KroniiPleaseDontFail::
# 417 "data/maps/ResidentialLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Please don't fail me this time. We both\n"
	.string "know what our doom is if you don't at\l"
	.string "least try.$"
