InsideOfTruck_MapScripts::
# 9 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD
# 15 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 12 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME:
# 16 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
	end


InsideOfTruck_EventScript_SetIntroFlags::
# 22 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 23 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 24 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 25 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 5, 10
# 27 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	end


InsideOfTruck_EventScript_MovingBox::
# 32 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_EventScript_MovingBox_Text_0, MSGBOX_SIGN
	end


InsideOfTruck_EventScript_MovingBox_Text_0:
# 32 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a Puppet logo.\p"
	.string "It's a Puppet brand moving and delivery\n"
	.string "service.$"
