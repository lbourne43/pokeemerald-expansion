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
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_TrainingMachine::
# 134 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_TrainingMachine_Text_0
# 136 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 137 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_TrainingMachineItems
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_TrainingMachine_Text_1
# 139 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_TrainingMachineItems:
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 146 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 147 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 148 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 149 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 150 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 151 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 152 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 153 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 154 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 155 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 156 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 157 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 158 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 159 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 160 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 161 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 162 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 163 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 164 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 165 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 166 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 167 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 168 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 169 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 170 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 171 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 172 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 173 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 174 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 175 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 176 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 177 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 178 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 179 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 180 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 181 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 182 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 183 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 184 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 185 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 186 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 187 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 188 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 189 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 190 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 191 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 192 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 193 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 194 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 195 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 196 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 197 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 198 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_TMMachine::
# 202 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 203 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_TMMachine_Text_0
# 204 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 205 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_TMMachineItems
# 206 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_TMMachine_Text_1
# 207 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 210 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_TMMachineItems:
# 211 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 212 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 213 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 214 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 215 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 216 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 217 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 218 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 219 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 220 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 221 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 222 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 223 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 224 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 225 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 226 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 227 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 228 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 229 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 230 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 231 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 232 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 233 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 234 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM54
# 235 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TM55
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_EvolveMachine::
# 239 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 240 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_EvolveMachine_Text_0
# 241 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 242 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_EvolveMachineItems
# 243 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_EvolveMachine_Text_1
# 244 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 247 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_EvolveMachineItems:
# 248 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 249 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 250 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 251 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 252 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 253 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 254 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 255 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 256 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 257 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 258 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 259 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 260 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 261 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 262 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 263 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 264 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 265 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 266 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 267 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 268 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 269 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 270 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 271 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 272 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 273 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 274 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 275 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 276 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 277 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 278 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 279 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 280 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 281 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 282 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 283 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 284 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 285 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 286 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 287 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 288 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 289 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 290 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 291 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_BattleMachine_Text_0:
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Are you combat ready?$"

OldaleTown_Mart_EventScript_BattleMachine_Text_1:
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Happy battling!$"

OldaleTown_Mart_EventScript_TrainingMachine_Text_0:
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Ready to train?$"

OldaleTown_Mart_EventScript_TrainingMachine_Text_1:
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Level up!$"

OldaleTown_Mart_EventScript_TMMachine_Text_0:
# 203 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "What do you need to learn?$"

OldaleTown_Mart_EventScript_TMMachine_Text_1:
# 206 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Go get'em!$"

OldaleTown_Mart_EventScript_EvolveMachine_Text_0:
# 240 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "So you wanna evolve?$"

OldaleTown_Mart_EventScript_EvolveMachine_Text_1:
# 243 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Change is the best!$"
