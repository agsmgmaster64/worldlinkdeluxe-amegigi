EventScript_AccessMusicPlayer::
	lockall
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	msgbox Eventscript_MusicPlayerMainMenu_Text_Intro
EventScript_AccessMusicPlayerLoop:
	message Eventscript_MusicPlayerMainMenu_Text_Return
	waitmessage
	call EventScript_SetupPlayerMainSettingMultichoice
	goto_if_ge VAR_RESULT, 5, EventScript_PutAwayMusicPlayer
	call_if_eq VAR_RESULT, 0, EventScript_MusicPlayer_PlaceholderOption
	call_if_eq VAR_RESULT, 1, EventScript_MusicPlayer_RegionPlaylistSettings
	call_if_eq VAR_RESULT, 2, EventScript_MusicPlayer_PlaceholderOption
	call_if_eq VAR_RESULT, 3, EventScript_MusicPlayer_PlaceholderOption
	call_if_eq VAR_RESULT, 4, EventScript_MusicPlayer_ResetAllSettings
	goto EventScript_AccessMusicPlayerLoop

EventScript_PutAwayMusicPlayer:
	msgbox Eventscript_MusicPlayerMainMenu_Text_TurnOff
	releaseall
	end

EventScript_MusicPlayer_RegionPlaylistSettings:
	setvar VAR_0x8008, 1
	getplayliststyle VAR_0x8009
	message Eventscript_RegionPlaylistMultichoice_Text_Placeholder
	waitmessage
	call EventScript_SetupRegionPlaylistsSettingMultichoice
	goto_if_ge VAR_RESULT, PLAYLIST_SET_STYLE_COUNT, EventScript_MusicPlayer_RegionPlaylistSettings_Ret
	call_if_eq VAR_RESULT, PLAYLIST_SET_STYLE_DEFAULT, EventScript_MusicPlayer_RegionPlaylist_Default
	call_if_eq VAR_RESULT, PLAYLIST_SET_STYLE_REGULAR, EventScript_MusicPlayer_RegionPlaylist_Regular
	call_if_eq VAR_RESULT, PLAYLIST_SET_STYLE_ZGS, EventScript_MusicPlayer_RegionPlaylist_ZGS
	call_if_eq VAR_RESULT, PLAYLIST_SET_STYLE_ALTERNATE, EventScript_MusicPlayer_RegionPlaylist_ZGS2
	call_if_eq VAR_RESULT, PLAYLIST_SET_STYLE_ALTERNATE2, EventScript_MusicPlayer_RegionPlaylist_Placeholder
	goto EventScript_MusicPlayer_RegionPlaylistSettings
EventScript_MusicPlayer_RegionPlaylistSettings_Ret:
	return

EventScript_MusicPlayer_RegionPlaylist_Default:
	setplayliststyle PLAYLIST_SET_STYLE_DEFAULT
	msgbox Eventscript_RegionPlaylistMultichoice_Text_Default
	return

EventScript_MusicPlayer_RegionPlaylist_Regular:
	setplayliststyle PLAYLIST_SET_STYLE_REGULAR
	msgbox Eventscript_RegionPlaylistMultichoice_Text_WorldLinkDeluxe
	return

EventScript_MusicPlayer_RegionPlaylist_ZGS:
	setplayliststyle PLAYLIST_SET_STYLE_ZGS
	msgbox Eventscript_RegionPlaylistMultichoice_Text_ZGS1
	return

EventScript_MusicPlayer_RegionPlaylist_ZGS2:
	setplayliststyle PLAYLIST_SET_STYLE_ALTERNATE
	msgbox Eventscript_RegionPlaylistMultichoice_Text_ZGS2
	return

EventScript_MusicPlayer_RegionPlaylist_Placeholder:
	setplayliststyle PLAYLIST_SET_STYLE_ALTERNATE2
	msgbox Eventscript_RegionPlaylistMultichoice_Text_Placeholder
	return

EventScript_MusicPlayer_PlaceholderOption:
	setvar VAR_0x8008, 0
	msgbox Eventscript_RegionPlaylistMultichoice_Text_Placeholder
	return

EventScript_MusicPlayer_ResetAllSettings:
	setvar VAR_0x8008, 4
	msgbox Eventscript_ResetAllPlayer_Text_ResetPrompt, MSGBOX_YESNO
	goto_if_ne VAR_RESULT, YES, EventScript_MusicPlayer_ResetAllSettings_Ret
	callnative ResetAllPlayerMusic
	setvar VAR_0x8008, 0
	setvar VAR_0x800A, 0
	msgbox Eventscript_ResetAllPlayer_Text_SettingsReset
EventScript_MusicPlayer_ResetAllSettings_Ret:
	return

EventScript_SetupPlayerMainSettingMultichoice:
	dynmultipush Eventscript_MainSettingMultichoice_Text_PlayMusic, 0
	dynmultipush Eventscript_MainSettingMultichoice_Text_RegionPlaylists, 1
	dynmultipush Eventscript_MainSettingMultichoice_Text_MusicOverrides, 2
	dynmultipush Eventscript_MainSettingMultichoice_Text_OverrideSettings, 3
	dynmultipush Eventscript_MainSettingMultichoice_Text_ResetAll, 4
	dynmultipush Eventscript_MainSettingMultichoice_Text_PutAway, 5
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x8008, NULL
	return

EventScript_SetupRegionPlaylistsSettingMultichoice:
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_Default, PLAYLIST_SET_STYLE_DEFAULT
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_WorldLinkDeluxe, PLAYLIST_SET_STYLE_REGULAR
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_ZGS1, PLAYLIST_SET_STYLE_ZGS
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_ZGS2, PLAYLIST_SET_STYLE_ALTERNATE
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_Placeholder, PLAYLIST_SET_STYLE_ALTERNATE2
	dynmultipush Eventscript_MainSettingMultichoice_Text_Back, PLAYLIST_SET_STYLE_COUNT
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x8009, NULL
	return

EventScript_MusicTrackListMultichoice:
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_Default, 0
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_WorldLinkDeluxe, 1
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_ZGS1, 2
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_ZGS2, 3
	dynmultipush Eventscript_RegionPlaylistMultichoice_Text_Placeholder, 4
	dynmultipush Eventscript_MainSettingMultichoice_Text_Back, 5
	dynmultistack 0, 0, FALSE, 3, FALSE, VAR_0x800A, NULL
	return

Eventscript_MusicPlayerMainMenu_Text_Intro:
	.string "Boot up.\pWelcome to the Music Player.$"

Eventscript_MusicPlayerMainMenu_Text_Return:
	.string "Please choose an option.$"

Eventscript_MusicPlayerMainMenu_Text_TurnOff:
	.string "Music Player on standby.$"

Eventscript_MainSettingMultichoice_Text_PlayMusic:
	.string "Play Music$"

Eventscript_MainSettingMultichoice_Text_RegionPlaylists:
	.string "Region Playlists$"

Eventscript_MainSettingMultichoice_Text_MusicOverrides:
	.string "Music Overrides$"

Eventscript_MainSettingMultichoice_Text_OverrideSettings:
	.string "Override Settings$"

Eventscript_MainSettingMultichoice_Text_ResetAll:
	.string "Reset All$"

Eventscript_MainSettingMultichoice_Text_PutAway:
	.string "Put Away$"

Eventscript_ResetAllPlayer_Text_ResetPrompt:
	.string "Reset all settings of Music Player?$"

Eventscript_ResetAllPlayer_Text_SettingsReset:
	.string "Settings reseted.$"

Eventscript_RegionPlaylistMultichoice_Text_Default:
	.string "Default$"

Eventscript_RegionPlaylistMultichoice_Text_WorldLinkDeluxe:
	.string "World Link Deluxe$"

Eventscript_RegionPlaylistMultichoice_Text_ZGS1:
	.string "Zoku Gensokyo Scenario 1$"

Eventscript_RegionPlaylistMultichoice_Text_ZGS2:
	.string "Zoku Gensokyo Scenario 2$"

Eventscript_RegionPlaylistMultichoice_Text_Placeholder:
	.string "Placeholder$"

Eventscript_MainSettingMultichoice_Text_Back:
	.string "Go Back$"

Eventscript_OverrideSettingMultichoice_Text_Override:
	.string "Go Back$"
