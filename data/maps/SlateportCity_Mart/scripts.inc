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

SlateportCity_Mart_EventScript_BattleMachine::
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_BattleMachine_Text_0
# 52 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_BattleMachineItems
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_BattleMachine_Text_1
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 58 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_BattleMachineItems:
# 59 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 60 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 61 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 62 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 63 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 64 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 65 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 66 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 67 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 68 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 69 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 70 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 71 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 72 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 73 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 74 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 75 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 76 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 77 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 78 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 79 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 80 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 81 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 82 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 83 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 84 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 85 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 86 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 87 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 88 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 89 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 90 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 91 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 92 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 93 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 94 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 95 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 96 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 97 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 98 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 99 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 100 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 101 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 102 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 103 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 104 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 105 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 106 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 107 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 108 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_TrainingMachine::
# 112 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 113 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_TrainingMachine_Text_0
# 114 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 115 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_TrainingMachineItems
# 116 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_TrainingMachine_Text_1
# 117 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 120 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_TrainingMachineItems:
# 121 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 122 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 123 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 124 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 125 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 126 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 127 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 128 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 129 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 130 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 131 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 132 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 133 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 134 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 135 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 136 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 137 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 138 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 139 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 140 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 141 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 142 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 143 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 144 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 145 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 146 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 147 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 148 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 149 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 150 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 151 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 152 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 153 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 154 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 155 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 156 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 157 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 158 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 159 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 160 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 161 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 162 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 163 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 164 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 165 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 166 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 167 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 168 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 169 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 170 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 171 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 172 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 173 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 174 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 175 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 176 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_TMMachine::
# 180 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 181 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_TMMachine_Text_0
# 182 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 183 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_TMMachineItems
# 184 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_TMMachine_Text_1
# 185 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_TMMachineItems:
# 189 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 190 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 191 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 192 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 193 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 194 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 195 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 196 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 197 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 198 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 199 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 200 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 201 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 202 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 203 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 204 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 205 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 206 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 207 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 208 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 209 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 210 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 211 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 212 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 213 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM55
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_EvolveMachine::
# 217 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 218 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_EvolveMachine_Text_0
# 219 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 220 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_EvolveMachineItems
# 221 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_EvolveMachine_Text_1
# 222 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 225 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_EvolveMachineItems:
# 226 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 227 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 228 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 229 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 230 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 231 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 232 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 233 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 234 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 235 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 236 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 237 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 238 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 239 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 240 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 241 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 242 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 243 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 244 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 245 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 246 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 247 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 248 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 249 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 250 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 251 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 252 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 253 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 254 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 255 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 256 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 257 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 258 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 259 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 260 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 261 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 262 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 263 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 264 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 265 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 266 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 267 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 268 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 269 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_BattleMachine_Text_0:
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

SlateportCity_Mart_EventScript_BattleMachine_Text_1:
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Happy battling!$"

SlateportCity_Mart_EventScript_TrainingMachine_Text_0:
# 113 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Ready to train?$"

SlateportCity_Mart_EventScript_TrainingMachine_Text_1:
# 116 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Level up!$"

SlateportCity_Mart_EventScript_TMMachine_Text_0:
# 181 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

SlateportCity_Mart_EventScript_TMMachine_Text_1:
# 184 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Go get'em!$"

SlateportCity_Mart_EventScript_EvolveMachine_Text_0:
# 218 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

SlateportCity_Mart_EventScript_EvolveMachine_Text_1:
# 221 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Change is the best!$"
