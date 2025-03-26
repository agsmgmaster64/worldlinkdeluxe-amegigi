	.align 2
voicegroup_dd_skuller_drill_missile::                                                                      @ Vocal | Type | Description
	voice_keysplit_all voicegroup_drums_dd                                                                 @ 000 | Direct | Drum | GBA Drum
	voice_keysplit voicegroup_piano, KeySplitTable1                                                        @ 001 | Direct | Multi | GBA Piano 1
	voice_directsound 60, 0, DirectSoundWaveData_drill_dozer_bass_sample, 255, 165, 128, 226               @ 002 | Direct | WIP
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 128, 180, 108, 209        @ 
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 188, 128, 226        @ 
	voice_directsound 60, 65, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 85, 204, 77, 246        @ 
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 165, 51, 242                   @
	voice_directsound 60, 0, DirectSoundWaveData_ethnic_flavours_atarigane, 255, 0, 255, 0                 @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204                       @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 128, 165, 90, 216                   @ 014 | Direct | GBA Tubular Bell
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 128, 160, 175, 165                        @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 76, 154, 188              @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_high, 255, 76, 154, 188             @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_accordion, 64, 188, 108, 165                      @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 165, 180, 204              @ 024 | Direct | GBA Nylon Guitar
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 165, 128, 204              @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 204, 103, 226              @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 51, 204, 92, 226                @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127         @
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127   @
	voice_directsound 60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 165               @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_2_alt 60, 0, 3, 0, 4, 4, 4
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188                   @
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88pro_unison_slap, 255, 165, 180, 216            @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115                      @ 038 | Direct | GBA Synth Bass
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 0, 255, 127                     @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 216, 0, 165               @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_harp, 255, 246, 0, 235                            @
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 127, 154, 235                       @
	voice_keysplit voicegroup_strings, KeySplitTable2                                                      @ 048 | Direct | Multi | GBA String
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 0                @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_trumpet, KeySplitTable3                                                      @ 056 | Direct | Multi | GBA Trumpet
	voice_directsound 60, 0, DirectSoundWaveData_drill_dozer_trumpet_sample, 255, 165, 180, 216            @ 057 | Direct | WIP
	voice_keysplit voicegroup_tuba, KeySplitTable4                                                         @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_keysplit voicegroup_french_horn, KeySplitTable5                                                  @ 060 | Direct | Multi | GBA French Horn
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127    @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 43, 188, 103, 165                    @
	voice_directsound 60, 0, DirectSoundWaveData_unused_sd90_oboe, 43, 165, 103, 165                       @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127                         @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_enhanced_delay_shaku, 255, 191, 97, 165              @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 255, 0, 255, 204               @
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127                  @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1_alt 60, 0, 0, 3, 0, 1, 10, 2                                                            @ 080 | Square1 | GBA
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_5, 0, 7, 15, 0                                 @ 081 | Wave | GBA Programmable Wave 5
	voice_square_1_alt 60, 0, 0, 3, 0, 1, 9, 1                                                             @ 082 | Square1 | GBA
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_11, 0, 7, 15, 0                                @ 083 | Wave | GBA Programmable Wave 11
	voice_square_2_alt 60, 0, 2, 0, 1, 9, 0                                                                @
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_3, 0, 2, 9, 0                                  @
	voice_square_2_alt 60, 0, 1, 0, 1, 10, 2                                                               @ 086 | Square2 | GBA
	voice_square_2_alt 60, 0, 3, 0, 1, 10, 1                                                               @ 087 | Square2 | GBA
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_1, 0, 7, 15, 0                                 @
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_15, 0, 1, 9, 2                                 @
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 0                @ 090 | Direct | GBA Choir Ahhs
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_2, 0, 2, 9, 1                                  @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_5, 0, 3, 7, 2                                  @
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_22, 0, 2, 7, 3                                 @ 098 | Wave | GBA Programmable Wave 22
	voice_programmable_wave_alt 60, 0, ProgrammableWaveData_23, 0, 2, 7, 3                                 @ 099 | Wave | GBA Programmable Wave 23
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 165
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_noise_alt 60, 0, 0, 0, 0, 15, 0
	voice_noise_alt 60, 0, 0, 0, 2, 6, 0                                                                   @
	voice_noise_alt 60, 0, 0, 0, 1, 12, 0                                                                  @ 127 | Noise | GBA Noise 2

