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
	setfollower 1, FOLLOWER_NPC_FLAG_ALL_LAND, HouseLikeCarpet_Event_GigiFollower, PARTNER_GIGI
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
	goto HouseLikeCarpet_Event_GigiBoatGoesBinted
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


HouseLikeCarpet_Text_GigiWantToFollow::
# 57 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "Yo, mind if I follow you here?$"

HouseLikeCarpet_Text_GigiAwwMan::
# 61 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "Aww, man. But it would be pretty nice.$"

HouseLikeCarpet_Text_GigiYayFollow::
# 65 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "Yay, I get to follow you around!$"

HouseLikeCarpet_Text_GigiFollowing::
# 69 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Hey, wanna hear me say something here?{DESTROY_MUGSHOT}$"

HouseLikeCarpet_Text_GigiForYou::
# 73 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Aww, but it's just for you, {PLAYER}.$"

HouseLikeCarpet_Text_GigiBogosBinted::
# 77 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Boat goes Binted?$"

HouseLikeCarpet_Text_Garbage::
# 81 "data/maps/HouseLikeCarpet/scripts.pory"
	.string "It's just garbage now.$"
