RustboroCity_DevonCorp_3F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_DEVON_CORP_3F_STATE, 0
	goto_if_eq RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	goto RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	end

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end


# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_Researcher:
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Researcher$"
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_TheNoise:
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "The Noise$"
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's me, The Noise, president of the\n"
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon Corporation.\p"
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved this researcher guy with\n"
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "his goods here!\p"
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I heard he has a bit of a favor with\n"
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you delivering the package he had to\l"
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Slateport's Shipyard.\p"
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor of my own since you're\n"
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on the way there anyways.\p"
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "There's a Letter I wrote to Hakos\n"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Baelz that I've been meaning to\l"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "deliver but haven't.\p"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "She should be in Dreamford's icy cave,\n"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "last I checked.$"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I do happen to have a little thing for\n"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you as well for saving my little\p"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "researcher guy here.\n"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is all yours here!$"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received an iDollNav.$"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That device…\p"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a Puppet Navigator, or iDollNav\n"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You know, the naming itself needs a\n"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "bit of a renaming personally, but\l"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "oh well.\p"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Trainer on an adventure.\p"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the Hoenn region.\p"
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dreamford and Slateport easily!\p"
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh yeah, I'm sure you came across an\n"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Aqua Grunt from earlier.\p"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "They come from Team Aqua, and have beef\n"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "with Team Magma that's causing some\l"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "chaos around the region.\p"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You should get some rest to prepare\n"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "yourself against these people.$"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, then, {PLAYER}{KUN},\n"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a TRAINER.$"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\n"
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP. SHARE will be given some of the\l"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP Points from battle.\p"
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get EXP Points even if it didn't\n"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say EXP. SHARE is quite useful\n"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak POKéMON.$"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINERS in the POKéMON LEAGUE?$"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT's OFFICE is on\n"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the SHIPYARD in SLATEPORT?\p"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see CAPT. STERN.$"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and TIMER BALL, have become hugely\l"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among TRAINERS.$"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the PRESIDENT.$"
