EventScript_UseSurf::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CanUseSurfOtherwise
EventScript_DoSurf::
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	buffermovename STR_VAR_2, MOVE_SURF
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
EventScript_UseSurfMove:: @ qol_field_moves
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

EventScript_CanUseSurfOtherwise::
	checkpartylearnknowsmove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CanUseSurfTool
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	buffermovename STR_VAR_2, MOVE_SURF
	msgbox Text_MonAttemptedToUseFieldMove, MSGBOX_DEFAULT
	goto EventScript_UseSurfMove

EventScript_UseSurfboard::
	lock
	goto EventScript_UseSurfboard_SkipCheck

EventScript_CanUseSurfTool::
	checkitem ITEM_SURFBOARD, 1
	goto_if_ne VAR_RESULT, TRUE, EventScript_EndUseSurf
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
EventScript_UseSurfboard_SkipCheck::
	bufferitemname STR_VAR_2, ITEM_SURFBOARD
	msgbox Text_PlayerUsedFieldTool, MSGBOX_DEFAULT
EventScript_UseSurfFieldEffect::
	dofieldeffect FLDEFF_USE_SURF_TOOL
	releaseall
	end
