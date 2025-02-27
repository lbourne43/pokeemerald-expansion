# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart:
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 33 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 36 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike:
# 37 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Use X SPEED to add to a POKéMON's\n"
# 38 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "SPEED in battle.\p"
# 39 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "That will help it get in the first\n"
# 40 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "strike--a decided advantage!$"
# 41 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
# 43 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "On MT. CHIMNEY's peak, there's a local\n"
# 44 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "specialty that you can buy only there.\p"
# 45 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Give it to a POKéMON--it will be elated.$"

LavaridgeTown_Mart_EventScript_BattleMart::
# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message LavaridgeTown_Mart_EventScript_BattleMart_Text_0
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_BattleMartItems
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_EventScript_BattleMart_Text_1
# 54 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
	return


	.align 2
# 57 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_BattleMartItems:
# 58 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 59 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 60 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 61 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 62 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 63 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 64 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 65 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 66 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 67 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 68 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 69 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 70 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 71 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 72 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 73 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 74 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 75 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 76 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 77 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 78 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 79 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 80 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 81 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 82 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 83 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 84 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 85 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 86 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 87 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 88 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 89 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 90 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 91 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 92 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 93 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 94 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 95 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 96 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 97 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 98 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 99 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 100 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 101 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 102 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 103 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 104 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 105 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 106 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 107 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 108 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 109 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 110 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 111 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 112 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 113 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 114 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 115 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 116 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 117 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 118 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 119 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 120 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 121 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 122 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 123 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 124 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 125 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 126 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 127 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 128 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 129 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 130 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 131 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 132 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 133 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 134 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 135 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 136 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 137 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 138 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 139 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 140 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 141 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 142 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 143 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 144 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 145 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 146 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 147 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 148 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 149 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 150 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 151 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 152 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 153 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 154 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 155 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 156 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 157 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 158 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 159 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 160 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 161 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 162 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 163 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 164 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 165 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 166 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 167 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 168 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 169 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 170 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 171 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 172 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 173 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 174 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 175 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 176 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 177 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 178 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 179 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 180 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 181 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 182 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 183 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 184 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 185 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 186 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 187 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 188 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 189 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 190 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 191 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 192 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 193 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 194 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 195 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 196 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 197 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 198 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 199 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 200 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 201 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 202 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 203 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 204 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 205 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 206 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 207 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 208 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 209 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 210 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 211 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 212 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 213 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 214 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 215 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 216 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 217 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 218 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 219 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 220 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 221 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 222 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 223 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 224 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 225 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 226 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 227 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_BattleMart_Text_0:
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Are you battle-ready?$"

LavaridgeTown_Mart_EventScript_BattleMart_Text_1:
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Happy battling!$"
