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
# 121 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 122 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 123 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 124 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 125 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 126 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_TrainingMachine::
# 130 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 131 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_TrainingMachine_Text_0
# 132 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 133 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_TrainingMachineItems
# 134 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_TrainingMachine_Text_1
# 135 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 138 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_TrainingMachineItems:
# 139 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 140 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 141 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 142 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 143 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 144 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 145 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 146 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 147 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 148 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 149 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 150 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 151 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 152 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 153 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 154 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 155 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 156 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 157 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 158 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 159 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 160 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 161 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 162 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 163 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 164 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 165 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 166 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 167 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 168 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 169 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 170 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 171 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 172 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 173 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 174 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 175 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 176 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 177 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 178 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 179 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 180 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 181 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 182 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 183 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 184 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 185 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 186 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 187 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 188 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 189 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 190 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 191 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 192 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 193 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 194 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 195 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 196 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 197 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 198 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 199 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 200 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_TMMachine::
# 204 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 205 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_TMMachine_Text_0
# 206 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 207 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_TMMachineItems
# 208 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_TMMachine_Text_1
# 209 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 212 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_TMMachineItems:
# 213 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 214 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 215 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 216 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 217 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 218 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 219 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 220 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 221 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 222 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 223 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 224 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 225 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 226 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 227 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 228 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 229 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 230 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 231 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 232 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 233 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 234 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 235 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 236 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM54
# 237 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM55
# 238 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM56
# 239 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM57
# 240 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM58
# 241 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM59
# 242 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM60
# 243 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM61
# 244 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM62
# 245 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM63
# 246 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM64
# 247 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM65
# 248 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_EvolveMachine::
# 252 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 253 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message VerdanturfTown_Mart_EventScript_EvolveMachine_Text_0
# 254 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 255 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_EvolveMachineItems
# 256 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_EvolveMachine_Text_1
# 257 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	return


	.align 2
# 260 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_EvolveMachineItems:
# 261 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 262 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 263 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 264 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 265 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 266 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 267 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 268 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 269 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 270 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 271 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 272 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 273 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 274 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 275 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 276 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 277 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 278 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 279 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 280 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 281 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 282 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 283 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 284 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 285 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 286 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 287 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 288 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 289 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 290 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 291 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 292 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 293 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 294 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 295 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 296 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 297 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 298 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 299 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 300 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 301 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 302 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 303 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 304 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_BattleMachine_Text_0:
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Are you combat ready?$"

VerdanturfTown_Mart_EventScript_BattleMachine_Text_1:
# 66 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Happy battling!$"

VerdanturfTown_Mart_EventScript_TrainingMachine_Text_0:
# 131 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Ready to train?$"

VerdanturfTown_Mart_EventScript_TrainingMachine_Text_1:
# 134 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Level up!$"

VerdanturfTown_Mart_EventScript_TMMachine_Text_0:
# 205 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "What do you need to learn?$"

VerdanturfTown_Mart_EventScript_TMMachine_Text_1:
# 208 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Go get'em!$"

VerdanturfTown_Mart_EventScript_EvolveMachine_Text_0:
# 253 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "So you wanna evolve?$"

VerdanturfTown_Mart_EventScript_EvolveMachine_Text_1:
# 256 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Change is the best!$"
