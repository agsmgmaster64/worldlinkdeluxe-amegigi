# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 23 "data/maps/OldaleTown_Mart/scripts.pory"

# 24 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 29 "data/maps/OldaleTown_Mart/scripts.pory"

# 30 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 37 "data/maps/OldaleTown_Mart/scripts.pory"

# 38 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 42 "data/maps/OldaleTown_Mart/scripts.pory"

# 43 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 46 "data/maps/OldaleTown_Mart/scripts.pory"

# 47 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 50 "data/maps/OldaleTown_Mart/scripts.pory"

# 51 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 54 "data/maps/OldaleTown_Mart/scripts.pory"

# 55 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"
