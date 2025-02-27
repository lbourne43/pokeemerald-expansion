# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/SlateportCity_Mart/scripts.pory"

# 28 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 31 "data/maps/SlateportCity_Mart/scripts.pory"

# 32 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 35 "data/maps/SlateportCity_Mart/scripts.pory"

# 36 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 39 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 40 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a POKéMON MART.$"
# 41 "data/maps/SlateportCity_Mart/scripts.pory"

# 42 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 43 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
# 44 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching POKéMON.\p"
# 45 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 46 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive POKéMON…$"

SlateportCity_Mart_EventScript_BattleMart::
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_BattleMart_Text_0
# 52 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_BattleMartItems
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_BattleMart_Text_1
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 58 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_BattleMartItems:
# 59 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 60 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 61 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 62 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 63 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 64 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 65 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 66 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 67 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 68 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 69 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 70 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 71 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 72 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 73 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 74 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 75 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 76 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 77 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 78 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 79 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 80 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 81 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 82 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 83 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 84 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 85 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 86 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 87 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 88 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 89 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 90 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 91 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 92 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 93 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 94 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 95 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 96 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 97 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 98 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 99 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 100 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 101 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 102 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 103 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 104 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 105 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 106 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 107 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 108 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 109 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 110 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 111 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 112 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 113 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 114 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 115 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 116 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 117 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 118 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 119 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 120 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 121 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 122 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 123 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 124 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 125 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 126 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 127 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 128 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 129 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 130 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 131 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 132 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 133 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 134 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 135 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 136 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 137 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 138 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 139 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 140 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 141 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 142 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 143 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 144 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 145 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 146 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 147 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 148 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 149 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 150 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 151 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 152 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 153 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 154 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 155 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 156 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 157 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 158 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 159 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 160 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 161 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 162 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 163 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 164 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 165 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 166 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 167 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 168 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 169 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 170 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 171 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 172 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 173 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 174 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 175 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 176 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 177 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 178 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 179 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 180 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 181 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 182 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 183 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 184 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 185 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 186 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 187 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 189 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 190 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 191 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 192 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 193 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 194 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 195 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 196 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 197 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 198 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 199 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 200 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 201 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 202 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 203 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 204 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 205 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 206 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 207 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 208 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 209 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 210 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 211 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 212 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 213 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 214 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 215 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 216 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 217 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 218 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 219 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 220 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 221 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 222 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 223 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 224 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 225 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 226 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 227 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 228 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_BattleMart_Text_0:
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

SlateportCity_Mart_EventScript_BattleMart_Text_1:
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Happy battling!$"
