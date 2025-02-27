# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"

# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"

# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"

# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"

# 40 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic:
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "REVIVE is fantastic!\p"
# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Give it to a fainted POKéMON,\n"
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "and the POKéMON will arise.\p"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "But be careful, REVIVE doesn't restore\n"
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the used-up PP of moves.$"
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"

# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest:
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\p"
# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Out of all the REPEL sprays, it lasts\n"
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the longest.$"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"

# 52 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare:
# 53 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\n"
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BALLS that are only made in MOSSDEEP.\p"
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A NET BALL is effective against\n"
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BUG-type and WATER-type POKéMON.\p"
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A DIVE BALL works best on POKéMON\n"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "at the bottom of the sea.$"

MossdeepCity_Mart_EventScript_BattleMart::
# 62 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	message MossdeepCity_Mart_EventScript_BattleMart_Text_0
# 64 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 65 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_BattleMartItems
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_BattleMart_Text_1
# 67 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
	return


	.align 2
# 70 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_BattleMartItems:
# 71 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 72 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 73 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 74 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 75 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 76 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 77 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 78 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 79 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 80 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 81 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 82 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 83 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 84 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 85 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 86 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 87 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 88 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 89 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 90 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 91 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 92 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 93 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 94 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 95 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 96 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 97 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 98 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 99 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 100 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 101 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 102 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 103 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 104 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 105 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 106 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 107 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 108 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 109 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 110 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 111 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 112 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 113 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 114 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 115 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 116 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 117 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 118 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 119 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 120 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 121 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 122 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 123 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 124 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 125 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 126 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 127 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 128 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 129 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 130 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 131 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 132 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 133 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 134 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 135 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 136 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 137 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 138 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 139 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 140 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 141 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 142 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 143 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 144 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 145 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 146 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 147 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 148 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 149 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 150 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 151 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 152 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 153 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 154 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 155 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 156 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 157 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 158 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 159 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 160 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 161 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 162 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 163 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 164 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 165 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 166 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 167 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 168 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 169 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 170 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 171 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 172 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 173 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 174 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 175 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 176 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 177 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 178 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 179 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 180 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 181 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 182 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 183 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 184 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 185 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 186 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 187 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 188 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 189 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 190 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 191 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 192 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 193 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 194 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 195 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 196 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 197 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 198 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 199 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 200 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 201 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 202 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 203 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 204 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 205 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 206 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 207 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 208 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 209 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 210 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 211 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 212 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 213 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 214 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 215 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 216 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 217 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 218 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 219 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 220 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 221 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 222 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 223 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 224 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 225 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 226 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 227 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 228 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 229 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 230 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 231 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 232 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 233 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 234 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 235 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 236 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 237 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 238 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 239 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 240 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

MossdeepCity_Mart_EventScript_BattleMart_Text_0:
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

MossdeepCity_Mart_EventScript_BattleMart_Text_1:
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Happy battling!$"
