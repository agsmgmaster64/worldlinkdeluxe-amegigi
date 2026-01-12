# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 7 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 8 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 9 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 10 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 11 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 12 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 13 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 14 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 15 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 16 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 17 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 18 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 20 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 21 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 22 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 24 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 26 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 27 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 34 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 37 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 38 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 40 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 41 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 42 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 43 "data/maps/PetalburgWoods/scripts.pory"
	end
# 44 "data/maps/PetalburgWoods/scripts.pory"

# 45 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 46 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 47 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 53 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 55 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 59 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 61 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 62 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 66 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 68 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 71 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 73 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 75 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 76 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 77 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 78 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 79 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 81 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 82 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 83 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 84 "data/maps/PetalburgWoods/scripts.pory"
	end
# 85 "data/maps/PetalburgWoods/scripts.pory"

# 86 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 87 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 88 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 91 "data/maps/PetalburgWoods/scripts.pory"
	return
# 92 "data/maps/PetalburgWoods/scripts.pory"

# 93 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 94 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 95 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 96 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 97 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 98 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 100 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 101 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	hidespeakername
# 105 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 106 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 107 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 108 "data/maps/PetalburgWoods/scripts.pory"
	end
# 109 "data/maps/PetalburgWoods/scripts.pory"

# 110 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 111 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 112 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 114 "data/maps/PetalburgWoods/scripts.pory"
	end
# 115 "data/maps/PetalburgWoods/scripts.pory"

# 116 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 117 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 118 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 120 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 121 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 122 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 123 "data/maps/PetalburgWoods/scripts.pory"
	return
# 124 "data/maps/PetalburgWoods/scripts.pory"

# 125 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 126 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 127 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 128 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 129 "data/maps/PetalburgWoods/scripts.pory"
	end
# 130 "data/maps/PetalburgWoods/scripts.pory"

# 131 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 132 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 133 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 135 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 136 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 138 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 139 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 140 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 141 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 142 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 143 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 144 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 145 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 146 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 148 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 149 "data/maps/PetalburgWoods/scripts.pory"

# 150 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 151 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 152 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 153 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 154 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 159 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 160 "data/maps/PetalburgWoods/scripts.pory"

# 161 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 162 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 163 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 167 "data/maps/PetalburgWoods/scripts.pory"

# 168 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 169 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 170 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 175 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 176 "data/maps/PetalburgWoods/scripts.pory"

# 177 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 186 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 187 "data/maps/PetalburgWoods/scripts.pory"

# 188 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 189 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 190 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 193 "data/maps/PetalburgWoods/scripts.pory"

# 194 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 195 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 197 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 201 "data/maps/PetalburgWoods/scripts.pory"

# 202 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 206 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 207 "data/maps/PetalburgWoods/scripts.pory"

# 208 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 210 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 211 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 212 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 213 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 214 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 215 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 217 "data/maps/PetalburgWoods/scripts.pory"

# 218 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 221 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 222 "data/maps/PetalburgWoods/scripts.pory"

# 223 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 224 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 226 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 227 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 228 "data/maps/PetalburgWoods/scripts.pory"

# 229 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 235 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 237 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 238 "data/maps/PetalburgWoods/scripts.pory"

# 239 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 241 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 242 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 243 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 244 "data/maps/PetalburgWoods/scripts.pory"

# 245 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 246 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 247 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 248 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 249 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 250 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 253 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 254 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 255 "data/maps/PetalburgWoods/scripts.pory"

# 256 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 257 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 258 "data/maps/PetalburgWoods/scripts.pory"
	end
# 259 "data/maps/PetalburgWoods/scripts.pory"

# 260 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 261 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 262 "data/maps/PetalburgWoods/scripts.pory"
	end
# 263 "data/maps/PetalburgWoods/scripts.pory"

# 264 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 265 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 266 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 267 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 268 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 269 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_CAMOUFLAGE
# 270 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 271 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 272 "data/maps/PetalburgWoods/scripts.pory"
	release
# 273 "data/maps/PetalburgWoods/scripts.pory"
	end
# 274 "data/maps/PetalburgWoods/scripts.pory"

# 275 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 276 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 277 "data/maps/PetalburgWoods/scripts.pory"
	release
# 278 "data/maps/PetalburgWoods/scripts.pory"
	end
# 279 "data/maps/PetalburgWoods/scripts.pory"

# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 281 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 282 "data/maps/PetalburgWoods/scripts.pory"
	end
# 283 "data/maps/PetalburgWoods/scripts.pory"

# 284 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 285 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 286 "data/maps/PetalburgWoods/scripts.pory"
	end
# 287 "data/maps/PetalburgWoods/scripts.pory"

# 288 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 289 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 290 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 291 "data/maps/PetalburgWoods/scripts.pory"
	end
# 292 "data/maps/PetalburgWoods/scripts.pory"

# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 294 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 295 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 296 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 297 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 298 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 299 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 300 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 301 "data/maps/PetalburgWoods/scripts.pory"
	release
# 302 "data/maps/PetalburgWoods/scripts.pory"
	end
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 306 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 308 "data/maps/PetalburgWoods/scripts.pory"
	release
# 309 "data/maps/PetalburgWoods/scripts.pory"
	end
# 310 "data/maps/PetalburgWoods/scripts.pory"

# 311 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 312 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 313 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 314 "data/maps/PetalburgWoods/scripts.pory"
	release
# 315 "data/maps/PetalburgWoods/scripts.pory"
	end
# 316 "data/maps/PetalburgWoods/scripts.pory"

# 317 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 318 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 319 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 320 "data/maps/PetalburgWoods/scripts.pory"
	release
# 321 "data/maps/PetalburgWoods/scripts.pory"
	end
# 322 "data/maps/PetalburgWoods/scripts.pory"

# 323 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 324 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 325 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 326 "data/maps/PetalburgWoods/scripts.pory"
	release
# 327 "data/maps/PetalburgWoods/scripts.pory"
	end
# 328 "data/maps/PetalburgWoods/scripts.pory"

# 329 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 330 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 331 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 332 "data/maps/PetalburgWoods/scripts.pory"
	end
# 333 "data/maps/PetalburgWoods/scripts.pory"

# 334 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_Grunt:
# 335 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grunt$"
# 336 "data/maps/PetalburgWoods/scripts.pory"

# 337 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_Researcher:
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Researcher$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 343 "data/maps/PetalburgWoods/scripts.pory"

# 344 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Puppets\n"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm quite curious of what it does\n"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "exactly.$"
# 349 "data/maps/PetalburgWoods/scripts.pory"

# 350 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in Fairylake Woods\l"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 355 "data/maps/PetalburgWoods/scripts.pory"

# 356 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon Researcher!\p"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 359 "data/maps/PetalburgWoods/scripts.pory"

# 360 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Puppet Trainer, aren't you?\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses Team Aqua\n"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 371 "data/maps/PetalburgWoods/scripts.pory"

# 372 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 374 "data/maps/PetalburgWoods/scripts.pory"

# 375 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with Team Aqua!\l"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "Puppets…\p"
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of Team Aqua are also\n"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in Noiseboro.\p"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 384 "data/maps/PetalburgWoods/scripts.pory"

# 385 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a Great Orb as\n"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 392 "data/maps/PetalburgWoods/scripts.pory"

# 393 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "Noiseboro, too?$"
# 397 "data/maps/PetalburgWoods/scripts.pory"

# 398 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 401 "data/maps/PetalburgWoods/scripts.pory"

# 402 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 414 "data/maps/PetalburgWoods/scripts.pory"

# 415 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 418 "data/maps/PetalburgWoods/scripts.pory"

# 419 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "You, trainer!\n"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "Bet I can beat you with my team of\l"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "fairies!$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "I lost the bet.$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 430 "data/maps/PetalburgWoods/scripts.pory"

# 431 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 435 "data/maps/PetalburgWoods/scripts.pory"

# 436 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 440 "data/maps/PetalburgWoods/scripts.pory"

# 441 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 444 "data/maps/PetalburgWoods/scripts.pory"

# 445 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 452 "data/maps/PetalburgWoods/scripts.pory"

# 453 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 459 "data/maps/PetalburgWoods/scripts.pory"

# 460 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 465 "data/maps/PetalburgWoods/scripts.pory"

# 466 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 471 "data/maps/PetalburgWoods/scripts.pory"

# 472 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 479 "data/maps/PetalburgWoods/scripts.pory"

# 480 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 483 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 484 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 489 "data/maps/PetalburgWoods/scripts.pory"

# 490 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 491 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 494 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 495 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 496 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
