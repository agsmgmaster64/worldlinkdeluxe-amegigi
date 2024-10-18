# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 7 "data/maps/PetalburgWoods/scripts.pory"

# 8 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 9 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 10 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 12 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 13 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 14 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 15 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 16 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 17 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 18 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 20 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 23 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 26 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 27 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 28 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 29 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 30 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 31 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 32 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 35 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 36 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 37 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 40 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 46 "data/maps/PetalburgWoods/scripts.pory"
	end
# 47 "data/maps/PetalburgWoods/scripts.pory"

# 48 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 49 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 50 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 51 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 52 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 56 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 58 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 59 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 64 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 65 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 69 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 70 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 71 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 72 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 74 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 76 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 78 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 83 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 84 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 85 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 86 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 87 "data/maps/PetalburgWoods/scripts.pory"
	end
# 88 "data/maps/PetalburgWoods/scripts.pory"

# 89 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 91 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 94 "data/maps/PetalburgWoods/scripts.pory"
	return
# 95 "data/maps/PetalburgWoods/scripts.pory"

# 96 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 97 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Grunt
# 98 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 100 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 101 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 106 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	hidespeakername
# 108 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_ORB
# 109 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 110 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 111 "data/maps/PetalburgWoods/scripts.pory"
	end
# 112 "data/maps/PetalburgWoods/scripts.pory"

# 113 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 114 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 115 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 116 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 117 "data/maps/PetalburgWoods/scripts.pory"
	end
# 118 "data/maps/PetalburgWoods/scripts.pory"

# 119 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 120 "data/maps/PetalburgWoods/scripts.pory"
	setspeakername PetalburgWoods_Text_Researcher
# 121 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 122 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 123 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 124 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 125 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 126 "data/maps/PetalburgWoods/scripts.pory"
	return
# 127 "data/maps/PetalburgWoods/scripts.pory"

# 128 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 129 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 130 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 131 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 132 "data/maps/PetalburgWoods/scripts.pory"
	end
# 133 "data/maps/PetalburgWoods/scripts.pory"

# 134 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 135 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 136 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 138 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 139 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 140 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 141 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 142 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 143 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 144 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 145 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 146 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 147 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 148 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 149 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 150 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 151 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 152 "data/maps/PetalburgWoods/scripts.pory"

# 153 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 154 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 162 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 163 "data/maps/PetalburgWoods/scripts.pory"

# 164 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 165 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 166 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 170 "data/maps/PetalburgWoods/scripts.pory"

# 171 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 172 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 173 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 178 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 179 "data/maps/PetalburgWoods/scripts.pory"

# 180 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 189 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 190 "data/maps/PetalburgWoods/scripts.pory"

# 191 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 192 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 193 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 196 "data/maps/PetalburgWoods/scripts.pory"

# 197 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 200 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 204 "data/maps/PetalburgWoods/scripts.pory"

# 205 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 208 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 213 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 214 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 215 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 220 "data/maps/PetalburgWoods/scripts.pory"

# 221 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 224 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 225 "data/maps/PetalburgWoods/scripts.pory"

# 226 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 227 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 229 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 230 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 231 "data/maps/PetalburgWoods/scripts.pory"

# 232 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 235 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 236 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 238 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 240 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 241 "data/maps/PetalburgWoods/scripts.pory"

# 242 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 243 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 244 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 245 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 246 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 247 "data/maps/PetalburgWoods/scripts.pory"

# 248 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 249 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 250 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 251 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 252 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 253 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 254 "data/maps/PetalburgWoods/scripts.pory"

# 255 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 256 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 257 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 258 "data/maps/PetalburgWoods/scripts.pory"

# 259 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 260 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 261 "data/maps/PetalburgWoods/scripts.pory"
	end
# 262 "data/maps/PetalburgWoods/scripts.pory"

# 263 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 264 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 265 "data/maps/PetalburgWoods/scripts.pory"
	end
# 266 "data/maps/PetalburgWoods/scripts.pory"

# 267 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 268 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 269 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 270 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 271 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 272 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_CAMOUFLAGE
# 273 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 274 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 275 "data/maps/PetalburgWoods/scripts.pory"
	release
# 276 "data/maps/PetalburgWoods/scripts.pory"
	end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 279 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 280 "data/maps/PetalburgWoods/scripts.pory"
	release
# 281 "data/maps/PetalburgWoods/scripts.pory"
	end
# 282 "data/maps/PetalburgWoods/scripts.pory"

# 283 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 284 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 285 "data/maps/PetalburgWoods/scripts.pory"
	end
# 286 "data/maps/PetalburgWoods/scripts.pory"

# 287 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 288 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 289 "data/maps/PetalburgWoods/scripts.pory"
	end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 293 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 294 "data/maps/PetalburgWoods/scripts.pory"
	end
# 295 "data/maps/PetalburgWoods/scripts.pory"

# 296 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 297 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 298 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 299 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 300 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 301 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 302 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 303 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 304 "data/maps/PetalburgWoods/scripts.pory"
	release
# 305 "data/maps/PetalburgWoods/scripts.pory"
	end
# 306 "data/maps/PetalburgWoods/scripts.pory"

# 307 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 308 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 309 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 311 "data/maps/PetalburgWoods/scripts.pory"
	release
# 312 "data/maps/PetalburgWoods/scripts.pory"
	end
# 313 "data/maps/PetalburgWoods/scripts.pory"

# 314 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 315 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 316 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 317 "data/maps/PetalburgWoods/scripts.pory"
	release
# 318 "data/maps/PetalburgWoods/scripts.pory"
	end
# 319 "data/maps/PetalburgWoods/scripts.pory"

# 320 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 321 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 322 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 323 "data/maps/PetalburgWoods/scripts.pory"
	release
# 324 "data/maps/PetalburgWoods/scripts.pory"
	end
# 325 "data/maps/PetalburgWoods/scripts.pory"

# 326 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 327 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 328 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 329 "data/maps/PetalburgWoods/scripts.pory"
	release
# 330 "data/maps/PetalburgWoods/scripts.pory"
	end
# 331 "data/maps/PetalburgWoods/scripts.pory"

# 332 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 333 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 334 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 335 "data/maps/PetalburgWoods/scripts.pory"
	end
# 336 "data/maps/PetalburgWoods/scripts.pory"

# 337 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_Grunt:
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grunt$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_Researcher:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Researcher$"
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 346 "data/maps/PetalburgWoods/scripts.pory"

# 347 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Puppets\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm quite curious of what it does\n"
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "exactly.$"
# 352 "data/maps/PetalburgWoods/scripts.pory"

# 353 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in Petalburg Woods\l"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 358 "data/maps/PetalburgWoods/scripts.pory"

# 359 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon Researcher!\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 362 "data/maps/PetalburgWoods/scripts.pory"

# 363 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Puppet Trainer, aren't you?\n"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 367 "data/maps/PetalburgWoods/scripts.pory"

# 368 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses Team Aqua\n"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 374 "data/maps/PetalburgWoods/scripts.pory"

# 375 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with Team Aqua!\l"
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "Puppets…\p"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of Team Aqua are also\n"
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in Noiseboro.\p"
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 387 "data/maps/PetalburgWoods/scripts.pory"

# 388 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a Great Orb as\n"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 395 "data/maps/PetalburgWoods/scripts.pory"

# 396 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "Noiseboro, too?$"
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 404 "data/maps/PetalburgWoods/scripts.pory"

# 405 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this Great Orb.$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 413 "data/maps/PetalburgWoods/scripts.pory"

# 414 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 417 "data/maps/PetalburgWoods/scripts.pory"

# 418 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 421 "data/maps/PetalburgWoods/scripts.pory"

# 422 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "You, trainer!\n"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "Bet I can beat you with my team of\l"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "fairies!$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "I lost the bet.$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 433 "data/maps/PetalburgWoods/scripts.pory"

# 434 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 438 "data/maps/PetalburgWoods/scripts.pory"

# 439 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 443 "data/maps/PetalburgWoods/scripts.pory"

# 444 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 455 "data/maps/PetalburgWoods/scripts.pory"

# 456 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 462 "data/maps/PetalburgWoods/scripts.pory"

# 463 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 474 "data/maps/PetalburgWoods/scripts.pory"

# 475 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 482 "data/maps/PetalburgWoods/scripts.pory"

# 483 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 484 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 490 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 491 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 492 "data/maps/PetalburgWoods/scripts.pory"

# 493 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 494 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 495 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 496 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 497 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 498 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 499 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
