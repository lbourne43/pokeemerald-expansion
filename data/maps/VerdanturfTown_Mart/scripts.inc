# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts::
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart:
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemartlistend
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial:
# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\n"
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "is crucial.\p"
# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It jacks up the power of some moves\n"
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "even though it's only for one battle.$"
# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "strategy guides for the BATTLE TENT…\p"
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It seems one must rely on one's\n"
# 52 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "own wits after all…$"
# 53 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The NEST BALL works better on\n"
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "weakened POKéMON.\p"
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "VERDANTURF is the only place you can\n"
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "buy it.$"

VerdanturfTown_Mart_EventScript_BattleMachine::
# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_BattleMachine_Text_0
# 64 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 65 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_BattleMachineItems
# 66 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_BattleMachine_Text_1
# 67 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 70 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_BattleMachineItems:
# 71 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 72 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 73 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 74 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 75 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 76 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 77 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 78 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 79 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 80 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 81 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 82 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 83 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 84 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 85 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 86 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 87 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 88 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 89 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 90 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 91 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 92 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 93 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 94 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 95 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 96 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 97 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 98 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 99 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 100 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 101 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 102 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 103 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 104 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 105 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 106 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 107 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 108 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 109 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 110 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 111 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 112 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 113 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 114 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 115 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 116 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 117 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 118 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 119 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 120 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_TrainingMachine::
# 124 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 125 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_TrainingMachine_Text_0
# 126 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 127 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_TrainingMachineItems
# 128 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_TrainingMachine_Text_1
# 129 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 132 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_TrainingMachineItems:
# 133 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 134 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 135 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 136 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 137 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 138 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 139 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 140 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 141 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 142 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 143 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 144 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 145 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 146 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 147 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 148 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 149 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 150 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 151 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 152 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 153 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 154 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 155 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 156 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 157 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 158 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 159 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 160 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 161 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 162 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 163 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 164 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 165 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 166 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 167 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 168 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 169 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 170 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 171 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 172 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 173 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 174 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 175 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 176 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 177 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 178 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 179 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 180 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 181 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 182 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 183 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 184 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 185 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 186 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 187 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 188 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_TMMachine::
# 192 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 193 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_TMMachine_Text_0
# 194 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 195 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_TMMachineItems
# 196 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_TMMachine_Text_1
# 197 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_TMMachineItems:
# 201 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 202 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 203 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 204 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 205 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 206 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 207 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 208 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 209 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 210 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 211 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 212 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 213 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 214 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 215 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 216 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 217 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 218 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 219 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 220 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 221 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 222 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 223 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 224 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM54
# 225 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM55
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_EvolveMachine::
# 229 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 230 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_EvolveMachine_Text_0
# 231 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 232 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_EvolveMachineItems
# 233 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_EvolveMachine_Text_1
# 234 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 237 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_EvolveMachineItems:
# 238 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 239 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 240 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 241 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 242 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 243 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 244 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 245 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 246 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 247 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 248 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 249 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 250 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 251 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 252 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 253 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 254 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 255 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 256 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 257 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 258 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 259 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 260 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 261 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 262 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 263 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 264 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 265 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 266 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 267 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 268 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 269 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 270 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 271 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 272 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 273 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 274 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 275 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 276 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 277 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 278 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 279 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 280 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 281 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_BattleMachine_Text_0:
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Are you combat ready?$"

VerdanturfTown_Mart_EventScript_BattleMachine_Text_1:
# 66 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Happy battling!$"

VerdanturfTown_Mart_EventScript_TrainingMachine_Text_0:
# 125 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Ready to train?$"

VerdanturfTown_Mart_EventScript_TrainingMachine_Text_1:
# 128 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Level up!$"

VerdanturfTown_Mart_EventScript_TMMachine_Text_0:
# 193 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "What do you need to learn?$"

VerdanturfTown_Mart_EventScript_TMMachine_Text_1:
# 196 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Go get'em!$"

VerdanturfTown_Mart_EventScript_EvolveMachine_Text_0:
# 230 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "So you wanna evolve?$"

VerdanturfTown_Mart_EventScript_EvolveMachine_Text_1:
# 233 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Change is the best!$"
