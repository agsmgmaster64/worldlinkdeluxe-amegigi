Route101_MapScripts::
	.byte 0


Route101_EventScript_Youngster::
# 4 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


Route101_EventScript_Boy::
# 10 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route101_EventScript_RouteSign::
# 16 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end


Route101_EventScript_Youngster_Text_0:
# 4 "data/maps/Route101/scripts.pory"
	.string "If Puppets get tired, take them to a\n"
	.string "Puppet Center.\p"
	.string "There's a Puppet Center in Oldale Town\n"
	.string "right close by.$"

Route101_EventScript_Boy_Text_0:
# 10 "data/maps/Route101/scripts.pory"
	.string "Wild Puppets will jump out at you in tall\n"
	.string "grass.\p"
	.string "If you want to catch Puppets, you have\n"
	.string "to go into the tall grass and search.$"

Route101_EventScript_RouteSign_Text_0:
# 16 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town$"
