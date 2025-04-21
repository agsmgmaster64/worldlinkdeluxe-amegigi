ApartmentLikeCarpet_MapScripts::
	.byte 0


ApartmentLikeCarpet_Script_Kronii::
# 7 "data/maps/ApartmentLikeCarpet/scripts.pory"
	goto ApartmentLikeCarpet_Script_Kronii2
# 8 "data/maps/ApartmentLikeCarpet/scripts.pory"
	lock
# 9 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 10 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_KroniiNice
# 11 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 12 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_GigiYeah
# 13 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 14 "data/maps/ApartmentLikeCarpet/scripts.pory"
	delay 240
# 15 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 16 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Kronii2
# 17 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 18 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Gigi2
# 19 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 20 "data/maps/ApartmentLikeCarpet/scripts.pory"
	delay 240
# 21 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 22 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Kronii3
# 23 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 24 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Gigi3
# 25 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 26 "data/maps/ApartmentLikeCarpet/scripts.pory"
	delay 240
# 27 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 28 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Kronii4
# 29 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 30 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Gigi4
# 31 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 32 "data/maps/ApartmentLikeCarpet/scripts.pory"
	delay 240
# 33 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 34 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_Kronii5
# 35 "data/maps/ApartmentLikeCarpet/scripts.pory"
	release
	end


ApartmentLikeCarpet_Script_Kronii2::
# 40 "data/maps/ApartmentLikeCarpet/scripts.pory"
	lock
# 41 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 42 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_KroniiMiracle
# 43 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Gigi
# 44 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_GigiYouNeverKnow
# 45 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 46 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_KroniiMaybeRight
# 47 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 48 "data/maps/ApartmentLikeCarpet/scripts.pory"
	delay 240
# 49 "data/maps/ApartmentLikeCarpet/scripts.pory"
	playse SE_POKENAV_CALL
# 50 "data/maps/ApartmentLikeCarpet/scripts.pory"
	waitse
# 51 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 52 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_KroniiCall
# 53 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 54 "data/maps/ApartmentLikeCarpet/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 55 "data/maps/ApartmentLikeCarpet/scripts.pory"
	waitmovement 0
# 56 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Kronii
# 57 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_KroniiHello
# 58 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 59 "data/maps/ApartmentLikeCarpet/scripts.pory"
	setspeakername gText_Amelia
# 60 "data/maps/ApartmentLikeCarpet/scripts.pory"
	msgbox ApartmentLikeCarpet_Text_AmeliaImBack
# 61 "data/maps/ApartmentLikeCarpet/scripts.pory"
	closemessage
# 62 "data/maps/ApartmentLikeCarpet/scripts.pory"
	release
	end


ApartmentLikeCarpet_Text_KroniiNice::
# 66 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "It's nice, isn't it, Gigi?$"

ApartmentLikeCarpet_Text_GigiYeah::
# 70 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Yeah, I guess it is.$"

ApartmentLikeCarpet_Text_Kronii2::
# 74 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "You know, I may be a bit of a pessimist\n"
	.string "myself, but I do feel like despite\l"
	.string "what's happening, things will be all good\l"
	.string "in the end.$"

ApartmentLikeCarpet_Text_Gigi2::
# 78 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "You think so?$"

ApartmentLikeCarpet_Text_Kronii3::
# 82 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Yeah, I mean, yeah sure, there's some\n"
	.string "people around us that aren't gonna\l"
	.string "stick with us for long, but I know I\l"
	.string "can't stop it if they'll be happier with\l"
	.string "their new paths.$"

ApartmentLikeCarpet_Text_Gigi3::
# 86 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "That seems fair, yeah.$"

ApartmentLikeCarpet_Text_Kronii4::
# 90 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "You're pretty nice, Gigi. I may not\n"
	.string "always get along with you here, but\l"
	.string "you've always seen the best out of\l"
	.string "these situations here, even if they're\l"
	.string "not quite the most optimal.$"

ApartmentLikeCarpet_Text_Gigi4::
# 94 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Yeah.\p"
	.string "I mean, you are pretty cool yourself,\n"
	.string "putting aside your beauty and all.\p"
	.string "...\p"
	.string "She'll be happier, and I hope you'll be\n"
	.string "happy as well.$"

ApartmentLikeCarpet_Text_Kronii5::
# 98 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Thank you, Gigi.$"

ApartmentLikeCarpet_Text_KroniiMiracle::
# 102 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "You know, I wish a miracle would come to\n"
	.string "help us out here, considering what's\l"
	.string "been going on.$"

ApartmentLikeCarpet_Text_GigiYouNeverKnow::
# 106 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Hey, you never know, a miracle might\n"
	.string "come anytime soon, even right now!$"

ApartmentLikeCarpet_Text_KroniiMaybeRight::
# 110 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Ehh, you know what, maybe you're right,\n"
	.string "maybe something will come soon.$"

ApartmentLikeCarpet_Text_KroniiCall::
# 114 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Huh? I'm getting a call from someone\n"
	.string "right now.$"

ApartmentLikeCarpet_Text_KroniiHello::
# 118 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "Hello?$"

ApartmentLikeCarpet_Text_AmeliaImBack::
# 122 "data/maps/ApartmentLikeCarpet/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AMELIA EMOTE_NORMAL}I'm back, bros.$"
