// Normally, INCBIN_COMP acts like INCBIN_U32, but appends `.lz` to the file, compressing it;
// If not compressing overworld gfx, make this an alias to INCBIN_32, so gfx will *not* be compressed
#if !(OW_GFX_COMPRESS)
#define INCBIN_COMP INCBIN_U32
#endif

const u32 gMonFrontPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/anim_front.4bpp.smol");
const u32 gMonBackPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/back.4bpp.smol");
const u16 gMonPalette_CircledQuestionMark[] = INCBIN_U16("graphics/pokemon/question_mark/circled/normal.gbapal");
const u16 gMonShinyPalette_CircledQuestionMark[] = INCBIN_U16("graphics/pokemon/question_mark/circled/shiny.gbapal");
const u8 gMonIcon_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/icon.4bpp");
#if P_FOOTPRINTS
#if !P_GBA_STYLE_SPECIES_FOOTPRINTS
    const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint.1bpp");
#else
    const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint_gba.1bpp");
#endif //P_GBA_STYLE_SPECIES_FOOTPRINTS
#endif //P_FOOTPRINTS
const u32 gObjectEventPic_Substitute[] = INCBIN_COMP("graphics/pokemon/question_mark/overworld.4bpp");

#if P_FAMILY_PORYGON
#if !P_GBA_STYLE_SPECIES_GFX
    const u32 gMonFrontPic_Porygon[] = INCBIN_U32("graphics/pokemon/porygon/anim_front.4bpp.smol");
    const u16 gMonPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/normal.gbapal");
    const u32 gMonBackPic_Porygon[] = INCBIN_U32("graphics/pokemon/porygon/back.4bpp.smol");
    const u16 gMonShinyPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/shiny.gbapal");
#else
    const u32 gMonFrontPic_Porygon[] = INCBIN_U32("graphics/pokemon/porygon/anim_front_gba.4bpp.smol");
    const u16 gMonPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/normal_gba.gbapal");
    const u32 gMonBackPic_Porygon[] = INCBIN_U32("graphics/pokemon/porygon/back_gba.4bpp.smol");
    const u16 gMonShinyPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/shiny_gba.gbapal");
#endif //P_GBA_STYLE_SPECIES_GFX
#if !P_GBA_STYLE_SPECIES_ICONS
    const u8 gMonIcon_Porygon[] = INCBIN_U8("graphics/pokemon/porygon/icon.4bpp");
#else
    const u8 gMonIcon_Porygon[] = INCBIN_U8("graphics/pokemon/porygon/icon_gba.4bpp");
#endif //P_GBA_STYLE_SPECIES_ICONS
#if P_FOOTPRINTS
    const u8 gMonFootprint_Porygon[] = INCBIN_U8("graphics/pokemon/porygon/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Porygon[] = INCBIN_COMP("graphics/pokemon/porygon/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

#if P_GEN_2_CROSS_EVOS
#if !P_GBA_STYLE_SPECIES_GFX
    const u32 gMonFrontPic_Porygon2[] = INCBIN_U32("graphics/pokemon/porygon2/anim_front.4bpp.smol");
    const u16 gMonPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/normal.gbapal");
    const u32 gMonBackPic_Porygon2[] = INCBIN_U32("graphics/pokemon/porygon2/back.4bpp.smol");
    const u16 gMonShinyPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/shiny.gbapal");
#else
    const u32 gMonFrontPic_Porygon2[] = INCBIN_U32("graphics/pokemon/porygon2/anim_front_gba.4bpp.smol");
    const u16 gMonPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/normal_gba.gbapal");
    const u32 gMonBackPic_Porygon2[] = INCBIN_U32("graphics/pokemon/porygon2/back_gba.4bpp.smol");
    const u16 gMonShinyPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/shiny_gba.gbapal");
#endif //P_GBA_STYLE_SPECIES_GFX
#if !P_GBA_STYLE_SPECIES_ICONS
    const u8 gMonIcon_Porygon2[] = INCBIN_U8("graphics/pokemon/porygon2/icon.4bpp");
#else
    const u8 gMonIcon_Porygon2[] = INCBIN_U8("graphics/pokemon/porygon2/icon_gba.4bpp");
#endif //P_GBA_STYLE_SPECIES_ICONS
#if P_FOOTPRINTS
    const u8 gMonFootprint_Porygon2[] = INCBIN_U8("graphics/pokemon/porygon2/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Porygon2[] = INCBIN_COMP("graphics/pokemon/porygon2/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

#if P_GEN_4_CROSS_EVOS
    const u32 gMonFrontPic_PorygonZ[] = INCBIN_U32("graphics/pokemon/porygon_z/anim_front.4bpp.smol");
    const u16 gMonPalette_PorygonZ[] = INCBIN_U16("graphics/pokemon/porygon_z/normal.gbapal");
    const u32 gMonBackPic_PorygonZ[] = INCBIN_U32("graphics/pokemon/porygon_z/back.4bpp.smol");
    const u16 gMonShinyPalette_PorygonZ[] = INCBIN_U16("graphics/pokemon/porygon_z/shiny.gbapal");
    const u8 gMonIcon_PorygonZ[] = INCBIN_U8("graphics/pokemon/porygon_z/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_PorygonZ[] = INCBIN_U8("graphics/pokemon/porygon_z/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_PorygonZ[] = INCBIN_COMP("graphics/pokemon/porygon_z/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_PorygonZ[] = INCBIN_U16("graphics/pokemon/porygon_z/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_PorygonZ[] = INCBIN_U16("graphics/pokemon/porygon_z/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_TERAPAGOS
    const u32 gMonFrontPic_TerapagosNormal[] = INCBIN_U32("graphics/pokemon/terapagos/front.4bpp.smol");
    const u16 gMonPalette_TerapagosNormal[] = INCBIN_U16("graphics/pokemon/terapagos/normal.gbapal");
    const u32 gMonBackPic_TerapagosNormal[] = INCBIN_U32("graphics/pokemon/terapagos/back.4bpp.smol");
    const u16 gMonShinyPalette_TerapagosNormal[] = INCBIN_U16("graphics/pokemon/terapagos/shiny.gbapal");
    const u8 gMonIcon_TerapagosNormal[] = INCBIN_U8("graphics/pokemon/terapagos/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TerapagosNormal[] = INCBIN_U8("graphics/pokemon/terapagos/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TerapagosNormal[] = INCBIN_COMP("graphics/pokemon/terapagos/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TerapagosNormal[] = INCBIN_U16("graphics/pokemon/terapagos/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TerapagosNormal[] = INCBIN_U16("graphics/pokemon/terapagos/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TerapagosTerastal[] = INCBIN_U32("graphics/pokemon/terapagos/terastal/front.4bpp.smol");
    const u16 gMonPalette_TerapagosTerastal[] = INCBIN_U16("graphics/pokemon/terapagos/terastal/normal.gbapal");
    const u32 gMonBackPic_TerapagosTerastal[] = INCBIN_U32("graphics/pokemon/terapagos/terastal/back.4bpp.smol");
    const u16 gMonShinyPalette_TerapagosTerastal[] = INCBIN_U16("graphics/pokemon/terapagos/terastal/shiny.gbapal");
    const u8 gMonIcon_TerapagosTerastal[] = INCBIN_U8("graphics/pokemon/terapagos/terastal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TerapagosTerastal[] = INCBIN_U8("graphics/pokemon/terapagos/terastal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TerapagosTerastal[] = INCBIN_COMP("graphics/pokemon/terapagos/terastal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TerapagosTerastal[] = INCBIN_U16("graphics/pokemon/terapagos/terastal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TerapagosTerastal[] = INCBIN_U16("graphics/pokemon/terapagos/terastal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TerapagosStellar[] = INCBIN_U32("graphics/pokemon/terapagos/stellar/front.4bpp.smol");
    const u16 gMonPalette_TerapagosStellar[] = INCBIN_U16("graphics/pokemon/terapagos/stellar/normal.gbapal");
    const u32 gMonBackPic_TerapagosStellar[] = INCBIN_U32("graphics/pokemon/terapagos/stellar/back.4bpp.smol");
    const u16 gMonShinyPalette_TerapagosStellar[] = INCBIN_U16("graphics/pokemon/terapagos/stellar/shiny.gbapal");
    const u8 gMonIcon_TerapagosStellar[] = INCBIN_U8("graphics/pokemon/terapagos/stellar/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TerapagosStellar[] = INCBIN_U8("graphics/pokemon/terapagos/stellar/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
//    const u32 gObjectEventPic_TerapagosStellar[] = INCBIN_COMP("graphics/pokemon/terapagos/stellar/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
//    const u16 gOverworldPalette_TerapagosStellar[] = INCBIN_U16("graphics/pokemon/terapagos/stellar/overworld_normal.gbapal");
//    const u16 gShinyOverworldPalette_TerapagosStellar[] = INCBIN_U16("graphics/pokemon/terapagos/stellar/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_FAMILY_TERAPAGOS

    const u32 gMonFrontPic_CReimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CReimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/chibi/normal.gbapal");
    const u32 gMonBackPic_CReimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CReimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/chibi/shiny.gbapal");
    const u8 gMonIcon_CReimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CReimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Reimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Reimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/normal/normal.gbapal");
    const u32 gMonBackPic_Reimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Reimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/normal/shiny.gbapal");
    const u8 gMonIcon_Reimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Reimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AReimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AReimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/attack/normal.gbapal");
    const u32 gMonBackPic_AReimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AReimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/attack/shiny.gbapal");
    const u8 gMonIcon_AReimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AReimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DReimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DReimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/defense/normal.gbapal");
    const u32 gMonBackPic_DReimu[] = INCBIN_U32("graphics/pokemon/_add/th/reimu/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DReimu[] = INCBIN_U16("graphics/pokemon/_add/th/reimu/defense/shiny.gbapal");
    const u8 gMonIcon_DReimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DReimu[] = INCBIN_U8("graphics/pokemon/_add/th/reimu/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/chibi/normal.gbapal");
    const u32 gMonBackPic_CMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/chibi/shiny.gbapal");
    const u8 gMonIcon_CMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Marisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Marisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/normal/normal.gbapal");
    const u32 gMonBackPic_Marisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Marisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/normal/shiny.gbapal");
    const u8 gMonIcon_Marisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Marisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/attack/normal.gbapal");
    const u32 gMonBackPic_AMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/attack/shiny.gbapal");
    const u8 gMonIcon_AMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/speed/normal.gbapal");
    const u32 gMonBackPic_SMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/speed/shiny.gbapal");
    const u8 gMonIcon_SMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/advent/normal.gbapal");
    const u32 gMonBackPic_AdMarisa[] = INCBIN_U32("graphics/pokemon/_add/th/marisa/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdMarisa[] = INCBIN_U16("graphics/pokemon/_add/th/marisa/advent/shiny.gbapal");
    const u8 gMonIcon_AdMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMarisa[] = INCBIN_U8("graphics/pokemon/_add/th/marisa/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CDaiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/chibi/normal.gbapal");
    const u32 gMonBackPic_CDaiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/chibi/shiny.gbapal");
    const u8 gMonIcon_CDaiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CDaiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CDaiyousei[] = INCBIN_COMP("graphics/pokemon/_add/th/daiyousei/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Daiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Daiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/normal/normal.gbapal");
    const u32 gMonBackPic_Daiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Daiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/normal/shiny.gbapal");
    const u8 gMonIcon_Daiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Daiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Daiyousei[] = INCBIN_COMP("graphics/pokemon/_add/th/daiyousei/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Daiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Daiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ADaiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ADaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/attack/normal.gbapal");
    const u32 gMonBackPic_ADaiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ADaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/attack/shiny.gbapal");
    const u8 gMonIcon_ADaiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ADaiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ADaiyousei[] = INCBIN_COMP("graphics/pokemon/_add/th/daiyousei/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ADaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_ADaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DDaiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/defense/normal.gbapal");
    const u32 gMonBackPic_DDaiyousei[] = INCBIN_U32("graphics/pokemon/_add/th/daiyousei/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/defense/shiny.gbapal");
    const u8 gMonIcon_DDaiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DDaiyousei[] = INCBIN_U8("graphics/pokemon/_add/th/daiyousei/defense/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DDaiyousei[] = INCBIN_COMP("graphics/pokemon/_add/th/daiyousei/defense/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/defense/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_DDaiyousei[] = INCBIN_U16("graphics/pokemon/_add/th/daiyousei/defense/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/chibi/normal.gbapal");
    const u32 gMonBackPic_CCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/chibi/shiny.gbapal");
    const u8 gMonIcon_CCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CCirno[] = INCBIN_COMP("graphics/pokemon/_add/th/cirno/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Cirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Cirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/normal/normal.gbapal");
    const u32 gMonBackPic_Cirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Cirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/normal/shiny.gbapal");
    const u8 gMonIcon_Cirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Cirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Cirno[] = INCBIN_COMP("graphics/pokemon/_add/th/cirno/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Cirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Cirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/speed/normal.gbapal");
    const u32 gMonBackPic_SCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/speed/shiny.gbapal");
    const u8 gMonIcon_SCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/speed/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SCirno[] = INCBIN_COMP("graphics/pokemon/_add/th/cirno/speed/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/speed/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_SCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/speed/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/tech/normal.gbapal");
    const u32 gMonBackPic_TCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/tech/shiny.gbapal");
    const u8 gMonIcon_TCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/tech/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TCirno[] = INCBIN_COMP("graphics/pokemon/_add/th/cirno/tech/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/tech/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/tech/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/advent/normal.gbapal");
    const u32 gMonBackPic_AdCirno[] = INCBIN_U32("graphics/pokemon/_add/th/cirno/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdCirno[] = INCBIN_U16("graphics/pokemon/_add/th/cirno/advent/shiny.gbapal");
    const u8 gMonIcon_AdCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdCirno[] = INCBIN_U8("graphics/pokemon/_add/th/cirno/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/chibi/normal.gbapal");
    const u32 gMonBackPic_CRumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/chibi/shiny.gbapal");
    const u8 gMonIcon_CRumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Rumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/normal/normal.gbapal");
    const u32 gMonBackPic_Rumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Rumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/normal/shiny.gbapal");
    const u8 gMonIcon_Rumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ARumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/attack/normal.gbapal");
    const u32 gMonBackPic_ARumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ARumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/attack/shiny.gbapal");
    const u8 gMonIcon_ARumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SRumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SRumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/speed/normal.gbapal");
    const u32 gMonBackPic_SRumia[] = INCBIN_U32("graphics/pokemon/_add/th/rumia/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SRumia[] = INCBIN_U16("graphics/pokemon/_add/th/rumia/speed/shiny.gbapal");
    const u8 gMonIcon_SRumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SRumia[] = INCBIN_U8("graphics/pokemon/_add/th/rumia/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/chibi/normal.gbapal");
    const u32 gMonBackPic_CMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/chibi/shiny.gbapal");
    const u8 gMonIcon_CMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Meiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Meiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/normal/normal.gbapal");
    const u32 gMonBackPic_Meiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Meiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/normal/shiny.gbapal");
    const u8 gMonIcon_Meiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Meiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/defense/normal.gbapal");
    const u32 gMonBackPic_DMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/defense/shiny.gbapal");
    const u8 gMonIcon_DMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/speed/normal.gbapal");
    const u32 gMonBackPic_SMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/speed/shiny.gbapal");
    const u8 gMonIcon_SMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/advent/normal.gbapal");
    const u32 gMonBackPic_AdMeiling[] = INCBIN_U32("graphics/pokemon/_add/th/meiling/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdMeiling[] = INCBIN_U16("graphics/pokemon/_add/th/meiling/advent/shiny.gbapal");
    const u8 gMonIcon_AdMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMeiling[] = INCBIN_U8("graphics/pokemon/_add/th/meiling/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKoakuma[] = INCBIN_U32("graphics/pokemon/_add/th/koakuma/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKoakuma[] = INCBIN_U16("graphics/pokemon/_add/th/koakuma/chibi/normal.gbapal");
    const u32 gMonBackPic_CKoakuma[] = INCBIN_U32("graphics/pokemon/_add/th/koakuma/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKoakuma[] = INCBIN_U16("graphics/pokemon/_add/th/koakuma/chibi/shiny.gbapal");
    const u8 gMonIcon_CKoakuma[] = INCBIN_U8("graphics/pokemon/_add/th/koakuma/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKoakuma[] = INCBIN_U8("graphics/pokemon/_add/th/koakuma/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Koakuma[] = INCBIN_U32("graphics/pokemon/_add/th/koakuma/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Koakuma[] = INCBIN_U16("graphics/pokemon/_add/th/koakuma/normal/normal.gbapal");
    const u32 gMonBackPic_Koakuma[] = INCBIN_U32("graphics/pokemon/_add/th/koakuma/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Koakuma[] = INCBIN_U16("graphics/pokemon/_add/th/koakuma/normal/shiny.gbapal");
    const u8 gMonIcon_Koakuma[] = INCBIN_U8("graphics/pokemon/_add/th/koakuma/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Koakuma[] = INCBIN_U8("graphics/pokemon/_add/th/koakuma/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HKoakuma[] = INCBIN_U32("graphics/pokemon/_add/th/koakuma/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HKoakuma[] = INCBIN_U16("graphics/pokemon/_add/th/koakuma/helper/normal.gbapal");
    const u32 gMonBackPic_HKoakuma[] = INCBIN_U32("graphics/pokemon/_add/th/koakuma/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HKoakuma[] = INCBIN_U16("graphics/pokemon/_add/th/koakuma/helper/shiny.gbapal");
    const u8 gMonIcon_HKoakuma[] = INCBIN_U8("graphics/pokemon/_add/th/koakuma/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HKoakuma[] = INCBIN_U8("graphics/pokemon/_add/th/koakuma/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CPatchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CPatchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/chibi/normal.gbapal");
    const u32 gMonBackPic_CPatchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CPatchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/chibi/shiny.gbapal");
    const u8 gMonIcon_CPatchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CPatchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Patchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Patchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/normal/normal.gbapal");
    const u32 gMonBackPic_Patchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Patchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/normal/shiny.gbapal");
    const u8 gMonIcon_Patchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Patchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_APatchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_APatchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/attack/normal.gbapal");
    const u32 gMonBackPic_APatchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_APatchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/attack/shiny.gbapal");
    const u8 gMonIcon_APatchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_APatchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DPatchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DPatchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/defense/normal.gbapal");
    const u32 gMonBackPic_DPatchouli[] = INCBIN_U32("graphics/pokemon/_add/th/patchouli/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DPatchouli[] = INCBIN_U16("graphics/pokemon/_add/th/patchouli/defense/shiny.gbapal");
    const u8 gMonIcon_DPatchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DPatchouli[] = INCBIN_U8("graphics/pokemon/_add/th/patchouli/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/chibi/normal.gbapal");
    const u32 gMonBackPic_CSakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/chibi/shiny.gbapal");
    const u8 gMonIcon_CSakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/normal/normal.gbapal");
    const u32 gMonBackPic_Sakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/normal/shiny.gbapal");
    const u8 gMonIcon_Sakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TSakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/tech/normal.gbapal");
    const u32 gMonBackPic_TSakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TSakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/tech/shiny.gbapal");
    const u8 gMonIcon_TSakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HSakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HSakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/helper/normal.gbapal");
    const u32 gMonBackPic_HSakuya[] = INCBIN_U32("graphics/pokemon/_add/th/sakuya/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HSakuya[] = INCBIN_U16("graphics/pokemon/_add/th/sakuya/helper/shiny.gbapal");
    const u8 gMonIcon_HSakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HSakuya[] = INCBIN_U8("graphics/pokemon/_add/th/sakuya/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRemilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRemilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/chibi/normal.gbapal");
    const u32 gMonBackPic_CRemilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRemilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/chibi/shiny.gbapal");
    const u8 gMonIcon_CRemilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRemilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Remilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Remilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/normal/normal.gbapal");
    const u32 gMonBackPic_Remilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Remilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/normal/shiny.gbapal");
    const u8 gMonIcon_Remilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Remilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARemilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ARemilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/attack/normal.gbapal");
    const u32 gMonBackPic_ARemilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ARemilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/attack/shiny.gbapal");
    const u8 gMonIcon_ARemilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARemilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DRemilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DRemilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/defense/normal.gbapal");
    const u32 gMonBackPic_DRemilia[] = INCBIN_U32("graphics/pokemon/_add/th/remilia/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DRemilia[] = INCBIN_U16("graphics/pokemon/_add/th/remilia/defense/shiny.gbapal");
    const u8 gMonIcon_DRemilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DRemilia[] = INCBIN_U8("graphics/pokemon/_add/th/remilia/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CFlandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CFlandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/chibi/normal.gbapal");
    const u32 gMonBackPic_CFlandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CFlandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/chibi/shiny.gbapal");
    const u8 gMonIcon_CFlandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CFlandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Flandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Flandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/normal/normal.gbapal");
    const u32 gMonBackPic_Flandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Flandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/normal/shiny.gbapal");
    const u8 gMonIcon_Flandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Flandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AFlandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AFlandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/attack/normal.gbapal");
    const u32 gMonBackPic_AFlandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AFlandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/attack/shiny.gbapal");
    const u8 gMonIcon_AFlandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AFlandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SFlandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SFlandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/speed/normal.gbapal");
    const u32 gMonBackPic_SFlandre[] = INCBIN_U32("graphics/pokemon/_add/th/flandre/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SFlandre[] = INCBIN_U16("graphics/pokemon/_add/th/flandre/speed/shiny.gbapal");
    const u8 gMonIcon_SFlandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SFlandre[] = INCBIN_U8("graphics/pokemon/_add/th/flandre/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/chibi/normal.gbapal");
    const u32 gMonBackPic_CLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/chibi/shiny.gbapal");
    const u8 gMonIcon_CLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Letty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Letty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/normal/normal.gbapal");
    const u32 gMonBackPic_Letty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Letty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/normal/shiny.gbapal");
    const u8 gMonIcon_Letty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Letty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/defense/normal.gbapal");
    const u32 gMonBackPic_DLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/defense/shiny.gbapal");
    const u8 gMonIcon_DLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/helper/normal.gbapal");
    const u32 gMonBackPic_HLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/helper/shiny.gbapal");
    const u8 gMonIcon_HLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/advent/normal.gbapal");
    const u32 gMonBackPic_AdLetty[] = INCBIN_U32("graphics/pokemon/_add/th/letty/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdLetty[] = INCBIN_U16("graphics/pokemon/_add/th/letty/advent/shiny.gbapal");
    const u8 gMonIcon_AdLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdLetty[] = INCBIN_U8("graphics/pokemon/_add/th/letty/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shanghai[] = INCBIN_U32("graphics/pokemon/_add/th/shanghai/anim_front.4bpp.smol");
    const u16 gMonPalette_Shanghai[] = INCBIN_U16("graphics/pokemon/_add/th/shanghai/normal.gbapal");
    const u32 gMonBackPic_Shanghai[] = INCBIN_U32("graphics/pokemon/_add/th/shanghai/back.4bpp.smol");
    const u16 gMonShinyPalette_Shanghai[] = INCBIN_U16("graphics/pokemon/_add/th/shanghai/shiny.gbapal");
    const u8 gMonIcon_Shanghai[] = INCBIN_U8("graphics/pokemon/_add/th/shanghai/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shanghai[] = INCBIN_U8("graphics/pokemon/_add/th/shanghai/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Hourai[] = INCBIN_U32("graphics/pokemon/_add/th/hourai/anim_front.4bpp.smol");
    const u16 gMonPalette_Hourai[] = INCBIN_U16("graphics/pokemon/_add/th/hourai/normal.gbapal");
    const u32 gMonBackPic_Hourai[] = INCBIN_U32("graphics/pokemon/_add/th/hourai/back.4bpp.smol");
    const u16 gMonShinyPalette_Hourai[] = INCBIN_U16("graphics/pokemon/_add/th/hourai/shiny.gbapal");
    const u8 gMonIcon_Hourai[] = INCBIN_U8("graphics/pokemon/_add/th/hourai/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hourai[] = INCBIN_U8("graphics/pokemon/_add/th/hourai/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Goliath[] = INCBIN_U32("graphics/pokemon/_add/th/goliath/anim_front.4bpp.smol");
    const u16 gMonPalette_Goliath[] = INCBIN_U16("graphics/pokemon/_add/th/goliath/normal.gbapal");
    const u32 gMonBackPic_Goliath[] = INCBIN_U32("graphics/pokemon/_add/th/goliath/back.4bpp.smol");
    const u16 gMonShinyPalette_Goliath[] = INCBIN_U16("graphics/pokemon/_add/th/goliath/shiny.gbapal");
    const u8 gMonIcon_Goliath[] = INCBIN_U8("graphics/pokemon/_add/th/goliath/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Goliath[] = INCBIN_U8("graphics/pokemon/_add/th/goliath/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShanghaiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/shanghai/sanni/anim_front.4bpp.smol");
    const u16 gMonPalette_ShanghaiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/shanghai/sanni/normal.gbapal");
    const u32 gMonBackPic_ShanghaiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/shanghai/sanni/back.4bpp.smol");
    const u16 gMonShinyPalette_ShanghaiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/shanghai/sanni/shiny.gbapal");
    const u8 gMonIcon_ShanghaiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/shanghai/sanni/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShanghaiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/shanghai/sanni/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HouraiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/hourai/sanni/anim_front.4bpp.smol");
    const u16 gMonPalette_HouraiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/hourai/sanni/normal.gbapal");
    const u32 gMonBackPic_HouraiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/hourai/sanni/back.4bpp.smol");
    const u16 gMonShinyPalette_HouraiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/hourai/sanni/shiny.gbapal");
    const u8 gMonIcon_HouraiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/hourai/sanni/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HouraiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/hourai/sanni/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_GoliathSanniAttack[] = INCBIN_U32("graphics/pokemon/_add/th/goliath/sanni/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_GoliathSanniAttack[] = INCBIN_U16("graphics/pokemon/_add/th/goliath/sanni/attack/normal.gbapal");
    const u32 gMonBackPic_GoliathSanniAttack[] = INCBIN_U32("graphics/pokemon/_add/th/goliath/sanni/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_GoliathSanniAttack[] = INCBIN_U16("graphics/pokemon/_add/th/goliath/sanni/attack/shiny.gbapal");
    const u8 gMonIcon_GoliathSanniAttack[] = INCBIN_U8("graphics/pokemon/_add/th/goliath/sanni/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_GoliathSanniAttack[] = INCBIN_U8("graphics/pokemon/_add/th/goliath/sanni/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_GoliathSanniDefense[] = INCBIN_U32("graphics/pokemon/_add/th/goliath/sanni/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_GoliathSanniDefense[] = INCBIN_U16("graphics/pokemon/_add/th/goliath/sanni/defense/normal.gbapal");
    const u32 gMonBackPic_GoliathSanniDefense[] = INCBIN_U32("graphics/pokemon/_add/th/goliath/sanni/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_GoliathSanniDefense[] = INCBIN_U16("graphics/pokemon/_add/th/goliath/sanni/defense/shiny.gbapal");
    const u8 gMonIcon_GoliathSanniDefense[] = INCBIN_U8("graphics/pokemon/_add/th/goliath/sanni/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_GoliathSanniDefense[] = INCBIN_U8("graphics/pokemon/_add/th/goliath/sanni/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/chibi/normal.gbapal");
    const u32 gMonBackPic_CAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/chibi/shiny.gbapal");
    const u8 gMonIcon_CAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Alice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Alice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/normal/normal.gbapal");
    const u32 gMonBackPic_Alice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Alice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/normal/shiny.gbapal");
    const u8 gMonIcon_Alice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Alice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/attack/normal.gbapal");
    const u32 gMonBackPic_AAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/attack/shiny.gbapal");
    const u8 gMonIcon_AAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/tech/normal.gbapal");
    const u32 gMonBackPic_TAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/tech/shiny.gbapal");
    const u8 gMonIcon_TAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/advent/normal.gbapal");
    const u32 gMonBackPic_AdAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/advent/shiny.gbapal");
    const u8 gMonIcon_AdAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DarkAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/dark/anim_front.4bpp.smol");
    const u16 gMonPalette_DarkAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/dark/normal.gbapal");
    const u32 gMonBackPic_DarkAlice[] = INCBIN_U32("graphics/pokemon/_add/th/alice/dark/back.4bpp.smol");
    const u16 gMonShinyPalette_DarkAlice[] = INCBIN_U16("graphics/pokemon/_add/th/alice/dark/shiny.gbapal");
    const u8 gMonIcon_DarkAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/dark/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DarkAlice[] = INCBIN_U8("graphics/pokemon/_add/th/alice/dark/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/chibi/normal.gbapal");
    const u32 gMonBackPic_CLilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/chibi/shiny.gbapal");
    const u8 gMonIcon_CLilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CLilyWhite[] = INCBIN_COMP("graphics/pokemon/_add/th/lilywhite/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_LilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_LilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/normal/normal.gbapal");
    const u32 gMonBackPic_LilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_LilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/normal/shiny.gbapal");
    const u8 gMonIcon_LilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_LilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_LilyWhite[] = INCBIN_COMP("graphics/pokemon/_add/th/lilywhite/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_LilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_LilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ALilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ALilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/attack/normal.gbapal");
    const u32 gMonBackPic_ALilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ALilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/attack/shiny.gbapal");
    const u8 gMonIcon_ALilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ALilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ALilyWhite[] = INCBIN_COMP("graphics/pokemon/_add/th/lilywhite/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ALilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_ALilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HLilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/helper/normal.gbapal");
    const u32 gMonBackPic_HLilyWhite[] = INCBIN_U32("graphics/pokemon/_add/th/lilywhite/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/helper/shiny.gbapal");
    const u8 gMonIcon_HLilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLilyWhite[] = INCBIN_U8("graphics/pokemon/_add/th/lilywhite/helper/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HLilyWhite[] = INCBIN_COMP("graphics/pokemon/_add/th/lilywhite/helper/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/helper/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_HLilyWhite[] = INCBIN_U16("graphics/pokemon/_add/th/lilywhite/helper/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CLilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/chibi/normal.gbapal");
    const u32 gMonBackPic_CLilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/chibi/shiny.gbapal");
    const u8 gMonIcon_CLilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_LilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_LilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/normal/normal.gbapal");
    const u32 gMonBackPic_LilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_LilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/normal/shiny.gbapal");
    const u8 gMonIcon_LilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_LilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ALilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ALilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/attack/normal.gbapal");
    const u32 gMonBackPic_ALilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ALilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/attack/shiny.gbapal");
    const u8 gMonIcon_ALilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ALilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SLilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SLilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/speed/normal.gbapal");
    const u32 gMonBackPic_SLilyBlack[] = INCBIN_U32("graphics/pokemon/_add/th/lilyblack/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SLilyBlack[] = INCBIN_U16("graphics/pokemon/_add/th/lilyblack/speed/shiny.gbapal");
    const u8 gMonIcon_SLilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SLilyBlack[] = INCBIN_U8("graphics/pokemon/_add/th/lilyblack/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLunasa[] = INCBIN_U32("graphics/pokemon/_add/th/lunasa/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLunasa[] = INCBIN_U16("graphics/pokemon/_add/th/lunasa/chibi/normal.gbapal");
    const u32 gMonBackPic_CLunasa[] = INCBIN_U32("graphics/pokemon/_add/th/lunasa/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLunasa[] = INCBIN_U16("graphics/pokemon/_add/th/lunasa/chibi/shiny.gbapal");
    const u8 gMonIcon_CLunasa[] = INCBIN_U8("graphics/pokemon/_add/th/lunasa/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLunasa[] = INCBIN_U8("graphics/pokemon/_add/th/lunasa/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Lunasa[] = INCBIN_U32("graphics/pokemon/_add/th/lunasa/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Lunasa[] = INCBIN_U16("graphics/pokemon/_add/th/lunasa/normal/normal.gbapal");
    const u32 gMonBackPic_Lunasa[] = INCBIN_U32("graphics/pokemon/_add/th/lunasa/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Lunasa[] = INCBIN_U16("graphics/pokemon/_add/th/lunasa/normal/shiny.gbapal");
    const u8 gMonIcon_Lunasa[] = INCBIN_U8("graphics/pokemon/_add/th/lunasa/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Lunasa[] = INCBIN_U8("graphics/pokemon/_add/th/lunasa/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HLunasa[] = INCBIN_U32("graphics/pokemon/_add/th/lunasa/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HLunasa[] = INCBIN_U16("graphics/pokemon/_add/th/lunasa/helper/normal.gbapal");
    const u32 gMonBackPic_HLunasa[] = INCBIN_U32("graphics/pokemon/_add/th/lunasa/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HLunasa[] = INCBIN_U16("graphics/pokemon/_add/th/lunasa/helper/shiny.gbapal");
    const u8 gMonIcon_HLunasa[] = INCBIN_U8("graphics/pokemon/_add/th/lunasa/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLunasa[] = INCBIN_U8("graphics/pokemon/_add/th/lunasa/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMerlin[] = INCBIN_U32("graphics/pokemon/_add/th/merlin/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMerlin[] = INCBIN_U16("graphics/pokemon/_add/th/merlin/chibi/normal.gbapal");
    const u32 gMonBackPic_CMerlin[] = INCBIN_U32("graphics/pokemon/_add/th/merlin/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMerlin[] = INCBIN_U16("graphics/pokemon/_add/th/merlin/chibi/shiny.gbapal");
    const u8 gMonIcon_CMerlin[] = INCBIN_U8("graphics/pokemon/_add/th/merlin/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMerlin[] = INCBIN_U8("graphics/pokemon/_add/th/merlin/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Merlin[] = INCBIN_U32("graphics/pokemon/_add/th/merlin/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Merlin[] = INCBIN_U16("graphics/pokemon/_add/th/merlin/normal/normal.gbapal");
    const u32 gMonBackPic_Merlin[] = INCBIN_U32("graphics/pokemon/_add/th/merlin/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Merlin[] = INCBIN_U16("graphics/pokemon/_add/th/merlin/normal/shiny.gbapal");
    const u8 gMonIcon_Merlin[] = INCBIN_U8("graphics/pokemon/_add/th/merlin/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Merlin[] = INCBIN_U8("graphics/pokemon/_add/th/merlin/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HMerlin[] = INCBIN_U32("graphics/pokemon/_add/th/merlin/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HMerlin[] = INCBIN_U16("graphics/pokemon/_add/th/merlin/helper/normal.gbapal");
    const u32 gMonBackPic_HMerlin[] = INCBIN_U32("graphics/pokemon/_add/th/merlin/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HMerlin[] = INCBIN_U16("graphics/pokemon/_add/th/merlin/helper/shiny.gbapal");
    const u8 gMonIcon_HMerlin[] = INCBIN_U8("graphics/pokemon/_add/th/merlin/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HMerlin[] = INCBIN_U8("graphics/pokemon/_add/th/merlin/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLyrica[] = INCBIN_U32("graphics/pokemon/_add/th/lyrica/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLyrica[] = INCBIN_U16("graphics/pokemon/_add/th/lyrica/chibi/normal.gbapal");
    const u32 gMonBackPic_CLyrica[] = INCBIN_U32("graphics/pokemon/_add/th/lyrica/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLyrica[] = INCBIN_U16("graphics/pokemon/_add/th/lyrica/chibi/shiny.gbapal");
    const u8 gMonIcon_CLyrica[] = INCBIN_U8("graphics/pokemon/_add/th/lyrica/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLyrica[] = INCBIN_U8("graphics/pokemon/_add/th/lyrica/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Lyrica[] = INCBIN_U32("graphics/pokemon/_add/th/lyrica/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Lyrica[] = INCBIN_U16("graphics/pokemon/_add/th/lyrica/normal/normal.gbapal");
    const u32 gMonBackPic_Lyrica[] = INCBIN_U32("graphics/pokemon/_add/th/lyrica/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Lyrica[] = INCBIN_U16("graphics/pokemon/_add/th/lyrica/normal/shiny.gbapal");
    const u8 gMonIcon_Lyrica[] = INCBIN_U8("graphics/pokemon/_add/th/lyrica/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Lyrica[] = INCBIN_U8("graphics/pokemon/_add/th/lyrica/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HLyrica[] = INCBIN_U32("graphics/pokemon/_add/th/lyrica/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HLyrica[] = INCBIN_U16("graphics/pokemon/_add/th/lyrica/helper/normal.gbapal");
    const u32 gMonBackPic_HLyrica[] = INCBIN_U32("graphics/pokemon/_add/th/lyrica/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HLyrica[] = INCBIN_U16("graphics/pokemon/_add/th/lyrica/helper/shiny.gbapal");
    const u8 gMonIcon_HLyrica[] = INCBIN_U8("graphics/pokemon/_add/th/lyrica/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLyrica[] = INCBIN_U8("graphics/pokemon/_add/th/lyrica/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLayla[] = INCBIN_U32("graphics/pokemon/_add/th/layla/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLayla[] = INCBIN_U16("graphics/pokemon/_add/th/layla/chibi/normal.gbapal");
    const u32 gMonBackPic_CLayla[] = INCBIN_U32("graphics/pokemon/_add/th/layla/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLayla[] = INCBIN_U16("graphics/pokemon/_add/th/layla/chibi/shiny.gbapal");
    const u8 gMonIcon_CLayla[] = INCBIN_U8("graphics/pokemon/_add/th/layla/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLayla[] = INCBIN_U8("graphics/pokemon/_add/th/layla/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Layla[] = INCBIN_U32("graphics/pokemon/_add/th/layla/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Layla[] = INCBIN_U16("graphics/pokemon/_add/th/layla/normal/normal.gbapal");
    const u32 gMonBackPic_Layla[] = INCBIN_U32("graphics/pokemon/_add/th/layla/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Layla[] = INCBIN_U16("graphics/pokemon/_add/th/layla/normal/shiny.gbapal");
    const u8 gMonIcon_Layla[] = INCBIN_U8("graphics/pokemon/_add/th/layla/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Layla[] = INCBIN_U8("graphics/pokemon/_add/th/layla/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DLayla[] = INCBIN_U32("graphics/pokemon/_add/th/layla/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DLayla[] = INCBIN_U16("graphics/pokemon/_add/th/layla/defense/normal.gbapal");
    const u32 gMonBackPic_DLayla[] = INCBIN_U32("graphics/pokemon/_add/th/layla/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DLayla[] = INCBIN_U16("graphics/pokemon/_add/th/layla/defense/shiny.gbapal");
    const u8 gMonIcon_DLayla[] = INCBIN_U8("graphics/pokemon/_add/th/layla/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DLayla[] = INCBIN_U8("graphics/pokemon/_add/th/layla/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/chibi/normal.gbapal");
    const u32 gMonBackPic_CYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/chibi/shiny.gbapal");
    const u8 gMonIcon_CYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CYoumu[] = INCBIN_COMP("graphics/pokemon/_add/th/youmu/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Youmu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Youmu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/normal/normal.gbapal");
    const u32 gMonBackPic_Youmu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Youmu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/normal/shiny.gbapal");
    const u8 gMonIcon_Youmu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Youmu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Youmu[] = INCBIN_COMP("graphics/pokemon/_add/th/youmu/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Youmu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Youmu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/defense/normal.gbapal");
    const u32 gMonBackPic_DYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/defense/shiny.gbapal");
    const u8 gMonIcon_DYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/defense/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DYoumu[] = INCBIN_COMP("graphics/pokemon/_add/th/youmu/defense/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/defense/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_DYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/defense/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/speed/normal.gbapal");
    const u32 gMonBackPic_SYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/speed/shiny.gbapal");
    const u8 gMonIcon_SYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/speed/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SYoumu[] = INCBIN_COMP("graphics/pokemon/_add/th/youmu/speed/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/speed/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_SYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/speed/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/advent/normal.gbapal");
    const u32 gMonBackPic_AdYoumu[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdYoumu[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/advent/shiny.gbapal");
    const u8 gMonIcon_AdYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdYoumu[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYoumuOld[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/old/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYoumuOld[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/old/chibi/normal.gbapal");
    const u32 gMonBackPic_CYoumuOld[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/old/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYoumuOld[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/old/chibi/shiny.gbapal");
    const u8 gMonIcon_CYoumuOld[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/old/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYoumuOld[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/old/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_YoumuOld[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/old/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_YoumuOld[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/old/normal/normal.gbapal");
    const u32 gMonBackPic_YoumuOld[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/old/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_YoumuOld[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/old/normal/shiny.gbapal");
    const u8 gMonIcon_YoumuOld[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/old/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_YoumuOld[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/old/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_EYoumuOld[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/old/extra/anim_front.4bpp.smol");
    const u16 gMonPalette_EYoumuOld[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/old/extra/normal.gbapal");
    const u32 gMonBackPic_EYoumuOld[] = INCBIN_U32("graphics/pokemon/_add/th/youmu/old/extra/back.4bpp.smol");
    const u16 gMonShinyPalette_EYoumuOld[] = INCBIN_U16("graphics/pokemon/_add/th/youmu/old/extra/shiny.gbapal");
    const u8 gMonIcon_EYoumuOld[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/old/extra/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_EYoumuOld[] = INCBIN_U8("graphics/pokemon/_add/th/youmu/old/extra/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/chibi/normal.gbapal");
    const u32 gMonBackPic_CYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/chibi/shiny.gbapal");
    const u8 gMonIcon_CYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/normal/normal.gbapal");
    const u32 gMonBackPic_Yuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/normal/shiny.gbapal");
    const u8 gMonIcon_Yuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/attack/normal.gbapal");
    const u32 gMonBackPic_AYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/attack/shiny.gbapal");
    const u8 gMonIcon_AYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/defense/normal.gbapal");
    const u32 gMonBackPic_DYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/defense/shiny.gbapal");
    const u8 gMonIcon_DYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/advent/normal.gbapal");
    const u32 gMonBackPic_AdYuyuko[] = INCBIN_U32("graphics/pokemon/_add/th/yuyuko/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdYuyuko[] = INCBIN_U16("graphics/pokemon/_add/th/yuyuko/advent/shiny.gbapal");
    const u8 gMonIcon_AdYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdYuyuko[] = INCBIN_U8("graphics/pokemon/_add/th/yuyuko/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/chibi/normal.gbapal");
    const u32 gMonBackPic_CChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/chibi/shiny.gbapal");
    const u8 gMonIcon_CChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CChen[] = INCBIN_COMP("graphics/pokemon/_add/th/chen/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Chen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Chen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/normal/normal.gbapal");
    const u32 gMonBackPic_Chen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Chen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/normal/shiny.gbapal");
    const u8 gMonIcon_Chen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Chen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Chen[] = INCBIN_COMP("graphics/pokemon/_add/th/chen/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Chen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Chen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/attack/normal.gbapal");
    const u32 gMonBackPic_AChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/attack/shiny.gbapal");
    const u8 gMonIcon_AChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AChen[] = INCBIN_COMP("graphics/pokemon/_add/th/chen/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_AChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/tech/normal.gbapal");
    const u32 gMonBackPic_TChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/tech/shiny.gbapal");
    const u8 gMonIcon_TChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/tech/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TChen[] = INCBIN_COMP("graphics/pokemon/_add/th/chen/tech/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/tech/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/tech/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/advent/normal.gbapal");
    const u32 gMonBackPic_AdChen[] = INCBIN_U32("graphics/pokemon/_add/th/chen/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdChen[] = INCBIN_U16("graphics/pokemon/_add/th/chen/advent/shiny.gbapal");
    const u8 gMonIcon_AdChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdChen[] = INCBIN_U8("graphics/pokemon/_add/th/chen/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/chibi/normal.gbapal");
    const u32 gMonBackPic_CRan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/chibi/shiny.gbapal");
    const u8 gMonIcon_CRan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ran[] = INCBIN_U32("graphics/pokemon/_add/th/ran/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Ran[] = INCBIN_U16("graphics/pokemon/_add/th/ran/normal/normal.gbapal");
    const u32 gMonBackPic_Ran[] = INCBIN_U32("graphics/pokemon/_add/th/ran/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Ran[] = INCBIN_U16("graphics/pokemon/_add/th/ran/normal/shiny.gbapal");
    const u8 gMonIcon_Ran[] = INCBIN_U8("graphics/pokemon/_add/th/ran/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ran[] = INCBIN_U8("graphics/pokemon/_add/th/ran/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ARan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/attack/normal.gbapal");
    const u32 gMonBackPic_ARan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ARan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/attack/shiny.gbapal");
    const u8 gMonIcon_ARan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HRan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HRan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/helper/normal.gbapal");
    const u32 gMonBackPic_HRan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HRan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/helper/shiny.gbapal");
    const u8 gMonIcon_HRan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HRan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdRan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdRan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/advent/normal.gbapal");
    const u32 gMonBackPic_AdRan[] = INCBIN_U32("graphics/pokemon/_add/th/ran/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdRan[] = INCBIN_U16("graphics/pokemon/_add/th/ran/advent/shiny.gbapal");
    const u8 gMonIcon_AdRan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdRan[] = INCBIN_U8("graphics/pokemon/_add/th/ran/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/chibi/normal.gbapal");
    const u32 gMonBackPic_CYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/chibi/shiny.gbapal");
    const u8 gMonIcon_CYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/normal/normal.gbapal");
    const u32 gMonBackPic_Yukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/normal/shiny.gbapal");
    const u8 gMonIcon_Yukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/defense/normal.gbapal");
    const u32 gMonBackPic_DYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/defense/shiny.gbapal");
    const u8 gMonIcon_DYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/tech/normal.gbapal");
    const u32 gMonBackPic_TYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/tech/shiny.gbapal");
    const u8 gMonIcon_TYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/advent/normal.gbapal");
    const u32 gMonBackPic_AdYukari[] = INCBIN_U32("graphics/pokemon/_add/th/yukari/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdYukari[] = INCBIN_U16("graphics/pokemon/_add/th/yukari/advent/shiny.gbapal");
    const u8 gMonIcon_AdYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdYukari[] = INCBIN_U8("graphics/pokemon/_add/th/yukari/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CWriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CWriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/chibi/normal.gbapal");
    const u32 gMonBackPic_CWriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CWriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/chibi/shiny.gbapal");
    const u8 gMonIcon_CWriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CWriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Wriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Wriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/normal/normal.gbapal");
    const u32 gMonBackPic_Wriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Wriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/normal/shiny.gbapal");
    const u8 gMonIcon_Wriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Wriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DWriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DWriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/defense/normal.gbapal");
    const u32 gMonBackPic_DWriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DWriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/defense/shiny.gbapal");
    const u8 gMonIcon_DWriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DWriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SWriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SWriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/speed/normal.gbapal");
    const u32 gMonBackPic_SWriggle[] = INCBIN_U32("graphics/pokemon/_add/th/wriggle/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SWriggle[] = INCBIN_U16("graphics/pokemon/_add/th/wriggle/speed/shiny.gbapal");
    const u8 gMonIcon_SWriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SWriggle[] = INCBIN_U8("graphics/pokemon/_add/th/wriggle/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/chibi/normal.gbapal");
    const u32 gMonBackPic_CMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/chibi/shiny.gbapal");
    const u8 gMonIcon_CMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMystia[] = INCBIN_COMP("graphics/pokemon/_add/th/mystia/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Mystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Mystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/normal/normal.gbapal");
    const u32 gMonBackPic_Mystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Mystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/normal/shiny.gbapal");
    const u8 gMonIcon_Mystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Mystia[] = INCBIN_COMP("graphics/pokemon/_add/th/mystia/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Mystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Mystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/attack/normal.gbapal");
    const u32 gMonBackPic_AMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/attack/shiny.gbapal");
    const u8 gMonIcon_AMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AMystia[] = INCBIN_COMP("graphics/pokemon/_add/th/mystia/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_AMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/helper/normal.gbapal");
    const u32 gMonBackPic_HMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/helper/shiny.gbapal");
    const u8 gMonIcon_HMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/helper/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HMystia[] = INCBIN_COMP("graphics/pokemon/_add/th/mystia/helper/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/helper/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_HMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/helper/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/advent/normal.gbapal");
    const u32 gMonBackPic_AdMystia[] = INCBIN_U32("graphics/pokemon/_add/th/mystia/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdMystia[] = INCBIN_U16("graphics/pokemon/_add/th/mystia/advent/shiny.gbapal");
    const u8 gMonIcon_AdMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMystia[] = INCBIN_U8("graphics/pokemon/_add/th/mystia/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/chibi/normal.gbapal");
    const u32 gMonBackPic_CKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/chibi/shiny.gbapal");
    const u8 gMonIcon_CKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Keine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Keine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/normal/normal.gbapal");
    const u32 gMonBackPic_Keine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Keine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/normal/shiny.gbapal");
    const u8 gMonIcon_Keine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Keine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/attack/normal.gbapal");
    const u32 gMonBackPic_AKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/attack/shiny.gbapal");
    const u8 gMonIcon_AKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/defense/normal.gbapal");
    const u32 gMonBackPic_DKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/defense/shiny.gbapal");
    const u8 gMonIcon_DKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/helper/normal.gbapal");
    const u32 gMonBackPic_HKeine[] = INCBIN_U32("graphics/pokemon/_add/th/keine/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HKeine[] = INCBIN_U16("graphics/pokemon/_add/th/keine/helper/shiny.gbapal");
    const u8 gMonIcon_HKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HKeine[] = INCBIN_U8("graphics/pokemon/_add/th/keine/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CTewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/chibi/normal.gbapal");
    const u32 gMonBackPic_CTewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CTewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/chibi/shiny.gbapal");
    const u8 gMonIcon_CTewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Tewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/normal/normal.gbapal");
    const u32 gMonBackPic_Tewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Tewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/normal/shiny.gbapal");
    const u8 gMonIcon_Tewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ATewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ATewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/attack/normal.gbapal");
    const u32 gMonBackPic_ATewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ATewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/attack/shiny.gbapal");
    const u8 gMonIcon_ATewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ATewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DTewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DTewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/defense/normal.gbapal");
    const u32 gMonBackPic_DTewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DTewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/defense/shiny.gbapal");
    const u8 gMonIcon_DTewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DTewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdTewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdTewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/advent/normal.gbapal");
    const u32 gMonBackPic_AdTewi[] = INCBIN_U32("graphics/pokemon/_add/th/tewi/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdTewi[] = INCBIN_U16("graphics/pokemon/_add/th/tewi/advent/shiny.gbapal");
    const u8 gMonIcon_AdTewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdTewi[] = INCBIN_U8("graphics/pokemon/_add/th/tewi/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/chibi/normal.gbapal");
    const u32 gMonBackPic_CReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/chibi/shiny.gbapal");
    const u8 gMonIcon_CReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CReisen[] = INCBIN_COMP("graphics/pokemon/_add/th/reisen/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Reisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Reisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/normal/normal.gbapal");
    const u32 gMonBackPic_Reisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Reisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/normal/shiny.gbapal");
    const u8 gMonIcon_Reisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Reisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Reisen[] = INCBIN_COMP("graphics/pokemon/_add/th/reisen/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Reisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Reisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/defense/normal.gbapal");
    const u32 gMonBackPic_DReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/defense/shiny.gbapal");
    const u8 gMonIcon_DReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/defense/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DReisen[] = INCBIN_COMP("graphics/pokemon/_add/th/reisen/defense/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/defense/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_DReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/defense/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/tech/normal.gbapal");
    const u32 gMonBackPic_TReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/tech/shiny.gbapal");
    const u8 gMonIcon_TReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/tech/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TReisen[] = INCBIN_COMP("graphics/pokemon/_add/th/reisen/tech/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/tech/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/tech/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/advent/normal.gbapal");
    const u32 gMonBackPic_AdReisen[] = INCBIN_U32("graphics/pokemon/_add/th/reisen/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdReisen[] = INCBIN_U16("graphics/pokemon/_add/th/reisen/advent/shiny.gbapal");
    const u8 gMonIcon_AdReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdReisen[] = INCBIN_U8("graphics/pokemon/_add/th/reisen/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CReisenII[] = INCBIN_U32("graphics/pokemon/_add/th/reisenii/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CReisenII[] = INCBIN_U16("graphics/pokemon/_add/th/reisenii/chibi/normal.gbapal");
    const u32 gMonBackPic_CReisenII[] = INCBIN_U32("graphics/pokemon/_add/th/reisenii/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CReisenII[] = INCBIN_U16("graphics/pokemon/_add/th/reisenii/chibi/shiny.gbapal");
    const u8 gMonIcon_CReisenII[] = INCBIN_U8("graphics/pokemon/_add/th/reisenii/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CReisenII[] = INCBIN_U8("graphics/pokemon/_add/th/reisenii/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ReisenII[] = INCBIN_U32("graphics/pokemon/_add/th/reisenii/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_ReisenII[] = INCBIN_U16("graphics/pokemon/_add/th/reisenii/normal/normal.gbapal");
    const u32 gMonBackPic_ReisenII[] = INCBIN_U32("graphics/pokemon/_add/th/reisenii/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_ReisenII[] = INCBIN_U16("graphics/pokemon/_add/th/reisenii/normal/shiny.gbapal");
    const u8 gMonIcon_ReisenII[] = INCBIN_U8("graphics/pokemon/_add/th/reisenii/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ReisenII[] = INCBIN_U8("graphics/pokemon/_add/th/reisenii/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CEirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/chibi/normal.gbapal");
    const u32 gMonBackPic_CEirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CEirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/chibi/shiny.gbapal");
    const u8 gMonIcon_CEirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Eirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Eirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/normal/normal.gbapal");
    const u32 gMonBackPic_Eirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Eirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/normal/shiny.gbapal");
    const u8 gMonIcon_Eirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Eirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AEirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AEirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/attack/normal.gbapal");
    const u32 gMonBackPic_AEirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AEirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/attack/shiny.gbapal");
    const u8 gMonIcon_AEirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AEirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HEirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HEirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/helper/normal.gbapal");
    const u32 gMonBackPic_HEirin[] = INCBIN_U32("graphics/pokemon/_add/th/eirin/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HEirin[] = INCBIN_U16("graphics/pokemon/_add/th/eirin/helper/shiny.gbapal");
    const u8 gMonIcon_HEirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HEirin[] = INCBIN_U8("graphics/pokemon/_add/th/eirin/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/chibi/normal.gbapal");
    const u32 gMonBackPic_CKaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/chibi/shiny.gbapal");
    const u8 gMonIcon_CKaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/normal/normal.gbapal");
    const u32 gMonBackPic_Kaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/normal/shiny.gbapal");
    const u8 gMonIcon_Kaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AKaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/attack/normal.gbapal");
    const u32 gMonBackPic_AKaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AKaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/attack/shiny.gbapal");
    const u8 gMonIcon_AKaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DKaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DKaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/defense/normal.gbapal");
    const u32 gMonBackPic_DKaguya[] = INCBIN_U32("graphics/pokemon/_add/th/kaguya/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DKaguya[] = INCBIN_U16("graphics/pokemon/_add/th/kaguya/defense/shiny.gbapal");
    const u8 gMonIcon_DKaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DKaguya[] = INCBIN_U8("graphics/pokemon/_add/th/kaguya/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/chibi/normal.gbapal");
    const u32 gMonBackPic_CMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/chibi/shiny.gbapal");
    const u8 gMonIcon_CMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Mokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/normal/normal.gbapal");
    const u32 gMonBackPic_Mokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Mokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/normal/shiny.gbapal");
    const u8 gMonIcon_Mokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/attack/normal.gbapal");
    const u32 gMonBackPic_AMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/attack/shiny.gbapal");
    const u8 gMonIcon_AMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/defense/normal.gbapal");
    const u32 gMonBackPic_DMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/defense/shiny.gbapal");
    const u8 gMonIcon_DMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/advent/anim_front.4bpp.smol");
    const u16 gMonPalette_AdMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/advent/normal.gbapal");
    const u32 gMonBackPic_AdMokou[] = INCBIN_U32("graphics/pokemon/_add/th/mokou/advent/back.4bpp.smol");
    const u16 gMonShinyPalette_AdMokou[] = INCBIN_U16("graphics/pokemon/_add/th/mokou/advent/shiny.gbapal");
    const u8 gMonIcon_AdMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/advent/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMokou[] = INCBIN_U8("graphics/pokemon/_add/th/mokou/advent/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CAya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/chibi/normal.gbapal");
    const u32 gMonBackPic_CAya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CAya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/chibi/shiny.gbapal");
    const u8 gMonIcon_CAya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Aya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Aya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/normal/normal.gbapal");
    const u32 gMonBackPic_Aya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Aya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/normal/shiny.gbapal");
    const u8 gMonIcon_Aya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Aya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SAya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SAya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/speed/normal.gbapal");
    const u32 gMonBackPic_SAya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SAya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/speed/shiny.gbapal");
    const u8 gMonIcon_SAya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SAya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TAya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TAya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/tech/normal.gbapal");
    const u32 gMonBackPic_TAya[] = INCBIN_U32("graphics/pokemon/_add/th/aya/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TAya[] = INCBIN_U16("graphics/pokemon/_add/th/aya/tech/shiny.gbapal");
    const u8 gMonIcon_TAya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TAya[] = INCBIN_U8("graphics/pokemon/_add/th/aya/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/chibi/normal.gbapal");
    const u32 gMonBackPic_CMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/chibi/shiny.gbapal");
    const u8 gMonIcon_CMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMedicine[] = INCBIN_COMP("graphics/pokemon/_add/th/medicine/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Medicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Medicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/normal/normal.gbapal");
    const u32 gMonBackPic_Medicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Medicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/normal/shiny.gbapal");
    const u8 gMonIcon_Medicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Medicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Medicine[] = INCBIN_COMP("graphics/pokemon/_add/th/medicine/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Medicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Medicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/attack/normal.gbapal");
    const u32 gMonBackPic_AMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/attack/shiny.gbapal");
    const u8 gMonIcon_AMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AMedicine[] = INCBIN_COMP("graphics/pokemon/_add/th/medicine/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_AMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/speed/normal.gbapal");
    const u32 gMonBackPic_SMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/speed/shiny.gbapal");
    const u8 gMonIcon_SMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/speed/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SMedicine[] = INCBIN_COMP("graphics/pokemon/_add/th/medicine/speed/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/speed/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_SMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/speed/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/tech/normal.gbapal");
    const u32 gMonBackPic_TMedicine[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/tech/shiny.gbapal");
    const u8 gMonIcon_TMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TMedicine[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/tech/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TMedicine[] = INCBIN_COMP("graphics/pokemon/_add/th/medicine/tech/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/tech/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TMedicine[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/tech/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CMedicineSanni[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/sanni/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMedicineSanni[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/sanni/chibi/normal.gbapal");
    const u32 gMonBackPic_CMedicineSanni[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/sanni/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMedicineSanni[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/sanni/chibi/shiny.gbapal");
    const u8 gMonIcon_CMedicineSanni[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/sanni/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMedicineSanni[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/sanni/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_MedicineSanni[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/sanni/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_MedicineSanni[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/sanni/normal/normal.gbapal");
    const u32 gMonBackPic_MedicineSanni[] = INCBIN_U32("graphics/pokemon/_add/th/medicine/sanni/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_MedicineSanni[] = INCBIN_U16("graphics/pokemon/_add/th/medicine/sanni/normal/shiny.gbapal");
    const u8 gMonIcon_MedicineSanni[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/sanni/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_MedicineSanni[] = INCBIN_U8("graphics/pokemon/_add/th/medicine/sanni/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/chibi/normal.gbapal");
    const u32 gMonBackPic_CYuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/chibi/shiny.gbapal");
    const u8 gMonIcon_CYuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/normal/normal.gbapal");
    const u32 gMonBackPic_Yuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/normal/shiny.gbapal");
    const u8 gMonIcon_Yuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AYuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AYuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/attack/normal.gbapal");
    const u32 gMonBackPic_AYuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AYuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/attack/shiny.gbapal");
    const u8 gMonIcon_AYuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AYuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TYuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TYuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/tech/normal.gbapal");
    const u32 gMonBackPic_TYuuka[] = INCBIN_U32("graphics/pokemon/_add/th/yuuka/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TYuuka[] = INCBIN_U16("graphics/pokemon/_add/th/yuuka/tech/shiny.gbapal");
    const u8 gMonIcon_TYuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TYuuka[] = INCBIN_U8("graphics/pokemon/_add/th/yuuka/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKomachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKomachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/chibi/normal.gbapal");
    const u32 gMonBackPic_CKomachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKomachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/chibi/shiny.gbapal");
    const u8 gMonIcon_CKomachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKomachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Komachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Komachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/normal/normal.gbapal");
    const u32 gMonBackPic_Komachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Komachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/normal/shiny.gbapal");
    const u8 gMonIcon_Komachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Komachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKomachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AKomachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/attack/normal.gbapal");
    const u32 gMonBackPic_AKomachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AKomachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/attack/shiny.gbapal");
    const u8 gMonIcon_AKomachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKomachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SKomachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SKomachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/speed/normal.gbapal");
    const u32 gMonBackPic_SKomachi[] = INCBIN_U32("graphics/pokemon/_add/th/komachi/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SKomachi[] = INCBIN_U16("graphics/pokemon/_add/th/komachi/speed/shiny.gbapal");
    const u8 gMonIcon_SKomachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SKomachi[] = INCBIN_U8("graphics/pokemon/_add/th/komachi/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CEiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/chibi/normal.gbapal");
    const u32 gMonBackPic_CEiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CEiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/chibi/shiny.gbapal");
    const u8 gMonIcon_CEiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Eiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Eiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/normal/normal.gbapal");
    const u32 gMonBackPic_Eiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Eiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/normal/shiny.gbapal");
    const u8 gMonIcon_Eiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Eiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AEiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AEiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/attack/normal.gbapal");
    const u32 gMonBackPic_AEiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AEiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/attack/shiny.gbapal");
    const u8 gMonIcon_AEiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AEiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DEiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DEiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/defense/normal.gbapal");
    const u32 gMonBackPic_DEiki[] = INCBIN_U32("graphics/pokemon/_add/th/eiki/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DEiki[] = INCBIN_U16("graphics/pokemon/_add/th/eiki/defense/shiny.gbapal");
    const u8 gMonIcon_DEiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DEiki[] = INCBIN_U8("graphics/pokemon/_add/th/eiki/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CShizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/chibi/normal.gbapal");
    const u32 gMonBackPic_CShizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CShizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/chibi/shiny.gbapal");
    const u8 gMonIcon_CShizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Shizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/normal/normal.gbapal");
    const u32 gMonBackPic_Shizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Shizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/normal/shiny.gbapal");
    const u8 gMonIcon_Shizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SShizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SShizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/speed/normal.gbapal");
    const u32 gMonBackPic_SShizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SShizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/speed/shiny.gbapal");
    const u8 gMonIcon_SShizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SShizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HShizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HShizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/helper/normal.gbapal");
    const u32 gMonBackPic_HShizuha[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HShizuha[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/helper/shiny.gbapal");
    const u8 gMonIcon_HShizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HShizuha[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShizuhaSannian[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/sannian/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CShizuhaSannian[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/sannian/chibi/normal.gbapal");
    const u32 gMonBackPic_CShizuhaSannian[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/sannian/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CShizuhaSannian[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/sannian/chibi/shiny.gbapal");
    const u8 gMonIcon_CShizuhaSannian[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/sannian/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShizuhaSannian[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/sannian/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShizuhaSannian[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/sannian/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_ShizuhaSannian[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/sannian/normal/normal.gbapal");
    const u32 gMonBackPic_ShizuhaSannian[] = INCBIN_U32("graphics/pokemon/_add/th/shizuha/sannian/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_ShizuhaSannian[] = INCBIN_U16("graphics/pokemon/_add/th/shizuha/sannian/normal/shiny.gbapal");
    const u8 gMonIcon_ShizuhaSannian[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/sannian/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShizuhaSannian[] = INCBIN_U8("graphics/pokemon/_add/th/shizuha/sannian/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMinoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMinoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/chibi/normal.gbapal");
    const u32 gMonBackPic_CMinoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMinoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/chibi/shiny.gbapal");
    const u8 gMonIcon_CMinoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMinoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Minoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Minoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/normal/normal.gbapal");
    const u32 gMonBackPic_Minoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Minoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/normal/shiny.gbapal");
    const u8 gMonIcon_Minoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Minoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMinoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AMinoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/attack/normal.gbapal");
    const u32 gMonBackPic_AMinoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AMinoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/attack/shiny.gbapal");
    const u8 gMonIcon_AMinoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMinoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMinoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DMinoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/defense/normal.gbapal");
    const u32 gMonBackPic_DMinoriko[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DMinoriko[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/defense/shiny.gbapal");
    const u8 gMonIcon_DMinoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMinoriko[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMinorikoSannian[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/sannian/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMinorikoSannian[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/sannian/chibi/normal.gbapal");
    const u32 gMonBackPic_CMinorikoSannian[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/sannian/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMinorikoSannian[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/sannian/chibi/shiny.gbapal");
    const u8 gMonIcon_CMinorikoSannian[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/sannian/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMinorikoSannian[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/sannian/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_MinorikoSannian[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/sannian/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_MinorikoSannian[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/sannian/normal/normal.gbapal");
    const u32 gMonBackPic_MinorikoSannian[] = INCBIN_U32("graphics/pokemon/_add/th/minoriko/sannian/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_MinorikoSannian[] = INCBIN_U16("graphics/pokemon/_add/th/minoriko/sannian/normal/shiny.gbapal");
    const u8 gMonIcon_MinorikoSannian[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/sannian/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_MinorikoSannian[] = INCBIN_U8("graphics/pokemon/_add/th/minoriko/sannian/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AkiSisters[] = INCBIN_U32("graphics/pokemon/_add/th/akisisters/anim_front.4bpp.smol");
    const u16 gMonPalette_AkiSisters[] = INCBIN_U16("graphics/pokemon/_add/th/akisisters/normal.gbapal");
    const u32 gMonBackPic_AkiSisters[] = INCBIN_U32("graphics/pokemon/_add/th/akisisters/back.4bpp.smol");
    const u16 gMonShinyPalette_AkiSisters[] = INCBIN_U16("graphics/pokemon/_add/th/akisisters/shiny.gbapal");
    const u8 gMonIcon_AkiSisters[] = INCBIN_U8("graphics/pokemon/_add/th/akisisters/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AkiSisters[] = INCBIN_U8("graphics/pokemon/_add/th/akisisters/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/chibi/normal.gbapal");
    const u32 gMonBackPic_CHina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/chibi/shiny.gbapal");
    const u8 gMonIcon_CHina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CHina[] = INCBIN_COMP("graphics/pokemon/_add/th/hina/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Hina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Hina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/normal/normal.gbapal");
    const u32 gMonBackPic_Hina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Hina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/normal/shiny.gbapal");
    const u8 gMonIcon_Hina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Hina[] = INCBIN_COMP("graphics/pokemon/_add/th/hina/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Hina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Hina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AHina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/attack/normal.gbapal");
    const u32 gMonBackPic_AHina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/attack/shiny.gbapal");
    const u8 gMonIcon_AHina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AHina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AHina[] = INCBIN_COMP("graphics/pokemon/_add/th/hina/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_AHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DHina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/defense/normal.gbapal");
    const u32 gMonBackPic_DHina[] = INCBIN_U32("graphics/pokemon/_add/th/hina/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/defense/shiny.gbapal");
    const u8 gMonIcon_DHina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DHina[] = INCBIN_U8("graphics/pokemon/_add/th/hina/defense/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DHina[] = INCBIN_COMP("graphics/pokemon/_add/th/hina/defense/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/defense/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_DHina[] = INCBIN_U16("graphics/pokemon/_add/th/hina/defense/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CNitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CNitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/chibi/normal.gbapal");
    const u32 gMonBackPic_CNitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CNitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/chibi/shiny.gbapal");
    const u8 gMonIcon_CNitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Nitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Nitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/normal/normal.gbapal");
    const u32 gMonBackPic_Nitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Nitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/normal/shiny.gbapal");
    const u8 gMonIcon_Nitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Nitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ANitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ANitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/attack/normal.gbapal");
    const u32 gMonBackPic_ANitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ANitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/attack/shiny.gbapal");
    const u8 gMonIcon_ANitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ANitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TNitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TNitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/tech/normal.gbapal");
    const u32 gMonBackPic_TNitori[] = INCBIN_U32("graphics/pokemon/_add/th/nitori/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TNitori[] = INCBIN_U16("graphics/pokemon/_add/th/nitori/tech/shiny.gbapal");
    const u8 gMonIcon_TNitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TNitori[] = INCBIN_U8("graphics/pokemon/_add/th/nitori/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMomiji[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/chibi/normal.gbapal");
    const u32 gMonBackPic_CMomiji[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/chibi/shiny.gbapal");
    const u8 gMonIcon_CMomiji[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMomiji[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMomiji[] = INCBIN_COMP("graphics/pokemon/_add/th/momiji/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Momiji[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Momiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/normal/normal.gbapal");
    const u32 gMonBackPic_Momiji[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Momiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/normal/shiny.gbapal");
    const u8 gMonIcon_Momiji[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Momiji[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Momiji[] = INCBIN_COMP("graphics/pokemon/_add/th/momiji/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Momiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Momiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DMomiji[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/defense/normal.gbapal");
    const u32 gMonBackPic_DMomiji[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/defense/shiny.gbapal");
    const u8 gMonIcon_DMomiji[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMomiji[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/defense/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DMomiji[] = INCBIN_COMP("graphics/pokemon/_add/th/momiji/defense/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/defense/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_DMomiji[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/defense/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CMomijiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/sanni/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMomijiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/sanni/chibi/normal.gbapal");
    const u32 gMonBackPic_CMomijiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/sanni/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMomijiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/sanni/chibi/shiny.gbapal");
    const u8 gMonIcon_CMomijiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/sanni/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMomijiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/sanni/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_MomijiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/sanni/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_MomijiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/sanni/normal/normal.gbapal");
    const u32 gMonBackPic_MomijiSanni[] = INCBIN_U32("graphics/pokemon/_add/th/momiji/sanni/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_MomijiSanni[] = INCBIN_U16("graphics/pokemon/_add/th/momiji/sanni/normal/shiny.gbapal");
    const u8 gMonIcon_MomijiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/sanni/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_MomijiSanni[] = INCBIN_U8("graphics/pokemon/_add/th/momiji/sanni/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/chibi/normal.gbapal");
    const u32 gMonBackPic_CSanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/chibi/shiny.gbapal");
    const u8 gMonIcon_CSanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/normal/normal.gbapal");
    const u32 gMonBackPic_Sanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/normal/shiny.gbapal");
    const u8 gMonIcon_Sanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ASanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/attack/normal.gbapal");
    const u32 gMonBackPic_ASanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ASanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/attack/shiny.gbapal");
    const u8 gMonIcon_ASanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TSanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/tech/normal.gbapal");
    const u32 gMonBackPic_TSanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TSanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/tech/shiny.gbapal");
    const u8 gMonIcon_TSanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_JKSanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/joshi_kosei/anim_front.4bpp.smol");
    const u16 gMonPalette_JKSanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/joshi_kosei/normal.gbapal");
    const u32 gMonBackPic_JKSanae[] = INCBIN_U32("graphics/pokemon/_add/th/sanae/joshi_kosei/back.4bpp.smol");
    const u16 gMonShinyPalette_JKSanae[] = INCBIN_U16("graphics/pokemon/_add/th/sanae/joshi_kosei/shiny.gbapal");
    const u8 gMonIcon_JKSanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/joshi_kosei/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_JKSanae[] = INCBIN_U8("graphics/pokemon/_add/th/sanae/joshi_kosei/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/chibi/normal.gbapal");
    const u32 gMonBackPic_CKanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/chibi/shiny.gbapal");
    const u8 gMonIcon_CKanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/normal/normal.gbapal");
    const u32 gMonBackPic_Kanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/normal/shiny.gbapal");
    const u8 gMonIcon_Kanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AKanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/attack/normal.gbapal");
    const u32 gMonBackPic_AKanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AKanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/attack/shiny.gbapal");
    const u8 gMonIcon_AKanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DKanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DKanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/defense/normal.gbapal");
    const u32 gMonBackPic_DKanako[] = INCBIN_U32("graphics/pokemon/_add/th/kanako/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DKanako[] = INCBIN_U16("graphics/pokemon/_add/th/kanako/defense/shiny.gbapal");
    const u8 gMonIcon_DKanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DKanako[] = INCBIN_U8("graphics/pokemon/_add/th/kanako/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSuwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSuwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/chibi/normal.gbapal");
    const u32 gMonBackPic_CSuwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSuwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/chibi/shiny.gbapal");
    const u8 gMonIcon_CSuwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSuwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Suwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Suwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/normal/normal.gbapal");
    const u32 gMonBackPic_Suwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Suwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/normal/shiny.gbapal");
    const u8 gMonIcon_Suwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Suwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASuwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ASuwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/attack/normal.gbapal");
    const u32 gMonBackPic_ASuwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ASuwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/attack/shiny.gbapal");
    const u8 gMonIcon_ASuwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASuwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DSuwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DSuwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/defense/normal.gbapal");
    const u32 gMonBackPic_DSuwako[] = INCBIN_U32("graphics/pokemon/_add/th/suwako/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DSuwako[] = INCBIN_U16("graphics/pokemon/_add/th/suwako/defense/shiny.gbapal");
    const u8 gMonIcon_DSuwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DSuwako[] = INCBIN_U8("graphics/pokemon/_add/th/suwako/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKisume[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKisume[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/chibi/normal.gbapal");
    const u32 gMonBackPic_CKisume[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKisume[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/chibi/shiny.gbapal");
    const u8 gMonIcon_CKisume[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKisume[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kisume[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kisume[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/normal/normal.gbapal");
    const u32 gMonBackPic_Kisume[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kisume[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/normal/shiny.gbapal");
    const u8 gMonIcon_Kisume[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kisume[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TKisume[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TKisume[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/tech/normal.gbapal");
    const u32 gMonBackPic_TKisume[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TKisume[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/tech/shiny.gbapal");
    const u8 gMonIcon_TKisume[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TKisume[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKisumeSanni[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/sanni/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKisumeSanni[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/sanni/chibi/normal.gbapal");
    const u32 gMonBackPic_CKisumeSanni[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/sanni/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKisumeSanni[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/sanni/chibi/shiny.gbapal");
    const u8 gMonIcon_CKisumeSanni[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/sanni/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKisumeSanni[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/sanni/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_KisumeSanni[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/sanni/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_KisumeSanni[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/sanni/normal/normal.gbapal");
    const u32 gMonBackPic_KisumeSanni[] = INCBIN_U32("graphics/pokemon/_add/th/kisume/sanni/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_KisumeSanni[] = INCBIN_U16("graphics/pokemon/_add/th/kisume/sanni/normal/shiny.gbapal");
    const u8 gMonIcon_KisumeSanni[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/sanni/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_KisumeSanni[] = INCBIN_U8("graphics/pokemon/_add/th/kisume/sanni/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/chibi/normal.gbapal");
    const u32 gMonBackPic_CYamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/chibi/shiny.gbapal");
    const u8 gMonIcon_CYamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/normal/normal.gbapal");
    const u32 gMonBackPic_Yamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/normal/shiny.gbapal");
    const u8 gMonIcon_Yamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SYamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SYamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/speed/normal.gbapal");
    const u32 gMonBackPic_SYamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SYamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/speed/shiny.gbapal");
    const u8 gMonIcon_SYamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SYamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TYamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TYamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/tech/normal.gbapal");
    const u32 gMonBackPic_TYamame[] = INCBIN_U32("graphics/pokemon/_add/th/yamame/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TYamame[] = INCBIN_U16("graphics/pokemon/_add/th/yamame/tech/shiny.gbapal");
    const u8 gMonIcon_TYamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TYamame[] = INCBIN_U8("graphics/pokemon/_add/th/yamame/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CParsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CParsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/chibi/normal.gbapal");
    const u32 gMonBackPic_CParsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CParsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/chibi/shiny.gbapal");
    const u8 gMonIcon_CParsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CParsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Parsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Parsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/normal/normal.gbapal");
    const u32 gMonBackPic_Parsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Parsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/normal/shiny.gbapal");
    const u8 gMonIcon_Parsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Parsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DParsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DParsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/defense/normal.gbapal");
    const u32 gMonBackPic_DParsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DParsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/defense/shiny.gbapal");
    const u8 gMonIcon_DParsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DParsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TParsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TParsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/tech/normal.gbapal");
    const u32 gMonBackPic_TParsee[] = INCBIN_U32("graphics/pokemon/_add/th/parsee/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TParsee[] = INCBIN_U16("graphics/pokemon/_add/th/parsee/tech/shiny.gbapal");
    const u8 gMonIcon_TParsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TParsee[] = INCBIN_U8("graphics/pokemon/_add/th/parsee/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/chibi/normal.gbapal");
    const u32 gMonBackPic_CYuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/chibi/shiny.gbapal");
    const u8 gMonIcon_CYuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/normal/normal.gbapal");
    const u32 gMonBackPic_Yuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/normal/shiny.gbapal");
    const u8 gMonIcon_Yuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AYuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AYuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/attack/normal.gbapal");
    const u32 gMonBackPic_AYuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AYuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/attack/shiny.gbapal");
    const u8 gMonIcon_AYuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AYuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DYuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DYuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/defense/normal.gbapal");
    const u32 gMonBackPic_DYuugi[] = INCBIN_U32("graphics/pokemon/_add/th/yuugi/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DYuugi[] = INCBIN_U16("graphics/pokemon/_add/th/yuugi/defense/shiny.gbapal");
    const u8 gMonIcon_DYuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYuugi[] = INCBIN_U8("graphics/pokemon/_add/th/yuugi/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/chibi/normal.gbapal");
    const u32 gMonBackPic_CRin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/chibi/shiny.gbapal");
    const u8 gMonIcon_CRin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Rin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/normal/normal.gbapal");
    const u32 gMonBackPic_Rin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Rin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/normal/shiny.gbapal");
    const u8 gMonIcon_Rin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ARin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/attack/normal.gbapal");
    const u32 gMonBackPic_ARin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ARin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/attack/shiny.gbapal");
    const u8 gMonIcon_ARin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SRin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SRin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/speed/normal.gbapal");
    const u32 gMonBackPic_SRin[] = INCBIN_U32("graphics/pokemon/_add/th/rin/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SRin[] = INCBIN_U16("graphics/pokemon/_add/th/rin/speed/shiny.gbapal");
    const u8 gMonIcon_SRin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SRin[] = INCBIN_U8("graphics/pokemon/_add/th/rin/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ZFairy[] = INCBIN_U32("graphics/pokemon/_add/th/zombiefairy/anim_front.4bpp.smol");
    const u16 gMonPalette_ZFairy[] = INCBIN_U16("graphics/pokemon/_add/th/zombiefairy/normal.gbapal");
    const u32 gMonBackPic_ZFairy[] = INCBIN_U32("graphics/pokemon/_add/th/zombiefairy/back.4bpp.smol");
    const u16 gMonShinyPalette_ZFairy[] = INCBIN_U16("graphics/pokemon/_add/th/zombiefairy/shiny.gbapal");
    const u8 gMonIcon_ZFairy[] = INCBIN_U8("graphics/pokemon/_add/th/zombiefairy/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ZFairy[] = INCBIN_U8("graphics/pokemon/_add/th/zombiefairy/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CUtsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CUtsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/chibi/normal.gbapal");
    const u32 gMonBackPic_CUtsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CUtsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/chibi/shiny.gbapal");
    const u8 gMonIcon_CUtsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CUtsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Utsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Utsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/normal/normal.gbapal");
    const u32 gMonBackPic_Utsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Utsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/normal/shiny.gbapal");
    const u8 gMonIcon_Utsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Utsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AUtsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AUtsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/attack/normal.gbapal");
    const u32 gMonBackPic_AUtsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AUtsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/attack/shiny.gbapal");
    const u8 gMonIcon_AUtsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AUtsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SUtsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SUtsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/speed/normal.gbapal");
    const u32 gMonBackPic_SUtsuho[] = INCBIN_U32("graphics/pokemon/_add/th/utsuho/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SUtsuho[] = INCBIN_U16("graphics/pokemon/_add/th/utsuho/speed/shiny.gbapal");
    const u8 gMonIcon_SUtsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SUtsuho[] = INCBIN_U8("graphics/pokemon/_add/th/utsuho/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSatori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSatori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/chibi/normal.gbapal");
    const u32 gMonBackPic_CSatori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSatori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/chibi/shiny.gbapal");
    const u8 gMonIcon_CSatori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSatori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Satori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Satori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/normal/normal.gbapal");
    const u32 gMonBackPic_Satori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Satori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/normal/shiny.gbapal");
    const u8 gMonIcon_Satori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Satori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DSatori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DSatori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/defense/normal.gbapal");
    const u32 gMonBackPic_DSatori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DSatori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/defense/shiny.gbapal");
    const u8 gMonIcon_DSatori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DSatori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSatori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TSatori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/tech/normal.gbapal");
    const u32 gMonBackPic_TSatori[] = INCBIN_U32("graphics/pokemon/_add/th/satori/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TSatori[] = INCBIN_U16("graphics/pokemon/_add/th/satori/tech/shiny.gbapal");
    const u8 gMonIcon_TSatori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSatori[] = INCBIN_U8("graphics/pokemon/_add/th/satori/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKoishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKoishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/chibi/normal.gbapal");
    const u32 gMonBackPic_CKoishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKoishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/chibi/shiny.gbapal");
    const u8 gMonIcon_CKoishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKoishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Koishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Koishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/normal/normal.gbapal");
    const u32 gMonBackPic_Koishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Koishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/normal/shiny.gbapal");
    const u8 gMonIcon_Koishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Koishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKoishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AKoishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/attack/normal.gbapal");
    const u32 gMonBackPic_AKoishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AKoishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/attack/shiny.gbapal");
    const u8 gMonIcon_AKoishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKoishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SKoishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SKoishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/speed/normal.gbapal");
    const u32 gMonBackPic_SKoishi[] = INCBIN_U32("graphics/pokemon/_add/th/koishi/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SKoishi[] = INCBIN_U16("graphics/pokemon/_add/th/koishi/speed/shiny.gbapal");
    const u8 gMonIcon_SKoishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SKoishi[] = INCBIN_U8("graphics/pokemon/_add/th/koishi/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CNazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/chibi/normal.gbapal");
    const u32 gMonBackPic_CNazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/chibi/shiny.gbapal");
    const u8 gMonIcon_CNazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CNazrin[] = INCBIN_COMP("graphics/pokemon/_add/th/nazrin/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Nazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Nazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/normal/normal.gbapal");
    const u32 gMonBackPic_Nazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Nazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/normal/shiny.gbapal");
    const u8 gMonIcon_Nazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Nazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Nazrin[] = INCBIN_COMP("graphics/pokemon/_add/th/nazrin/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Nazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Nazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TNazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/tech/normal.gbapal");
    const u32 gMonBackPic_TNazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/tech/shiny.gbapal");
    const u8 gMonIcon_TNazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TNazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/tech/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TNazrin[] = INCBIN_COMP("graphics/pokemon/_add/th/nazrin/tech/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/tech/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/tech/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HNazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/helper/normal.gbapal");
    const u32 gMonBackPic_HNazrin[] = INCBIN_U32("graphics/pokemon/_add/th/nazrin/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/helper/shiny.gbapal");
    const u8 gMonIcon_HNazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HNazrin[] = INCBIN_U8("graphics/pokemon/_add/th/nazrin/helper/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HNazrin[] = INCBIN_COMP("graphics/pokemon/_add/th/nazrin/helper/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/helper/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_HNazrin[] = INCBIN_U16("graphics/pokemon/_add/th/nazrin/helper/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/chibi/normal.gbapal");
    const u32 gMonBackPic_CKogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/chibi/shiny.gbapal");
    const u8 gMonIcon_CKogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/normal/normal.gbapal");
    const u32 gMonBackPic_Kogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/normal/shiny.gbapal");
    const u8 gMonIcon_Kogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SKogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SKogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/speed/normal.gbapal");
    const u32 gMonBackPic_SKogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SKogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/speed/shiny.gbapal");
    const u8 gMonIcon_SKogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SKogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TKogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TKogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/tech/normal.gbapal");
    const u32 gMonBackPic_TKogasa[] = INCBIN_U32("graphics/pokemon/_add/th/kogasa/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TKogasa[] = INCBIN_U16("graphics/pokemon/_add/th/kogasa/tech/shiny.gbapal");
    const u8 gMonIcon_TKogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TKogasa[] = INCBIN_U8("graphics/pokemon/_add/th/kogasa/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CIchirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CIchirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/chibi/normal.gbapal");
    const u32 gMonBackPic_CIchirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CIchirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/chibi/shiny.gbapal");
    const u8 gMonIcon_CIchirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CIchirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ichirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Ichirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/normal/normal.gbapal");
    const u32 gMonBackPic_Ichirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Ichirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/normal/shiny.gbapal");
    const u8 gMonIcon_Ichirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ichirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DIchirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DIchirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/defense/normal.gbapal");
    const u32 gMonBackPic_DIchirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DIchirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/defense/shiny.gbapal");
    const u8 gMonIcon_DIchirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DIchirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TIchirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TIchirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/tech/normal.gbapal");
    const u32 gMonBackPic_TIchirin[] = INCBIN_U32("graphics/pokemon/_add/th/ichirin/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TIchirin[] = INCBIN_U16("graphics/pokemon/_add/th/ichirin/tech/shiny.gbapal");
    const u8 gMonIcon_TIchirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TIchirin[] = INCBIN_U8("graphics/pokemon/_add/th/ichirin/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMurasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMurasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/chibi/normal.gbapal");
    const u32 gMonBackPic_CMurasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMurasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/chibi/shiny.gbapal");
    const u8 gMonIcon_CMurasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMurasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Murasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Murasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/normal/normal.gbapal");
    const u32 gMonBackPic_Murasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Murasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/normal/shiny.gbapal");
    const u8 gMonIcon_Murasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Murasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMurasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AMurasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/attack/normal.gbapal");
    const u32 gMonBackPic_AMurasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AMurasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/attack/shiny.gbapal");
    const u8 gMonIcon_AMurasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMurasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMurasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DMurasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/defense/normal.gbapal");
    const u32 gMonBackPic_DMurasa[] = INCBIN_U32("graphics/pokemon/_add/th/murasa/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DMurasa[] = INCBIN_U16("graphics/pokemon/_add/th/murasa/defense/shiny.gbapal");
    const u8 gMonIcon_DMurasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMurasa[] = INCBIN_U8("graphics/pokemon/_add/th/murasa/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CShou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/chibi/normal.gbapal");
    const u32 gMonBackPic_CShou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CShou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/chibi/shiny.gbapal");
    const u8 gMonIcon_CShou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Shou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/normal/normal.gbapal");
    const u32 gMonBackPic_Shou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Shou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/normal/shiny.gbapal");
    const u8 gMonIcon_Shou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AShou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AShou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/attack/normal.gbapal");
    const u32 gMonBackPic_AShou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AShou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/attack/shiny.gbapal");
    const u8 gMonIcon_AShou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AShou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TShou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TShou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/tech/normal.gbapal");
    const u32 gMonBackPic_TShou[] = INCBIN_U32("graphics/pokemon/_add/th/shou/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TShou[] = INCBIN_U16("graphics/pokemon/_add/th/shou/tech/shiny.gbapal");
    const u8 gMonIcon_TShou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TShou[] = INCBIN_U8("graphics/pokemon/_add/th/shou/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CByakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CByakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/chibi/normal.gbapal");
    const u32 gMonBackPic_CByakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CByakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/chibi/shiny.gbapal");
    const u8 gMonIcon_CByakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CByakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Byakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Byakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/normal/normal.gbapal");
    const u32 gMonBackPic_Byakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Byakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/normal/shiny.gbapal");
    const u8 gMonIcon_Byakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Byakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DByakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DByakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/defense/normal.gbapal");
    const u32 gMonBackPic_DByakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DByakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/defense/shiny.gbapal");
    const u8 gMonIcon_DByakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DByakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TByakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TByakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/tech/normal.gbapal");
    const u32 gMonBackPic_TByakuren[] = INCBIN_U32("graphics/pokemon/_add/th/byakuren/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TByakuren[] = INCBIN_U16("graphics/pokemon/_add/th/byakuren/tech/shiny.gbapal");
    const u8 gMonIcon_TByakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TByakuren[] = INCBIN_U8("graphics/pokemon/_add/th/byakuren/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CNue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/chibi/normal.gbapal");
    const u32 gMonBackPic_CNue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/chibi/shiny.gbapal");
    const u8 gMonIcon_CNue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CNue[] = INCBIN_COMP("graphics/pokemon/_add/th/nue/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Nue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Nue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/normal/normal.gbapal");
    const u32 gMonBackPic_Nue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Nue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/normal/shiny.gbapal");
    const u8 gMonIcon_Nue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Nue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Nue[] = INCBIN_COMP("graphics/pokemon/_add/th/nue/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Nue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Nue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ANue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ANue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/attack/normal.gbapal");
    const u32 gMonBackPic_ANue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ANue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/attack/shiny.gbapal");
    const u8 gMonIcon_ANue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ANue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ANue[] = INCBIN_COMP("graphics/pokemon/_add/th/nue/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ANue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_ANue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TNue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/tech/normal.gbapal");
    const u32 gMonBackPic_TNue[] = INCBIN_U32("graphics/pokemon/_add/th/nue/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/tech/shiny.gbapal");
    const u8 gMonIcon_TNue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TNue[] = INCBIN_U8("graphics/pokemon/_add/th/nue/tech/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TNue[] = INCBIN_COMP("graphics/pokemon/_add/th/nue/tech/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/tech/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_TNue[] = INCBIN_U16("graphics/pokemon/_add/th/nue/tech/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKyouko[] = INCBIN_U32("graphics/pokemon/_add/th/kyouko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/chibi/normal.gbapal");
    const u32 gMonBackPic_CKyouko[] = INCBIN_U32("graphics/pokemon/_add/th/kyouko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/chibi/shiny.gbapal");
    const u8 gMonIcon_CKyouko[] = INCBIN_U8("graphics/pokemon/_add/th/kyouko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKyouko[] = INCBIN_U8("graphics/pokemon/_add/th/kyouko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CKyouko[] = INCBIN_COMP("graphics/pokemon/_add/th/kyouko/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CKyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CKyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Kyouko[] = INCBIN_U32("graphics/pokemon/_add/th/kyouko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/normal/normal.gbapal");
    const u32 gMonBackPic_Kyouko[] = INCBIN_U32("graphics/pokemon/_add/th/kyouko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/normal/shiny.gbapal");
    const u8 gMonIcon_Kyouko[] = INCBIN_U8("graphics/pokemon/_add/th/kyouko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kyouko[] = INCBIN_U8("graphics/pokemon/_add/th/kyouko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Kyouko[] = INCBIN_COMP("graphics/pokemon/_add/th/kyouko/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Kyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Kyouko[] = INCBIN_U16("graphics/pokemon/_add/th/kyouko/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CYoshika[] = INCBIN_U32("graphics/pokemon/_add/th/yoshika/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYoshika[] = INCBIN_U16("graphics/pokemon/_add/th/yoshika/chibi/normal.gbapal");
    const u32 gMonBackPic_CYoshika[] = INCBIN_U32("graphics/pokemon/_add/th/yoshika/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYoshika[] = INCBIN_U16("graphics/pokemon/_add/th/yoshika/chibi/shiny.gbapal");
    const u8 gMonIcon_CYoshika[] = INCBIN_U8("graphics/pokemon/_add/th/yoshika/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYoshika[] = INCBIN_U8("graphics/pokemon/_add/th/yoshika/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yoshika[] = INCBIN_U32("graphics/pokemon/_add/th/yoshika/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yoshika[] = INCBIN_U16("graphics/pokemon/_add/th/yoshika/normal/normal.gbapal");
    const u32 gMonBackPic_Yoshika[] = INCBIN_U32("graphics/pokemon/_add/th/yoshika/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yoshika[] = INCBIN_U16("graphics/pokemon/_add/th/yoshika/normal/shiny.gbapal");
    const u8 gMonIcon_Yoshika[] = INCBIN_U8("graphics/pokemon/_add/th/yoshika/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yoshika[] = INCBIN_U8("graphics/pokemon/_add/th/yoshika/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSeiga[] = INCBIN_U32("graphics/pokemon/_add/th/seiga/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSeiga[] = INCBIN_U16("graphics/pokemon/_add/th/seiga/chibi/normal.gbapal");
    const u32 gMonBackPic_CSeiga[] = INCBIN_U32("graphics/pokemon/_add/th/seiga/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSeiga[] = INCBIN_U16("graphics/pokemon/_add/th/seiga/chibi/shiny.gbapal");
    const u8 gMonIcon_CSeiga[] = INCBIN_U8("graphics/pokemon/_add/th/seiga/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSeiga[] = INCBIN_U8("graphics/pokemon/_add/th/seiga/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Seiga[] = INCBIN_U32("graphics/pokemon/_add/th/seiga/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Seiga[] = INCBIN_U16("graphics/pokemon/_add/th/seiga/normal/normal.gbapal");
    const u32 gMonBackPic_Seiga[] = INCBIN_U32("graphics/pokemon/_add/th/seiga/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Seiga[] = INCBIN_U16("graphics/pokemon/_add/th/seiga/normal/shiny.gbapal");
    const u8 gMonIcon_Seiga[] = INCBIN_U8("graphics/pokemon/_add/th/seiga/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Seiga[] = INCBIN_U8("graphics/pokemon/_add/th/seiga/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTojiko[] = INCBIN_U32("graphics/pokemon/_add/th/tojiko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CTojiko[] = INCBIN_U16("graphics/pokemon/_add/th/tojiko/chibi/normal.gbapal");
    const u32 gMonBackPic_CTojiko[] = INCBIN_U32("graphics/pokemon/_add/th/tojiko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CTojiko[] = INCBIN_U16("graphics/pokemon/_add/th/tojiko/chibi/shiny.gbapal");
    const u8 gMonIcon_CTojiko[] = INCBIN_U8("graphics/pokemon/_add/th/tojiko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTojiko[] = INCBIN_U8("graphics/pokemon/_add/th/tojiko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tojiko[] = INCBIN_U32("graphics/pokemon/_add/th/tojiko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Tojiko[] = INCBIN_U16("graphics/pokemon/_add/th/tojiko/normal/normal.gbapal");
    const u32 gMonBackPic_Tojiko[] = INCBIN_U32("graphics/pokemon/_add/th/tojiko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Tojiko[] = INCBIN_U16("graphics/pokemon/_add/th/tojiko/normal/shiny.gbapal");
    const u8 gMonIcon_Tojiko[] = INCBIN_U8("graphics/pokemon/_add/th/tojiko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tojiko[] = INCBIN_U8("graphics/pokemon/_add/th/tojiko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CFuto[] = INCBIN_U32("graphics/pokemon/_add/th/futo/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CFuto[] = INCBIN_U16("graphics/pokemon/_add/th/futo/chibi/normal.gbapal");
    const u32 gMonBackPic_CFuto[] = INCBIN_U32("graphics/pokemon/_add/th/futo/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CFuto[] = INCBIN_U16("graphics/pokemon/_add/th/futo/chibi/shiny.gbapal");
    const u8 gMonIcon_CFuto[] = INCBIN_U8("graphics/pokemon/_add/th/futo/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CFuto[] = INCBIN_U8("graphics/pokemon/_add/th/futo/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Futo[] = INCBIN_U32("graphics/pokemon/_add/th/futo/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Futo[] = INCBIN_U16("graphics/pokemon/_add/th/futo/normal/normal.gbapal");
    const u32 gMonBackPic_Futo[] = INCBIN_U32("graphics/pokemon/_add/th/futo/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Futo[] = INCBIN_U16("graphics/pokemon/_add/th/futo/normal/shiny.gbapal");
    const u8 gMonIcon_Futo[] = INCBIN_U8("graphics/pokemon/_add/th/futo/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Futo[] = INCBIN_U8("graphics/pokemon/_add/th/futo/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMiko[] = INCBIN_U32("graphics/pokemon/_add/th/miko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMiko[] = INCBIN_U16("graphics/pokemon/_add/th/miko/chibi/normal.gbapal");
    const u32 gMonBackPic_CMiko[] = INCBIN_U32("graphics/pokemon/_add/th/miko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMiko[] = INCBIN_U16("graphics/pokemon/_add/th/miko/chibi/shiny.gbapal");
    const u8 gMonIcon_CMiko[] = INCBIN_U8("graphics/pokemon/_add/th/miko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMiko[] = INCBIN_U8("graphics/pokemon/_add/th/miko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Miko[] = INCBIN_U32("graphics/pokemon/_add/th/miko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Miko[] = INCBIN_U16("graphics/pokemon/_add/th/miko/normal/normal.gbapal");
    const u32 gMonBackPic_Miko[] = INCBIN_U32("graphics/pokemon/_add/th/miko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Miko[] = INCBIN_U16("graphics/pokemon/_add/th/miko/normal/shiny.gbapal");
    const u8 gMonIcon_Miko[] = INCBIN_U8("graphics/pokemon/_add/th/miko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Miko[] = INCBIN_U8("graphics/pokemon/_add/th/miko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMamizou[] = INCBIN_U32("graphics/pokemon/_add/th/mamizou/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMamizou[] = INCBIN_U16("graphics/pokemon/_add/th/mamizou/chibi/normal.gbapal");
    const u32 gMonBackPic_CMamizou[] = INCBIN_U32("graphics/pokemon/_add/th/mamizou/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMamizou[] = INCBIN_U16("graphics/pokemon/_add/th/mamizou/chibi/shiny.gbapal");
    const u8 gMonIcon_CMamizou[] = INCBIN_U8("graphics/pokemon/_add/th/mamizou/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMamizou[] = INCBIN_U8("graphics/pokemon/_add/th/mamizou/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mamizou[] = INCBIN_U32("graphics/pokemon/_add/th/mamizou/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Mamizou[] = INCBIN_U16("graphics/pokemon/_add/th/mamizou/normal/normal.gbapal");
    const u32 gMonBackPic_Mamizou[] = INCBIN_U32("graphics/pokemon/_add/th/mamizou/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Mamizou[] = INCBIN_U16("graphics/pokemon/_add/th/mamizou/normal/shiny.gbapal");
    const u8 gMonIcon_Mamizou[] = INCBIN_U8("graphics/pokemon/_add/th/mamizou/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mamizou[] = INCBIN_U8("graphics/pokemon/_add/th/mamizou/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSekibanki[] = INCBIN_U32("graphics/pokemon/_add/th/sekibanki/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSekibanki[] = INCBIN_U16("graphics/pokemon/_add/th/sekibanki/chibi/normal.gbapal");
    const u32 gMonBackPic_CSekibanki[] = INCBIN_U32("graphics/pokemon/_add/th/sekibanki/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSekibanki[] = INCBIN_U16("graphics/pokemon/_add/th/sekibanki/chibi/shiny.gbapal");
    const u8 gMonIcon_CSekibanki[] = INCBIN_U8("graphics/pokemon/_add/th/sekibanki/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSekibanki[] = INCBIN_U8("graphics/pokemon/_add/th/sekibanki/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sekibanki[] = INCBIN_U32("graphics/pokemon/_add/th/sekibanki/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sekibanki[] = INCBIN_U16("graphics/pokemon/_add/th/sekibanki/normal/normal.gbapal");
    const u32 gMonBackPic_Sekibanki[] = INCBIN_U32("graphics/pokemon/_add/th/sekibanki/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sekibanki[] = INCBIN_U16("graphics/pokemon/_add/th/sekibanki/normal/shiny.gbapal");
    const u8 gMonIcon_Sekibanki[] = INCBIN_U8("graphics/pokemon/_add/th/sekibanki/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sekibanki[] = INCBIN_U8("graphics/pokemon/_add/th/sekibanki/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKagerou[] = INCBIN_U32("graphics/pokemon/_add/th/kagerou/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/chibi/normal.gbapal");
    const u32 gMonBackPic_CKagerou[] = INCBIN_U32("graphics/pokemon/_add/th/kagerou/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/chibi/shiny.gbapal");
    const u8 gMonIcon_CKagerou[] = INCBIN_U8("graphics/pokemon/_add/th/kagerou/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKagerou[] = INCBIN_U8("graphics/pokemon/_add/th/kagerou/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CKagerou[] = INCBIN_COMP("graphics/pokemon/_add/th/kagerou/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CKagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CKagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Kagerou[] = INCBIN_U32("graphics/pokemon/_add/th/kagerou/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/normal/normal.gbapal");
    const u32 gMonBackPic_Kagerou[] = INCBIN_U32("graphics/pokemon/_add/th/kagerou/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/normal/shiny.gbapal");
    const u8 gMonIcon_Kagerou[] = INCBIN_U8("graphics/pokemon/_add/th/kagerou/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kagerou[] = INCBIN_U8("graphics/pokemon/_add/th/kagerou/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Kagerou[] = INCBIN_COMP("graphics/pokemon/_add/th/kagerou/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Kagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Kagerou[] = INCBIN_U16("graphics/pokemon/_add/th/kagerou/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CWakasagihime[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/chibi/normal.gbapal");
    const u32 gMonBackPic_CWakasagihime[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/chibi/shiny.gbapal");
    const u8 gMonIcon_CWakasagihime[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CWakasagihime[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CWakasagihime[] = INCBIN_COMP("graphics/pokemon/_add/th/wakasagihime/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Wakasagihime[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Wakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/normal/normal.gbapal");
    const u32 gMonBackPic_Wakasagihime[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Wakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/normal/shiny.gbapal");
    const u8 gMonIcon_Wakasagihime[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Wakasagihime[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Wakasagihime[] = INCBIN_COMP("graphics/pokemon/_add/th/wakasagihime/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Wakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Wakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DWakasagihime[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/defense/normal.gbapal");
    const u32 gMonBackPic_DWakasagihime[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/defense/shiny.gbapal");
    const u8 gMonIcon_DWakasagihime[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DWakasagihime[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/defense/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DWakasagihime[] = INCBIN_COMP("graphics/pokemon/_add/th/wakasagihime/defense/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/defense/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_DWakasagihime[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/defense/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CWakasagihimeGolden[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/golden/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CWakasagihimeGolden[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/golden/chibi/normal.gbapal");
    const u32 gMonBackPic_CWakasagihimeGolden[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/golden/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CWakasagihimeGolden[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/golden/chibi/shiny.gbapal");
    const u8 gMonIcon_CWakasagihimeGolden[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/golden/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CWakasagihimeGolden[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/golden/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_WakasagihimeGolden[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/golden/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_WakasagihimeGolden[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/golden/normal/normal.gbapal");
    const u32 gMonBackPic_WakasagihimeGolden[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/golden/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_WakasagihimeGolden[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/golden/normal/shiny.gbapal");
    const u8 gMonIcon_WakasagihimeGolden[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/golden/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_WakasagihimeGolden[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/golden/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DWakasagihimeGolden[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/golden/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DWakasagihimeGolden[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/golden/defense/normal.gbapal");
    const u32 gMonBackPic_DWakasagihimeGolden[] = INCBIN_U32("graphics/pokemon/_add/th/wakasagihime/golden/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DWakasagihimeGolden[] = INCBIN_U16("graphics/pokemon/_add/th/wakasagihime/golden/defense/shiny.gbapal");
    const u8 gMonIcon_DWakasagihimeGolden[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/golden/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DWakasagihimeGolden[] = INCBIN_U8("graphics/pokemon/_add/th/wakasagihime/golden/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CBenben[] = INCBIN_U32("graphics/pokemon/_add/th/benben/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CBenben[] = INCBIN_U16("graphics/pokemon/_add/th/benben/chibi/normal.gbapal");
    const u32 gMonBackPic_CBenben[] = INCBIN_U32("graphics/pokemon/_add/th/benben/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CBenben[] = INCBIN_U16("graphics/pokemon/_add/th/benben/chibi/shiny.gbapal");
    const u8 gMonIcon_CBenben[] = INCBIN_U8("graphics/pokemon/_add/th/benben/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CBenben[] = INCBIN_U8("graphics/pokemon/_add/th/benben/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Benben[] = INCBIN_U32("graphics/pokemon/_add/th/benben/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Benben[] = INCBIN_U16("graphics/pokemon/_add/th/benben/normal/normal.gbapal");
    const u32 gMonBackPic_Benben[] = INCBIN_U32("graphics/pokemon/_add/th/benben/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Benben[] = INCBIN_U16("graphics/pokemon/_add/th/benben/normal/shiny.gbapal");
    const u8 gMonIcon_Benben[] = INCBIN_U8("graphics/pokemon/_add/th/benben/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Benben[] = INCBIN_U8("graphics/pokemon/_add/th/benben/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYatsuhashi[] = INCBIN_U32("graphics/pokemon/_add/th/yatsuhashi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYatsuhashi[] = INCBIN_U16("graphics/pokemon/_add/th/yatsuhashi/chibi/normal.gbapal");
    const u32 gMonBackPic_CYatsuhashi[] = INCBIN_U32("graphics/pokemon/_add/th/yatsuhashi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYatsuhashi[] = INCBIN_U16("graphics/pokemon/_add/th/yatsuhashi/chibi/shiny.gbapal");
    const u8 gMonIcon_CYatsuhashi[] = INCBIN_U8("graphics/pokemon/_add/th/yatsuhashi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYatsuhashi[] = INCBIN_U8("graphics/pokemon/_add/th/yatsuhashi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yatsuhashi[] = INCBIN_U32("graphics/pokemon/_add/th/yatsuhashi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yatsuhashi[] = INCBIN_U16("graphics/pokemon/_add/th/yatsuhashi/normal/normal.gbapal");
    const u32 gMonBackPic_Yatsuhashi[] = INCBIN_U32("graphics/pokemon/_add/th/yatsuhashi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yatsuhashi[] = INCBIN_U16("graphics/pokemon/_add/th/yatsuhashi/normal/shiny.gbapal");
    const u8 gMonIcon_Yatsuhashi[] = INCBIN_U8("graphics/pokemon/_add/th/yatsuhashi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yatsuhashi[] = INCBIN_U8("graphics/pokemon/_add/th/yatsuhashi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRaiko[] = INCBIN_U32("graphics/pokemon/_add/th/raiko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRaiko[] = INCBIN_U16("graphics/pokemon/_add/th/raiko/chibi/normal.gbapal");
    const u32 gMonBackPic_CRaiko[] = INCBIN_U32("graphics/pokemon/_add/th/raiko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRaiko[] = INCBIN_U16("graphics/pokemon/_add/th/raiko/chibi/shiny.gbapal");
    const u8 gMonIcon_CRaiko[] = INCBIN_U8("graphics/pokemon/_add/th/raiko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRaiko[] = INCBIN_U8("graphics/pokemon/_add/th/raiko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Raiko[] = INCBIN_U32("graphics/pokemon/_add/th/raiko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Raiko[] = INCBIN_U16("graphics/pokemon/_add/th/raiko/normal/normal.gbapal");
    const u32 gMonBackPic_Raiko[] = INCBIN_U32("graphics/pokemon/_add/th/raiko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Raiko[] = INCBIN_U16("graphics/pokemon/_add/th/raiko/normal/shiny.gbapal");
    const u8 gMonIcon_Raiko[] = INCBIN_U8("graphics/pokemon/_add/th/raiko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Raiko[] = INCBIN_U8("graphics/pokemon/_add/th/raiko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSeija[] = INCBIN_U32("graphics/pokemon/_add/th/seija/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSeija[] = INCBIN_U16("graphics/pokemon/_add/th/seija/chibi/normal.gbapal");
    const u32 gMonBackPic_CSeija[] = INCBIN_U32("graphics/pokemon/_add/th/seija/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSeija[] = INCBIN_U16("graphics/pokemon/_add/th/seija/chibi/shiny.gbapal");
    const u8 gMonIcon_CSeija[] = INCBIN_U8("graphics/pokemon/_add/th/seija/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSeija[] = INCBIN_U8("graphics/pokemon/_add/th/seija/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Seija[] = INCBIN_U32("graphics/pokemon/_add/th/seija/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Seija[] = INCBIN_U16("graphics/pokemon/_add/th/seija/normal/normal.gbapal");
    const u32 gMonBackPic_Seija[] = INCBIN_U32("graphics/pokemon/_add/th/seija/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Seija[] = INCBIN_U16("graphics/pokemon/_add/th/seija/normal/shiny.gbapal");
    const u8 gMonIcon_Seija[] = INCBIN_U8("graphics/pokemon/_add/th/seija/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Seija[] = INCBIN_U8("graphics/pokemon/_add/th/seija/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CShinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/chibi/normal.gbapal");
    const u32 gMonBackPic_CShinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CShinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/chibi/shiny.gbapal");
    const u8 gMonIcon_CShinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Shinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/normal/normal.gbapal");
    const u32 gMonBackPic_Shinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Shinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/normal/shiny.gbapal");
    const u8 gMonIcon_Shinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AShinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AShinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/attack/normal.gbapal");
    const u32 gMonBackPic_AShinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AShinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/attack/shiny.gbapal");
    const u8 gMonIcon_AShinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AShinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DShinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DShinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/defense/normal.gbapal");
    const u32 gMonBackPic_DShinmyoumaru[] = INCBIN_U32("graphics/pokemon/_add/th/shinmyoumaru/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DShinmyoumaru[] = INCBIN_U16("graphics/pokemon/_add/th/shinmyoumaru/defense/shiny.gbapal");
    const u8 gMonIcon_DShinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DShinmyoumaru[] = INCBIN_U8("graphics/pokemon/_add/th/shinmyoumaru/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSuika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSuika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/chibi/normal.gbapal");
    const u32 gMonBackPic_CSuika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSuika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/chibi/shiny.gbapal");
    const u8 gMonIcon_CSuika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSuika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Suika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Suika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/normal/normal.gbapal");
    const u32 gMonBackPic_Suika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Suika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/normal/shiny.gbapal");
    const u8 gMonIcon_Suika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Suika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASuika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ASuika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/attack/normal.gbapal");
    const u32 gMonBackPic_ASuika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ASuika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/attack/shiny.gbapal");
    const u8 gMonIcon_ASuika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASuika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSuika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TSuika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/tech/normal.gbapal");
    const u32 gMonBackPic_TSuika[] = INCBIN_U32("graphics/pokemon/_add/th/suika/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TSuika[] = INCBIN_U16("graphics/pokemon/_add/th/suika/tech/shiny.gbapal");
    const u8 gMonIcon_TSuika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSuika[] = INCBIN_U8("graphics/pokemon/_add/th/suika/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CIku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CIku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/chibi/normal.gbapal");
    const u32 gMonBackPic_CIku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CIku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/chibi/shiny.gbapal");
    const u8 gMonIcon_CIku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CIku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Iku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Iku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/normal/normal.gbapal");
    const u32 gMonBackPic_Iku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Iku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/normal/shiny.gbapal");
    const u8 gMonIcon_Iku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Iku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DIku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DIku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/defense/normal.gbapal");
    const u32 gMonBackPic_DIku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DIku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/defense/shiny.gbapal");
    const u8 gMonIcon_DIku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DIku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TIku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TIku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/tech/normal.gbapal");
    const u32 gMonBackPic_TIku[] = INCBIN_U32("graphics/pokemon/_add/th/iku/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TIku[] = INCBIN_U16("graphics/pokemon/_add/th/iku/tech/shiny.gbapal");
    const u8 gMonIcon_TIku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TIku[] = INCBIN_U8("graphics/pokemon/_add/th/iku/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CTenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/chibi/normal.gbapal");
    const u32 gMonBackPic_CTenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CTenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/chibi/shiny.gbapal");
    const u8 gMonIcon_CTenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Tenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/normal/normal.gbapal");
    const u32 gMonBackPic_Tenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Tenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/normal/shiny.gbapal");
    const u8 gMonIcon_Tenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ATenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ATenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/attack/normal.gbapal");
    const u32 gMonBackPic_ATenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ATenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/attack/shiny.gbapal");
    const u8 gMonIcon_ATenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ATenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DTenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DTenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/defense/normal.gbapal");
    const u32 gMonBackPic_DTenshi[] = INCBIN_U32("graphics/pokemon/_add/th/tenshi/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DTenshi[] = INCBIN_U16("graphics/pokemon/_add/th/tenshi/defense/shiny.gbapal");
    const u8 gMonIcon_DTenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DTenshi[] = INCBIN_U8("graphics/pokemon/_add/th/tenshi/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CHatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/chibi/normal.gbapal");
    const u32 gMonBackPic_CHatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CHatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/chibi/shiny.gbapal");
    const u8 gMonIcon_CHatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Hatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Hatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/normal/normal.gbapal");
    const u32 gMonBackPic_Hatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Hatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/normal/shiny.gbapal");
    const u8 gMonIcon_Hatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DHatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DHatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/defense/normal.gbapal");
    const u32 gMonBackPic_DHatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DHatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/defense/shiny.gbapal");
    const u8 gMonIcon_DHatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DHatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_THatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_THatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/tech/normal.gbapal");
    const u32 gMonBackPic_THatate[] = INCBIN_U32("graphics/pokemon/_add/th/hatate/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_THatate[] = INCBIN_U16("graphics/pokemon/_add/th/hatate/tech/shiny.gbapal");
    const u8 gMonIcon_THatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_THatate[] = INCBIN_U8("graphics/pokemon/_add/th/hatate/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/chibi/normal.gbapal");
    const u32 gMonBackPic_CSunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/chibi/shiny.gbapal");
    const u8 gMonIcon_CSunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/normal/normal.gbapal");
    const u32 gMonBackPic_Sunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/normal/shiny.gbapal");
    const u8 gMonIcon_Sunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ASunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/attack/normal.gbapal");
    const u32 gMonBackPic_ASunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ASunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/attack/shiny.gbapal");
    const u8 gMonIcon_ASunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DSunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/defense/anim_front.4bpp.smol");
    const u16 gMonPalette_DSunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/defense/normal.gbapal");
    const u32 gMonBackPic_DSunny[] = INCBIN_U32("graphics/pokemon/_add/th/sunny/defense/back.4bpp.smol");
    const u16 gMonShinyPalette_DSunny[] = INCBIN_U16("graphics/pokemon/_add/th/sunny/defense/shiny.gbapal");
    const u8 gMonIcon_DSunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/defense/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DSunny[] = INCBIN_U8("graphics/pokemon/_add/th/sunny/defense/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLuna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLuna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/chibi/normal.gbapal");
    const u32 gMonBackPic_CLuna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLuna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/chibi/shiny.gbapal");
    const u8 gMonIcon_CLuna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLuna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Luna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Luna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/normal/normal.gbapal");
    const u32 gMonBackPic_Luna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Luna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/normal/shiny.gbapal");
    const u8 gMonIcon_Luna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Luna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ALuna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ALuna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/attack/normal.gbapal");
    const u32 gMonBackPic_ALuna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ALuna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/attack/shiny.gbapal");
    const u8 gMonIcon_ALuna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ALuna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TLuna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TLuna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/tech/normal.gbapal");
    const u32 gMonBackPic_TLuna[] = INCBIN_U32("graphics/pokemon/_add/th/luna/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TLuna[] = INCBIN_U16("graphics/pokemon/_add/th/luna/tech/shiny.gbapal");
    const u8 gMonIcon_TLuna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TLuna[] = INCBIN_U8("graphics/pokemon/_add/th/luna/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CStar[] = INCBIN_U32("graphics/pokemon/_add/th/star/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/chibi/normal.gbapal");
    const u32 gMonBackPic_CStar[] = INCBIN_U32("graphics/pokemon/_add/th/star/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/chibi/shiny.gbapal");
    const u8 gMonIcon_CStar[] = INCBIN_U8("graphics/pokemon/_add/th/star/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CStar[] = INCBIN_U8("graphics/pokemon/_add/th/star/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CStar[] = INCBIN_COMP("graphics/pokemon/_add/th/star/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Star[] = INCBIN_U32("graphics/pokemon/_add/th/star/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Star[] = INCBIN_U16("graphics/pokemon/_add/th/star/normal/normal.gbapal");
    const u32 gMonBackPic_Star[] = INCBIN_U32("graphics/pokemon/_add/th/star/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Star[] = INCBIN_U16("graphics/pokemon/_add/th/star/normal/shiny.gbapal");
    const u8 gMonIcon_Star[] = INCBIN_U8("graphics/pokemon/_add/th/star/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Star[] = INCBIN_U8("graphics/pokemon/_add/th/star/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Star[] = INCBIN_COMP("graphics/pokemon/_add/th/star/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Star[] = INCBIN_U16("graphics/pokemon/_add/th/star/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Star[] = INCBIN_U16("graphics/pokemon/_add/th/star/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AStar[] = INCBIN_U32("graphics/pokemon/_add/th/star/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/attack/normal.gbapal");
    const u32 gMonBackPic_AStar[] = INCBIN_U32("graphics/pokemon/_add/th/star/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/attack/shiny.gbapal");
    const u8 gMonIcon_AStar[] = INCBIN_U8("graphics/pokemon/_add/th/star/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AStar[] = INCBIN_U8("graphics/pokemon/_add/th/star/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AStar[] = INCBIN_COMP("graphics/pokemon/_add/th/star/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_AStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HStar[] = INCBIN_U32("graphics/pokemon/_add/th/star/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/helper/normal.gbapal");
    const u32 gMonBackPic_HStar[] = INCBIN_U32("graphics/pokemon/_add/th/star/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/helper/shiny.gbapal");
    const u8 gMonIcon_HStar[] = INCBIN_U8("graphics/pokemon/_add/th/star/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HStar[] = INCBIN_U8("graphics/pokemon/_add/th/star/helper/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HStar[] = INCBIN_COMP("graphics/pokemon/_add/th/star/helper/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/helper/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_HStar[] = INCBIN_U16("graphics/pokemon/_add/th/star/helper/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKokoro[] = INCBIN_U32("graphics/pokemon/_add/th/kokoro/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKokoro[] = INCBIN_U16("graphics/pokemon/_add/th/kokoro/chibi/normal.gbapal");
    const u32 gMonBackPic_CKokoro[] = INCBIN_U32("graphics/pokemon/_add/th/kokoro/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKokoro[] = INCBIN_U16("graphics/pokemon/_add/th/kokoro/chibi/shiny.gbapal");
    const u8 gMonIcon_CKokoro[] = INCBIN_U8("graphics/pokemon/_add/th/kokoro/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKokoro[] = INCBIN_U8("graphics/pokemon/_add/th/kokoro/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kokoro[] = INCBIN_U32("graphics/pokemon/_add/th/kokoro/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kokoro[] = INCBIN_U16("graphics/pokemon/_add/th/kokoro/normal/normal.gbapal");
    const u32 gMonBackPic_Kokoro[] = INCBIN_U32("graphics/pokemon/_add/th/kokoro/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kokoro[] = INCBIN_U16("graphics/pokemon/_add/th/kokoro/normal/shiny.gbapal");
    const u8 gMonIcon_Kokoro[] = INCBIN_U8("graphics/pokemon/_add/th/kokoro/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kokoro[] = INCBIN_U8("graphics/pokemon/_add/th/kokoro/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKasen[] = INCBIN_U32("graphics/pokemon/_add/th/kasen/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKasen[] = INCBIN_U16("graphics/pokemon/_add/th/kasen/chibi/normal.gbapal");
    const u32 gMonBackPic_CKasen[] = INCBIN_U32("graphics/pokemon/_add/th/kasen/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKasen[] = INCBIN_U16("graphics/pokemon/_add/th/kasen/chibi/shiny.gbapal");
    const u8 gMonIcon_CKasen[] = INCBIN_U8("graphics/pokemon/_add/th/kasen/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKasen[] = INCBIN_U8("graphics/pokemon/_add/th/kasen/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kasen[] = INCBIN_U32("graphics/pokemon/_add/th/kasen/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kasen[] = INCBIN_U16("graphics/pokemon/_add/th/kasen/normal/normal.gbapal");
    const u32 gMonBackPic_Kasen[] = INCBIN_U32("graphics/pokemon/_add/th/kasen/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kasen[] = INCBIN_U16("graphics/pokemon/_add/th/kasen/normal/shiny.gbapal");
    const u8 gMonIcon_Kasen[] = INCBIN_U8("graphics/pokemon/_add/th/kasen/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kasen[] = INCBIN_U8("graphics/pokemon/_add/th/kasen/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYorihime[] = INCBIN_U32("graphics/pokemon/_add/th/yorihime/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYorihime[] = INCBIN_U16("graphics/pokemon/_add/th/yorihime/chibi/normal.gbapal");
    const u32 gMonBackPic_CYorihime[] = INCBIN_U32("graphics/pokemon/_add/th/yorihime/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYorihime[] = INCBIN_U16("graphics/pokemon/_add/th/yorihime/chibi/shiny.gbapal");
    const u8 gMonIcon_CYorihime[] = INCBIN_U8("graphics/pokemon/_add/th/yorihime/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYorihime[] = INCBIN_U8("graphics/pokemon/_add/th/yorihime/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yorihime[] = INCBIN_U32("graphics/pokemon/_add/th/yorihime/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yorihime[] = INCBIN_U16("graphics/pokemon/_add/th/yorihime/normal/normal.gbapal");
    const u32 gMonBackPic_Yorihime[] = INCBIN_U32("graphics/pokemon/_add/th/yorihime/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yorihime[] = INCBIN_U16("graphics/pokemon/_add/th/yorihime/normal/shiny.gbapal");
    const u8 gMonIcon_Yorihime[] = INCBIN_U8("graphics/pokemon/_add/th/yorihime/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yorihime[] = INCBIN_U8("graphics/pokemon/_add/th/yorihime/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SYorihime[] = INCBIN_U32("graphics/pokemon/_add/th/yorihime/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SYorihime[] = INCBIN_U16("graphics/pokemon/_add/th/yorihime/speed/normal.gbapal");
    const u32 gMonBackPic_SYorihime[] = INCBIN_U32("graphics/pokemon/_add/th/yorihime/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SYorihime[] = INCBIN_U16("graphics/pokemon/_add/th/yorihime/speed/shiny.gbapal");
    const u8 gMonIcon_SYorihime[] = INCBIN_U8("graphics/pokemon/_add/th/yorihime/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SYorihime[] = INCBIN_U8("graphics/pokemon/_add/th/yorihime/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CToyohime[] = INCBIN_U32("graphics/pokemon/_add/th/toyohime/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CToyohime[] = INCBIN_U16("graphics/pokemon/_add/th/toyohime/chibi/normal.gbapal");
    const u32 gMonBackPic_CToyohime[] = INCBIN_U32("graphics/pokemon/_add/th/toyohime/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CToyohime[] = INCBIN_U16("graphics/pokemon/_add/th/toyohime/chibi/shiny.gbapal");
    const u8 gMonIcon_CToyohime[] = INCBIN_U8("graphics/pokemon/_add/th/toyohime/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CToyohime[] = INCBIN_U8("graphics/pokemon/_add/th/toyohime/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Toyohime[] = INCBIN_U32("graphics/pokemon/_add/th/toyohime/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Toyohime[] = INCBIN_U16("graphics/pokemon/_add/th/toyohime/normal/normal.gbapal");
    const u32 gMonBackPic_Toyohime[] = INCBIN_U32("graphics/pokemon/_add/th/toyohime/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Toyohime[] = INCBIN_U16("graphics/pokemon/_add/th/toyohime/normal/shiny.gbapal");
    const u8 gMonIcon_Toyohime[] = INCBIN_U8("graphics/pokemon/_add/th/toyohime/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Toyohime[] = INCBIN_U8("graphics/pokemon/_add/th/toyohime/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TToyohime[] = INCBIN_U32("graphics/pokemon/_add/th/toyohime/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TToyohime[] = INCBIN_U16("graphics/pokemon/_add/th/toyohime/tech/normal.gbapal");
    const u32 gMonBackPic_TToyohime[] = INCBIN_U32("graphics/pokemon/_add/th/toyohime/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TToyohime[] = INCBIN_U16("graphics/pokemon/_add/th/toyohime/tech/shiny.gbapal");
    const u8 gMonIcon_TToyohime[] = INCBIN_U8("graphics/pokemon/_add/th/toyohime/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TToyohime[] = INCBIN_U8("graphics/pokemon/_add/th/toyohime/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTokiko[] = INCBIN_U32("graphics/pokemon/_add/th/tokiko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CTokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/chibi/normal.gbapal");
    const u32 gMonBackPic_CTokiko[] = INCBIN_U32("graphics/pokemon/_add/th/tokiko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CTokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/chibi/shiny.gbapal");
    const u8 gMonIcon_CTokiko[] = INCBIN_U8("graphics/pokemon/_add/th/tokiko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTokiko[] = INCBIN_U8("graphics/pokemon/_add/th/tokiko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CTokiko[] = INCBIN_COMP("graphics/pokemon/_add/th/tokiko/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CTokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CTokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Tokiko[] = INCBIN_U32("graphics/pokemon/_add/th/tokiko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Tokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/normal/normal.gbapal");
    const u32 gMonBackPic_Tokiko[] = INCBIN_U32("graphics/pokemon/_add/th/tokiko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Tokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/normal/shiny.gbapal");
    const u8 gMonIcon_Tokiko[] = INCBIN_U8("graphics/pokemon/_add/th/tokiko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tokiko[] = INCBIN_U8("graphics/pokemon/_add/th/tokiko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Tokiko[] = INCBIN_COMP("graphics/pokemon/_add/th/tokiko/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Tokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Tokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ATokiko[] = INCBIN_U32("graphics/pokemon/_add/th/tokiko/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ATokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/attack/normal.gbapal");
    const u32 gMonBackPic_ATokiko[] = INCBIN_U32("graphics/pokemon/_add/th/tokiko/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ATokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/attack/shiny.gbapal");
    const u8 gMonIcon_ATokiko[] = INCBIN_U8("graphics/pokemon/_add/th/tokiko/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ATokiko[] = INCBIN_U8("graphics/pokemon/_add/th/tokiko/attack/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ATokiko[] = INCBIN_COMP("graphics/pokemon/_add/th/tokiko/attack/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ATokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/attack/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_ATokiko[] = INCBIN_U16("graphics/pokemon/_add/th/tokiko/attack/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKosuzu[] = INCBIN_U32("graphics/pokemon/_add/th/kosuzu/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKosuzu[] = INCBIN_U16("graphics/pokemon/_add/th/kosuzu/chibi/normal.gbapal");
    const u32 gMonBackPic_CKosuzu[] = INCBIN_U32("graphics/pokemon/_add/th/kosuzu/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKosuzu[] = INCBIN_U16("graphics/pokemon/_add/th/kosuzu/chibi/shiny.gbapal");
    const u8 gMonIcon_CKosuzu[] = INCBIN_U8("graphics/pokemon/_add/th/kosuzu/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKosuzu[] = INCBIN_U8("graphics/pokemon/_add/th/kosuzu/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kosuzu[] = INCBIN_U32("graphics/pokemon/_add/th/kosuzu/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kosuzu[] = INCBIN_U16("graphics/pokemon/_add/th/kosuzu/normal/normal.gbapal");
    const u32 gMonBackPic_Kosuzu[] = INCBIN_U32("graphics/pokemon/_add/th/kosuzu/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kosuzu[] = INCBIN_U16("graphics/pokemon/_add/th/kosuzu/normal/shiny.gbapal");
    const u8 gMonIcon_Kosuzu[] = INCBIN_U8("graphics/pokemon/_add/th/kosuzu/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kosuzu[] = INCBIN_U8("graphics/pokemon/_add/th/kosuzu/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CJoon[] = INCBIN_U32("graphics/pokemon/_add/th/joon/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CJoon[] = INCBIN_U16("graphics/pokemon/_add/th/joon/chibi/normal.gbapal");
    const u32 gMonBackPic_CJoon[] = INCBIN_U32("graphics/pokemon/_add/th/joon/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CJoon[] = INCBIN_U16("graphics/pokemon/_add/th/joon/chibi/shiny.gbapal");
    const u8 gMonIcon_CJoon[] = INCBIN_U8("graphics/pokemon/_add/th/joon/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CJoon[] = INCBIN_U8("graphics/pokemon/_add/th/joon/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Joon[] = INCBIN_U32("graphics/pokemon/_add/th/joon/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Joon[] = INCBIN_U16("graphics/pokemon/_add/th/joon/normal/normal.gbapal");
    const u32 gMonBackPic_Joon[] = INCBIN_U32("graphics/pokemon/_add/th/joon/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Joon[] = INCBIN_U16("graphics/pokemon/_add/th/joon/normal/shiny.gbapal");
    const u8 gMonIcon_Joon[] = INCBIN_U8("graphics/pokemon/_add/th/joon/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Joon[] = INCBIN_U8("graphics/pokemon/_add/th/joon/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AJoon[] = INCBIN_U32("graphics/pokemon/_add/th/joon/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AJoon[] = INCBIN_U16("graphics/pokemon/_add/th/joon/attack/normal.gbapal");
    const u32 gMonBackPic_AJoon[] = INCBIN_U32("graphics/pokemon/_add/th/joon/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AJoon[] = INCBIN_U16("graphics/pokemon/_add/th/joon/attack/shiny.gbapal");
    const u8 gMonIcon_AJoon[] = INCBIN_U8("graphics/pokemon/_add/th/joon/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AJoon[] = INCBIN_U8("graphics/pokemon/_add/th/joon/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHakurei[] = INCBIN_U32("graphics/pokemon/_add/th/hakurei/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CHakurei[] = INCBIN_U16("graphics/pokemon/_add/th/hakurei/chibi/normal.gbapal");
    const u32 gMonBackPic_CHakurei[] = INCBIN_U32("graphics/pokemon/_add/th/hakurei/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CHakurei[] = INCBIN_U16("graphics/pokemon/_add/th/hakurei/chibi/shiny.gbapal");
    const u8 gMonIcon_CHakurei[] = INCBIN_U8("graphics/pokemon/_add/th/hakurei/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHakurei[] = INCBIN_U8("graphics/pokemon/_add/th/hakurei/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Hakurei[] = INCBIN_U32("graphics/pokemon/_add/th/hakurei/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Hakurei[] = INCBIN_U16("graphics/pokemon/_add/th/hakurei/normal/normal.gbapal");
    const u32 gMonBackPic_Hakurei[] = INCBIN_U32("graphics/pokemon/_add/th/hakurei/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Hakurei[] = INCBIN_U16("graphics/pokemon/_add/th/hakurei/normal/shiny.gbapal");
    const u8 gMonIcon_Hakurei[] = INCBIN_U8("graphics/pokemon/_add/th/hakurei/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hakurei[] = INCBIN_U8("graphics/pokemon/_add/th/hakurei/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKonngara[] = INCBIN_U32("graphics/pokemon/_add/th/konngara/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKonngara[] = INCBIN_U16("graphics/pokemon/_add/th/konngara/chibi/normal.gbapal");
    const u32 gMonBackPic_CKonngara[] = INCBIN_U32("graphics/pokemon/_add/th/konngara/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKonngara[] = INCBIN_U16("graphics/pokemon/_add/th/konngara/chibi/shiny.gbapal");
    const u8 gMonIcon_CKonngara[] = INCBIN_U8("graphics/pokemon/_add/th/konngara/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKonngara[] = INCBIN_U8("graphics/pokemon/_add/th/konngara/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Konngara[] = INCBIN_U32("graphics/pokemon/_add/th/konngara/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Konngara[] = INCBIN_U16("graphics/pokemon/_add/th/konngara/normal/normal.gbapal");
    const u32 gMonBackPic_Konngara[] = INCBIN_U32("graphics/pokemon/_add/th/konngara/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Konngara[] = INCBIN_U16("graphics/pokemon/_add/th/konngara/normal/shiny.gbapal");
    const u8 gMonIcon_Konngara[] = INCBIN_U8("graphics/pokemon/_add/th/konngara/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Konngara[] = INCBIN_U8("graphics/pokemon/_add/th/konngara/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKikuri[] = INCBIN_U32("graphics/pokemon/_add/th/kikuri/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKikuri[] = INCBIN_U16("graphics/pokemon/_add/th/kikuri/chibi/normal.gbapal");
    const u32 gMonBackPic_CKikuri[] = INCBIN_U32("graphics/pokemon/_add/th/kikuri/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKikuri[] = INCBIN_U16("graphics/pokemon/_add/th/kikuri/chibi/shiny.gbapal");
    const u8 gMonIcon_CKikuri[] = INCBIN_U8("graphics/pokemon/_add/th/kikuri/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKikuri[] = INCBIN_U8("graphics/pokemon/_add/th/kikuri/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kikuri[] = INCBIN_U32("graphics/pokemon/_add/th/kikuri/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kikuri[] = INCBIN_U16("graphics/pokemon/_add/th/kikuri/normal/normal.gbapal");
    const u32 gMonBackPic_Kikuri[] = INCBIN_U32("graphics/pokemon/_add/th/kikuri/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kikuri[] = INCBIN_U16("graphics/pokemon/_add/th/kikuri/normal/shiny.gbapal");
    const u8 gMonIcon_Kikuri[] = INCBIN_U8("graphics/pokemon/_add/th/kikuri/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kikuri[] = INCBIN_U8("graphics/pokemon/_add/th/kikuri/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuugenmagan[] = INCBIN_U32("graphics/pokemon/_add/th/yuugenmagan/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYuugenmagan[] = INCBIN_U16("graphics/pokemon/_add/th/yuugenmagan/chibi/normal.gbapal");
    const u32 gMonBackPic_CYuugenmagan[] = INCBIN_U32("graphics/pokemon/_add/th/yuugenmagan/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYuugenmagan[] = INCBIN_U16("graphics/pokemon/_add/th/yuugenmagan/chibi/shiny.gbapal");
    const u8 gMonIcon_CYuugenmagan[] = INCBIN_U8("graphics/pokemon/_add/th/yuugenmagan/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuugenmagan[] = INCBIN_U8("graphics/pokemon/_add/th/yuugenmagan/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuugenmagan[] = INCBIN_U32("graphics/pokemon/_add/th/yuugenmagan/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yuugenmagan[] = INCBIN_U16("graphics/pokemon/_add/th/yuugenmagan/normal/normal.gbapal");
    const u32 gMonBackPic_Yuugenmagan[] = INCBIN_U32("graphics/pokemon/_add/th/yuugenmagan/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yuugenmagan[] = INCBIN_U16("graphics/pokemon/_add/th/yuugenmagan/normal/shiny.gbapal");
    const u8 gMonIcon_Yuugenmagan[] = INCBIN_U8("graphics/pokemon/_add/th/yuugenmagan/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuugenmagan[] = INCBIN_U8("graphics/pokemon/_add/th/yuugenmagan/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSariel[] = INCBIN_U32("graphics/pokemon/_add/th/sariel/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSariel[] = INCBIN_U16("graphics/pokemon/_add/th/sariel/chibi/normal.gbapal");
    const u32 gMonBackPic_CSariel[] = INCBIN_U32("graphics/pokemon/_add/th/sariel/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSariel[] = INCBIN_U16("graphics/pokemon/_add/th/sariel/chibi/shiny.gbapal");
    const u8 gMonIcon_CSariel[] = INCBIN_U8("graphics/pokemon/_add/th/sariel/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSariel[] = INCBIN_U8("graphics/pokemon/_add/th/sariel/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sariel[] = INCBIN_U32("graphics/pokemon/_add/th/sariel/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sariel[] = INCBIN_U16("graphics/pokemon/_add/th/sariel/normal/normal.gbapal");
    const u32 gMonBackPic_Sariel[] = INCBIN_U32("graphics/pokemon/_add/th/sariel/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sariel[] = INCBIN_U16("graphics/pokemon/_add/th/sariel/normal/shiny.gbapal");
    const u8 gMonIcon_Sariel[] = INCBIN_U8("graphics/pokemon/_add/th/sariel/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sariel[] = INCBIN_U8("graphics/pokemon/_add/th/sariel/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SSariel[] = INCBIN_U32("graphics/pokemon/_add/th/sariel/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_SSariel[] = INCBIN_U16("graphics/pokemon/_add/th/sariel/speed/normal.gbapal");
    const u32 gMonBackPic_SSariel[] = INCBIN_U32("graphics/pokemon/_add/th/sariel/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_SSariel[] = INCBIN_U16("graphics/pokemon/_add/th/sariel/speed/shiny.gbapal");
    const u8 gMonIcon_SSariel[] = INCBIN_U8("graphics/pokemon/_add/th/sariel/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SSariel[] = INCBIN_U8("graphics/pokemon/_add/th/sariel/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShingyoku[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CShingyoku[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/chibi/normal.gbapal");
    const u32 gMonBackPic_CShingyoku[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CShingyoku[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/chibi/shiny.gbapal");
    const u8 gMonIcon_CShingyoku[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShingyoku[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShingyokuO[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/origin/anim_front.4bpp.smol");
    const u16 gMonPalette_ShingyokuO[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/origin/normal.gbapal");
    const u32 gMonBackPic_ShingyokuO[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/origin/back.4bpp.smol");
    const u16 gMonShinyPalette_ShingyokuO[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/origin/shiny.gbapal");
    const u8 gMonIcon_ShingyokuO[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/origin/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShingyokuO[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/origin/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShingyokuM[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/male/anim_front.4bpp.smol");
    const u16 gMonPalette_ShingyokuM[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/male/normal.gbapal");
    const u32 gMonBackPic_ShingyokuM[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/male/back.4bpp.smol");
    const u16 gMonShinyPalette_ShingyokuM[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/male/shiny.gbapal");
    const u8 gMonIcon_ShingyokuM[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/male/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShingyokuM[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/male/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShingyokuF[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/female/anim_front.4bpp.smol");
    const u16 gMonPalette_ShingyokuF[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/female/normal.gbapal");
    const u32 gMonBackPic_ShingyokuF[] = INCBIN_U32("graphics/pokemon/_add/th/shingyoku/female/back.4bpp.smol");
    const u16 gMonShinyPalette_ShingyokuF[] = INCBIN_U16("graphics/pokemon/_add/th/shingyoku/female/shiny.gbapal");
    const u8 gMonIcon_ShingyokuF[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/female/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShingyokuF[] = INCBIN_U8("graphics/pokemon/_add/th/shingyoku/female/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CElis[] = INCBIN_U32("graphics/pokemon/_add/th/elis/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CElis[] = INCBIN_U16("graphics/pokemon/_add/th/elis/chibi/normal.gbapal");
    const u32 gMonBackPic_CElis[] = INCBIN_U32("graphics/pokemon/_add/th/elis/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CElis[] = INCBIN_U16("graphics/pokemon/_add/th/elis/chibi/shiny.gbapal");
    const u8 gMonIcon_CElis[] = INCBIN_U8("graphics/pokemon/_add/th/elis/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CElis[] = INCBIN_U8("graphics/pokemon/_add/th/elis/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Elis[] = INCBIN_U32("graphics/pokemon/_add/th/elis/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Elis[] = INCBIN_U16("graphics/pokemon/_add/th/elis/normal/normal.gbapal");
    const u32 gMonBackPic_Elis[] = INCBIN_U32("graphics/pokemon/_add/th/elis/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Elis[] = INCBIN_U16("graphics/pokemon/_add/th/elis/normal/shiny.gbapal");
    const u8 gMonIcon_Elis[] = INCBIN_U8("graphics/pokemon/_add/th/elis/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Elis[] = INCBIN_U8("graphics/pokemon/_add/th/elis/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMima[] = INCBIN_U32("graphics/pokemon/_add/th/mima/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMima[] = INCBIN_U16("graphics/pokemon/_add/th/mima/chibi/normal.gbapal");
    const u32 gMonBackPic_CMima[] = INCBIN_U32("graphics/pokemon/_add/th/mima/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMima[] = INCBIN_U16("graphics/pokemon/_add/th/mima/chibi/shiny.gbapal");
    const u8 gMonIcon_CMima[] = INCBIN_U8("graphics/pokemon/_add/th/mima/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMima[] = INCBIN_U8("graphics/pokemon/_add/th/mima/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mima[] = INCBIN_U32("graphics/pokemon/_add/th/mima/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Mima[] = INCBIN_U16("graphics/pokemon/_add/th/mima/normal/normal.gbapal");
    const u32 gMonBackPic_Mima[] = INCBIN_U32("graphics/pokemon/_add/th/mima/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Mima[] = INCBIN_U16("graphics/pokemon/_add/th/mima/normal/shiny.gbapal");
    const u8 gMonIcon_Mima[] = INCBIN_U8("graphics/pokemon/_add/th/mima/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mima[] = INCBIN_U8("graphics/pokemon/_add/th/mima/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKirisame[] = INCBIN_U32("graphics/pokemon/_add/th/kirisame/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKirisame[] = INCBIN_U16("graphics/pokemon/_add/th/kirisame/chibi/normal.gbapal");
    const u32 gMonBackPic_CKirisame[] = INCBIN_U32("graphics/pokemon/_add/th/kirisame/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKirisame[] = INCBIN_U16("graphics/pokemon/_add/th/kirisame/chibi/shiny.gbapal");
    const u8 gMonIcon_CKirisame[] = INCBIN_U8("graphics/pokemon/_add/th/kirisame/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKirisame[] = INCBIN_U8("graphics/pokemon/_add/th/kirisame/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kirisame[] = INCBIN_U32("graphics/pokemon/_add/th/kirisame/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kirisame[] = INCBIN_U16("graphics/pokemon/_add/th/kirisame/normal/normal.gbapal");
    const u32 gMonBackPic_Kirisame[] = INCBIN_U32("graphics/pokemon/_add/th/kirisame/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kirisame[] = INCBIN_U16("graphics/pokemon/_add/th/kirisame/normal/shiny.gbapal");
    const u8 gMonIcon_Kirisame[] = INCBIN_U8("graphics/pokemon/_add/th/kirisame/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kirisame[] = INCBIN_U8("graphics/pokemon/_add/th/kirisame/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Genji[] = INCBIN_U32("graphics/pokemon/_add/th/genji/anim_front.4bpp.smol");
    const u16 gMonPalette_Genji[] = INCBIN_U16("graphics/pokemon/_add/th/genji/normal.gbapal");
    const u32 gMonBackPic_Genji[] = INCBIN_U32("graphics/pokemon/_add/th/genji/back.4bpp.smol");
    const u16 gMonShinyPalette_Genji[] = INCBIN_U16("graphics/pokemon/_add/th/genji/shiny.gbapal");
    const u8 gMonIcon_Genji[] = INCBIN_U8("graphics/pokemon/_add/th/genji/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Genji[] = INCBIN_U8("graphics/pokemon/_add/th/genji/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRika[] = INCBIN_U32("graphics/pokemon/_add/th/rika/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRika[] = INCBIN_U16("graphics/pokemon/_add/th/rika/chibi/normal.gbapal");
    const u32 gMonBackPic_CRika[] = INCBIN_U32("graphics/pokemon/_add/th/rika/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRika[] = INCBIN_U16("graphics/pokemon/_add/th/rika/chibi/shiny.gbapal");
    const u8 gMonIcon_CRika[] = INCBIN_U8("graphics/pokemon/_add/th/rika/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRika[] = INCBIN_U8("graphics/pokemon/_add/th/rika/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rika[] = INCBIN_U32("graphics/pokemon/_add/th/rika/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Rika[] = INCBIN_U16("graphics/pokemon/_add/th/rika/normal/normal.gbapal");
    const u32 gMonBackPic_Rika[] = INCBIN_U32("graphics/pokemon/_add/th/rika/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Rika[] = INCBIN_U16("graphics/pokemon/_add/th/rika/normal/shiny.gbapal");
    const u8 gMonIcon_Rika[] = INCBIN_U8("graphics/pokemon/_add/th/rika/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rika[] = INCBIN_U8("graphics/pokemon/_add/th/rika/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMeira[] = INCBIN_U32("graphics/pokemon/_add/th/meira/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMeira[] = INCBIN_U16("graphics/pokemon/_add/th/meira/chibi/normal.gbapal");
    const u32 gMonBackPic_CMeira[] = INCBIN_U32("graphics/pokemon/_add/th/meira/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMeira[] = INCBIN_U16("graphics/pokemon/_add/th/meira/chibi/shiny.gbapal");
    const u8 gMonIcon_CMeira[] = INCBIN_U8("graphics/pokemon/_add/th/meira/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMeira[] = INCBIN_U8("graphics/pokemon/_add/th/meira/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Meira[] = INCBIN_U32("graphics/pokemon/_add/th/meira/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Meira[] = INCBIN_U16("graphics/pokemon/_add/th/meira/normal/normal.gbapal");
    const u32 gMonBackPic_Meira[] = INCBIN_U32("graphics/pokemon/_add/th/meira/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Meira[] = INCBIN_U16("graphics/pokemon/_add/th/meira/normal/shiny.gbapal");
    const u8 gMonIcon_Meira[] = INCBIN_U8("graphics/pokemon/_add/th/meira/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Meira[] = INCBIN_U8("graphics/pokemon/_add/th/meira/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEllen[] = INCBIN_U32("graphics/pokemon/_add/th/ellen/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CEllen[] = INCBIN_U16("graphics/pokemon/_add/th/ellen/chibi/normal.gbapal");
    const u32 gMonBackPic_CEllen[] = INCBIN_U32("graphics/pokemon/_add/th/ellen/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CEllen[] = INCBIN_U16("graphics/pokemon/_add/th/ellen/chibi/shiny.gbapal");
    const u8 gMonIcon_CEllen[] = INCBIN_U8("graphics/pokemon/_add/th/ellen/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEllen[] = INCBIN_U8("graphics/pokemon/_add/th/ellen/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ellen[] = INCBIN_U32("graphics/pokemon/_add/th/ellen/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Ellen[] = INCBIN_U16("graphics/pokemon/_add/th/ellen/normal/normal.gbapal");
    const u32 gMonBackPic_Ellen[] = INCBIN_U32("graphics/pokemon/_add/th/ellen/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Ellen[] = INCBIN_U16("graphics/pokemon/_add/th/ellen/normal/shiny.gbapal");
    const u8 gMonIcon_Ellen[] = INCBIN_U8("graphics/pokemon/_add/th/ellen/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ellen[] = INCBIN_U8("graphics/pokemon/_add/th/ellen/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKotohime[] = INCBIN_U32("graphics/pokemon/_add/th/kotohime/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKotohime[] = INCBIN_U16("graphics/pokemon/_add/th/kotohime/chibi/normal.gbapal");
    const u32 gMonBackPic_CKotohime[] = INCBIN_U32("graphics/pokemon/_add/th/kotohime/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKotohime[] = INCBIN_U16("graphics/pokemon/_add/th/kotohime/chibi/shiny.gbapal");
    const u8 gMonIcon_CKotohime[] = INCBIN_U8("graphics/pokemon/_add/th/kotohime/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKotohime[] = INCBIN_U8("graphics/pokemon/_add/th/kotohime/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kotohime[] = INCBIN_U32("graphics/pokemon/_add/th/kotohime/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kotohime[] = INCBIN_U16("graphics/pokemon/_add/th/kotohime/normal/normal.gbapal");
    const u32 gMonBackPic_Kotohime[] = INCBIN_U32("graphics/pokemon/_add/th/kotohime/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kotohime[] = INCBIN_U16("graphics/pokemon/_add/th/kotohime/normal/shiny.gbapal");
    const u8 gMonIcon_Kotohime[] = INCBIN_U8("graphics/pokemon/_add/th/kotohime/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kotohime[] = INCBIN_U8("graphics/pokemon/_add/th/kotohime/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKana[] = INCBIN_U32("graphics/pokemon/_add/th/kana/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKana[] = INCBIN_U16("graphics/pokemon/_add/th/kana/chibi/normal.gbapal");
    const u32 gMonBackPic_CKana[] = INCBIN_U32("graphics/pokemon/_add/th/kana/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKana[] = INCBIN_U16("graphics/pokemon/_add/th/kana/chibi/shiny.gbapal");
    const u8 gMonIcon_CKana[] = INCBIN_U8("graphics/pokemon/_add/th/kana/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKana[] = INCBIN_U8("graphics/pokemon/_add/th/kana/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kana[] = INCBIN_U32("graphics/pokemon/_add/th/kana/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kana[] = INCBIN_U16("graphics/pokemon/_add/th/kana/normal/normal.gbapal");
    const u32 gMonBackPic_Kana[] = INCBIN_U32("graphics/pokemon/_add/th/kana/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kana[] = INCBIN_U16("graphics/pokemon/_add/th/kana/normal/shiny.gbapal");
    const u8 gMonIcon_Kana[] = INCBIN_U8("graphics/pokemon/_add/th/kana/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kana[] = INCBIN_U8("graphics/pokemon/_add/th/kana/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRikako[] = INCBIN_U32("graphics/pokemon/_add/th/rikako/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRikako[] = INCBIN_U16("graphics/pokemon/_add/th/rikako/chibi/normal.gbapal");
    const u32 gMonBackPic_CRikako[] = INCBIN_U32("graphics/pokemon/_add/th/rikako/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRikako[] = INCBIN_U16("graphics/pokemon/_add/th/rikako/chibi/shiny.gbapal");
    const u8 gMonIcon_CRikako[] = INCBIN_U8("graphics/pokemon/_add/th/rikako/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRikako[] = INCBIN_U8("graphics/pokemon/_add/th/rikako/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rikako[] = INCBIN_U32("graphics/pokemon/_add/th/rikako/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Rikako[] = INCBIN_U16("graphics/pokemon/_add/th/rikako/normal/normal.gbapal");
    const u32 gMonBackPic_Rikako[] = INCBIN_U32("graphics/pokemon/_add/th/rikako/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Rikako[] = INCBIN_U16("graphics/pokemon/_add/th/rikako/normal/shiny.gbapal");
    const u8 gMonIcon_Rikako[] = INCBIN_U8("graphics/pokemon/_add/th/rikako/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rikako[] = INCBIN_U8("graphics/pokemon/_add/th/rikako/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CChiyuri[] = INCBIN_U32("graphics/pokemon/_add/th/chiyuri/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CChiyuri[] = INCBIN_U16("graphics/pokemon/_add/th/chiyuri/chibi/normal.gbapal");
    const u32 gMonBackPic_CChiyuri[] = INCBIN_U32("graphics/pokemon/_add/th/chiyuri/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CChiyuri[] = INCBIN_U16("graphics/pokemon/_add/th/chiyuri/chibi/shiny.gbapal");
    const u8 gMonIcon_CChiyuri[] = INCBIN_U8("graphics/pokemon/_add/th/chiyuri/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CChiyuri[] = INCBIN_U8("graphics/pokemon/_add/th/chiyuri/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Chiyuri[] = INCBIN_U32("graphics/pokemon/_add/th/chiyuri/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Chiyuri[] = INCBIN_U16("graphics/pokemon/_add/th/chiyuri/normal/normal.gbapal");
    const u32 gMonBackPic_Chiyuri[] = INCBIN_U32("graphics/pokemon/_add/th/chiyuri/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Chiyuri[] = INCBIN_U16("graphics/pokemon/_add/th/chiyuri/normal/shiny.gbapal");
    const u8 gMonIcon_Chiyuri[] = INCBIN_U8("graphics/pokemon/_add/th/chiyuri/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Chiyuri[] = INCBIN_U8("graphics/pokemon/_add/th/chiyuri/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYumemi[] = INCBIN_U32("graphics/pokemon/_add/th/yumemi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYumemi[] = INCBIN_U16("graphics/pokemon/_add/th/yumemi/chibi/normal.gbapal");
    const u32 gMonBackPic_CYumemi[] = INCBIN_U32("graphics/pokemon/_add/th/yumemi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYumemi[] = INCBIN_U16("graphics/pokemon/_add/th/yumemi/chibi/shiny.gbapal");
    const u8 gMonIcon_CYumemi[] = INCBIN_U8("graphics/pokemon/_add/th/yumemi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYumemi[] = INCBIN_U8("graphics/pokemon/_add/th/yumemi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yumemi[] = INCBIN_U32("graphics/pokemon/_add/th/yumemi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yumemi[] = INCBIN_U16("graphics/pokemon/_add/th/yumemi/normal/normal.gbapal");
    const u32 gMonBackPic_Yumemi[] = INCBIN_U32("graphics/pokemon/_add/th/yumemi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yumemi[] = INCBIN_U16("graphics/pokemon/_add/th/yumemi/normal/shiny.gbapal");
    const u8 gMonIcon_Yumemi[] = INCBIN_U8("graphics/pokemon/_add/th/yumemi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yumemi[] = INCBIN_U8("graphics/pokemon/_add/th/yumemi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kedama[] = INCBIN_U32("graphics/pokemon/_add/th/kedama/anim_front.4bpp.smol");
    const u16 gMonPalette_Kedama[] = INCBIN_U16("graphics/pokemon/_add/th/kedama/normal.gbapal");
    const u32 gMonBackPic_Kedama[] = INCBIN_U32("graphics/pokemon/_add/th/kedama/back.4bpp.smol");
    const u16 gMonShinyPalette_Kedama[] = INCBIN_U16("graphics/pokemon/_add/th/kedama/shiny.gbapal");
    const u8 gMonIcon_Kedama[] = INCBIN_U8("graphics/pokemon/_add/th/kedama/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kedama[] = INCBIN_U8("graphics/pokemon/_add/th/kedama/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ruukoto[] = INCBIN_U32("graphics/pokemon/_add/th/ruukoto/anim_front.4bpp.smol");
    const u16 gMonPalette_Ruukoto[] = INCBIN_U16("graphics/pokemon/_add/th/ruukoto/normal.gbapal");
    const u32 gMonBackPic_Ruukoto[] = INCBIN_U32("graphics/pokemon/_add/th/ruukoto/back.4bpp.smol");
    const u16 gMonShinyPalette_Ruukoto[] = INCBIN_U16("graphics/pokemon/_add/th/ruukoto/shiny.gbapal");
    const u8 gMonIcon_Ruukoto[] = INCBIN_U8("graphics/pokemon/_add/th/ruukoto/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ruukoto[] = INCBIN_U8("graphics/pokemon/_add/th/ruukoto/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mimichan[] = INCBIN_U32("graphics/pokemon/_add/th/mimichan/anim_front.4bpp.smol");
    const u16 gMonPalette_Mimichan[] = INCBIN_U16("graphics/pokemon/_add/th/mimichan/normal.gbapal");
    const u32 gMonBackPic_Mimichan[] = INCBIN_U32("graphics/pokemon/_add/th/mimichan/back.4bpp.smol");
    const u16 gMonShinyPalette_Mimichan[] = INCBIN_U16("graphics/pokemon/_add/th/mimichan/shiny.gbapal");
    const u8 gMonIcon_Mimichan[] = INCBIN_U8("graphics/pokemon/_add/th/mimichan/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mimichan[] = INCBIN_U8("graphics/pokemon/_add/th/mimichan/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_COrange[] = INCBIN_U32("graphics/pokemon/_add/th/orange/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_COrange[] = INCBIN_U16("graphics/pokemon/_add/th/orange/chibi/normal.gbapal");
    const u32 gMonBackPic_COrange[] = INCBIN_U32("graphics/pokemon/_add/th/orange/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_COrange[] = INCBIN_U16("graphics/pokemon/_add/th/orange/chibi/shiny.gbapal");
    const u8 gMonIcon_COrange[] = INCBIN_U8("graphics/pokemon/_add/th/orange/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_COrange[] = INCBIN_U8("graphics/pokemon/_add/th/orange/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Orange[] = INCBIN_U32("graphics/pokemon/_add/th/orange/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Orange[] = INCBIN_U16("graphics/pokemon/_add/th/orange/normal/normal.gbapal");
    const u32 gMonBackPic_Orange[] = INCBIN_U32("graphics/pokemon/_add/th/orange/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Orange[] = INCBIN_U16("graphics/pokemon/_add/th/orange/normal/shiny.gbapal");
    const u8 gMonIcon_Orange[] = INCBIN_U8("graphics/pokemon/_add/th/orange/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Orange[] = INCBIN_U8("graphics/pokemon/_add/th/orange/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKurumi[] = INCBIN_U32("graphics/pokemon/_add/th/kurumi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKurumi[] = INCBIN_U16("graphics/pokemon/_add/th/kurumi/chibi/normal.gbapal");
    const u32 gMonBackPic_CKurumi[] = INCBIN_U32("graphics/pokemon/_add/th/kurumi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKurumi[] = INCBIN_U16("graphics/pokemon/_add/th/kurumi/chibi/shiny.gbapal");
    const u8 gMonIcon_CKurumi[] = INCBIN_U8("graphics/pokemon/_add/th/kurumi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKurumi[] = INCBIN_U8("graphics/pokemon/_add/th/kurumi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kurumi[] = INCBIN_U32("graphics/pokemon/_add/th/kurumi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kurumi[] = INCBIN_U16("graphics/pokemon/_add/th/kurumi/normal/normal.gbapal");
    const u32 gMonBackPic_Kurumi[] = INCBIN_U32("graphics/pokemon/_add/th/kurumi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kurumi[] = INCBIN_U16("graphics/pokemon/_add/th/kurumi/normal/shiny.gbapal");
    const u8 gMonIcon_Kurumi[] = INCBIN_U8("graphics/pokemon/_add/th/kurumi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kurumi[] = INCBIN_U8("graphics/pokemon/_add/th/kurumi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CElly[] = INCBIN_U32("graphics/pokemon/_add/th/elly/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CElly[] = INCBIN_U16("graphics/pokemon/_add/th/elly/chibi/normal.gbapal");
    const u32 gMonBackPic_CElly[] = INCBIN_U32("graphics/pokemon/_add/th/elly/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CElly[] = INCBIN_U16("graphics/pokemon/_add/th/elly/chibi/shiny.gbapal");
    const u8 gMonIcon_CElly[] = INCBIN_U8("graphics/pokemon/_add/th/elly/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CElly[] = INCBIN_U8("graphics/pokemon/_add/th/elly/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Elly[] = INCBIN_U32("graphics/pokemon/_add/th/elly/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Elly[] = INCBIN_U16("graphics/pokemon/_add/th/elly/normal/normal.gbapal");
    const u32 gMonBackPic_Elly[] = INCBIN_U32("graphics/pokemon/_add/th/elly/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Elly[] = INCBIN_U16("graphics/pokemon/_add/th/elly/normal/shiny.gbapal");
    const u8 gMonIcon_Elly[] = INCBIN_U8("graphics/pokemon/_add/th/elly/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Elly[] = INCBIN_U8("graphics/pokemon/_add/th/elly/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKazami[] = INCBIN_U32("graphics/pokemon/_add/th/kazami/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CKazami[] = INCBIN_U16("graphics/pokemon/_add/th/kazami/chibi/normal.gbapal");
    const u32 gMonBackPic_CKazami[] = INCBIN_U32("graphics/pokemon/_add/th/kazami/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CKazami[] = INCBIN_U16("graphics/pokemon/_add/th/kazami/chibi/shiny.gbapal");
    const u8 gMonIcon_CKazami[] = INCBIN_U8("graphics/pokemon/_add/th/kazami/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKazami[] = INCBIN_U8("graphics/pokemon/_add/th/kazami/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kazami[] = INCBIN_U32("graphics/pokemon/_add/th/kazami/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kazami[] = INCBIN_U16("graphics/pokemon/_add/th/kazami/normal/normal.gbapal");
    const u32 gMonBackPic_Kazami[] = INCBIN_U32("graphics/pokemon/_add/th/kazami/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kazami[] = INCBIN_U16("graphics/pokemon/_add/th/kazami/normal/shiny.gbapal");
    const u8 gMonIcon_Kazami[] = INCBIN_U8("graphics/pokemon/_add/th/kazami/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kazami[] = INCBIN_U8("graphics/pokemon/_add/th/kazami/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKazami[] = INCBIN_U32("graphics/pokemon/_add/th/kazami/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_AKazami[] = INCBIN_U16("graphics/pokemon/_add/th/kazami/attack/normal.gbapal");
    const u32 gMonBackPic_AKazami[] = INCBIN_U32("graphics/pokemon/_add/th/kazami/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_AKazami[] = INCBIN_U16("graphics/pokemon/_add/th/kazami/attack/shiny.gbapal");
    const u8 gMonIcon_AKazami[] = INCBIN_U8("graphics/pokemon/_add/th/kazami/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKazami[] = INCBIN_U8("graphics/pokemon/_add/th/kazami/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMugetsu[] = INCBIN_U32("graphics/pokemon/_add/th/mugetsu/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMugetsu[] = INCBIN_U16("graphics/pokemon/_add/th/mugetsu/chibi/normal.gbapal");
    const u32 gMonBackPic_CMugetsu[] = INCBIN_U32("graphics/pokemon/_add/th/mugetsu/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMugetsu[] = INCBIN_U16("graphics/pokemon/_add/th/mugetsu/chibi/shiny.gbapal");
    const u8 gMonIcon_CMugetsu[] = INCBIN_U8("graphics/pokemon/_add/th/mugetsu/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMugetsu[] = INCBIN_U8("graphics/pokemon/_add/th/mugetsu/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mugetsu[] = INCBIN_U32("graphics/pokemon/_add/th/mugetsu/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Mugetsu[] = INCBIN_U16("graphics/pokemon/_add/th/mugetsu/normal/normal.gbapal");
    const u32 gMonBackPic_Mugetsu[] = INCBIN_U32("graphics/pokemon/_add/th/mugetsu/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Mugetsu[] = INCBIN_U16("graphics/pokemon/_add/th/mugetsu/normal/shiny.gbapal");
    const u8 gMonIcon_Mugetsu[] = INCBIN_U8("graphics/pokemon/_add/th/mugetsu/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mugetsu[] = INCBIN_U8("graphics/pokemon/_add/th/mugetsu/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CGengetsu[] = INCBIN_U32("graphics/pokemon/_add/th/gengetsu/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CGengetsu[] = INCBIN_U16("graphics/pokemon/_add/th/gengetsu/chibi/normal.gbapal");
    const u32 gMonBackPic_CGengetsu[] = INCBIN_U32("graphics/pokemon/_add/th/gengetsu/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CGengetsu[] = INCBIN_U16("graphics/pokemon/_add/th/gengetsu/chibi/shiny.gbapal");
    const u8 gMonIcon_CGengetsu[] = INCBIN_U8("graphics/pokemon/_add/th/gengetsu/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CGengetsu[] = INCBIN_U8("graphics/pokemon/_add/th/gengetsu/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Gengetsu[] = INCBIN_U32("graphics/pokemon/_add/th/gengetsu/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Gengetsu[] = INCBIN_U16("graphics/pokemon/_add/th/gengetsu/normal/normal.gbapal");
    const u32 gMonBackPic_Gengetsu[] = INCBIN_U32("graphics/pokemon/_add/th/gengetsu/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Gengetsu[] = INCBIN_U16("graphics/pokemon/_add/th/gengetsu/normal/shiny.gbapal");
    const u8 gMonIcon_Gengetsu[] = INCBIN_U8("graphics/pokemon/_add/th/gengetsu/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Gengetsu[] = INCBIN_U8("graphics/pokemon/_add/th/gengetsu/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSara[] = INCBIN_U32("graphics/pokemon/_add/th/sara/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSara[] = INCBIN_U16("graphics/pokemon/_add/th/sara/chibi/normal.gbapal");
    const u32 gMonBackPic_CSara[] = INCBIN_U32("graphics/pokemon/_add/th/sara/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSara[] = INCBIN_U16("graphics/pokemon/_add/th/sara/chibi/shiny.gbapal");
    const u8 gMonIcon_CSara[] = INCBIN_U8("graphics/pokemon/_add/th/sara/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSara[] = INCBIN_U8("graphics/pokemon/_add/th/sara/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sara[] = INCBIN_U32("graphics/pokemon/_add/th/sara/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sara[] = INCBIN_U16("graphics/pokemon/_add/th/sara/normal/normal.gbapal");
    const u32 gMonBackPic_Sara[] = INCBIN_U32("graphics/pokemon/_add/th/sara/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sara[] = INCBIN_U16("graphics/pokemon/_add/th/sara/normal/shiny.gbapal");
    const u8 gMonIcon_Sara[] = INCBIN_U8("graphics/pokemon/_add/th/sara/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sara[] = INCBIN_U8("graphics/pokemon/_add/th/sara/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLouise[] = INCBIN_U32("graphics/pokemon/_add/th/louise/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CLouise[] = INCBIN_U16("graphics/pokemon/_add/th/louise/chibi/normal.gbapal");
    const u32 gMonBackPic_CLouise[] = INCBIN_U32("graphics/pokemon/_add/th/louise/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CLouise[] = INCBIN_U16("graphics/pokemon/_add/th/louise/chibi/shiny.gbapal");
    const u8 gMonIcon_CLouise[] = INCBIN_U8("graphics/pokemon/_add/th/louise/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLouise[] = INCBIN_U8("graphics/pokemon/_add/th/louise/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Louise[] = INCBIN_U32("graphics/pokemon/_add/th/louise/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Louise[] = INCBIN_U16("graphics/pokemon/_add/th/louise/normal/normal.gbapal");
    const u32 gMonBackPic_Louise[] = INCBIN_U32("graphics/pokemon/_add/th/louise/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Louise[] = INCBIN_U16("graphics/pokemon/_add/th/louise/normal/shiny.gbapal");
    const u8 gMonIcon_Louise[] = INCBIN_U8("graphics/pokemon/_add/th/louise/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Louise[] = INCBIN_U8("graphics/pokemon/_add/th/louise/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMargatroid[] = INCBIN_U32("graphics/pokemon/_add/th/margatroid/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMargatroid[] = INCBIN_U16("graphics/pokemon/_add/th/margatroid/chibi/normal.gbapal");
    const u32 gMonBackPic_CMargatroid[] = INCBIN_U32("graphics/pokemon/_add/th/margatroid/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMargatroid[] = INCBIN_U16("graphics/pokemon/_add/th/margatroid/chibi/shiny.gbapal");
    const u8 gMonIcon_CMargatroid[] = INCBIN_U8("graphics/pokemon/_add/th/margatroid/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMargatroid[] = INCBIN_U8("graphics/pokemon/_add/th/margatroid/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Margatroid[] = INCBIN_U32("graphics/pokemon/_add/th/margatroid/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Margatroid[] = INCBIN_U16("graphics/pokemon/_add/th/margatroid/normal/normal.gbapal");
    const u32 gMonBackPic_Margatroid[] = INCBIN_U32("graphics/pokemon/_add/th/margatroid/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Margatroid[] = INCBIN_U16("graphics/pokemon/_add/th/margatroid/normal/shiny.gbapal");
    const u8 gMonIcon_Margatroid[] = INCBIN_U8("graphics/pokemon/_add/th/margatroid/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Margatroid[] = INCBIN_U8("graphics/pokemon/_add/th/margatroid/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuki[] = INCBIN_U32("graphics/pokemon/_add/th/yuki/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYuki[] = INCBIN_U16("graphics/pokemon/_add/th/yuki/chibi/normal.gbapal");
    const u32 gMonBackPic_CYuki[] = INCBIN_U32("graphics/pokemon/_add/th/yuki/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYuki[] = INCBIN_U16("graphics/pokemon/_add/th/yuki/chibi/shiny.gbapal");
    const u8 gMonIcon_CYuki[] = INCBIN_U8("graphics/pokemon/_add/th/yuki/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuki[] = INCBIN_U8("graphics/pokemon/_add/th/yuki/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuki[] = INCBIN_U32("graphics/pokemon/_add/th/yuki/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yuki[] = INCBIN_U16("graphics/pokemon/_add/th/yuki/normal/normal.gbapal");
    const u32 gMonBackPic_Yuki[] = INCBIN_U32("graphics/pokemon/_add/th/yuki/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yuki[] = INCBIN_U16("graphics/pokemon/_add/th/yuki/normal/shiny.gbapal");
    const u8 gMonIcon_Yuki[] = INCBIN_U8("graphics/pokemon/_add/th/yuki/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuki[] = INCBIN_U8("graphics/pokemon/_add/th/yuki/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMai[] = INCBIN_U32("graphics/pokemon/_add/th/mai/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CMai[] = INCBIN_U16("graphics/pokemon/_add/th/mai/chibi/normal.gbapal");
    const u32 gMonBackPic_CMai[] = INCBIN_U32("graphics/pokemon/_add/th/mai/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CMai[] = INCBIN_U16("graphics/pokemon/_add/th/mai/chibi/shiny.gbapal");
    const u8 gMonIcon_CMai[] = INCBIN_U8("graphics/pokemon/_add/th/mai/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMai[] = INCBIN_U8("graphics/pokemon/_add/th/mai/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mai[] = INCBIN_U32("graphics/pokemon/_add/th/mai/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Mai[] = INCBIN_U16("graphics/pokemon/_add/th/mai/normal/normal.gbapal");
    const u32 gMonBackPic_Mai[] = INCBIN_U32("graphics/pokemon/_add/th/mai/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Mai[] = INCBIN_U16("graphics/pokemon/_add/th/mai/normal/shiny.gbapal");
    const u8 gMonIcon_Mai[] = INCBIN_U8("graphics/pokemon/_add/th/mai/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mai[] = INCBIN_U8("graphics/pokemon/_add/th/mai/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYumeko[] = INCBIN_U32("graphics/pokemon/_add/th/yumeko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CYumeko[] = INCBIN_U16("graphics/pokemon/_add/th/yumeko/chibi/normal.gbapal");
    const u32 gMonBackPic_CYumeko[] = INCBIN_U32("graphics/pokemon/_add/th/yumeko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CYumeko[] = INCBIN_U16("graphics/pokemon/_add/th/yumeko/chibi/shiny.gbapal");
    const u8 gMonIcon_CYumeko[] = INCBIN_U8("graphics/pokemon/_add/th/yumeko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYumeko[] = INCBIN_U8("graphics/pokemon/_add/th/yumeko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yumeko[] = INCBIN_U32("graphics/pokemon/_add/th/yumeko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Yumeko[] = INCBIN_U16("graphics/pokemon/_add/th/yumeko/normal/normal.gbapal");
    const u32 gMonBackPic_Yumeko[] = INCBIN_U32("graphics/pokemon/_add/th/yumeko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Yumeko[] = INCBIN_U16("graphics/pokemon/_add/th/yumeko/normal/shiny.gbapal");
    const u8 gMonIcon_Yumeko[] = INCBIN_U8("graphics/pokemon/_add/th/yumeko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yumeko[] = INCBIN_U8("graphics/pokemon/_add/th/yumeko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShinki[] = INCBIN_U32("graphics/pokemon/_add/th/shinki/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CShinki[] = INCBIN_U16("graphics/pokemon/_add/th/shinki/chibi/normal.gbapal");
    const u32 gMonBackPic_CShinki[] = INCBIN_U32("graphics/pokemon/_add/th/shinki/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CShinki[] = INCBIN_U16("graphics/pokemon/_add/th/shinki/chibi/shiny.gbapal");
    const u8 gMonIcon_CShinki[] = INCBIN_U8("graphics/pokemon/_add/th/shinki/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShinki[] = INCBIN_U8("graphics/pokemon/_add/th/shinki/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shinki[] = INCBIN_U32("graphics/pokemon/_add/th/shinki/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Shinki[] = INCBIN_U16("graphics/pokemon/_add/th/shinki/normal/normal.gbapal");
    const u32 gMonBackPic_Shinki[] = INCBIN_U32("graphics/pokemon/_add/th/shinki/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Shinki[] = INCBIN_U16("graphics/pokemon/_add/th/shinki/normal/shiny.gbapal");
    const u8 gMonIcon_Shinki[] = INCBIN_U8("graphics/pokemon/_add/th/shinki/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shinki[] = INCBIN_U8("graphics/pokemon/_add/th/shinki/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Akyuu[] = INCBIN_U32("graphics/pokemon/_add/th/akyuu/anim_front.4bpp.smol");
    const u16 gMonPalette_Akyuu[] = INCBIN_U16("graphics/pokemon/_add/th/akyuu/normal.gbapal");
    const u32 gMonBackPic_Akyuu[] = INCBIN_U32("graphics/pokemon/_add/th/akyuu/back.4bpp.smol");
    const u16 gMonShinyPalette_Akyuu[] = INCBIN_U16("graphics/pokemon/_add/th/akyuu/shiny.gbapal");
    const u8 gMonIcon_Akyuu[] = INCBIN_U8("graphics/pokemon/_add/th/akyuu/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Akyuu[] = INCBIN_U8("graphics/pokemon/_add/th/akyuu/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rinnosuke[] = INCBIN_U32("graphics/pokemon/_add/th/rinnosuke/anim_front.4bpp.smol");
    const u16 gMonPalette_Rinnosuke[] = INCBIN_U16("graphics/pokemon/_add/th/rinnosuke/normal.gbapal");
    const u32 gMonBackPic_Rinnosuke[] = INCBIN_U32("graphics/pokemon/_add/th/rinnosuke/back.4bpp.smol");
    const u16 gMonShinyPalette_Rinnosuke[] = INCBIN_U16("graphics/pokemon/_add/th/rinnosuke/shiny.gbapal");
    const u8 gMonIcon_Rinnosuke[] = INCBIN_U8("graphics/pokemon/_add/th/rinnosuke/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rinnosuke[] = INCBIN_U8("graphics/pokemon/_add/th/rinnosuke/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Youki[] = INCBIN_U32("graphics/pokemon/_add/th/youki/anim_front.4bpp.smol");
    const u16 gMonPalette_Youki[] = INCBIN_U16("graphics/pokemon/_add/th/youki/normal.gbapal");
    const u32 gMonBackPic_Youki[] = INCBIN_U32("graphics/pokemon/_add/th/youki/back.4bpp.smol");
    const u16 gMonShinyPalette_Youki[] = INCBIN_U16("graphics/pokemon/_add/th/youki/shiny.gbapal");
    const u8 gMonIcon_Youki[] = INCBIN_U8("graphics/pokemon/_add/th/youki/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Youki[] = INCBIN_U8("graphics/pokemon/_add/th/youki/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tori[] = INCBIN_U32("graphics/pokemon/_add/th/tori/anim_front.4bpp.smol");
    const u16 gMonPalette_Tori[] = INCBIN_U16("graphics/pokemon/_add/th/tori/normal.gbapal");
    const u32 gMonBackPic_Tori[] = INCBIN_U32("graphics/pokemon/_add/th/tori/back.4bpp.smol");
    const u16 gMonShinyPalette_Tori[] = INCBIN_U16("graphics/pokemon/_add/th/tori/shiny.gbapal");
    const u8 gMonIcon_Tori[] = INCBIN_U8("graphics/pokemon/_add/th/tori/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tori[] = INCBIN_U8("graphics/pokemon/_add/th/tori/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Namazu[] = INCBIN_U32("graphics/pokemon/_add/th/namazu/anim_front.4bpp.smol");
    const u16 gMonPalette_Namazu[] = INCBIN_U16("graphics/pokemon/_add/th/namazu/normal.gbapal");
    const u32 gMonBackPic_Namazu[] = INCBIN_U32("graphics/pokemon/_add/th/namazu/back.4bpp.smol");
    const u16 gMonShinyPalette_Namazu[] = INCBIN_U16("graphics/pokemon/_add/th/namazu/shiny.gbapal");
    const u8 gMonIcon_Namazu[] = INCBIN_U8("graphics/pokemon/_add/th/namazu/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Namazu[] = INCBIN_U8("graphics/pokemon/_add/th/namazu/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tensoku[] = INCBIN_U32("graphics/pokemon/_add/th/tensoku/anim_front.4bpp.smol");
    const u16 gMonPalette_Tensoku[] = INCBIN_U16("graphics/pokemon/_add/th/tensoku/normal.gbapal");
    const u32 gMonBackPic_Tensoku[] = INCBIN_U32("graphics/pokemon/_add/th/tensoku/back.4bpp.smol");
    const u16 gMonShinyPalette_Tensoku[] = INCBIN_U16("graphics/pokemon/_add/th/tensoku/shiny.gbapal");
    const u8 gMonIcon_Tensoku[] = INCBIN_U8("graphics/pokemon/_add/th/tensoku/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tensoku[] = INCBIN_U8("graphics/pokemon/_add/th/tensoku/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AngelVivit[] = INCBIN_U32("graphics/pokemon/_add/sh/vivit/angel/anim_front.4bpp.smol");
    const u16 gMonPalette_AngelVivit[] = INCBIN_U16("graphics/pokemon/_add/sh/vivit/angel/normal.gbapal");
    const u32 gMonBackPic_AngelVivit[] = INCBIN_U32("graphics/pokemon/_add/sh/vivit/angel/back.4bpp.smol");
    const u16 gMonShinyPalette_AngelVivit[] = INCBIN_U16("graphics/pokemon/_add/sh/vivit/angel/shiny.gbapal");
    const u8 gMonIcon_AngelVivit[] = INCBIN_U8("graphics/pokemon/_add/sh/vivit/angel/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AngelVivit[] = INCBIN_U8("graphics/pokemon/_add/sh/vivit/angel/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSendai[] = INCBIN_U32("graphics/pokemon/_add/th/sendai/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSendai[] = INCBIN_U16("graphics/pokemon/_add/th/sendai/chibi/normal.gbapal");
    const u32 gMonBackPic_CSendai[] = INCBIN_U32("graphics/pokemon/_add/th/sendai/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSendai[] = INCBIN_U16("graphics/pokemon/_add/th/sendai/chibi/shiny.gbapal");
    const u8 gMonIcon_CSendai[] = INCBIN_U8("graphics/pokemon/_add/th/sendai/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSendai[] = INCBIN_U8("graphics/pokemon/_add/th/sendai/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sendai[] = INCBIN_U32("graphics/pokemon/_add/th/sendai/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sendai[] = INCBIN_U16("graphics/pokemon/_add/th/sendai/normal/normal.gbapal");
    const u32 gMonBackPic_Sendai[] = INCBIN_U32("graphics/pokemon/_add/th/sendai/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sendai[] = INCBIN_U16("graphics/pokemon/_add/th/sendai/normal/shiny.gbapal");
    const u8 gMonIcon_Sendai[] = INCBIN_U8("graphics/pokemon/_add/th/sendai/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sendai[] = INCBIN_U8("graphics/pokemon/_add/th/sendai/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSendai[] = INCBIN_U32("graphics/pokemon/_add/th/sendai/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TSendai[] = INCBIN_U16("graphics/pokemon/_add/th/sendai/tech/normal.gbapal");
    const u32 gMonBackPic_TSendai[] = INCBIN_U32("graphics/pokemon/_add/th/sendai/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TSendai[] = INCBIN_U16("graphics/pokemon/_add/th/sendai/tech/shiny.gbapal");
    const u8 gMonIcon_TSendai[] = INCBIN_U8("graphics/pokemon/_add/th/sendai/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSendai[] = INCBIN_U8("graphics/pokemon/_add/th/sendai/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTenma[] = INCBIN_U32("graphics/pokemon/_add/th/tenma/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CTenma[] = INCBIN_U16("graphics/pokemon/_add/th/tenma/chibi/normal.gbapal");
    const u32 gMonBackPic_CTenma[] = INCBIN_U32("graphics/pokemon/_add/th/tenma/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CTenma[] = INCBIN_U16("graphics/pokemon/_add/th/tenma/chibi/shiny.gbapal");
    const u8 gMonIcon_CTenma[] = INCBIN_U8("graphics/pokemon/_add/th/tenma/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTenma[] = INCBIN_U8("graphics/pokemon/_add/th/tenma/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tenma[] = INCBIN_U32("graphics/pokemon/_add/th/tenma/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Tenma[] = INCBIN_U16("graphics/pokemon/_add/th/tenma/normal/normal.gbapal");
    const u32 gMonBackPic_Tenma[] = INCBIN_U32("graphics/pokemon/_add/th/tenma/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Tenma[] = INCBIN_U16("graphics/pokemon/_add/th/tenma/normal/shiny.gbapal");
    const u8 gMonIcon_Tenma[] = INCBIN_U8("graphics/pokemon/_add/th/tenma/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tenma[] = INCBIN_U8("graphics/pokemon/_add/th/tenma/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_STenma[] = INCBIN_U32("graphics/pokemon/_add/th/tenma/speed/anim_front.4bpp.smol");
    const u16 gMonPalette_STenma[] = INCBIN_U16("graphics/pokemon/_add/th/tenma/speed/normal.gbapal");
    const u32 gMonBackPic_STenma[] = INCBIN_U32("graphics/pokemon/_add/th/tenma/speed/back.4bpp.smol");
    const u16 gMonShinyPalette_STenma[] = INCBIN_U16("graphics/pokemon/_add/th/tenma/speed/shiny.gbapal");
    const u8 gMonIcon_STenma[] = INCBIN_U8("graphics/pokemon/_add/th/tenma/speed/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_STenma[] = INCBIN_U8("graphics/pokemon/_add/th/tenma/speed/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAmelia[] = INCBIN_U32("graphics/pokemon/_add/etc/amelia/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CAmelia[] = INCBIN_U16("graphics/pokemon/_add/etc/amelia/chibi/normal.gbapal");
    const u32 gMonBackPic_CAmelia[] = INCBIN_U32("graphics/pokemon/_add/etc/amelia/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CAmelia[] = INCBIN_U16("graphics/pokemon/_add/etc/amelia/chibi/shiny.gbapal");
    const u8 gMonIcon_CAmelia[] = INCBIN_U8("graphics/pokemon/_add/etc/amelia/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAmelia[] = INCBIN_U8("graphics/pokemon/_add/etc/amelia/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Amelia[] = INCBIN_U32("graphics/pokemon/_add/etc/amelia/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Amelia[] = INCBIN_U16("graphics/pokemon/_add/etc/amelia/normal/normal.gbapal");
    const u32 gMonBackPic_Amelia[] = INCBIN_U32("graphics/pokemon/_add/etc/amelia/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Amelia[] = INCBIN_U16("graphics/pokemon/_add/etc/amelia/normal/shiny.gbapal");
    const u8 gMonIcon_Amelia[] = INCBIN_U8("graphics/pokemon/_add/etc/amelia/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Amelia[] = INCBIN_U8("graphics/pokemon/_add/etc/amelia/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CBijou[] = INCBIN_U32("graphics/pokemon/_add/etc/bijou/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CBijou[] = INCBIN_U16("graphics/pokemon/_add/etc/bijou/chibi/normal.gbapal");
    const u32 gMonBackPic_CBijou[] = INCBIN_U32("graphics/pokemon/_add/etc/bijou/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CBijou[] = INCBIN_U16("graphics/pokemon/_add/etc/bijou/chibi/shiny.gbapal");
    const u8 gMonIcon_CBijou[] = INCBIN_U8("graphics/pokemon/_add/etc/bijou/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CBijou[] = INCBIN_U8("graphics/pokemon/_add/etc/bijou/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Bijou[] = INCBIN_U32("graphics/pokemon/_add/etc/bijou/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Bijou[] = INCBIN_U16("graphics/pokemon/_add/etc/bijou/normal/normal.gbapal");
    const u32 gMonBackPic_Bijou[] = INCBIN_U32("graphics/pokemon/_add/etc/bijou/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Bijou[] = INCBIN_U16("graphics/pokemon/_add/etc/bijou/normal/shiny.gbapal");
    const u8 gMonIcon_Bijou[] = INCBIN_U8("graphics/pokemon/_add/etc/bijou/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Bijou[] = INCBIN_U8("graphics/pokemon/_add/etc/bijou/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kronii[] = INCBIN_U32("graphics/pokemon/_add/etc/kronii/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Kronii[] = INCBIN_U16("graphics/pokemon/_add/etc/kronii/normal/normal.gbapal");
    const u32 gMonBackPic_Kronii[] = INCBIN_U32("graphics/pokemon/_add/etc/kronii/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Kronii[] = INCBIN_U16("graphics/pokemon/_add/etc/kronii/normal/shiny.gbapal");
    const u8 gMonIcon_Kronii[] = INCBIN_U8("graphics/pokemon/_add/etc/kronii/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kronii[] = INCBIN_U8("graphics/pokemon/_add/etc/kronii/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Basiney[] = INCBIN_U32("graphics/pokemon/basiney/anim_front.4bpp.smol");
    const u16 gMonPalette_Basiney[] = INCBIN_U16("graphics/pokemon/basiney/normal.gbapal");
    const u32 gMonBackPic_Basiney[] = INCBIN_U32("graphics/pokemon/basiney/back.4bpp.smol");
    const u16 gMonShinyPalette_Basiney[] = INCBIN_U16("graphics/pokemon/basiney/shiny.gbapal");
    const u8 gMonIcon_Basiney[] = INCBIN_U8("graphics/pokemon/basiney/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Basiney[] = INCBIN_U8("graphics/pokemon/basiney/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Blissea[] = INCBIN_U32("graphics/pokemon/blissea/anim_front.4bpp.smol");
    const u16 gMonPalette_Blissea[] = INCBIN_U16("graphics/pokemon/blissea/normal.gbapal");
    const u32 gMonBackPic_Blissea[] = INCBIN_U32("graphics/pokemon/blissea/back.4bpp.smol");
    const u16 gMonShinyPalette_Blissea[] = INCBIN_U16("graphics/pokemon/blissea/shiny.gbapal");
    const u8 gMonIcon_Blissea[] = INCBIN_U8("graphics/pokemon/blissea/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Blissea[] = INCBIN_U8("graphics/pokemon/blissea/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSeiran[] = INCBIN_U32("graphics/pokemon/_add/th/seiran/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSeiran[] = INCBIN_U16("graphics/pokemon/_add/th/seiran/chibi/normal.gbapal");
    const u32 gMonBackPic_CSeiran[] = INCBIN_U32("graphics/pokemon/_add/th/seiran/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSeiran[] = INCBIN_U16("graphics/pokemon/_add/th/seiran/chibi/shiny.gbapal");
    const u8 gMonIcon_CSeiran[] = INCBIN_U8("graphics/pokemon/_add/th/seiran/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSeiran[] = INCBIN_U8("graphics/pokemon/_add/th/seiran/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Seiran[] = INCBIN_U32("graphics/pokemon/_add/th/seiran/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Seiran[] = INCBIN_U16("graphics/pokemon/_add/th/seiran/normal/normal.gbapal");
    const u32 gMonBackPic_Seiran[] = INCBIN_U32("graphics/pokemon/_add/th/seiran/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Seiran[] = INCBIN_U16("graphics/pokemon/_add/th/seiran/normal/shiny.gbapal");
    const u8 gMonIcon_Seiran[] = INCBIN_U8("graphics/pokemon/_add/th/seiran/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Seiran[] = INCBIN_U8("graphics/pokemon/_add/th/seiran/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASeiran[] = INCBIN_U32("graphics/pokemon/_add/th/seiran/attack/anim_front.4bpp.smol");
    const u16 gMonPalette_ASeiran[] = INCBIN_U16("graphics/pokemon/_add/th/seiran/attack/normal.gbapal");
    const u32 gMonBackPic_ASeiran[] = INCBIN_U32("graphics/pokemon/_add/th/seiran/attack/back.4bpp.smol");
    const u16 gMonShinyPalette_ASeiran[] = INCBIN_U16("graphics/pokemon/_add/th/seiran/attack/shiny.gbapal");
    const u8 gMonIcon_ASeiran[] = INCBIN_U8("graphics/pokemon/_add/th/seiran/attack/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASeiran[] = INCBIN_U8("graphics/pokemon/_add/th/seiran/attack/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRingo[] = INCBIN_U32("graphics/pokemon/_add/th/ringo/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CRingo[] = INCBIN_U16("graphics/pokemon/_add/th/ringo/chibi/normal.gbapal");
    const u32 gMonBackPic_CRingo[] = INCBIN_U32("graphics/pokemon/_add/th/ringo/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CRingo[] = INCBIN_U16("graphics/pokemon/_add/th/ringo/chibi/shiny.gbapal");
    const u8 gMonIcon_CRingo[] = INCBIN_U8("graphics/pokemon/_add/th/ringo/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRingo[] = INCBIN_U8("graphics/pokemon/_add/th/ringo/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ringo[] = INCBIN_U32("graphics/pokemon/_add/th/ringo/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Ringo[] = INCBIN_U16("graphics/pokemon/_add/th/ringo/normal/normal.gbapal");
    const u32 gMonBackPic_Ringo[] = INCBIN_U32("graphics/pokemon/_add/th/ringo/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Ringo[] = INCBIN_U16("graphics/pokemon/_add/th/ringo/normal/shiny.gbapal");
    const u8 gMonIcon_Ringo[] = INCBIN_U8("graphics/pokemon/_add/th/ringo/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ringo[] = INCBIN_U8("graphics/pokemon/_add/th/ringo/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HRingo[] = INCBIN_U32("graphics/pokemon/_add/th/ringo/helper/anim_front.4bpp.smol");
    const u16 gMonPalette_HRingo[] = INCBIN_U16("graphics/pokemon/_add/th/ringo/helper/normal.gbapal");
    const u32 gMonBackPic_HRingo[] = INCBIN_U32("graphics/pokemon/_add/th/ringo/helper/back.4bpp.smol");
    const u16 gMonShinyPalette_HRingo[] = INCBIN_U16("graphics/pokemon/_add/th/ringo/helper/shiny.gbapal");
    const u8 gMonIcon_HRingo[] = INCBIN_U8("graphics/pokemon/_add/th/ringo/helper/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HRingo[] = INCBIN_U8("graphics/pokemon/_add/th/ringo/helper/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CDoremy[] = INCBIN_U32("graphics/pokemon/_add/th/doremy/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CDoremy[] = INCBIN_U16("graphics/pokemon/_add/th/doremy/chibi/normal.gbapal");
    const u32 gMonBackPic_CDoremy[] = INCBIN_U32("graphics/pokemon/_add/th/doremy/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CDoremy[] = INCBIN_U16("graphics/pokemon/_add/th/doremy/chibi/shiny.gbapal");
    const u8 gMonIcon_CDoremy[] = INCBIN_U8("graphics/pokemon/_add/th/doremy/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CDoremy[] = INCBIN_U8("graphics/pokemon/_add/th/doremy/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Doremy[] = INCBIN_U32("graphics/pokemon/_add/th/doremy/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Doremy[] = INCBIN_U16("graphics/pokemon/_add/th/doremy/normal/normal.gbapal");
    const u32 gMonBackPic_Doremy[] = INCBIN_U32("graphics/pokemon/_add/th/doremy/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Doremy[] = INCBIN_U16("graphics/pokemon/_add/th/doremy/normal/shiny.gbapal");
    const u8 gMonIcon_Doremy[] = INCBIN_U8("graphics/pokemon/_add/th/doremy/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Doremy[] = INCBIN_U8("graphics/pokemon/_add/th/doremy/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSagume[] = INCBIN_U32("graphics/pokemon/_add/th/sagume/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSagume[] = INCBIN_U16("graphics/pokemon/_add/th/sagume/chibi/normal.gbapal");
    const u32 gMonBackPic_CSagume[] = INCBIN_U32("graphics/pokemon/_add/th/sagume/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSagume[] = INCBIN_U16("graphics/pokemon/_add/th/sagume/chibi/shiny.gbapal");
    const u8 gMonIcon_CSagume[] = INCBIN_U8("graphics/pokemon/_add/th/sagume/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSagume[] = INCBIN_U8("graphics/pokemon/_add/th/sagume/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sagume[] = INCBIN_U32("graphics/pokemon/_add/th/sagume/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Sagume[] = INCBIN_U16("graphics/pokemon/_add/th/sagume/normal/normal.gbapal");
    const u32 gMonBackPic_Sagume[] = INCBIN_U32("graphics/pokemon/_add/th/sagume/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Sagume[] = INCBIN_U16("graphics/pokemon/_add/th/sagume/normal/shiny.gbapal");
    const u8 gMonIcon_Sagume[] = INCBIN_U8("graphics/pokemon/_add/th/sagume/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sagume[] = INCBIN_U8("graphics/pokemon/_add/th/sagume/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CClownpiece[] = INCBIN_U32("graphics/pokemon/_add/th/clownpiece/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CClownpiece[] = INCBIN_U16("graphics/pokemon/_add/th/clownpiece/chibi/normal.gbapal");
    const u32 gMonBackPic_CClownpiece[] = INCBIN_U32("graphics/pokemon/_add/th/clownpiece/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CClownpiece[] = INCBIN_U16("graphics/pokemon/_add/th/clownpiece/chibi/shiny.gbapal");
    const u8 gMonIcon_CClownpiece[] = INCBIN_U8("graphics/pokemon/_add/th/clownpiece/chibi/icon.4bpp");
#if P_FOOTPRINTS //P_FOOTPRINTS
    const u8 gMonFootprint_CClownpiece[] = INCBIN_U8("graphics/pokemon/_add/th/clownpiece/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Clownpiece[] = INCBIN_U32("graphics/pokemon/_add/th/clownpiece/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Clownpiece[] = INCBIN_U16("graphics/pokemon/_add/th/clownpiece/normal/normal.gbapal");
    const u32 gMonBackPic_Clownpiece[] = INCBIN_U32("graphics/pokemon/_add/th/clownpiece/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Clownpiece[] = INCBIN_U16("graphics/pokemon/_add/th/clownpiece/normal/shiny.gbapal");
    const u8 gMonIcon_Clownpiece[] = INCBIN_U8("graphics/pokemon/_add/th/clownpiece/normal/icon.4bpp");
#if P_FOOTPRINTS //P_FOOTPRINTS
    const u8 gMonFootprint_Clownpiece[] = INCBIN_U8("graphics/pokemon/_add/th/clownpiece/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CJunko[] = INCBIN_U32("graphics/pokemon/_add/th/junko/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CJunko[] = INCBIN_U16("graphics/pokemon/_add/th/junko/chibi/normal.gbapal");
    const u32 gMonBackPic_CJunko[] = INCBIN_U32("graphics/pokemon/_add/th/junko/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CJunko[] = INCBIN_U16("graphics/pokemon/_add/th/junko/chibi/shiny.gbapal");
    const u8 gMonIcon_CJunko[] = INCBIN_U8("graphics/pokemon/_add/th/junko/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CJunko[] = INCBIN_U8("graphics/pokemon/_add/th/junko/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Junko[] = INCBIN_U32("graphics/pokemon/_add/th/junko/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Junko[] = INCBIN_U16("graphics/pokemon/_add/th/junko/normal/normal.gbapal");
    const u32 gMonBackPic_Junko[] = INCBIN_U32("graphics/pokemon/_add/th/junko/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Junko[] = INCBIN_U16("graphics/pokemon/_add/th/junko/normal/shiny.gbapal");
    const u8 gMonIcon_Junko[] = INCBIN_U8("graphics/pokemon/_add/th/junko/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Junko[] = INCBIN_U8("graphics/pokemon/_add/th/junko/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHecatiaOtherworld[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/otherworld/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CHecatiaOtherworld[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/otherworld/chibi/normal.gbapal");
    const u32 gMonBackPic_CHecatiaOtherworld[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/otherworld/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CHecatiaOtherworld[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/otherworld/chibi/shiny.gbapal");
    const u8 gMonIcon_CHecatiaOtherworld[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/otherworld/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHecatiaOtherworld[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/otherworld/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HecatiaOtherworld[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/otherworld/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_HecatiaOtherworld[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/otherworld/normal/normal.gbapal");
    const u32 gMonBackPic_HecatiaOtherworld[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/otherworld/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_HecatiaOtherworld[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/otherworld/normal/shiny.gbapal");
    const u8 gMonIcon_HecatiaOtherworld[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/otherworld/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HecatiaOtherworld[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/otherworld/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHecatiaEarth[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/earth/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CHecatiaEarth[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/earth/chibi/normal.gbapal");
    const u32 gMonBackPic_CHecatiaEarth[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/earth/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CHecatiaEarth[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/earth/chibi/shiny.gbapal");
    const u8 gMonIcon_CHecatiaEarth[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/earth/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHecatiaEarth[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/earth/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HecatiaEarth[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/earth/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_HecatiaEarth[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/earth/normal/normal.gbapal");
    const u32 gMonBackPic_HecatiaEarth[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/earth/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_HecatiaEarth[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/earth/normal/shiny.gbapal");
    const u8 gMonIcon_HecatiaEarth[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/earth/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HecatiaEarth[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/earth/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHecatiaMoon[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/moon/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CHecatiaMoon[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/moon/chibi/normal.gbapal");
    const u32 gMonBackPic_CHecatiaMoon[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/moon/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CHecatiaMoon[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/moon/chibi/shiny.gbapal");
    const u8 gMonIcon_CHecatiaMoon[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/moon/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHecatiaMoon[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/moon/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HecatiaMoon[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/moon/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_HecatiaMoon[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/moon/normal/normal.gbapal");
    const u32 gMonBackPic_HecatiaMoon[] = INCBIN_U32("graphics/pokemon/_add/th/hecatia/moon/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_HecatiaMoon[] = INCBIN_U16("graphics/pokemon/_add/th/hecatia/moon/normal/shiny.gbapal");
    const u8 gMonIcon_HecatiaMoon[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/moon/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HecatiaMoon[] = INCBIN_U8("graphics/pokemon/_add/th/hecatia/moon/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEternity[] = INCBIN_U32("graphics/pokemon/_add/th/eternity/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CEternity[] = INCBIN_U16("graphics/pokemon/_add/th/eternity/chibi/normal.gbapal");
    const u32 gMonBackPic_CEternity[] = INCBIN_U32("graphics/pokemon/_add/th/eternity/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CEternity[] = INCBIN_U16("graphics/pokemon/_add/th/eternity/chibi/shiny.gbapal");
    const u8 gMonIcon_CEternity[] = INCBIN_U8("graphics/pokemon/_add/th/eternity/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEternity[] = INCBIN_U8("graphics/pokemon/_add/th/eternity/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Eternity[] = INCBIN_U32("graphics/pokemon/_add/th/eternity/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Eternity[] = INCBIN_U16("graphics/pokemon/_add/th/eternity/normal/normal.gbapal");
    const u32 gMonBackPic_Eternity[] = INCBIN_U32("graphics/pokemon/_add/th/eternity/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Eternity[] = INCBIN_U16("graphics/pokemon/_add/th/eternity/normal/shiny.gbapal");
    const u8 gMonIcon_Eternity[] = INCBIN_U8("graphics/pokemon/_add/th/eternity/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Eternity[] = INCBIN_U8("graphics/pokemon/_add/th/eternity/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAunn[] = INCBIN_U32("graphics/pokemon/_add/th/aunn/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CAunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/chibi/normal.gbapal");
    const u32 gMonBackPic_CAunn[] = INCBIN_U32("graphics/pokemon/_add/th/aunn/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CAunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/chibi/shiny.gbapal");
    const u8 gMonIcon_CAunn[] = INCBIN_U8("graphics/pokemon/_add/th/aunn/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAunn[] = INCBIN_U8("graphics/pokemon/_add/th/aunn/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CAunn[] = INCBIN_COMP("graphics/pokemon/_add/th/aunn/chibi/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CAunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/chibi/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_CAunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/chibi/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Aunn[] = INCBIN_U32("graphics/pokemon/_add/th/aunn/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Aunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/normal/normal.gbapal");
    const u32 gMonBackPic_Aunn[] = INCBIN_U32("graphics/pokemon/_add/th/aunn/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Aunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/normal/shiny.gbapal");
    const u8 gMonIcon_Aunn[] = INCBIN_U8("graphics/pokemon/_add/th/aunn/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Aunn[] = INCBIN_U8("graphics/pokemon/_add/th/aunn/normal/footprint.1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Aunn[] = INCBIN_COMP("graphics/pokemon/_add/th/aunn/normal/overworld.4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Aunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/normal/overworld_normal.gbapal");
    const u16 gShinyOverworldPalette_Aunn[] = INCBIN_U16("graphics/pokemon/_add/th/aunn/normal/overworld_shiny.gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CNarumi[] = INCBIN_U32("graphics/pokemon/_add/th/narumi/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CNarumi[] = INCBIN_U16("graphics/pokemon/_add/th/narumi/chibi/normal.gbapal");
    const u32 gMonBackPic_CNarumi[] = INCBIN_U32("graphics/pokemon/_add/th/narumi/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CNarumi[] = INCBIN_U16("graphics/pokemon/_add/th/narumi/chibi/shiny.gbapal");
    const u8 gMonIcon_CNarumi[] = INCBIN_U8("graphics/pokemon/_add/th/narumi/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNarumi[] = INCBIN_U8("graphics/pokemon/_add/th/narumi/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Narumi[] = INCBIN_U32("graphics/pokemon/_add/th/narumi/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Narumi[] = INCBIN_U16("graphics/pokemon/_add/th/narumi/normal/normal.gbapal");
    const u32 gMonBackPic_Narumi[] = INCBIN_U32("graphics/pokemon/_add/th/narumi/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Narumi[] = INCBIN_U16("graphics/pokemon/_add/th/narumi/normal/shiny.gbapal");
    const u8 gMonIcon_Narumi[] = INCBIN_U8("graphics/pokemon/_add/th/narumi/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Narumi[] = INCBIN_U8("graphics/pokemon/_add/th/narumi/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSaki[] = INCBIN_U32("graphics/pokemon/_add/th/saki/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CSaki[] = INCBIN_U16("graphics/pokemon/_add/th/saki/chibi/normal.gbapal");
    const u32 gMonBackPic_CSaki[] = INCBIN_U32("graphics/pokemon/_add/th/saki/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CSaki[] = INCBIN_U16("graphics/pokemon/_add/th/saki/chibi/shiny.gbapal");
    const u8 gMonIcon_CSaki[] = INCBIN_U8("graphics/pokemon/_add/th/saki/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSaki[] = INCBIN_U8("graphics/pokemon/_add/th/saki/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Saki[] = INCBIN_U32("graphics/pokemon/_add/th/saki/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Saki[] = INCBIN_U16("graphics/pokemon/_add/th/saki/normal/normal.gbapal");
    const u32 gMonBackPic_Saki[] = INCBIN_U32("graphics/pokemon/_add/th/saki/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Saki[] = INCBIN_U16("graphics/pokemon/_add/th/saki/normal/shiny.gbapal");
    const u8 gMonIcon_Saki[] = INCBIN_U8("graphics/pokemon/_add/th/saki/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Saki[] = INCBIN_U8("graphics/pokemon/_add/th/saki/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTakane[] = INCBIN_U32("graphics/pokemon/_add/th/takane/chibi/anim_front.4bpp.smol");
    const u16 gMonPalette_CTakane[] = INCBIN_U16("graphics/pokemon/_add/th/takane/chibi/normal.gbapal");
    const u32 gMonBackPic_CTakane[] = INCBIN_U32("graphics/pokemon/_add/th/takane/chibi/back.4bpp.smol");
    const u16 gMonShinyPalette_CTakane[] = INCBIN_U16("graphics/pokemon/_add/th/takane/chibi/shiny.gbapal");
    const u8 gMonIcon_CTakane[] = INCBIN_U8("graphics/pokemon/_add/th/takane/chibi/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTakane[] = INCBIN_U8("graphics/pokemon/_add/th/takane/chibi/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Takane[] = INCBIN_U32("graphics/pokemon/_add/th/takane/normal/anim_front.4bpp.smol");
    const u16 gMonPalette_Takane[] = INCBIN_U16("graphics/pokemon/_add/th/takane/normal/normal.gbapal");
    const u32 gMonBackPic_Takane[] = INCBIN_U32("graphics/pokemon/_add/th/takane/normal/back.4bpp.smol");
    const u16 gMonShinyPalette_Takane[] = INCBIN_U16("graphics/pokemon/_add/th/takane/normal/shiny.gbapal");
    const u8 gMonIcon_Takane[] = INCBIN_U8("graphics/pokemon/_add/th/takane/normal/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Takane[] = INCBIN_U8("graphics/pokemon/_add/th/takane/normal/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TTakane[] = INCBIN_U32("graphics/pokemon/_add/th/takane/tech/anim_front.4bpp.smol");
    const u16 gMonPalette_TTakane[] = INCBIN_U16("graphics/pokemon/_add/th/takane/tech/normal.gbapal");
    const u32 gMonBackPic_TTakane[] = INCBIN_U32("graphics/pokemon/_add/th/takane/tech/back.4bpp.smol");
    const u16 gMonShinyPalette_TTakane[] = INCBIN_U16("graphics/pokemon/_add/th/takane/tech/shiny.gbapal");
    const u8 gMonIcon_TTakane[] = INCBIN_U8("graphics/pokemon/_add/th/takane/tech/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TTakane[] = INCBIN_U8("graphics/pokemon/_add/th/takane/tech/footprint.1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Egg[] = INCBIN_U32("graphics/pokemon/egg/anim_front.4bpp.smol");
    const u16 gMonPalette_Egg[] = INCBIN_U16("graphics/pokemon/egg/normal.gbapal");
    const u8 gMonIcon_Egg[] = INCBIN_U8("graphics/pokemon/egg/icon.4bpp");
