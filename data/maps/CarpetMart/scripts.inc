CarpetMart_MapScripts::
	.byte 0


CarpetMart_EventScript_Clerk::
# 4 "data/maps/CarpetMart/scripts.pory"
	lock
# 5 "data/maps/CarpetMart/scripts.pory"
	faceplayer
# 6 "data/maps/CarpetMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/CarpetMart/scripts.pory"
	waitmessage
# 8 "data/maps/CarpetMart/scripts.pory"
	pokemart
# 9 "data/maps/CarpetMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/CarpetMart/scripts.pory"
	release
	end

