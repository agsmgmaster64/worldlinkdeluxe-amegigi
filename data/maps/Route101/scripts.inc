# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 4 "data/maps/Route101/scripts.pory"
	.byte 0
# 5 "data/maps/Route101/scripts.pory"

# 6 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 7 "data/maps/Route101/scripts.pory"
	end
# 8 "data/maps/Route101/scripts.pory"

# 9 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 10 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 11 "data/maps/Route101/scripts.pory"
	end
# 12 "data/maps/Route101/scripts.pory"

# 13 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 14 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 15 "data/maps/Route101/scripts.pory"
	end
# 16 "data/maps/Route101/scripts.pory"

# 17 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 18 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 19 "data/maps/Route101/scripts.pory"
	end
# 20 "data/maps/Route101/scripts.pory"

# 21 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 22 "data/maps/Route101/scripts.pory"
	.string "If Puppets get tired, take them to\n"
# 23 "data/maps/Route101/scripts.pory"
	.string "a Puppet Center.\p"
# 24 "data/maps/Route101/scripts.pory"
	.string "There's a Puppet Center in Oldale\n"
# 25 "data/maps/Route101/scripts.pory"
	.string "Town right close by.$"
# 26 "data/maps/Route101/scripts.pory"

# 27 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 28 "data/maps/Route101/scripts.pory"
	.string "Wild Puppets will jump out at you in\n"
# 29 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 30 "data/maps/Route101/scripts.pory"
	.string "If you want to catch Puppets, you have\n"
# 31 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 32 "data/maps/Route101/scripts.pory"

# 33 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 34 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
# 35 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} Oldale Town$"
