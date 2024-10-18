# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 11 "data/maps/RustboroCity_Gym/scripts.pory"

# 12 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	hidespeakername
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 27 "data/maps/RustboroCity_Gym/scripts.pory"

# 28 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 35 "data/maps/RustboroCity_Gym/scripts.pory"

# 36 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Gym/scripts.pory"

# 41 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Gym/scripts.pory"

# 46 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 55 "data/maps/RustboroCity_Gym/scripts.pory"

# 56 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Gym/scripts.pory"

# 64 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 68 "data/maps/RustboroCity_Gym/scripts.pory"

# 69 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 74 "data/maps/RustboroCity_Gym/scripts.pory"

# 75 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 85 "data/maps/RustboroCity_Gym/scripts.pory"

# 86 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no Trainer, not me, but I can\n"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Puppet Championship together!\p"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a Trainer to collect\n"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM Leaders aren't pushovers!\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Doise, the Gym Leader, is a user\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Earth-type Puppets.\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Earth type is very durable, but\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nature-type moves.\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"

# 128 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"

# 140 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Earth\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"

# 151 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against The Doise!$"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"

# 155 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"

# 158 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Doise is stronger than me by\n"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our leader, The Doise, has let us\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "have our Puppets rampage here!$"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"

# 169 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"

# 173 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "He was willing to bring us all in\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so quickly after becoming the leader\l"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "fairly recently.$"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So, you came to challenge me, The\n"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Doise, Noiseboro's new gym leader.\p"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I will let you know that even if I\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "was brought here in such short notice\l"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from The Noise, I will prove myself\l"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to you just who I am exactly.\p"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Now, let's see who is the real\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "faker here!{PLAY_BGM}{MUS_ZGS_ENCOUNTER_GYM_LEADER}$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well I'll be…\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "………\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, guess I'll have to make…\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a run for it then…\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Before that though, here's the\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "badge and all the other prizes\l"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "you get.\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "…\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Noise is gonna hate me.$"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"

# 201 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from The Doise.$"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"

# 205 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A note is on the floor.\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This badge will let you use the\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "move Cut outside of battle.\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A TM is attached on the note.$"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"

# 211 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is TM39, the TM that teaches the\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "move Rock Tomb.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's an Earth-type move that has a\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "chance of lowering Speed.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If anyone else reads this, please let\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "this be known, I have run away from my\l"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "duties as a Gym Leader, mainly so that\l"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "he does not get me from what happened.$"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's just a note.$"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"

# 224 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noiseboro City Puppet Gym\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noise's Certified Trainers:\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gigi$"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"

# 229 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noiseboro City Puppet Gym\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noise's Certified Trainers:\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gigi, {PLAYER}$"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"

# 234 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"

# 251 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"

# 255 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"

# 263 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"

# 267 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"

# 273 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
