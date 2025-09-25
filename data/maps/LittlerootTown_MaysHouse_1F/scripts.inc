# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"
