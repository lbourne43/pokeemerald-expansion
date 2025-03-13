# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 23 "data/maps/OldaleTown_Mart/scripts.pory"

# 24 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 29 "data/maps/OldaleTown_Mart/scripts.pory"

# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 38 "data/maps/OldaleTown_Mart/scripts.pory"

# 39 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 46 "data/maps/OldaleTown_Mart/scripts.pory"

# 47 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 51 "data/maps/OldaleTown_Mart/scripts.pory"

# 52 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 55 "data/maps/OldaleTown_Mart/scripts.pory"

# 56 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 59 "data/maps/OldaleTown_Mart/scripts.pory"

# 60 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 63 "data/maps/OldaleTown_Mart/scripts.pory"

# 64 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"

OldaleTown_Mart_EventScript_BattleMachine::
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_BattleMachine_Text_0
# 74 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_BattleMachineItems
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_BattleMachine_Text_1
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_BattleMachineItems:
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 82 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 86 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 87 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 88 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 89 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 90 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 92 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 93 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 94 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 95 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 96 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 97 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 98 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 99 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 100 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 101 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 102 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 103 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 104 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 105 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 106 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 107 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 108 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 109 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 110 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 111 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 112 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 113 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 114 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 115 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 116 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 117 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 118 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 120 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 121 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 122 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 123 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 124 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 125 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 126 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 127 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 128 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 129 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 130 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 131 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 132 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 133 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 134 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 136 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_TrainingMachine::
# 140 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 141 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_TrainingMachine_Text_0
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_TrainingMachineItems
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_TrainingMachine_Text_1
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 148 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_TrainingMachineItems:
# 149 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 150 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 151 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 152 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 153 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 154 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 155 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 156 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 157 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 158 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 159 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 160 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 161 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 162 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 163 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 164 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 165 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 166 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 167 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 168 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 169 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 170 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 171 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 172 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 173 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 174 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 175 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 176 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 177 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 178 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 179 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 180 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 181 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 182 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 183 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 184 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 185 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 186 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 187 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 188 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 189 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 190 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 191 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 192 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 193 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 194 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 195 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 196 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 197 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 198 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 199 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 200 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 201 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 202 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 203 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 204 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 205 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 206 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 207 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 208 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 209 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_TMMachine::
# 214 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 215 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_TMMachine_Text_0
# 216 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 217 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_TMMachineItems
# 218 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_TMMachine_Text_1
# 219 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 222 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_TMMachineItems:
# 223 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 224 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 225 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 226 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 227 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 228 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 229 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 230 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 231 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 232 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 233 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 234 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 235 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 236 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 237 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 238 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 239 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 240 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 241 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 242 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 243 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 244 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 245 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 246 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM54
# 247 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM55
# 248 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM56
# 249 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM57
# 250 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM58
# 251 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM59
# 252 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM60
# 253 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM61
# 254 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM62
# 255 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM63
# 256 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM64
# 257 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM65
# 258 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_EvolveMachine::
# 262 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 263 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_EvolveMachine_Text_0
# 264 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 265 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_EvolveMachineItems
# 266 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_EvolveMachine_Text_1
# 267 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 270 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_EvolveMachineItems:
# 271 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 272 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 273 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 274 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 275 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 276 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 277 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 278 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 279 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 280 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 281 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 282 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 283 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 284 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 285 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 286 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 287 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 288 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 289 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 290 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 291 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 292 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 293 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 294 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 295 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 296 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 297 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 298 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 299 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 300 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 301 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 302 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 303 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 304 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 305 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 306 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 307 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 308 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 309 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 310 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 311 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 312 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 313 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 314 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_BattleMachine_Text_0:
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Are you combat ready?$"

OldaleTown_Mart_EventScript_BattleMachine_Text_1:
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Happy battling!$"

OldaleTown_Mart_EventScript_TrainingMachine_Text_0:
# 141 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Ready to train?$"

OldaleTown_Mart_EventScript_TrainingMachine_Text_1:
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Level up!$"

OldaleTown_Mart_EventScript_TMMachine_Text_0:
# 215 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "What do you need to learn?$"

OldaleTown_Mart_EventScript_TMMachine_Text_1:
# 218 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Go get'em!$"

OldaleTown_Mart_EventScript_EvolveMachine_Text_0:
# 263 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "So you wanna evolve?$"

OldaleTown_Mart_EventScript_EvolveMachine_Text_1:
# 266 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Change is the best!$"
