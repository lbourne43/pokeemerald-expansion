const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_MEGA_DRAIN, MOVE_HELPING_HAND, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SING, MOVE_CHARM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RASH
    },

    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WEEDLE] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_TWINEEDLE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_DRAGON_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_FEEBAS] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_WATER_PULSE, MOVE_MIRROR_COAT, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_METAPOD] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_WHIRLWIND},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_WHIRLWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_ROAR},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MILD
    },

    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WHISMUR] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SPINARAK] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SPIDER_WEB, MOVE_NIGHT_SHADE, MOVE_TOXIC},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FACADE, MOVE_DIG, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_HOPPIP] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_ACID_ARMOR, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_GENTLE
    },

    [FRONTIER_MON_SWINUB] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_PIDGEY] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_RATTATA] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_NAIVE
    },

    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_SECRET_POWER, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_HEAL_BELL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_SPEAROW] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_CONFUSION, MOVE_AERIAL_ACE, MOVE_FEINT_ATTACK, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_COMET_PUNCH, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_BASHFUL
    },

    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_ICY_WIND, MOVE_STUN_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WINGULL] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_WATER_PULSE, MOVE_AERIAL_ACE, MOVE_STOCKPILE, MOVE_SWALLOW},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MAREEP] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_SHOCK_WAVE, MOVE_FLASH, MOVE_REFLECT, MOVE_COTTON_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_SLAKOTH] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_YAWN, MOVE_SCRATCH, MOVE_ENCORE, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_EKANS] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_ACID, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_METAL_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_MAGNITUDE, MOVE_WATER_PULSE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL
    },

    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_PINECO] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_TAKE_DOWN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_SPHEAL] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ICE_BALL, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_MUD_SLAP},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SHROOMISH] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_LEECH_SEED, MOVE_HEADBUTT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_GRUDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH
    },

    [FRONTIER_MON_DUSKULL] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SKILL_SWAP, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIGHT_BALL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_LAX
    },

    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EXTREME_SPEED, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_BITE, MOVE_CHARM, MOVE_SWAGGER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_REMORAID] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_BALTOY] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_MUD_SLAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_LEER, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_METEOR_MASH, MOVE_TAKE_DOWN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GULPIN] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_TOXIC, MOVE_YAWN, MOVE_PAIN_SPLIT, MOVE_ATTRACT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYBEAM, MOVE_SUPERSONIC, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SUPERSONIC, MOVE_CLAMP, MOVE_WITHDRAW},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EMBER, MOVE_MAGNITUDE, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_BITE, MOVE_SCREECH, MOVE_SCARY_FACE, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_EMBER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_FURY_ATTACK, MOVE_UPROAR, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_SWABLU] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_TAKE_DOWN, MOVE_DREAM_EATER, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_BULLET_SEED, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_WHIRLPOOL, MOVE_ENDEAVOR, MOVE_MUD_SPORT, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_SCREECH, MOVE_ICY_WIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_CONFUSION, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SECRET_POWER, MOVE_BULLET_SEED, MOVE_MUD_SLAP, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SWEET_SCENT, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CONFUSION, MOVE_FURY_SWIPES, MOVE_AERIAL_ACE, MOVE_DISABLE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HASTY
    },

    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_WATERFALL, MOVE_FURY_ATTACK, MOVE_AGILITY, MOVE_PSYBEAM},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_NATU] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_FUTURE_SIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_FOLLOW_ME, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SUPERSONIC, MOVE_METAL_SOUND, MOVE_REFLECT},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_GENTLE
    },

    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_AURORA_BEAM, MOVE_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASPEAR_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE, MOVE_ROCK_TOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_MUD_SHOT, MOVE_FLAIL, MOVE_KNOCK_OFF},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_CHARM, MOVE_ATTRACT, MOVE_PSYCHIC, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_CONFUSION, MOVE_HEADBUTT, MOVE_DISABLE, MOVE_BARRIER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SCREECH, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CHINCHOU] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SPARK, MOVE_DIVE, MOVE_CONFUSE_RAY, MOVE_TAKE_DOWN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_TEDDIURSA] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_SECRET_POWER, MOVE_FAKE_TEARS, MOVE_FEINT_ATTACK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_PRESENT, MOVE_ICE_BALL, MOVE_AERIAL_ACE, MOVE_HAIL},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_HOUNDOUR] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_CRUNCH, MOVE_EMBER, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PHANPY] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_SPOINK] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYWAVE, MOVE_BOUNCE, MOVE_MAGIC_COAT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_ARON] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_METAL_SOUND, MOVE_ROAR},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_SWEET_KISS, MOVE_ATTRACT, MOVE_DIVE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ACID, MOVE_BARRIER, MOVE_WRAP},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_COTTON_SPORE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_UNOWN,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TORMENT, MOVE_HAZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MINIMIZE, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SKIPLOOM] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_MEGA_DRAIN, MOVE_CONFUSION, MOVE_COTTON_SPORE, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXTRASENSORY, MOVE_FAKE_OUT, MOVE_RAZOR_WIND, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_BRICK_BREAK, MOVE_ABSORB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_DIG, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_SCARY_FACE, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_CLAMPERL] = {
        .species = SPECIES_CLAMPERL,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_DEEP_SEA_SCALE,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_AGILITY},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SAND_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_ANCIENT_POWER, MOVE_ACID, MOVE_INGRAIN, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_METAL_CLAW, MOVE_FURY_CUTTER, MOVE_ANCIENT_POWER, MOVE_WATER_GUN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_AIPOM] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_FURY_SWIPES, MOVE_SAND_ATTACK, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_QUICK_ATTACK, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_NAIVE
    },

    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_STOMP, MOVE_HOWL, MOVE_ASTONISH, MOVE_SUPERSONIC},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_DOUBLE_KICK, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SANDSTORM},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MIRROR_COAT, MOVE_ATTRACT, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_CRUNCH, MOVE_FAKE_TEARS, MOVE_IRON_DEFENSE, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_WHIRLWIND},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_SLAP, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_DRAGON_BREATH, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_WHIRLWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_COMET_PUNCH, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_BASHFUL
    },

    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SPIDER_WEB, MOVE_NIGHT_SHADE, MOVE_TOXIC},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_YANMA] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_DETECT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_SECRET_POWER, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_HEAL_BELL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_WRAP, MOVE_SWEET_SCENT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 156, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_STUN_SPORE, MOVE_MOONLIGHT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_RECYCLE, MOVE_AGILITY},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_CONFUSION, MOVE_ROLE_PLAY, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WHIRLPOOL, MOVE_REST, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_TOXIC, MOVE_GRASS_WHISTLE, MOVE_COTTON_SPORE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SILVER_WIND, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_WISH, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SWEET_SCENT, MOVE_FURY_CUTTER},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE
    },

    [FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RASH
    },

    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_GRUDGE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH
    },

    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAME_WHEEL, MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SMOKESCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_BITE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_TAILWIND, MOVE_FOUL_PLAY, MOVE_TORMENT, MOVE_TAUNT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_SPARK, MOVE_FAKE_TEARS, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_ENCORE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_FURY_CUTTER, MOVE_ENDEAVOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_EMBER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FACADE, MOVE_DIG, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_ACID_ARMOR, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_GENTLE
    },

    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_DIG, MOVE_BITE, MOVE_SCARY_FACE, MOVE_SANDSTORM},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ICE_BALL, MOVE_HAIL, MOVE_SNORE, MOVE_REST},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_NAIVE
    },

    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_ICY_WIND, MOVE_STUN_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUDUNSPARCE,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_ROAR},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM_NORMAL,
        .moves = {MOVE_EMBER, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICY_WIND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_HASTY
    },

    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_HEADBUTT, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_SCARY_FACE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METAL_CLAW, MOVE_CONFUSION, MOVE_PURSUIT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_PETAL_DANCE, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYWAVE, MOVE_TAKE_DOWN, MOVE_HEAL_BELL, MOVE_SAFEGUARD},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_METAL_CLAW, MOVE_DIG, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HASTY
    },

    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PIN_MISSILE, MOVE_SPIKES, MOVE_MINIMIZE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_WATER_PULSE, MOVE_AERIAL_ACE, MOVE_STOCKPILE, MOVE_SWALLOW},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SLAM, MOVE_TOXIC, MOVE_BIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_FANG, MOVE_DIG, MOVE_BITE, MOVE_GLARE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SECRET_POWER, MOVE_PSYBEAM, MOVE_MAGIC_COAT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 0),
        .nature = NATURE_NAIVE
    },

    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_SLASH, MOVE_COUNTER, MOVE_ENCORE, MOVE_HYPER_BEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_CONFUSION, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_CONFUSION, MOVE_FIRE_SPIN, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_CONFUSION, MOVE_AERIAL_ACE, MOVE_FEINT_ATTACK, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SWIFT, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SYNTHESIS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYBEAM, MOVE_STOMP, MOVE_WISH, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_SPITE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MILD
    },

    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_BITE, MOVE_GLARE, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_SLASH, MOVE_DOUBLE_KICK, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_SANDSTORM, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_WATER_PULSE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_WHIRLWIND, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_LONELY
    },

    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AERIAL_ACE, MOVE_RAIN_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY, MOVE_STOMP, MOVE_SAND_ATTACK},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE
    },

    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_BITE, MOVE_RAZOR_WIND, MOVE_FUTURE_SIGHT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_SPIT_UP, MOVE_SLUDGE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_VISE_GRIP, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_MAGIC_COAT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_EMBER, MOVE_FIRE_SPIN, MOVE_SMOKESCREEN, MOVE_AMNESIA},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_ACID, MOVE_MEGA_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_HASTY
    },

    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_ROCK_BLAST},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WHIRLPOOL, MOVE_SCARY_FACE, MOVE_MUD_SLAP, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_ICY_WIND, MOVE_CONFUSION},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_HARDEN, MOVE_AMNESIA},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SPIKE_CANNON, MOVE_TICKLE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_BULLET_PUNCH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_AURORA_BEAM, MOVE_SPIKE_CANNON, MOVE_SUPERSONIC, MOVE_PROTECT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STONE_EDGE, MOVE_PROTECT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_DRAGON_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_AERIAL_ACE, MOVE_YAWN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_TAILWIND, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_DIG},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_SELF_DESTRUCT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_FOLLOW_ME},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUDUNSPARCE,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EXTREME_SPEED, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_PSYCHIC_FANGS, MOVE_SCARY_FACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM_NORMAL,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FRUSTRATION, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_GROWTH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_SCREECH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_WATER_PULSE, MOVE_BLIZZARD, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYCHIC, MOVE_FEINT_ATTACK, MOVE_AERIAL_ACE, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_GUILLOTINE, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_OVERHEAT, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_MEGA_KICK, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUD_SLAP, MOVE_SWAGGER},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_HIGH_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_MEGA_KICK, MOVE_SMELLING_SALTS, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_FAKE_OUT, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_HEADBUTT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_COUNTER, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_HAIL, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, MOVE_THUNDER_WAVE, MOVE_BODY_PRESS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FOLLOW_ME, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_REFRESH, MOVE_BODY_SLAM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_SLASH, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 170, 170, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_MEGA_KICK, MOVE_CRUNCH, MOVE_AERIAL_ACE, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB, MOVE_ROAR},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_MAGICAL_LEAF, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FEINT_ATTACK, MOVE_FACADE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_PROTECT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 170, 170),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_AERIAL_ACE, MOVE_DETECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_HURRICANE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SMOKESCREEN, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_REST, MOVE_CURSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_BREATH, MOVE_ICY_WIND, MOVE_ATTRACT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_SOFT_BOILED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_YAWN, MOVE_BULK_UP, MOVE_SWAGGER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_TRI_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_PSYCHIC, MOVE_FAKE_OUT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_YAWN, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_FEINT_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_ROAR, MOVE_DRILL_PECK, MOVE_TOXIC},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_DOUBLE_TEAM, MOVE_FOLLOW_ME},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_SERIOUS
    },

    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEECH_SEED, MOVE_DIG, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_BODY_SLAM, MOVE_ICY_WIND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_FIRE_PUNCH, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 140),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_FACADE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_BREATH, MOVE_PURSUIT, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SMOKESCREEN, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_IRON_TAIL, MOVE_ANCIENT_POWER, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_DYNAMIC_PUNCH},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ATTRACT, MOVE_BULK_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_BODY_SLAM, MOVE_GRUDGE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_FLASH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },

    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_GRASS_WHISTLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_MEGA_KICK, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_BURNING_JEALOUSY, MOVE_TAILWIND, MOVE_ROOST, MOVE_HEAT_WAVE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SAFEGUARD, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCH_UP, MOVE_SWAGGER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_FISSURE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MISDREAVUS_3] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_STEEL_WING, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_DUSCLOPS_3] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_IRON_TAIL, MOVE_FOCUS_PUNCH, MOVE_ATTRACT, MOVE_SPORE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ZAP_CANNON},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_SURF, MOVE_FISSURE},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_STEEL_WING},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_REST, MOVE_FLY},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MAGICAL_LEAF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FACADE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_IRON_TAIL, MOVE_ATTRACT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_OVERHEAT, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_EXTRASENSORY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_SYNTHESIS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_MEGA_KICK, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH, MOVE_HEAVY_SLAM, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 156, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_RHYDON_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_MEGAHORN, MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_HORN_DRILL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_TRICK, MOVE_DISABLE, MOVE_PSYCHIC, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_ELECTABUZZ_3] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 170, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_SING, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SURF},
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MAGMAR_3] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_MEGA_KICK, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_COUNTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HYPNOSIS},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 170, 170, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SKILL_SWAP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_SLASH},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 170, 170, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SECRET_POWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FISSURE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_IRON_TAIL, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_PSYCHIC, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_MOONBLAST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_BATON_PASS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAIL, MOVE_ENDURE, MOVE_OVERHEAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_WISH, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ATTRACT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SHEER_COLD, MOVE_FISSURE, MOVE_SURF, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_BLAST_BURN, MOVE_ANCIENT_POWER, MOVE_AIR_SLASH, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 112),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_ATTRACT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_AERIAL_ACE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FISSURE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_MISDREAVUS_4] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_DESTINY_BOND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SKY_ATTACK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_FAKE_TEARS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_DUSCLOPS_4] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_DRILL_PECK, MOVE_FACADE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SLUDGE_BOMB, MOVE_SPORE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_FISSURE, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_MEGA_KICK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT, MOVE_MEGA_KICK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },

    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_MEGA_KICK, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE, MOVE_PROTECT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_RHYDON_4] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HORN_DRILL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION, MOVE_SHADOW_BALL},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ELECTABUZZ_4] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_MEGA_KICK, MOVE_CROSS_CHOP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_SASSY
    },

    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_MILK_DRINK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MAGMAR_4] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_TOXIC, MOVE_INGRAIN, MOVE_MIRROR_COAT, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_ICE_BEAM, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_DOUBLE_KICK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_FISSURE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WRAP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },

    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_BITE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_WIDE_GUARD, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_DOUBLE_EDGE, MOVE_CRUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 170, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_ATTRACT, MOVE_CALM_MIND},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SHEER_COLD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_OVERHEAT, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_COUNTER, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_YAWN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_AERIAL_ACE, MOVE_MUD_SLAP, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_EDGE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AMNESIA, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_REFLECT},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SAFEGUARD},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },

    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BITE, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_HAIL, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_SHADOW_BALL, MOVE_CHARM, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_URSARING_5] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_URSARING_6] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HYPER_BEAM, MOVE_YAWN, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_URSARING_7] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_URSARING_8] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENDURE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_GARDEVOIR_6] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },

    [FRONTIER_MON_GARDEVOIR_7] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },

    [FRONTIER_MON_GARDEVOIR_8] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_BELLY_DRUM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_SALAMENCE_6] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_HEADBUTT, MOVE_AERIAL_ACE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_SALAMENCE_7] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SALAMENCE_8] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_METAGROSS_5] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_METAGROSS_6] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METAGROSS_7] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },

    [FRONTIER_MON_METAGROSS_8] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_HYPER_BEAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_CLAW, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_DRAGON_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_TAILWIND, MOVE_ROOST, MOVE_BODY_SLAM, MOVE_DRAGON_TAIL},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_THUNDERBOLT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_ICE_SPINNER, MOVE_EXTREME_SPEED, MOVE_ROOST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 144, 0, 0, 0, 112),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_AERIAL_ACE, MOVE_SUPERPOWER, MOVE_DRAGON_CLAW, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DRAGON_TAIL, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_ROOST},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_NAIVE
    },

    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_THUNDER_WAVE, MOVE_DRAGON_TAIL, MOVE_ROOST, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_CLEAR_AMULET,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_PROTECT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },

    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_HIGH_HORSEPOWER, MOVE_THUNDER_PUNCH, MOVE_HEAVY_SLAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 156, 0),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SNARL, MOVE_PROTECT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_TYRANITAR_5] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 156),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_TYRANITAR_6] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 140),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TYRANITAR_7] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE, MOVE_DRAGON_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },

    [FRONTIER_MON_TYRANITAR_8] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_STONE_EDGE, MOVE_WILD_CHARGE, MOVE_STOMPING_TANTRUM, MOVE_SNARL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 80, 0, 0, 176, 0),
        .nature = NATURE_CAREFUL
    },

    [FRONTIER_MON_TYRANITAR_9] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_WILD_CHARGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },

    [FRONTIER_MON_TYRANITAR_10] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },

    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SWAGGER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_AERIAL_ACE, MOVE_REFLECT, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_DRILL_PECK, MOVE_RAIN_DANCE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ROAR, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_ENTEI_5] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_DOUBLE_EDGE, MOVE_ENDURE, MOVE_REFLECT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },

    [FRONTIER_MON_ENTEI_6] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_HEAVY_SLAM, MOVE_SNARL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SUICUNE_5] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_ICY_WIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_SUICUNE_6] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },

    [FRONTIER_MON_BAL_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TAUNT, MOVE_TOXIC, MOVE_BRAVE_BIRD, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_BAL_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TAUNT, MOVE_TOXIC, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_BAL_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TAUNT, MOVE_ICY_WIND, MOVE_BRAVE_BIRD, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_BAL_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TAUNT, MOVE_TOXIC, MOVE_BRAVE_BIRD, MOVE_DEFOG},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_BAL_CROBAT_5] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TAUNT, MOVE_TOXIC, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_BAL_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SLEEP_POWDER, MOVE_HURRICANE, MOVE_RAGE_POWDER, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_COMPOUND_EYES
    },

    [FRONTIER_MON_BAL_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TINTED_LENS
    },

    [FRONTIER_MON_BAL_BUTTERFREE_3] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SLEEP_POWDER, MOVE_POLLEN_PUFF, MOVE_QUIVER_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_COMPOUND_EYES
    },

    [FRONTIER_MON_BAL_BUTTERFREE_4] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SLEEP_POWDER, MOVE_STRUGGLE_BUG, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_COMPOUND_EYES
    },

    [FRONTIER_MON_BAL_BUTTERFREE_5] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SLEEP_POWDER, MOVE_HURRICANE, MOVE_POLLEN_PUFF, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TINTED_LENS
    },

    [FRONTIER_MON_BAL_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_HYPER_CUTTER
    },

    [FRONTIER_MON_BAL_PINSIR_3] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_PINSIR_4] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_HYPER_CUTTER
    },

    [FRONTIER_MON_BAL_PINSIR_5] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_FEINT, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_VIVILLON_1] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_SLEEP_POWDER, MOVE_HURRICANE, MOVE_RAGE_POWDER, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_COMPOUND_EYES
    },

    [FRONTIER_MON_BAL_VIVILLON_2] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_POLLEN_PUFF, MOVE_STRUGGLE_BUG, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_FRIEND_GUARD
    },

    [FRONTIER_MON_BAL_VIVILLON_3] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_COMPOUND_EYES
    },

    [FRONTIER_MON_BAL_VIVILLON_4] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_SLEEP_POWDER, MOVE_POLLEN_PUFF, MOVE_STRUGGLE_BUG, MOVE_TAILWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_COMPOUND_EYES
    },

    [FRONTIER_MON_BAL_VIVILLON_5] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_RAGE_POWDER, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FRIEND_GUARD
    },

    [FRONTIER_MON_BAL_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_BAL_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_MEGAHORN, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWARM
    },

    [FRONTIER_MON_BAL_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_BAL_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SWARM
    },

    [FRONTIER_MON_BAL_HERACROSS_5] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_FACADE, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_BAL_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BIG_PECKS
    },

    [FRONTIER_MON_BAL_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BIG_PECKS
    },

    [FRONTIER_MON_BAL_PIDGEOT_3] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TANGLED_FEET
    },

    [FRONTIER_MON_BAL_PIDGEOT_4] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_DEFOG, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BIG_PECKS
    },

    [FRONTIER_MON_BAL_PIDGEOT_5] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TANGLED_FEET
    },

    [FRONTIER_MON_BAL_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_STURDY
    },

    [FRONTIER_MON_BAL_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_STURDY
    },

    [FRONTIER_MON_BAL_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_IRON_HEAD, MOVE_SNARL, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_STURDY
    },

    [FRONTIER_MON_BAL_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_STURDY
    },

    [FRONTIER_MON_BAL_SKARMORY_5] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SNARL, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_STURDY
    },

    [FRONTIER_MON_BAL_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_ROOST, MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_MOONBLAST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_BAL_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_CLOUD_NINE
    },

    [FRONTIER_MON_BAL_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_BAL_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_MOONBLAST, MOVE_WILL_O_WISP, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_CLOUD_NINE
    },

    [FRONTIER_MON_BAL_ALTARIA_5] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_HURRICANE, MOVE_ICE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CLOUD_NINE
    },

    [FRONTIER_MON_BAL_STARAPTOR_1] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_FINAL_GAMBIT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_STARAPTOR_2] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_STARAPTOR_3] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_STARAPTOR_4] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_QUICK_ATTACK, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_STARAPTOR_5] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_LOKIX_1] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_THROAT_CHOP, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_TINTED_LENS
    },

    [FRONTIER_MON_BAL_LOKIX_2] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_U_TURN, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_TINTED_LENS
    },

    [FRONTIER_MON_BAL_LOKIX_3] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_SUCKER_PUNCH, MOVE_LEECH_LIFE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SWARM
    },

    [FRONTIER_MON_BAL_LOKIX_4] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_TINTED_LENS
    },

    [FRONTIER_MON_BAL_LOKIX_5] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE, MOVE_THROAT_CHOP, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SWARM
    },

    [FRONTIER_MON_BAL_ARIADOS_1] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_STICKY_WEB, MOVE_MEGAHORN, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INSOMNIA
    },

    [FRONTIER_MON_BAL_ARIADOS_2] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_TOXIC_THREAD, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_MEGAHORN},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_SWARM
    },

    [FRONTIER_MON_BAL_ARIADOS_3] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_STICKY_WEB, MOVE_U_TURN, MOVE_LEECH_LIFE, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SWARM
    },

    [FRONTIER_MON_BAL_ARIADOS_4] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_STICKY_WEB, MOVE_MEGAHORN, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INSOMNIA
    },

    [FRONTIER_MON_BAL_ARIADOS_5] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_FELL_STINGER, MOVE_LEECH_LIFE, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SNIPER
    },

    [FRONTIER_MON_BAL_DRAPION_1] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_SNARL, MOVE_ICE_FANG},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BATTLE_ARMOR
    },

    [FRONTIER_MON_BAL_DRAPION_2] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_SNARL, MOVE_TAUNT, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_BATTLE_ARMOR
    },

    [FRONTIER_MON_BAL_DRAPION_3] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_BATTLE_ARMOR
    },

    [FRONTIER_MON_BAL_DRAPION_4] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_SNARL, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_BATTLE_ARMOR
    },

    [FRONTIER_MON_BAL_DRAPION_5] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_AQUA_TAIL, MOVE_ICE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SNIPER
    },

    [FRONTIER_MON_BAL_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_TAUNT, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_TAUNT, MOVE_SNARL, MOVE_FLAMETHROWER, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_TAUNT, MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_HOUNDOOM_5] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_SNARL, MOVE_FLAMETHROWER, MOVE_FOUL_PLAY, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_TAUNT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CURSED_BODY
    },

    [FRONTIER_MON_BAL_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_TAUNT, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CURSED_BODY
    },

    [FRONTIER_MON_BAL_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_TAUNT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CURSED_BODY
    },

    [FRONTIER_MON_BAL_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_TAUNT, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CURSED_BODY
    },

    [FRONTIER_MON_BAL_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_TAUNT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CURSED_BODY
    },

    [FRONTIER_MON_BAL_SNEASLER_1] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_FAKE_OUT, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_SNEASLER_2] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_SNEASLER_3] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_FAKE_OUT, MOVE_ICY_WIND},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_SNEASLER_4] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_FAKE_OUT, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_SNEASLER_5] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_WHIMSICOTT_1] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_WHIMSICOTT_2] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_HELPING_HAND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_WHIMSICOTT_3] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_WHIMSICOTT_4] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_WHIMSICOTT_5] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_MOONBLAST, MOVE_HELPING_HAND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_TAUNT, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_TAUNT, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_GYARADOS_5] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_TAUNT, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_SPORE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_BAL_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_BAL_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DRAIN_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_POISON_HEAL
    },

    [FRONTIER_MON_BAL_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_BAL_BRELOOM_5] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_LOW_SWEEP, MOVE_PROTECT},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_BAL_DRIFBLIM_1] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_TAILWIND, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_DRIFBLIM_2] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_DRIFBLIM_3] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_STRENGTH_SAP, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_TAILWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_DRIFBLIM_4] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_UNBURDEN
    },

    [FRONTIER_MON_BAL_DRIFBLIM_5] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_ICY_WIND, MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL, MOVE_TAILWIND},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_AFTERMATH
    },

    [FRONTIER_MON_BAL_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_EXCADRILL_5] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_BAL_AMOONGUS_1] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_BAL_AMOONGUS_2] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_TOXIC},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_BAL_AMOONGUS_3] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_BAL_AMOONGUS_4] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_TOXIC},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_BAL_AMOONGUS_5] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_BAL_GALLADE_1] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_BAL_GALLADE_2] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_BAL_GALLADE_3] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_BAL_GALLADE_4] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_TAUNT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_BAL_GALLADE_5] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_TRICK_ROOM, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_BAL_ANNIHILAPE_1] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_TAUNT, MOVE_DRAIN_PUNCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_DEFIANT
    },

    [FRONTIER_MON_BAL_ANNIHILAPE_2] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_TAUNT, MOVE_DRAIN_PUNCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_DEFIANT
    },

    [FRONTIER_MON_BAL_ANNIHILAPE_3] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_TAUNT, MOVE_DRAIN_PUNCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_DEFIANT
    },

    [FRONTIER_MON_BAL_ANNIHILAPE_4] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_TAUNT, MOVE_DRAIN_PUNCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_DEFIANT
    },

    [FRONTIER_MON_BAL_ANNIHILAPE_5] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_TAUNT, MOVE_DRAIN_PUNCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_DEFIANT
    },

    [FRONTIER_MON_BAL_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_BAL_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_BAL_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_BAL_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_BAL_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_BAL_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_SYNCHRONIZE
    },

    [FRONTIER_MON_BAL_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_SYNCHRONIZE
    },

    [FRONTIER_MON_BAL_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_SYNCHRONIZE
    },

    [FRONTIER_MON_BAL_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_SYNCHRONIZE
    },

    [FRONTIER_MON_BAL_ALAKAZAM_5] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TAUNT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_SYNCHRONIZE
    },

    [FRONTIER_MON_BAL_GRIMMSNARL_1] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_SPIRIT_BREAK, MOVE_TAUNT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_GRIMMSNARL_2] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_SPIRIT_BREAK, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_GRIMMSNARL_3] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_SPIRIT_BREAK, MOVE_TAUNT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_GRIMMSNARL_4] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_SPIRIT_BREAK, MOVE_TAUNT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_GRIMMSNARL_5] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_SPIRIT_BREAK, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_IRON_HANDS_1] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_HANDS_2] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_HANDS_3] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_HANDS_4] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_HANDS_5] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_RILLABOOM_1] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GRASSY_SURGE
    },

    [FRONTIER_MON_BAL_RILLABOOM_2] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_U_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GRASSY_SURGE
    },

    [FRONTIER_MON_BAL_RILLABOOM_3] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_U_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GRASSY_SURGE
    },

    [FRONTIER_MON_BAL_RILLABOOM_4] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GRASSY_SURGE
    },

    [FRONTIER_MON_BAL_RILLABOOM_5] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GRASSY_SURGE
    },

    [FRONTIER_MON_BAL_TALONFLAME_1] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_BAL_TALONFLAME_2] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_BAL_TALONFLAME_3] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_BAL_TALONFLAME_4] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_BAL_TALONFLAME_5] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_BAL_LANDORUS_T_1] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_SUPERPOWER, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_LANDORUS_T_2] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_LANDORUS_T_3] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_U_TURN, MOVE_TAUNT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_LANDORUS_T_4] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_LANDORUS_T_5] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_U_TURN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_THUNDURUS_1] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_WILDBOLT_STORM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_THUNDURUS_2] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_WILD_CHARGE, MOVE_BRICK_BREAK, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_DEFIANT
    },

    [FRONTIER_MON_BAL_THUNDURUS_3] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_EERIE_IMPULSE, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_THUNDURUS_4] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_THUNDURUS_5] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_TOGEKISS_1] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_FOLLOW_ME, MOVE_AIR_SLASH, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_SERENE_GRACE
    },

    [FRONTIER_MON_BAL_TOGEKISS_2] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_SUPER_LUCK
    },

    [FRONTIER_MON_BAL_TOGEKISS_3] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_FOLLOW_ME, MOVE_AIR_SLASH, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_BABIRI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_SERENE_GRACE
    },

    [FRONTIER_MON_BAL_TOGEKISS_4] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SERENE_GRACE
    },

    [FRONTIER_MON_BAL_TOGEKISS_5] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_FOLLOW_ME, MOVE_AIR_SLASH, MOVE_ENCORE, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_SERENE_GRACE
    },

    [FRONTIER_MON_BAL_INCINEROAR_1] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_INCINEROAR_2] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FAKE_OUT, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_INCINEROAR_3] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_TAUNT, MOVE_PARTING_SHOT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_INCINEROAR_4] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_INCINEROAR_5] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_HELPING_HAND, MOVE_PARTING_SHOT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_ARCANINE_H_1] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_ARCANINE_H_2] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_BULLDOZE, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_ARCANINE_H_3] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_ARCANINE_H_4] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_SNARL, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_ARCANINE_H_5] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_ROAR},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_GREAT_TUSK_1] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_GREAT_TUSK_2] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_GREAT_TUSK_3] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_GREAT_TUSK_4] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_BULK_UP, MOVE_BODY_PRESS, MOVE_ICE_SPINNER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_GREAT_TUSK_5] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_CLEAR_AMULET,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_BAL_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_ICE_SPINNER, MOVE_STOMPING_TANTRUM, MOVE_AERIAL_ACE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_BAL_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_BAL_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_DRAGON_CLAW, MOVE_SUPERPOWER, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_BAL_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_TAILWIND, MOVE_EXTREME_SPEED, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_BAL_CHI_YU_1] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_PROTECT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_BAL_CHI_YU_2] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_OVERHEAT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_BAL_CHI_YU_3] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_DARK_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_BAL_CHI_YU_4] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_OVERHEAT, MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_BAL_CHI_YU_5] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_BAL_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_TAUNT, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY, MOVE_RECOVER},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_WILL_O_WISP, MOVE_ENCORE, MOVE_FOUL_PLAY, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_SABLEYE_3] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_QUASH, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY, MOVE_RECOVER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_SABLEYE_4] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_SABLEYE_5] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_TRICK, MOVE_RECOVER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_MEOWSCARADA_1] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTEAN
    },

    [FRONTIER_MON_BAL_MEOWSCARADA_2] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_U_TURN, MOVE_PLAY_ROUGH, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTEAN
    },

    [FRONTIER_MON_BAL_MEOWSCARADA_3] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTEAN
    },

    [FRONTIER_MON_BAL_MEOWSCARADA_4] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_OVERGROW
    },

    [FRONTIER_MON_BAL_MEOWSCARADA_5] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTEAN
    },

    [FRONTIER_MON_BAL_SYLVEON_1] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_PROTECT, MOVE_YAWN},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PIXILATE
    },

    [FRONTIER_MON_BAL_SYLVEON_2] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_PIXILATE
    },

    [FRONTIER_MON_BAL_SYLVEON_3] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_PIXIE_PLATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PIXILATE
    },

    [FRONTIER_MON_BAL_SYLVEON_4] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_BABIRI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PIXILATE
    },

    [FRONTIER_MON_BAL_SYLVEON_5] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_ICY_WIND, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PIXILATE
    },

    [FRONTIER_MON_BAL_VOLCARONA_1] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_RAGE_POWDER, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_BAL_VOLCARONA_2] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_HEAT_WAVE, MOVE_STRUGGLE_BUG, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_BAL_VOLCARONA_3] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_BAL_VOLCARONA_4] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_HEAT_WAVE, MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_PROTECT},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_BAL_VOLCARONA_5] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_HEAT_WAVE, MOVE_WHIRLWIND, MOVE_STRUGGLE_BUG, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_BAL_HYDREIGON_1] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_SNARL, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_HYDREIGON_2] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_HYDREIGON_3] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_HYDREIGON_4] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_SNARL, MOVE_DARK_PULSE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_HYDREIGON_5] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_IMPRISON, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_CHANDELURE_3] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_CHANDELURE_4] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_TRICK, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_CHANDELURE_5] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_BAL_MOLTRES_G_1] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_BERSERK
    },

    [FRONTIER_MON_BAL_MOLTRES_G_2] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_SNARL, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BERSERK
    },

    [FRONTIER_MON_BAL_MOLTRES_G_3] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_BERSERK
    },

    [FRONTIER_MON_BAL_MOLTRES_G_4] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_SUBSTITUTE, MOVE_NASTY_PLOT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_BERSERK
    },

    [FRONTIER_MON_BAL_MOLTRES_G_5] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_TAUNT, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BERSERK
    },

    [FRONTIER_MON_BAL_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SOLAR_POWER
    },

    [FRONTIER_MON_BAL_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_OVERHEAT, MOVE_HURRICANE, MOVE_WILL_O_WISP, MOVE_ROOST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(244, 0, 36, 204, 4, 20),
        .nature = NATURE_MODEST
        .ability = ABILITY_BLAZE
    },

    [FRONTIER_MON_BAL_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_FAKE_TEARS, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BLAZE
    },

    [FRONTIER_MON_BAL_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_HURRICANE, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_SOLAR_POWER
    },

    [FRONTIER_MON_BAL_CHARIZARD_5] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_MYSTICAL_FIRE, MOVE_AIR_SLASH, MOVE_HELPING_HAND, MOVE_TAILWIND},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BLAZE
    },

    [FRONTIER_MON_BAL_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_TAILWIND, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_UNNERVE
    },

    [FRONTIER_MON_BAL_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_STONE_EDGE, MOVE_FIRE_FANG, MOVE_ICE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_BAL_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_WIDE_GUARD, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_THUNDER_FANG, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_BAL_AERODACTYL_5] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_ROCK_TOMB, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_CLEAR_AMULET,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_BAL_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_TAIL, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_FIRE_FANG},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 100, 0, 156, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_BAL_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_BAL_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_BAL_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_TAIL, MOVE_ROCK_TOMB, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_BAL_ROARING_MOON_1] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_ROARING_MOON_2] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_ROARING_MOON_3] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_ROARING_MOON_4] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_ROARING_MOON_5] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_BAL_SKELEDIRGE_1] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_TORCH_SONG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_BAL_SKELEDIRGE_2] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_TORCH_SONG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_BAL_SKELEDIRGE_3] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_TORCH_SONG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_BAL_SKELEDIRGE_4] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_TORCH_SONG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_BAL_SKELEDIRGE_5] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_TORCH_SONG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_BAL_GHOLDEGO_1] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_NASTY_PLOT, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHIELD_DUST
    },

    [FRONTIER_MON_BAL_GHOLDEGO_2] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_NASTY_PLOT, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHIELD_DUST
    },

    [FRONTIER_MON_BAL_GHOLDEGO_3] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_NASTY_PLOT, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHIELD_DUST
    },

    [FRONTIER_MON_BAL_GHOLDEGO_4] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_NASTY_PLOT, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHIELD_DUST
    },

    [FRONTIER_MON_BAL_GHOLDEGO_5] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_NASTY_PLOT, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHIELD_DUST
    },

    [FRONTIER_MON_BAL_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICY_WIND, MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_BAXCALIBUR_1] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_PROTECT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THERMAL_EXCHANGE
    },

    [FRONTIER_MON_BAL_BAXCALIBUR_2] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_PROTECT, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THERMAL_EXCHANGE
    },

    [FRONTIER_MON_BAL_BAXCALIBUR_3] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_PROTECT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THERMAL_EXCHANGE
    },

    [FRONTIER_MON_BAL_BAXCALIBUR_4] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_PROTECT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THERMAL_EXCHANGE
    },

    [FRONTIER_MON_BAL_BAXCALIBUR_5] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_PROTECT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THERMAL_EXCHANGE
    },

    [FRONTIER_MON_BAL_IRON_BUNDLE_1] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_BUNDLE_2] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_BUNDLE_3] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_BUNDLE_4] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_IRON_BUNDLE_5] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_BAL_DRAGAPULT_1] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_BAL_DRAGAPULT_2] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_BAL_DRAGAPULT_3] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_U_TURN, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_BAL_DRAGAPULT_4] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_U_TURN, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_BAL_DRAGAPULT_5] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_U_TURN, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_BAL_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_BAL_TORNADUS_1] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_TORNADUS_2] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_TORNADUS_3] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_TORNADUS_4] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_TORNADUS_5] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_BAL_MEWTWO_1] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_TAUNT, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_MEWTWO_2] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_TAUNT, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_MEWTWO_3] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_TAUNT, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_MEWTWO_4] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_TAUNT, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_MEWTWO_5] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_TAUNT, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_BAL_GIRATINA_1] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_WILL_O_WISP, MOVE_DRAGON_CLAW, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_GIRATINA_2] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_WILL_O_WISP, MOVE_DRAGON_CLAW, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_GIRATINA_3] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_WILL_O_WISP, MOVE_DRAGON_CLAW, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_GIRATINA_4] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_WILL_O_WISP, MOVE_DRAGON_CLAW, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_GIRATINA_5] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_WILL_O_WISP, MOVE_DRAGON_CLAW, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_BAL_CALYREX_SHADOW_1] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_AS_ONE_(SHADOW)
    },

    [FRONTIER_MON_BAL_CALYREX_SHADOW_2] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_AS_ONE_(SHADOW)
    },

    [FRONTIER_MON_BAL_CALYREX_SHADOW_3] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_AS_ONE_(SHADOW)
    },

    [FRONTIER_MON_BAL_CALYREX_SHADOW_4] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_AS_ONE_(SHADOW)
    },

    [FRONTIER_MON_BAL_CALYREX_SHADOW_5] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_AS_ONE_(SHADOW)
    },

    [FRONTIER_MON_BAL_RAYQUAZA_1] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_AIR_LOCK
    },

    [FRONTIER_MON_BAL_RAYQUAZA_2] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_AIR_LOCK
    },

    [FRONTIER_MON_BAL_RAYQUAZA_3] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_AIR_LOCK
    },

    [FRONTIER_MON_BAL_RAYQUAZA_4] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_AIR_LOCK
    },

    [FRONTIER_MON_BAL_RAYQUAZA_5] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_AIR_LOCK
    },

    [FRONTIER_MON_ELEC_PINCURCHIN_1] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PINCURCHIN_2] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PINCURCHIN_3] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PINCURCHIN_4] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PINCURCHIN_5] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_RAICHU_ALOLA_1] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_ELECTRO_BALL, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SURGE_SURFER
    },

    [FRONTIER_MON_ELEC_RAICHU_ALOLA_2] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_ELECTRO_BALL, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SURGE_SURFER
    },

    [FRONTIER_MON_ELEC_RAICHU_ALOLA_3] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_ELECTRO_BALL, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SURGE_SURFER
    },

    [FRONTIER_MON_ELEC_RAICHU_ALOLA_4] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_ELECTRO_BALL, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SURGE_SURFER
    },

    [FRONTIER_MON_ELEC_RAICHU_ALOLA_5] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_ELECTRO_BALL, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SURGE_SURFER
    },

    [FRONTIER_MON_ELEC_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_ELEC_MAGNEZONE_2] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_ELEC_MAGNEZONE_3] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_ELEC_MAGNEZONE_4] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_ELEC_MAGNEZONE_5] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_LOW_KEY_1] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_LOW_KEY_2] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_LOW_KEY_3] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_LOW_KEY_4] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_LOW_KEY_5] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_AMPED_1] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_AMPED_2] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_AMPED_3] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_AMPED_4] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_TOXTRICITY_AMPED_5] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PUNK_ROCK
    },

    [FRONTIER_MON_ELEC_PAWMOT_1] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_2] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_3] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_4] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_5] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_LUXRAY_1] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_2] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_3] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_4] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_5] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_ZEBSTRIKA_1] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_ELEC_ZEBSTRIKA_2] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_ELEC_ZEBSTRIKA_3] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_ELEC_ZEBSTRIKA_4] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_ELEC_ZEBSTRIKA_5] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_ELEC_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_5] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_5] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_1] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_2] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_3] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_4] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_5] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_1] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_2] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_3] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_4] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_5] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_1] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_2] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_3] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_4] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_5] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_1] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_2] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_3] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_4] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_5] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_PAWMOT_1] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_REVIVAL_BLESSING, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_2] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_REVIVAL_BLESSING, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_3] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_REVIVAL_BLESSING, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_4] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_REVIVAL_BLESSING, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_PAWMOT_5] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_REVIVAL_BLESSING, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_LUXRAY_1] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_2] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_3] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_4] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_LUXRAY_5] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_ELEC_BELIBOLT_1] = {
        .species = SPECIES_BELIBOLT,
        .moves = {MOVE_THUNDER, MOVE_ICY_WIND, MOVE_ELECTRO_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_BELIBOLT_2] = {
        .species = SPECIES_BELIBOLT,
        .moves = {MOVE_THUNDER, MOVE_ICY_WIND, MOVE_ELECTRO_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_BELIBOLT_3] = {
        .species = SPECIES_BELIBOLT,
        .moves = {MOVE_THUNDER, MOVE_ICY_WIND, MOVE_ELECTRO_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_BELIBOLT_4] = {
        .species = SPECIES_BELIBOLT,
        .moves = {MOVE_THUNDER, MOVE_ICY_WIND, MOVE_ELECTRO_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_BELIBOLT_5] = {
        .species = SPECIES_BELIBOLT,
        .moves = {MOVE_THUNDER, MOVE_ICY_WIND, MOVE_ELECTRO_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_SWAMPERT_5] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_ELEC_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROUGH_SKIN
    },

    [FRONTIER_MON_ELEC_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_EXCADRILL_5] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_1] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_2] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_3] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_4] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_TAPU_KOKO_5] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_ELECTRIC_SURGE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_1] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_2] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_3] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_4] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BUNDLE_5] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_1] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_2] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_3] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_4] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_JUGULIS_5] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_1] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_2] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_3] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_4] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_HANDS_5] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_THORNS_1] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_THORNS_2] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_THORNS_3] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_THORNS_4] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_THORNS_5] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_VALIANT_1] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_VALIANT_2] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_VALIANT_3] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_VALIANT_4] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_VALIANT_5] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_CROWN_1] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_FLASH_CANNON, MOVE_IRON_HEAD, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_CROWN_2] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_FLASH_CANNON, MOVE_IRON_HEAD, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_CROWN_3] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_FLASH_CANNON, MOVE_IRON_HEAD, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_CROWN_4] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_FLASH_CANNON, MOVE_IRON_HEAD, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_CROWN_5] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_FLASH_CANNON, MOVE_IRON_HEAD, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BOULDER_1] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BOULDER_2] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BOULDER_3] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BOULDER_4] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_BOULDER_5] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_TREADS_1] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_TREADS_2] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_TREADS_3] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_TREADS_4] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_TREADS_5] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_MOTH_1] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_MOTH_2] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_MOTH_3] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_MOTH_4] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_MOTH_5] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_LEAVES_1] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SACRED_SWORD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_LEAVES_2] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SACRED_SWORD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_LEAVES_3] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SACRED_SWORD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_LEAVES_4] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SACRED_SWORD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_IRON_LEAVES_5] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SACRED_SWORD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_ELEC_SANDY_SHOCKS_1] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_ELEC_SANDY_SHOCKS_2] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_ELEC_SANDY_SHOCKS_3] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_ELEC_SANDY_SHOCKS_4] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_ELEC_SANDY_SHOCKS_5] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_ELEC_THUNDURUS_1] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_THUNDURUS_2] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_THUNDURUS_3] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_THUNDURUS_4] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_THUNDURUS_5] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAGING_BOLT_1] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAGING_BOLT_2] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAGING_BOLT_3] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAGING_BOLT_4] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_RAGING_BOLT_5] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_ELEC_MIRAIDON_1] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_HADRON_ENGINE
    },

    [FRONTIER_MON_ELEC_MIRAIDON_2] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_HADRON_ENGINE
    },

    [FRONTIER_MON_ELEC_MIRAIDON_3] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_HADRON_ENGINE
    },

    [FRONTIER_MON_ELEC_MIRAIDON_4] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_HADRON_ENGINE
    },

    [FRONTIER_MON_ELEC_MIRAIDON_5] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_HADRON_ENGINE
    },

    [FRONTIER_MON_ELEC_REGIELEKI_1] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRANSISTOR
    },

    [FRONTIER_MON_ELEC_REGIELEKI_2] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRANSISTOR
    },

    [FRONTIER_MON_ELEC_REGIELEKI_3] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRANSISTOR
    },

    [FRONTIER_MON_ELEC_REGIELEKI_4] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRANSISTOR
    },

    [FRONTIER_MON_ELEC_REGIELEKI_5] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_TRANSISTOR
    },

    [FRONTIER_MON_ELEC_ZEKROM_1] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_FUSION_BOLT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TERAVOLT
    },

    [FRONTIER_MON_ELEC_ZEKROM_2] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_FUSION_BOLT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TERAVOLT
    },

    [FRONTIER_MON_ELEC_ZEKROM_3] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_FUSION_BOLT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TERAVOLT
    },

    [FRONTIER_MON_ELEC_ZEKROM_4] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_FUSION_BOLT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TERAVOLT
    },

    [FRONTIER_MON_ELEC_ZEKROM_5] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_FUSION_BOLT, MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TERAVOLT
    },

    [FRONTIER_MON_RAIN_FLOATZEL_1] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_FLOATZEL_2] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_TAUNT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_FLOATZEL_3] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_FLOATZEL_4] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_FLOATZEL_5] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER_[ELECTRIC], MOVE_RAIN_DANCE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_POLITOED_3] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_POLITOED_4] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_POLITOED_5] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_RAIN_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_RAIN_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_RAIN_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_RAIN_RAICHU_5] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LIGHTNING_ROD
    },

    [FRONTIER_MON_RAIN_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_POWER_GEM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_POWER_GEM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_POWER_GEM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_POWER_GEM, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_AMPHAROS_5] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_POWER_GEM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_PROTECT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_JOLTEON_5] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER_[ICE], MOVE_RAIN_DANCE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_KILOWATTREL_1] = {
        .species = SPECIES_KILOWATTREL,
        .moves = {MOVE_THUNDER, MOVE_AIR_SLASH, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_WIND_POWER
    },

    [FRONTIER_MON_RAIN_KILOWATTREL_2] = {
        .species = SPECIES_KILOWATTREL,
        .moves = {MOVE_THUNDER, MOVE_AIR_SLASH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_WIND_POWER
    },

    [FRONTIER_MON_RAIN_KILOWATTREL_3] = {
        .species = SPECIES_KILOWATTREL,
        .moves = {MOVE_THUNDER, MOVE_AIR_SLASH, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_WIND_POWER
    },

    [FRONTIER_MON_RAIN_KILOWATTREL_4] = {
        .species = SPECIES_KILOWATTREL,
        .moves = {MOVE_THUNDER, MOVE_AIR_SLASH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_WIND_POWER
    },

    [FRONTIER_MON_RAIN_KILOWATTREL_5] = {
        .species = SPECIES_KILOWATTREL,
        .moves = {MOVE_THUNDER, MOVE_AIR_SLASH, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_WIND_POWER
    },

    [FRONTIER_MON_RAIN_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KABUTOPS_3] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_WATERFALL, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KABUTOPS_4] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KABUTOPS_5] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_RAIN_DANCE, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TOXIC},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_OMASTAR_3] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_OMASTAR_4] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_OMASTAR_5] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_RAIN_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_RAIN_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_RAIN_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_RAIN_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_RAPID_SPIN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_NATURAL_CURE
    },

    [FRONTIER_MON_RAIN_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_PELIPPER_3] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_PELIPPER_4] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_PELIPPER_5] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE, MOVE_LEECH_SEED},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_LUDICOLO_5] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_ROTOMWASH_1] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_RAIN_ROTOMWASH_2] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_RAIN_ROTOMWASH_3] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_RAIN_ROTOMWASH_4] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_RAIN_ROTOMWASH_5] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_RAIN_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_KINGDRA_5] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_RAIN_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MARVEL_SCALE
    },

    [FRONTIER_MON_RAIN_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MARVEL_SCALE
    },

    [FRONTIER_MON_RAIN_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MARVEL_SCALE
    },

    [FRONTIER_MON_RAIN_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TOXIC},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MARVEL_SCALE
    },

    [FRONTIER_MON_RAIN_MILOTIC_5] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MARVEL_SCALE
    },

    [FRONTIER_MON_RAIN_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_PURSUIT, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_RAIN_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_RAIN_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_RAIN_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_PURSUIT, MOVE_U_TURN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_RAIN_SCIZOR_5] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_PURSUIT, MOVE_RAIN_DANCE, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_RAIN_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_RAIN_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_RAIN_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_RAIN_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_RAIN_GYARADOS_5] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_RAIN_BASCULEGION_M_1] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_RAIN_BASCULEGION_M_2] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_RAIN_BASCULEGION_M_3] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_RAIN_BASCULEGION_M_4] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_RAIN_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_RAIN_BASCULEGION_M_5] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_RAIN_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_FIRE_PUNCH, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_FIRE_PUNCH, MOVE_RAIN_DANCE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_FIRE_PUNCH, MOVE_RAIN_DANCE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_DRACOVISH_1] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_PROTECT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FISHIOUS_REND
    },

    [FRONTIER_MON_RAIN_DRACOVISH_2] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FISHIOUS_REND
    },

    [FRONTIER_MON_RAIN_DRACOVISH_3] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FISHIOUS_REND
    },

    [FRONTIER_MON_RAIN_DRACOVISH_4] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FISHIOUS_REND
    },

    [FRONTIER_MON_RAIN_DRACOVISH_5] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FISHIOUS_REND
    },

    [FRONTIER_MON_RAIN_ARCHALUDON_1] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ELECTRO_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_RAIN_ARCHALUDON_2] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ELECTRO_SHOT, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_RAIN_ARCHALUDON_3] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ELECTRO_SHOT, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_RAIN_ARCHALUDON_4] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ELECTRO_SHOT, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_RAIN_ARCHALUDON_5] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ELECTRO_SHOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_RAIN_TORNADUS_1] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_BEAKWIND_STORM, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_RAIN_TORNADUS_2] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_BEAKWIND_STORM, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_RAIN_TORNADUS_3] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_BEAKWIND_STORM, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_RAIN_TORNADUS_4] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_BEAKWIND_STORM, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_RAIN_TORNADUS_5] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_BEAKWIND_STORM, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_RAIN_THUNDURUS_1] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_THUNDURUS_2] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_THUNDURUS_3] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_THUNDURUS_4] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_THUNDURUS_5] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER, MOVE_TAUNT, MOVE_RAIN_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_VOLT_ABSORB
    },

    [FRONTIER_MON_RAIN_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_RAIN_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STATIC
    },

    [FRONTIER_MON_RAIN_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_RAIN_DANCE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_RAIN_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROAR},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_CALM_MIND, MOVE_RAIN_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_SUICUNE_5] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_RAIN_LUGIA_1] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_LUGIA_2] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TOXIC},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_LUGIA_3] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_WHIRLWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_LUGIA_4] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_LUGIA_5] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MULTISCALE
    },

    [FRONTIER_MON_RAIN_PALKIA_1] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_AQUA_JET, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_RAIN_PALKIA_2] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_AQUA_JET, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_RAIN_PALKIA_3] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_AQUA_TAIL, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_RAIN_PALKIA_4] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_AQUA_TAIL, MOVE_ROAR},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_RAIN_PALKIA_5] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_CALM_MIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_RAIN_KYOGRE_1] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_KYOGRE_2] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_KYOGRE_3] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_KYOGRE_4] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_ROAR},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_RAIN_KYOGRE_5] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_DRIZZLE
    },

    [FRONTIER_MON_SAND_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_SANDSTORM, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_SAND_TOMB, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_PROTECT, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_SANDSTORM, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_DUGTRIO_5] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_TAUNT, MOVE_MEMENTO},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_IRON_HEAD, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM, MOVE_TOXIC, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_IRON_HEAD, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_SANDSTORM, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_STEELIX_5] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_SANDSTORM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_IRON_HEAD, MOVE_SANDSTORM, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_SAND_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_IRON_HEAD, MOVE_ROOST, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_SAND_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_IRON_HEAD, MOVE_PURSUIT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_SAND_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_IRON_HEAD, MOVE_SANDSTORM, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_SAND_SCIZOR_5] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_IRON_HEAD, MOVE_ROOST, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_TECHNICIAN
    },

    [FRONTIER_MON_SAND_HIPPOWDON_1] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_TOXIC, MOVE_SLACK_OFF, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_HIPPOWDON_2] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_TOXIC, MOVE_SLACK_OFF, MOVE_ROAR, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_HIPPOWDON_3] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_ICE_FANG, MOVE_SLACK_OFF, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_HIPPOWDON_4] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_TOXIC, MOVE_SLACK_OFF, MOVE_PROTECT, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_HIPPOWDON_5] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_TOXIC, MOVE_SLACK_OFF, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_DREDNAW_1] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_DREDNAW_2] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_DREDNAW_3] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_DREDNAW_4] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_DREDNAW_5] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_COALOSSAL_1] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STEAM_ENGINE
    },

    [FRONTIER_MON_SAND_COALOSSAL_2] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STEAM_ENGINE
    },

    [FRONTIER_MON_SAND_COALOSSAL_3] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STEAM_ENGINE
    },

    [FRONTIER_MON_SAND_COALOSSAL_4] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STEAM_ENGINE
    },

    [FRONTIER_MON_SAND_COALOSSAL_5] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_STEAM_ENGINE
    },

    [FRONTIER_MON_SAND_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_DAMP
    },

    [FRONTIER_MON_SAND_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PROTECT, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_EARTH_POWER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_SWAMPERT_5] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SWIFT_SWIM
    },

    [FRONTIER_MON_SAND_GASTRODON_1] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_SAND_GASTRODON_2] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_SAND_GASTRODON_3] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_SAND_GASTRODON_4] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_EARTH_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_SAND_GASTRODON_5] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_EARTH_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_SAND_LUCARIO_1] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_SAND_LUCARIO_2] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SAND_LUCARIO_3] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_CALM_MIND, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SAND_LUCARIO_4] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_SAND_LUCARIO_5] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_JUSTIFIED
    },

    [FRONTIER_MON_SAND_GOLEM_ALOLA_1] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_SAND_GOLEM_ALOLA_2] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_SAND_GOLEM_ALOLA_3] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_SAND_GOLEM_ALOLA_4] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_SAND_GOLEM_ALOLA_5] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_MAGNET_PULL
    },

    [FRONTIER_MON_SAND_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SAND_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_ROOST, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SAND_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SAND_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_ROOST, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SAND_FLYGON_5] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_U_TURN, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SAND_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_STOMPING_TANTRUM, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_SAND_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_STOMPING_TANTRUM, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_SAND_RHYPERIOR_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_SAND_RHYPERIOR_4] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_SAND_RHYPERIOR_5] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_SAND_MAMOSWINE_1] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_SAND_MAMOSWINE_2] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_SAND_MAMOSWINE_3] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_SAND_MAMOSWINE_4] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_SAND_MAMOSWINE_5] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_SAND_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SAND_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SAND_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SAND_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_TAUNT, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SAND_AERODACTYL_5] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_STEALTH_ROCK, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SAND_CORVIKNIGHT_1] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_IRON_HEAD, MOVE_ROOST, MOVE_BULK_UP, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_MIRROR_ARMOR
    },

    [FRONTIER_MON_SAND_CORVIKNIGHT_2] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_BODY_PRESS, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_MIRROR_ARMOR
    },

    [FRONTIER_MON_SAND_CORVIKNIGHT_3] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_IRON_HEAD, MOVE_SNARL, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_MIRROR_ARMOR
    },

    [FRONTIER_MON_SAND_CORVIKNIGHT_4] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_MIRROR_ARMOR
    },

    [FRONTIER_MON_SAND_CORVIKNIGHT_5] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SUBSTITUTE, MOVE_ROOST, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SAND_TINKATON_1] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_SAND_TINKATON_2] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_SAND_TINKATON_3] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_SAND_TINKATON_4] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_SAND_TINKATON_5] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_MOLD_BREAKER
    },

    [FRONTIER_MON_SAND_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_RUSH
    },

    [FRONTIER_MON_SAND_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_RUSH
    },

    [FRONTIER_MON_SAND_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_RUSH
    },

    [FRONTIER_MON_SAND_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_RUSH
    },

    [FRONTIER_MON_SAND_EXCADRILL_5] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_RUSH
    },

    [FRONTIER_MON_SAND_INCINEROAR_1] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_TAUNT, MOVE_SNARL},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SAND_INCINEROAR_2] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_TAUNT, MOVE_FAKE_OUT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SAND_INCINEROAR_3] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_SNARL, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SAND_INCINEROAR_4] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_TAUNT, MOVE_FAKE_OUT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SAND_INCINEROAR_5] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_SNARL, MOVE_FAKE_OUT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SAND_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_HAMMER_ARM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_METAGROSS_5] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_KINGAMBIT_1] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SUPREME_OVERLORD
    },

    [FRONTIER_MON_SAND_KINGAMBIT_2] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SUPREME_OVERLORD
    },

    [FRONTIER_MON_SAND_KINGAMBIT_3] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SUPREME_OVERLORD
    },

    [FRONTIER_MON_SAND_KINGAMBIT_4] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SUPREME_OVERLORD
    },

    [FRONTIER_MON_SAND_KINGAMBIT_5] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SUPREME_OVERLORD
    },

    [FRONTIER_MON_SAND_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_SUPERPOWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_TYRANITAR_5] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_VEIL
    },

    [FRONTIER_MON_SAND_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_VEIL
    },

    [FRONTIER_MON_SAND_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_FIRE_FANG, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_VEIL
    },

    [FRONTIER_MON_SAND_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_VEIL
    },

    [FRONTIER_MON_SAND_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SAND_VEIL
    },

    [FRONTIER_MON_SAND_GHOLDENGO_1] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_2] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_3] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_4] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_5] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GREATTUSK_1] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SAND_GREATTUSK_2] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SAND_GREATTUSK_3] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SAND_GREATTUSK_4] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SAND_GREATTUSK_5] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SAND_IRONTREADS_1] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_SAND_IRONTREADS_2] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_SAND_IRONTREADS_3] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_SAND_IRONTREADS_4] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_TOXIC},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_SAND_IRONTREADS_5] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_SAND_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_SAND_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_SAND_LANDORUS_1] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_LANDORUS_2] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_LANDORUS_3] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TOXIC},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_LANDORUS_4] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_LANDORUS_5] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_SAND_FORCE
    },

    [FRONTIER_MON_SAND_URSALUNA_1] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_BODY_PRESS, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_SAND_URSALUNA_2] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_BODY_PRESS, MOVE_TOXIC},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_SAND_URSALUNA_3] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_SAND_URSALUNA_4] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_BODY_PRESS, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_SAND_URSALUNA_5] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_BODY_PRESS, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_SAND_DIALGA_1] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SAND_STORM
    },

    [FRONTIER_MON_SAND_DIALGA_2] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SAND_STORM
    },

    [FRONTIER_MON_SAND_DIALGA_3] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_TOXIC, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SAND_STORM
    },

    [FRONTIER_MON_SAND_DIALGA_4] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SAND_STORM
    },

    [FRONTIER_MON_SAND_DIALGA_5] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SAND_STORM
    },

    [FRONTIER_MON_SAND_GHOLDENGO_1] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_NASTY_PLOT, MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_2] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_NASTY_PLOT, MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_3] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_NASTY_PLOT, MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_4] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_NASTY_PLOT, MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SAND_GHOLDENGO_5] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_NASTY_PLOT, MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_GOOD_AS_GOLD
    },

    [FRONTIER_MON_SUN_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_SLEEP_POWDER, MOVE_POLLEN_PUFF, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_RAGE_POWDER, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP, MOVE_ENCORE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_JUMPLUFF_3] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_U_TURN, MOVE_SLEEP_POWDER, MOVE_ENCORE, MOVE_TAILWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_JUMPLUFF_4] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_HELPING_HAND, MOVE_SLEEP_POWDER, MOVE_TAILWIND, MOVE_POLLEN_PUFF},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_JUMPLUFF_5] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_ENCORE, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE, MOVE_TAILWIND},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VOLCARONA_1] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_RAGE_POWDER, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 196, 0, 60, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_SUN_VOLCARONA_2] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_SUN_VOLCARONA_3] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_WILL_O_WISP, MOVE_HEAT_WAVE, MOVE_RAGE_POWDER},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_SUN_VOLCARONA_4] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_SUN_VOLCARONA_5] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE, MOVE_HURRICANE, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_SUN_TREVENANT_1] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_HORN_LEECH, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_HARVEST
    },

    [FRONTIER_MON_SUN_TREVENANT_2] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_TRICK_ROOM, MOVE_SHADOW_CLAW, MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_HARVEST
    },

    [FRONTIER_MON_SUN_TREVENANT_3] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_TRICK_ROOM, MOVE_POLTERGEIST, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
        .ability = ABILITY_HARVEST
    },

    [FRONTIER_MON_SUN_TREVENANT_4] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_TRICK_ROOM, MOVE_WILL_O_WISP, MOVE_HORN_LEECH, MOVE_ALLY_SWITCH},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
        .ability = ABILITY_HARVEST
    },

    [FRONTIER_MON_SUN_TREVENANT_5] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_WOOD_HAMMER, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_FRISK
    },

    [FRONTIER_MON_SUN_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_STORM, MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_WEATHER_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_ACID_SPRAY},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VICTREEBEL_5] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_ARCANINE_5] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_HELPING_HAND},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_ENCORE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_NASTY_PLOT, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_NINETALES_5] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_TALONFLAME_1] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_SUN_TALONFLAME_2] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_ACROBATICS, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_TAILWIND},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_SUN_TALONFLAME_3] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_QUICK_GUARD, MOVE_TAILWIND},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_SUN_TALONFLAME_4] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_SUN_TALONFLAME_5] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_TAUNT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_GALE_WINGS
    },

    [FRONTIER_MON_SUN_WHIMSICOTT_1] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_ENCORE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_SUN_WHIMSICOTT_2] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_SUN_WHIMSICOTT_3] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_CHARM, MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_ENCORE},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_SUN_WHIMSICOTT_4] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_SUNNY_DAY, MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_SUN_WHIMSICOTT_5] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, MOVE_HELPING_HAND},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRANKSTER
    },

    [FRONTIER_MON_SUN_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_VENUSAUR_5] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_CHLOROPHYLL
    },

    [FRONTIER_MON_SUN_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_BODY_PRESS, MOVE_HEAT_WAVE, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_TORKOAL_3] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_WILL_O_WISP, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_TORKOAL_4] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_ERUPTION, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_TORKOAL_5] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_YAWN, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SOLAR_POWER
    },

    [FRONTIER_MON_SUN_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_HURRICANE, MOVE_PROTECT, MOVE_SOLAR_BEAM},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_SOLAR_POWER
    },

    [FRONTIER_MON_SUN_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_SOLAR_POWER
    },

    [FRONTIER_MON_SUN_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
        .ability = ABILITY_BLAZE
    },

    [FRONTIER_MON_SUN_CHARIZARD_5] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_BLAZE
    },

    [FRONTIER_MON_SUN_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_PROTECT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SPEED_BOOST
    },

    [FRONTIER_MON_SUN_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SPEED_BOOST
    },

    [FRONTIER_MON_SUN_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SPEED_BOOST
    },

    [FRONTIER_MON_SUN_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_PROTECT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SPEED_BOOST
    },

    [FRONTIER_MON_SUN_BLAZIKEN_5] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_QUICK_GUARD, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_SPEED_BOOST
    },

    [FRONTIER_MON_SUN_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BLAZE
    },

    [FRONTIER_MON_SUN_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_TYPHLOSION_5] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_HEAT_WAVE, MOVE_WILL_O_WISP, MOVE_SUNNY_DAY, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_IMPRISON, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_CHANDELURE_3] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_CHANDELURE_4] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_CHANDELURE_5] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_ARCANINE_HISUI_1] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_SUN_ARCANINE_HISUI_2] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_ARCANINE_HISUI_3] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_ARCANINE_HISUI_4] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_EXTREME_SPEED, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_SUN_ARCANINE_HISUI_5] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_SNARL, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INTIMIDATE
    },

    [FRONTIER_MON_SUN_HYDREIGON_1] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SUN_HYDREIGON_2] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SUN_HYDREIGON_3] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SUN_HYDREIGON_4] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_SNARL, MOVE_DRACO_METEOR, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SUN_HYDREIGON_5] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_FLASH_CANNON},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_SUN_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_STONE_EDGE, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SUN_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SUN_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SUN_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_SNARL, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_JOLLY
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SUN_ENTEI_5] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_STONE_EDGE, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_INNER_FOCUS
    },

    [FRONTIER_MON_SUN_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SUN_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SUNNY_DAY, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SUN_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_HELPING_HAND},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_FLAME_BODY
    },

    [FRONTIER_MON_SUN_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SUN_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_SUN_GREAT_TUSK_1] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_GREAT_TUSK_2] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_ICE_SPINNER, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_GREAT_TUSK_3] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_ICE_SPINNER, MOVE_PROTECT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_GREAT_TUSK_4] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_GREAT_TUSK_5] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_BRUTE_BONNET_1] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SPORE, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_BRUTE_BONNET_2] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SPORE, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_BRUTE_BONNET_3] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SPORE, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_BRUTE_BONNET_4] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SPORE, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SUNNY_DAY},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_BRUTE_BONNET_5] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SPORE, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_FLUTTER_MANE_1] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_FLUTTER_MANE_2] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_FLUTTER_MANE_3] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_TAUNT},
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_FLUTTER_MANE_4] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_FLUTTER_MANE_5] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_ROARING_MOON_1] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_U_TURN, MOVE_SUNNY_DAY},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_ROARING_MOON_2] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_ACROBATICS, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_ROARING_MOON_3] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_ROARING_MOON_4] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_ROARING_MOON_5] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_DRAGON_CLAW, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_WALKING_WAKE_1] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_WALKING_WAKE_2] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRAGON_PULSE, MOVE_SUNNY_DAY, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_WALKING_WAKE_3] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_WALKING_WAKE_4] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_WALKING_WAKE_5] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_GROUDON_1] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_GROUDON_2] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_GROUDON_3] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_IRON_HEAD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_GROUDON_4] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_GROUDON_5] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 4, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_DROUGHT
    },

    [FRONTIER_MON_SUN_RAGING_BOLT_1] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH, MOVE_ELECTRO_BALL, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_RAGING_BOLT_2] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH, MOVE_ELECTRO_BALL, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_RAGING_BOLT_3] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH, MOVE_ELECTRO_BALL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_RAGING_BOLT_4] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH, MOVE_ELECTRO_BALL, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_RAGING_BOLT_5] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_GOUGING_FIRE_1] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_INFERNAL_STRIKE, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROPELLANT
    },

    [FRONTIER_MON_SUN_GOUGING_FIRE_2] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_INFERNAL_STRIKE, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROPELLANT
    },

    [FRONTIER_MON_SUN_GOUGING_FIRE_3] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_INFERNAL_STRIKE, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROPELLANT
    },

    [FRONTIER_MON_SUN_GOUGING_FIRE_4] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_INFERNAL_STRIKE, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROPELLANT
    },

    [FRONTIER_MON_SUN_GOUGING_FIRE_5] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_INFERNAL_STRIKE, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_PROPELLANT
    },

    [FRONTIER_MON_SUN_CHI_YU_1] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_SUN_CHI_YU_2] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_SUN_CHI_YU_3] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_SUN_CHI_YU_4] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_SUN_CHI_YU_5] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
        .ability = ABILITY_BEADS_OF_RUIN
    },

    [FRONTIER_MON_SUN_HEATRAN_1] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_HEATRAN_2] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_HEATRAN_3] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_HEATRAN_4] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_HEATRAN_5] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_SUN_HO_OH_1] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_SUN_HO_OH_2] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_SUN_HO_OH_3] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SOLAR_BEAM, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_SUN_HO_OH_4] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_SUN_HO_OH_5] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SOLAR_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CAREFUL
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_SUN_KORAIDON_1] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_KORAIDON_2] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_KORAIDON_3] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_KORAIDON_4] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_SUN_KORAIDON_5] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_PROTOSYNTHESIS
    },

    [FRONTIER_MON_TRICK_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_SHADOW_BONE, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_TRICK_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_SHADOW_BONE, MOVE_FIRE_PUNCH, MOVE_TRICK_ROOM},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_TRICK_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_SHADOW_BONE, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_TRICK_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_SHADOW_BONE, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_TRICK_MAROWAK_5] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_SHADOW_BONE, MOVE_KNOCK_OFF, MOVE_TRICK_ROOM},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ROCK_HEAD
    },

    [FRONTIER_MON_TRICK_GIGALITH_1] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_TRICK_GIGALITH_2] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_TRICK_GIGALITH_3] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_TRICK_GIGALITH_4] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_TRICK_GIGALITH_5] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_DEFENSE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SAND_STREAM
    },

    [FRONTIER_MON_TRICK_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_TRICK_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_AQUA_JET, MOVE_TRICK_ROOM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_TRICK_CRAWDAUNT_3] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_TRICK_CRAWDAUNT_4] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_IRON_DEFENSE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_TRICK_CRAWDAUNT_5] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_KNOCK_OFF, MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_ADAPTABILITY
    },

    [FRONTIER_MON_TRICK_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_TRICK_ROOM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_PORYGON2_3] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_PORYGON2_5] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_TRICK_ROOM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_TRICK_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_TRICK_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_TRICK_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_TRICK_HARIYAMA_5] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GUTS
    },

    [FRONTIER_MON_TRICK_DUSKNOIR_1] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_FRISK
    },

    [FRONTIER_MON_TRICK_DUSKNOIR_2] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_FRISK
    },

    [FRONTIER_MON_TRICK_DUSKNOIR_3] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_FRISK
    },

    [FRONTIER_MON_TRICK_DUSKNOIR_4] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_FRISK
    },

    [FRONTIER_MON_TRICK_DUSKNOIR_5] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_IMPISH
        .ability = ABILITY_FRISK
    },

    [FRONTIER_MON_TRICK_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_TRICK_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_TRICK_RHYPERIOR_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_TRICK_RHYPERIOR_4] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_DEFENSE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_TRICK_RHYPERIOR_5] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SOLID_ROCK
    },

    [FRONTIER_MON_TRICK_COFAGRIGUS_1] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MUMMY
    },

    [FRONTIER_MON_TRICK_COFAGRIGUS_2] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MUMMY
    },

    [FRONTIER_MON_TRICK_COFAGRIGUS_3] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MUMMY
    },

    [FRONTIER_MON_TRICK_COFAGRIGUS_4] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MUMMY
    },

    [FRONTIER_MON_TRICK_COFAGRIGUS_5] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_MUMMY
    },

    [FRONTIER_MON_TRICK_SINISTCHA_1] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_WEARY_SOUL
    },

    [FRONTIER_MON_TRICK_SINISTCHA_2] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_WEARY_SOUL
    },

    [FRONTIER_MON_TRICK_SINISTCHA_3] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_WEARY_SOUL
    },

    [FRONTIER_MON_TRICK_SINISTCHA_4] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_WEARY_SOUL
    },

    [FRONTIER_MON_TRICK_SINISTCHA_5] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_WEARY_SOUL
    },

    [FRONTIER_MON_TRICK_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_TRICK_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_TRICK_GRUMPIG_3] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_TRICK_GRUMPIG_4] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_TRICK_GRUMPIG_5] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_THICK_FAT
    },

    [FRONTIER_MON_TRICK_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWBRO_5] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_SLOWKING_5] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_INDEEDEEF_1] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_FOLLOW_ME, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PSYCHIC_SURGE
    },

    [FRONTIER_MON_TRICK_INDEEDEEF_2] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PSYCHIC_SURGE
    },

    [FRONTIER_MON_TRICK_INDEEDEEF_3] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PSYCHIC_SURGE
    },

    [FRONTIER_MON_TRICK_INDEEDEEF_4] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PSYCHIC_SURGE
    },

    [FRONTIER_MON_TRICK_INDEEDEEF_5] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_TAUNT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_PSYCHIC_SURGE
    },

    [FRONTIER_MON_TRICK_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_TRACE
    },

    [FRONTIER_MON_TRICK_AMOONGUS_1] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_AMOONGUS_2] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_AMOONGUS_3] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_AMOONGUS_4] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_AMOONGUS_5] = {
        .species = SPECIES_AMOONGUS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_REGENERATOR
    },

    [FRONTIER_MON_TRICK_ARMAROUVE_1] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_TRICK_ARMAROUVE_2] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_TRICK_ARMAROUVE_3] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_TRICK_ARMAROUVE_4] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_TRICK_ARMAROUVE_5] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_FLASH_FIRE
    },

    [FRONTIER_MON_TRICK_GASTRODON_1] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_TRICK_GASTRODON_2] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_TRICK_GASTRODON_3] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_TRICK_GASTRODON_4] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_TRICK_GASTRODON_5] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
        .ability = ABILITY_STORM_DRAIN
    },

    [FRONTIER_MON_TRICK_HATTERENE_1] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_MAGIC_BOUNCE
    },

    [FRONTIER_MON_TRICK_HATTERENE_2] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_MAGIC_BOUNCE
    },

    [FRONTIER_MON_TRICK_HATTERENE_3] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_MAGIC_BOUNCE
    },

    [FRONTIER_MON_TRICK_HATTERENE_4] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_MAGIC_BOUNCE
    },

    [FRONTIER_MON_TRICK_HATTERENE_5] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_MAGIC_BOUNCE
    },

    [FRONTIER_MON_TRICK_ESCAVALIER_1] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_IRON_HEAD, MOVE_MEGAHORN, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_OVERCOAT
    },

    [FRONTIER_MON_TRICK_ESCAVALIER_2] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_IRON_HEAD, MOVE_MEGAHORN, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_OVERCOAT
    },

    [FRONTIER_MON_TRICK_ESCAVALIER_3] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_IRON_HEAD, MOVE_MEGAHORN, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_OVERCOAT
    },

    [FRONTIER_MON_TRICK_ESCAVALIER_4] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_IRON_HEAD, MOVE_MEGAHORN, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_OVERCOAT
    },

    [FRONTIER_MON_TRICK_ESCAVALIER_5] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_IRON_HEAD, MOVE_MEGAHORN, MOVE_TRICK_ROOM, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_OVERCOAT
    },

    [FRONTIER_MON_TRICK_FARIGIRAF_1] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CUD_CHEW
    },

    [FRONTIER_MON_TRICK_FARIGIRAF_2] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CUD_CHEW
    },

    [FRONTIER_MON_TRICK_FARIGIRAF_3] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CUD_CHEW
    },

    [FRONTIER_MON_TRICK_FARIGIRAF_4] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CUD_CHEW
    },

    [FRONTIER_MON_TRICK_FARIGIRAF_5] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CUD_CHEW
    },

    [FRONTIER_MON_TRICK_GOTHITELLE_1] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHADOW_TAG
    },

    [FRONTIER_MON_TRICK_GOTHITELLE_2] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHADOW_TAG
    },

    [FRONTIER_MON_TRICK_GOTHITELLE_3] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHADOW_TAG
    },

    [FRONTIER_MON_TRICK_GOTHITELLE_4] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHADOW_TAG
    },

    [FRONTIER_MON_TRICK_GOTHITELLE_5] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_SHADOW_TAG
    },

    [FRONTIER_MON_TRICK_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_TRICK_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_TRICK_CHANDELURE_3] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_TRICK_CHANDELURE_4] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_TRICK_CHANDELURE_5] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_INFILTRATOR
    },

    [FRONTIER_MON_TRICK_EMBOAR_1] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_RECKLESS
    },

    [FRONTIER_MON_TRICK_EMBOAR_2] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_RECKLESS
    },

    [FRONTIER_MON_TRICK_EMBOAR_3] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_RECKLESS
    },

    [FRONTIER_MON_TRICK_EMBOAR_4] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_RECKLESS
    },

    [FRONTIER_MON_TRICK_EMBOAR_5] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_RECKLESS
    },

    [FRONTIER_MON_TRICK_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_HEAVY_SLAM, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GLUTTONY
    },

    [FRONTIER_MON_TRICK_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_HEAVY_SLAM, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GLUTTONY
    },

    [FRONTIER_MON_TRICK_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_HEAVY_SLAM, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GLUTTONY
    },

    [FRONTIER_MON_TRICK_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_HEAVY_SLAM, MOVE_TRICK_ROOM, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GLUTTONY
    },

    [FRONTIER_MON_TRICK_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_HEAVY_SLAM, MOVE_TRICK_ROOM, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_GLUTTONY
    },

    [FRONTIER_MON_TRICK_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_TRICK_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_TRICK_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_TRICK_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_TRICK_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
        .ability = ABILITY_CLEAR_BODY
    },

    [FRONTIER_MON_TRICK_REGIGIGAS_1] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_RETURN, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SLOW_START
    },

    [FRONTIER_MON_TRICK_REGIGIGAS_2] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_RETURN, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SLOW_START
    },

    [FRONTIER_MON_TRICK_REGIGIGAS_3] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_RETURN, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SLOW_START
    },

    [FRONTIER_MON_TRICK_REGIGIGAS_4] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_RETURN, MOVE_TRICK_ROOM, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SLOW_START
    },

    [FRONTIER_MON_TRICK_REGIGIGAS_5] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_RETURN, MOVE_TRICK_ROOM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_SLOW_START
    },

    [FRONTIER_MON_TRICK_CRESSELIA_1] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_LUNAR_DANCE, MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_TRICK_CRESSELIA_2] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_LUNAR_DANCE, MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_TRICK_CRESSELIA_3] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_LUNAR_DANCE, MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_TRICK_CRESSELIA_4] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_LUNAR_DANCE, MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_TRICK_CRESSELIA_5] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_LUNAR_DANCE, MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_LEVITATE
    },

    [FRONTIER_MON_TRICK_URSALUNA_1] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_SLAM, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_TRICK_URSALUNA_2] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_SLAM, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_TRICK_URSALUNA_3] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_SLAM, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_TRICK_URSALUNA_4] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_SLAM, MOVE_TRICK_ROOM, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_TRICK_URSALUNA_5] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_SLAM, MOVE_TRICK_ROOM, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_BULLETPROOF
    },

    [FRONTIER_MON_TRICK_CALYREXICE_1] = {
        .species = SPECIES_CALYREX_(ICE),
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_AS_ONE_(GLASTRIER)
    },

    [FRONTIER_MON_TRICK_CALYREXICE_2] = {
        .species = SPECIES_CALYREX_(ICE),
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_TRICK_ROOM, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_AS_ONE_(GLASTRIER)
    },

    [FRONTIER_MON_TRICK_CALYREXICE_3] = {
        .species = SPECIES_CALYREX_(ICE),
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_AS_ONE_(GLASTRIER)
    },

    [FRONTIER_MON_TRICK_CALYREXICE_4] = {
        .species = SPECIES_CALYREX_(ICE),
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_TRICK_ROOM, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_AS_ONE_(GLASTRIER)
    },

    [FRONTIER_MON_TRICK_CALYREXICE_5] = {
        .species = SPECIES_CALYREX_(ICE),
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_TRICK_ROOM, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
        .ability = ABILITY_AS_ONE_(GLASTRIER)
    },

    [FRONTIER_MON_TR_MIMIKYU_1] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_TRICK_ROOM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 156, 0, 100, 0),
        .nature = NATURE_RELAXED
        .ability = ABILITY_DISGUISE
    },

    [FRONTIER_MON_TR_MIMIKYU_2] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_TRICK_ROOM, MOVE_TAUNT, MOVE_PLAY_ROUGH, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
        .ability = ABILITY_DISGUISE
    },

    [FRONTIER_MON_TR_MIMIKYU_3] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_TRICK_ROOM, MOVE_CURSE, MOVE_PROTECT, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 132, 0, 124, 0),
        .nature = NATURE_RELAXED
        .ability = ABILITY_DISGUISE
    },

    [FRONTIER_MON_TR_MIMIKYU_4] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_TRICK_ROOM, MOVE_DESTINY_BOND, MOVE_WILL_O_WISP, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 56, 0),
        .nature = NATURE_BOLD
        .ability = ABILITY_DISGUISE
    },

    [FRONTIER_MON_TR_MIMIKYU_5] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_TRICK_ROOM, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 136, 0),
        .nature = NATURE_SASSY
        .ability = ABILITY_DISGUISE
    },

    [FRONTIER_MON_TR_IRON_HANDS_1] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_TR_IRON_HANDS_2] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_BELLY_DRUM, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),
        .nature = NATURE_BRAVE
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_TR_IRON_HANDS_3] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_FAKE_OUT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 160, 0, 0, 96, 0),
        .nature = NATURE_BRAVE
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_TR_IRON_HANDS_4] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),
        .nature = NATURE_BRAVE
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_TR_IRON_HANDS_5] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH, MOVE_DETECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
        .ability = ABILITY_QUARK_DRIVE
    },

    [FRONTIER_MON_TR_CLODSIRE_1] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_TRICK_ROOM, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_ACID_SPRAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 0, 96, 0),
        .nature = NATURE_RELAXED
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_TR_CLODSIRE_2] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 0, 200, 0),
        .nature = NATURE_SASSY
        .ability = ABILITY_WATER_ABSORB
    },

    [FRONTIER_MON_TR_CLODSIRE_3] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_RECOVER},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_RELAXED
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_TR_CLODSIRE_4] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_YAWN, MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
        .ability = ABILITY_WATER_ABSORB
    },

    [FRONTIER_MON_TR_CLODSIRE_5] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_TRICK_ROOM, MOVE_ACID_SPRAY, MOVE_EARTH_POWER, MOVE_RECOVER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 0, 96, 0),
        .nature = NATURE_RELAXED
        .ability = ABILITY_UNAWARE
    },

    [FRONTIER_MON_TRICK_DIALGA_1] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_TRICK_ROOM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_TRICK_DIALGA_2] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_TRICK_ROOM, MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_EARTH_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_DIALGA_3] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_TRICK_ROOM, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_DIALGA_4] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_DIALGA_5] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_TRICK_ROOM, MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_IRON_DEFENSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_PALKIA_1] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_TRICK_ROOM, MOVE_SPACIAL_REND, MOVE_HYDRO_PUMP, MOVE_PROTECT},
        .heldItem = ITEM_LUSTROUS_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_TRICK_PALKIA_2] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_PALKIA_3] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_TRICK_ROOM, MOVE_MUDDY_WATER, MOVE_THUNDER, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_PALKIA_4] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_TRICK_ROOM, MOVE_SURF, MOVE_DRACO_METEOR, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_TELEPATHY
    },

    [FRONTIER_MON_TRICK_PALKIA_5] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_TRICK_ROOM, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_PRESSURE
    },

    [FRONTIER_MON_TRICK_LUNALA_1] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_TRICK_ROOM, MOVE_METEOR_BEAM, MOVE_MOONGEIST_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_SHADOW_SHIELD
    },

    [FRONTIER_MON_TRICK_LUNALA_2] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_PSYCHIC, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_SHADOW_SHIELD
    },

    [FRONTIER_MON_TRICK_LUNALA_3] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_SHADOW_SHIELD
    },

    [FRONTIER_MON_TRICK_LUNALA_4] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_CALM_MIND, MOVE_ROOST},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_SHADOW_SHIELD
    },

    [FRONTIER_MON_TRICK_LUNALA_5] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
        .ability = ABILITY_SHADOW_SHIELD
    },

};
