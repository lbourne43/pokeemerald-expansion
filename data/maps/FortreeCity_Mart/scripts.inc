# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts::
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk::
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Mart/scripts.pory"

# 15 "data/maps/FortreeCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart:
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WOOD_MAIL
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemartlistend
# 28 "data/maps/FortreeCity_Mart/scripts.pory"

# 29 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman::
# 30 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 31 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 32 "data/maps/FortreeCity_Mart/scripts.pory"

# 33 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl::
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 35 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 36 "data/maps/FortreeCity_Mart/scripts.pory"

# 37 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy::
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 39 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 40 "data/maps/FortreeCity_Mart/scripts.pory"

# 41 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter:
# 42 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "SUPER REPEL lasts a long time,\n"
# 43 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "and it gets the job done.\p"
# 44 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "It's much better than an ordinary\n"
# 45 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "REPEL.$"
# 46 "data/maps/FortreeCity_Mart/scripts.pory"

# 47 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems:
# 48 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I always stock up on more items than\n"
# 49 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I'm sure I'll need.\p"
# 50 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "You never know what might happen.\n"
# 51 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Better to be safe than sorry!$"
# 52 "data/maps/FortreeCity_Mart/scripts.pory"

# 53 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow:
# 54 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\n"
# 55 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "immediately by one level.$"

FortreeCity_Mart_EventScript_BattleMachine::
# 59 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 60 "data/maps/FortreeCity_Mart/scripts.pory"
	message FortreeCity_Mart_EventScript_BattleMachine_Text_0
# 61 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 62 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_BattleMachineItems
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_EventScript_BattleMachine_Text_1
# 64 "data/maps/FortreeCity_Mart/scripts.pory"
	release
	return


	.align 2
# 67 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_BattleMachineItems:
# 68 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 69 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 70 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 71 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 72 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 73 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 74 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 75 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 76 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 77 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 78 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 79 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 80 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 81 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 82 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 83 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 84 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 85 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 86 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 87 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 88 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 89 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 90 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 91 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 92 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 93 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 94 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 95 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 96 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 97 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 98 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 99 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 100 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 101 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 102 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 103 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 104 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 105 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 106 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 107 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 108 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 109 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 110 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 111 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 112 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 113 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 114 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 115 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 116 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 117 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 118 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 119 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 120 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 121 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 122 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 123 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_TrainingMachine::
# 127 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 128 "data/maps/FortreeCity_Mart/scripts.pory"
	message FortreeCity_Mart_EventScript_TrainingMachine_Text_0
# 129 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 130 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_TrainingMachineItems
# 131 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_EventScript_TrainingMachine_Text_1
# 132 "data/maps/FortreeCity_Mart/scripts.pory"
	release
	return


	.align 2
# 135 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_TrainingMachineItems:
# 136 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 137 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 138 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 139 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 140 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 141 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 142 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 143 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 144 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 145 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 146 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 147 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 148 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 149 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 150 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 151 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 152 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 153 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 154 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 155 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 156 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 157 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 158 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 159 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 160 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 161 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 162 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 163 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 164 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 165 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 166 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 167 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 168 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 169 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 170 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 171 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 172 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 173 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 174 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 175 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 176 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 177 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 178 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 179 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 180 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 181 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 182 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 183 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 184 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 185 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 186 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 187 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 188 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 189 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 190 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 191 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 192 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 193 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 194 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 195 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 196 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 197 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_TMMachine::
# 201 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 202 "data/maps/FortreeCity_Mart/scripts.pory"
	message FortreeCity_Mart_EventScript_TMMachine_Text_0
# 203 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 204 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_TMMachineItems
# 205 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_EventScript_TMMachine_Text_1
# 206 "data/maps/FortreeCity_Mart/scripts.pory"
	release
	return


	.align 2
# 209 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_TMMachineItems:
# 210 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 211 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 212 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 213 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 214 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 215 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 216 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 217 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 218 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 219 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 220 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 221 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 222 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 223 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 224 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 225 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 226 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 227 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 228 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 229 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 230 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 231 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 232 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 233 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 234 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM55
# 235 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 236 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 237 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM58
# 238 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 239 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM60
# 240 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM61
# 241 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM62
# 242 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM63
# 243 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM64
# 244 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM65
# 245 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_EvolveMachine::
# 249 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 250 "data/maps/FortreeCity_Mart/scripts.pory"
	message FortreeCity_Mart_EventScript_EvolveMachine_Text_0
# 251 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 252 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_EvolveMachineItems
# 253 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_EventScript_EvolveMachine_Text_1
# 254 "data/maps/FortreeCity_Mart/scripts.pory"
	release
	return


	.align 2
# 257 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_EvolveMachineItems:
# 258 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 259 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 260 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 261 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 262 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 263 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 264 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 265 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 266 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 267 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 268 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 269 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 270 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 271 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 272 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 273 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 274 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 275 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 276 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 277 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 278 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 279 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 280 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 281 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 282 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 283 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 284 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 285 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 286 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 287 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 288 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 289 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 290 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 291 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 292 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 293 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 294 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 295 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 296 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 297 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 298 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 299 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 300 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 301 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_BattleMachine_Text_0:
# 60 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

FortreeCity_Mart_EventScript_BattleMachine_Text_1:
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Happy battling!$"

FortreeCity_Mart_EventScript_TrainingMachine_Text_0:
# 128 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Ready to train?$"

FortreeCity_Mart_EventScript_TrainingMachine_Text_1:
# 131 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Level up!$"

FortreeCity_Mart_EventScript_TMMachine_Text_0:
# 202 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

FortreeCity_Mart_EventScript_TMMachine_Text_1:
# 205 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Go get'em!$"

FortreeCity_Mart_EventScript_EvolveMachine_Text_0:
# 250 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

FortreeCity_Mart_EventScript_EvolveMachine_Text_1:
# 253 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Change is the best!$"
