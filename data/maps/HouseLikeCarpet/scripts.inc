HouseLikeCarpet_MapScripts::
	.byte 0


HouseLikeCarpet_Event_LostGarbage::
# 6 "data/maps/HouseLikeCarpet/scripts.pory"
	lock
# 7 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_Garbage
# 8 "data/maps/HouseLikeCarpet/scripts.pory"
	release
	end


HouseLikeCarpet_Event_GigiStanding::
# 13 "data/maps/HouseLikeCarpet/scripts.pory"
	lock
# 14 "data/maps/HouseLikeCarpet/scripts.pory"
	faceplayer
# 15 "data/maps/HouseLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 16 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiWantToFollow, MSGBOX_YESNO
# 17 "data/maps/HouseLikeCarpet/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HouseLikeCarpet_Event_GigiStanding_2
HouseLikeCarpet_Event_GigiStanding_1:
# 20 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiAwwMan
# 21 "data/maps/HouseLikeCarpet/scripts.pory"
	release
	end

HouseLikeCarpet_Event_GigiStanding_2:
# 18 "data/maps/HouseLikeCarpet/scripts.pory"
	goto HouseLikeCarpet_Event_GigiAcceptFollow
	goto HouseLikeCarpet_Event_GigiStanding_1


HouseLikeCarpet_Event_GigiAcceptFollow::
# 26 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiYayFollow
# 27 "data/maps/HouseLikeCarpet/scripts.pory"
	setfollowernpc 1, FOLLOWER_NPC_FLAG_ALL_LAND, HouseLikeCarpet_Event_GigiFollower, PARTNER_GIGI
# 28 "data/maps/HouseLikeCarpet/scripts.pory"
	release
	end


HouseLikeCarpet_Event_GigiFollower::
# 33 "data/maps/HouseLikeCarpet/scripts.pory"
	lock
# 34 "data/maps/HouseLikeCarpet/scripts.pory"
	faceplayer
# 35 "data/maps/HouseLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 36 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiFollowing, MSGBOX_YESNO
# 37 "data/maps/HouseLikeCarpet/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HouseLikeCarpet_Event_GigiFollower_2
HouseLikeCarpet_Event_GigiFollower_1:
# 40 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiForYou
# 41 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 42 "data/maps/HouseLikeCarpet/scripts.pory"
	release
	end

HouseLikeCarpet_Event_GigiFollower_2:
# 38 "data/maps/HouseLikeCarpet/scripts.pory"
	goto HouseLikeCarpet_Event_CallKronii
	goto HouseLikeCarpet_Event_GigiFollower_1


HouseLikeCarpet_Event_GigiBoatGoesBinted::
# 47 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 48 "data/maps/HouseLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 49 "data/maps/HouseLikeCarpet/scripts.pory"
	playtrainervoice TRAINER_VOICE_GIGI, 1
# 50 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiBogosBinted
# 51 "data/maps/HouseLikeCarpet/scripts.pory"
	waitmoncry
# 52 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 53 "data/maps/HouseLikeCarpet/scripts.pory"
	release
	end


HouseLikeCarpet_Event_CallKronii::
# 58 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 59 "data/maps/HouseLikeCarpet/scripts.pory"
	playse SE_POKENAV_CALL
# 60 "data/maps/HouseLikeCarpet/scripts.pory"
	waitse
# 61 "data/maps/HouseLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 62 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_KroniiHeyaGigi
# 63 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 64 "data/maps/HouseLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 65 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_GigiMetalCapLie
# 66 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 67 "data/maps/HouseLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 68 "data/maps/HouseLikeCarpet/scripts.pory"
	msgbox HouseLikeCarpet_Text_KroniiDang
# 69 "data/maps/HouseLikeCarpet/scripts.pory"
	closemessage
# 70 "data/maps/HouseLikeCarpet/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 71 "data/maps/HouseLikeCarpet/scripts.pory"
	waitse
# 72 "data/maps/HouseLikeCarpet/scripts.pory"
	release
	end


HouseLikeCarpet_Text_GigiWantToFollow::
# 76 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "Yo, mind if I follow you here?$"

HouseLikeCarpet_Text_GigiAwwMan::
# 80 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "Aww, man. But it would be pretty nice.$"

HouseLikeCarpet_Text_GigiYayFollow::
# 84 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "Yay, I get to follow you around!$"

HouseLikeCarpet_Text_GigiFollowing::
# 88 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Hey, should I call Kronii right now?{DESTROY_MUGSHOT}$"

HouseLikeCarpet_Text_GigiForYou::
# 92 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Aww, but it's just for you, {PLAYER}.$"

HouseLikeCarpet_Text_GigiBogosBinted::
# 96 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Boat goes Binted?$"

HouseLikeCarpet_Text_KroniiHeyaGigi::
# 100 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_HAPPY}Heya, what's up Gigi, you need me for\n"
	.string "something?\p"
	.string "I was just about to go skydiving with\n"
	.string "just a metal cap here.$"

HouseLikeCarpet_Text_GigiMetalCapLie::
# 105 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_ALT_9}Hey Kronii, did you know that the metal\n"
	.string "cap doesn't actually make you\l"
	.string "invincible when using it?\p"
	.string "It doesn't even protect you from fall\n"
	.string "damage at all!$"

HouseLikeCarpet_Text_KroniiDang::
# 110 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}…\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_DEADPAN}…\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SAD}…\p"
	.string "I've been lied to, haven't I?$"

HouseLikeCarpet_Text_Garbage::
# 117 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "It's just garbage now.$"
