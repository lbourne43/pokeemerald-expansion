const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
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
