# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"

# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"

# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"

# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 41 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of POKéMON.\p"
# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X ATTACK and X DEFEND…\p"
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 45 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 46 "data/maps/MauvilleCity_Mart/scripts.pory"

# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 50 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The TRAINER's decisions determine how\n"
# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"

MauvilleCity_Mart_EventScript_BattleMart::
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	message MauvilleCity_Mart_EventScript_BattleMart_Text_0
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_BattleMartItems
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_EventScript_BattleMart_Text_1
# 60 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 63 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_BattleMartItems:
# 64 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 65 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 66 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 67 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 68 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 69 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 70 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 71 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 72 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 73 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 74 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 75 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 76 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 77 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 78 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 79 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 80 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 81 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 82 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 83 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 84 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 85 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 86 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 87 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 88 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 89 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 90 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 91 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 92 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 93 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 94 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 95 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 96 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 97 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 98 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 99 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 100 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 101 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 102 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 103 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 104 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 105 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 106 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 107 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 108 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 109 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 110 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 111 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 112 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 113 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 114 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 115 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 116 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 117 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 118 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 119 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 120 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 121 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 122 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 123 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 124 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 125 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 126 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 127 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 128 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 129 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 130 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 131 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 132 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 133 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 134 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 135 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 136 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 137 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 138 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 139 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 140 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 141 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 142 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 143 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 144 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 145 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 146 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 147 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 148 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 149 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 150 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 151 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 152 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 153 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 154 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 155 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 156 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 157 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 158 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 159 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 160 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 161 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 162 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 163 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 164 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 165 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 166 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 167 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 168 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 169 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 170 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 171 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 172 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 173 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 174 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 175 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 176 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 177 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 178 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 179 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 180 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 181 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 182 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 183 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 184 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 185 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 186 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 187 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 188 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 189 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 190 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 191 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 192 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 194 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 195 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 196 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 197 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 198 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 199 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 200 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 201 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 202 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 203 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 204 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 205 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 206 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 207 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 208 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 209 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 210 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 211 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 212 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 213 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 214 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 215 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 216 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 217 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 218 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 219 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 220 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 221 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 222 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 223 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 224 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 225 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 226 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 227 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 228 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 229 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 230 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 231 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 232 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 233 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_BattleMart_Text_0:
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

MauvilleCity_Mart_EventScript_BattleMart_Text_1:
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Happy battling!$"
