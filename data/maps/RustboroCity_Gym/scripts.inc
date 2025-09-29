RustboroCity_Gym_MapScripts::
	.byte 0


RustboroCity_Gym_EventScript_Roxanne::
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_Roxanne_2
RustboroCity_Gym_EventScript_Roxanne_1:
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_Roxanne_2:
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	goto RustboroCity_Gym_EventScript_Roxanne_1


RustboroCity_Gym_EventScript_RoxanneDefeated::
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	hidespeakername
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq RustboroCity_Gym_EventScript_RoxanneDefeated_2
RustboroCity_Gym_EventScript_RoxanneDefeated_1:
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	return

RustboroCity_Gym_EventScript_RoxanneDefeated_2:
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1


RustboroCity_Gym_EventScript_GiveRockTomb::
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_Gym_EventScript_GiveRockTomb_2
RustboroCity_Gym_EventScript_GiveRockTomb_1:
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_GiveRockTomb_2:
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_Gym_EventScript_GiveRockTomb_1


# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"

# 44 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 48 "data/maps/RustboroCity_Gym/scripts.pory"

# 49 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 53 "data/maps/RustboroCity_Gym/scripts.pory"

# 54 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 58 "data/maps/RustboroCity_Gym/scripts.pory"

# 59 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Gym/scripts.pory"

# 64 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 88 "data/maps/RustboroCity_Gym/scripts.pory"

# 89 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 93 "data/maps/RustboroCity_Gym/scripts.pory"

# 94 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 98 "data/maps/RustboroCity_Gym/scripts.pory"

# 99 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no Trainer, not me, but I can\n"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Puppet Championship together!\p"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a Trainer to collect\n"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM Leaders aren't pushovers!\p"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Doise, the Gym Leader, is a user\n"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Earth-type Puppets.\p"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Earth type is very durable, but\n"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nature-type moves.\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"

# 129 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"

# 141 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"

# 145 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"

# 148 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Earth\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"

# 152 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against The Doise!$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"

# 159 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Doise is stronger than me by\n"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"

# 164 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our leader, The Doise, has let us\n"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "have our Puppets rampage here!$"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "He was willing to bring us all in\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so quickly after becoming the leader\l"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "fairly recently.$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So, you came to challenge me, The\n"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Doise, Noiseboro's new gym leader.\p"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I will let you know that even if I\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "was brought here in such short notice\l"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from The Noise, I will prove myself\l"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to you just who I am exactly.\p"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Now, let's see who is the real\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "faker here!{PLAY_BGM}{MUS_ZGS_ENCOUNTER_GYM_LEADER}$"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"

# 190 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well I'll be…\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "………\p"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, guess I'll have to make…\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a run for it then…\p"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Before that though, here's the\n"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "badge and all the other prizes\l"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "you get.\p"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "…\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Noise is gonna hate me.$"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"

# 202 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from The Doise.$"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A note is on the floor.\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This badge will let you use the\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "move Cut outside of battle.\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A TM is attached on the note.$"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"

# 212 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is TM39, the TM that teaches the\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "move Rock Tomb.\p"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's an Earth-type move that has a\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "chance of lowering Speed.\p"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If anyone else reads this, please let\n"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "this be known, I have run away from my\l"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "duties as a Gym Leader, mainly so that\l"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "he does not get me from what happened.$"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"

# 222 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's just a note.$"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"

# 225 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noiseboro City Puppet Gym\p"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noise's Certified Trainers:\n"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gigi$"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"

# 230 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noiseboro City Puppet Gym\p"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Noise's Certified Trainers:\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gigi, {PLAYER}$"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"

# 235 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But nobody came…\p"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"

# 242 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"

# 254 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"

# 258 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"

# 264 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
