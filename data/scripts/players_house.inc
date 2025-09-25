
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
	lockall
PlayersHouse_2F_EventScript_CheckWallClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end

PlayersHouse_2F_EventScript_SetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	return

PlayersHouse_1F_EventScript_Vigoroth1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NORMAL_WAKASAGIHIME, CRY_MODE_NORMAL
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PlayersHouse_1F_EventScript_Vigoroth2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NORMAL_WAKASAGIHIME, CRY_MODE_NORMAL
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EventScript_RunningShoesManual::
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
	end
