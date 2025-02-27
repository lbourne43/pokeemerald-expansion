# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/FallarborTown_Mart/scripts.pory"

# 31 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 34 "data/maps/FallarborTown_Mart/scripts.pory"

# 35 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 38 "data/maps/FallarborTown_Mart/scripts.pory"

# 39 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 48 "data/maps/FallarborTown_Mart/scripts.pory"

# 49 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 51 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my SKITTY evolve or not.\p"
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this MOON STONE,\n"
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 55 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 57 "data/maps/FallarborTown_Mart/scripts.pory"

# 58 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"
# 60 "data/maps/FallarborTown_Mart/scripts.pory"

# 61 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"

FallarborTown_Mart_EventScript_BattleMart::
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	message FallarborTown_Mart_EventScript_BattleMart_Text_0
# 70 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_BattleMartItems
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_BattleMart_Text_1
# 73 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	return


	.align 2
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_BattleMartItems:
# 77 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 78 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 79 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 80 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 81 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 82 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 83 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 84 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 85 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 86 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 87 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 88 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 89 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 90 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 91 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 92 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 93 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 94 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 95 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 96 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 97 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 98 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 99 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 100 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 101 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 102 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 103 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 104 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 105 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 106 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 107 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 108 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 109 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 110 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 111 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 112 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 113 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 114 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 115 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 116 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 117 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 118 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 119 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 120 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 121 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 122 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 123 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 124 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 125 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 126 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 127 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 128 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 129 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 130 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 131 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 132 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 133 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 134 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 135 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 136 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 137 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 138 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 139 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 140 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 141 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 142 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 143 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 144 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 145 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 146 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 147 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 148 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 149 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 150 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 151 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 152 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 153 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 154 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 155 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 156 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 157 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 158 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 159 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 160 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 161 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 162 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 163 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 164 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 165 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 166 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 167 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 168 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 169 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 170 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 171 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 172 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 173 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 174 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 175 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 176 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 177 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 178 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 179 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 180 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 181 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 182 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 183 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 184 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 185 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 186 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 187 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 188 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 189 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 190 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 191 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 192 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 193 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 194 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 195 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 196 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 197 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 198 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 199 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 200 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 201 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 202 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 203 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 204 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 205 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 206 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 207 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 208 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 209 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 210 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 211 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 212 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 213 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 214 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 215 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 216 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 217 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 218 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 219 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 220 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 221 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 222 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 223 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 224 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 225 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 226 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 227 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 228 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 229 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 230 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 231 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 232 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 233 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 234 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 235 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 236 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 237 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 238 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 239 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 240 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 241 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 242 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 243 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 244 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 245 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 246 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_BattleMart_Text_0:
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Are you battle-ready?$"

FallarborTown_Mart_EventScript_BattleMart_Text_1:
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Happy battling!$"
