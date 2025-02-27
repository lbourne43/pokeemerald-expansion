# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Mart/scripts.pory"

# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Mart/scripts.pory"

# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 33 "data/maps/RustboroCity_Mart/scripts.pory"

# 34 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 39 "data/maps/RustboroCity_Mart/scripts.pory"

# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 55 "data/maps/RustboroCity_Mart/scripts.pory"

# 56 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 58 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 59 "data/maps/RustboroCity_Mart/scripts.pory"

# 60 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 62 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Mart/scripts.pory"

# 64 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 65 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 66 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Mart/scripts.pory"

# 68 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 70 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 71 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 73 "data/maps/RustboroCity_Mart/scripts.pory"

# 74 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
# 76 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 78 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 79 "data/maps/RustboroCity_Mart/scripts.pory"

# 80 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 82 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 83 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 84 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"

RustboroCity_Mart_EventScript_BattleMart::
# 90 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 91 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_EventScript_BattleMart_Text_0
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_BattleMartItems
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_BattleMart_Text_1
# 96 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_BattleMartItems:
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 104 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 109 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 110 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 111 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 112 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 113 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 114 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 115 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 116 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 117 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 118 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 119 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 120 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 121 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 122 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 123 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 124 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 125 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 126 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 127 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 128 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 129 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 130 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 131 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 132 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 133 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 134 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 135 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 136 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 137 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 138 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 139 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 140 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 141 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 142 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 143 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 144 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 145 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 146 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 147 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 148 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 149 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 150 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 151 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 152 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 153 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 154 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 155 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 156 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 157 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 158 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 159 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 160 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 161 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 162 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 163 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 164 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 165 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 166 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 167 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 168 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 169 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 170 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 171 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 172 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 173 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 174 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 175 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 176 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 177 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 178 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 179 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 180 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 181 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 182 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 183 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 184 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 185 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 186 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 187 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 188 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 189 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 190 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 191 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 192 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 193 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 194 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 195 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 196 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 197 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 198 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 199 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 200 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 201 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 202 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 203 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 204 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 205 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 206 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 207 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 208 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 209 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 210 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 211 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 212 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 213 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 214 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 215 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 216 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 217 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 218 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 219 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 220 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 221 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 222 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 223 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 224 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 225 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 226 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 227 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 228 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 229 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 230 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 231 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 232 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 233 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 234 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 235 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 236 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 237 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 238 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 239 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 240 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 241 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 242 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 243 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 244 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 245 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 246 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 247 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 248 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 249 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 250 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 251 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 252 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 253 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 254 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 255 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 256 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 257 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 258 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 259 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 260 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 261 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 262 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 263 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 264 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 265 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 266 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 267 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 268 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_BattleMart_Text_0:
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

RustboroCity_Mart_EventScript_BattleMart_Text_1:
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Happy battling!$"
