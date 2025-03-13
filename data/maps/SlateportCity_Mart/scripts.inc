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
# 109 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 110 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 111 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 112 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 113 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 114 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_TrainingMachine::
# 118 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 119 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_TrainingMachine_Text_0
# 120 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 121 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_TrainingMachineItems
# 122 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_TrainingMachine_Text_1
# 123 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 126 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_TrainingMachineItems:
# 127 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 128 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 129 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 130 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 131 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 132 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 133 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 134 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 135 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 136 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 137 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 138 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 139 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 140 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 141 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 142 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 143 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 144 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 145 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 146 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 147 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 148 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 149 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 150 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 151 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 152 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 153 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 154 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 155 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 156 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 157 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 158 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 159 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 160 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 161 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 162 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 163 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 164 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 165 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 166 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 167 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 168 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 169 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 170 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 171 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 172 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 173 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 174 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 175 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 176 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 177 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 178 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 179 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 180 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 181 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 182 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 183 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 184 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 185 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 186 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 187 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 188 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_TMMachine::
# 192 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 193 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_TMMachine_Text_0
# 194 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 195 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_TMMachineItems
# 196 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_TMMachine_Text_1
# 197 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 200 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_TMMachineItems:
# 201 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 202 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 203 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 204 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 205 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 206 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 207 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 208 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 209 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 210 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 211 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 212 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 213 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 214 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 215 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 216 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 217 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 218 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 219 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 220 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 221 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 222 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 223 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 224 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 225 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM55
# 226 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 227 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 228 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM58
# 229 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 230 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM60
# 231 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM61
# 232 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM62
# 233 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM63
# 234 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM64
# 235 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM65
# 236 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_EvolveMachine::
# 240 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 241 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_EvolveMachine_Text_0
# 242 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 243 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_EvolveMachineItems
# 244 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_EvolveMachine_Text_1
# 245 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 248 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_EvolveMachineItems:
# 249 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 250 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 251 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 252 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 253 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 254 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 255 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 256 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 257 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 258 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 259 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 260 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 261 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 262 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 263 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 264 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 265 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 266 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 267 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 268 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 269 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 270 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 271 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 272 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 273 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 274 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 275 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 276 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 277 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 278 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 279 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 280 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 281 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 282 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 283 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 284 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 285 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 286 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 287 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 288 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 289 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 290 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 291 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 292 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_BattleMachine_Text_0:
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

SlateportCity_Mart_EventScript_BattleMachine_Text_1:
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Happy battling!$"

SlateportCity_Mart_EventScript_TrainingMachine_Text_0:
# 119 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Ready to train?$"

SlateportCity_Mart_EventScript_TrainingMachine_Text_1:
# 122 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Level up!$"

SlateportCity_Mart_EventScript_TMMachine_Text_0:
# 193 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

SlateportCity_Mart_EventScript_TMMachine_Text_1:
# 196 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Go get'em!$"

SlateportCity_Mart_EventScript_EvolveMachine_Text_0:
# 241 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

SlateportCity_Mart_EventScript_EvolveMachine_Text_1:
# 244 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Change is the best!$"
