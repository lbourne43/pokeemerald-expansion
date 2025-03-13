# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"

# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"

# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"

# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 41 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of POKéMON.\p"
# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X ATTACK and X DEFEND…\p"
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 45 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 46 "data/maps/MauvilleCity_Mart/scripts.pory"

# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 50 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The TRAINER's decisions determine how\n"
# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"

MauvilleCity_Mart_EventScript_BattleMachine::
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	message MauvilleCity_Mart_EventScript_BattleMachine_Text_0
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_BattleMachineItems
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_EventScript_BattleMachine_Text_1
# 60 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 63 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_BattleMachineItems:
# 64 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 65 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 66 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 67 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 68 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 69 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 70 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 71 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 72 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 73 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 74 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 75 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 76 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 77 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 78 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 79 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 80 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 81 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 82 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 83 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 84 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 85 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 86 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 87 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 88 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 89 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 90 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 91 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 92 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 93 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 94 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 95 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 96 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 97 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 98 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 99 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 100 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 101 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 102 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 103 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 104 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 105 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 106 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 107 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 108 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 109 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 110 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 111 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 112 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 113 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 114 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 115 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 116 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 117 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 118 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 119 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_TrainingMachine::
# 123 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 124 "data/maps/MauvilleCity_Mart/scripts.pory"
	message MauvilleCity_Mart_EventScript_TrainingMachine_Text_0
# 125 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 126 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_TrainingMachineItems
# 127 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_EventScript_TrainingMachine_Text_1
# 128 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 131 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_TrainingMachineItems:
# 132 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 133 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 134 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 135 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 136 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 137 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 138 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 139 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 140 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 141 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 142 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 143 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 144 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 145 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 146 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 147 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 148 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 149 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 150 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 151 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 152 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 153 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 154 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 155 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 156 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 157 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 158 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 159 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 160 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 161 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 162 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 163 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 164 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 165 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 166 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 167 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 168 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 169 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 170 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 171 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 172 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 173 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 174 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 175 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 176 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 177 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 178 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 179 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 180 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 181 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 182 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 183 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 184 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 185 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 186 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 187 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 188 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 189 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 190 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 191 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 192 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 193 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_TMMachine::
# 197 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 198 "data/maps/MauvilleCity_Mart/scripts.pory"
	message MauvilleCity_Mart_EventScript_TMMachine_Text_0
# 199 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 200 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_TMMachineItems
# 201 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_EventScript_TMMachine_Text_1
# 202 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 205 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_TMMachineItems:
# 206 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 207 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 208 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 209 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 210 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 211 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 212 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 213 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 214 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 215 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 216 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 217 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 218 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 219 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 220 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 221 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 222 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 223 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 224 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 225 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 226 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 227 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 228 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 229 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 230 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM55
# 231 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 232 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 233 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM58
# 234 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 235 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM60
# 236 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM61
# 237 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM62
# 238 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM63
# 239 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM64
# 240 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM65
# 241 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_EvolveMachine::
# 245 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 246 "data/maps/MauvilleCity_Mart/scripts.pory"
	message MauvilleCity_Mart_EventScript_EvolveMachine_Text_0
# 247 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 248 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_EvolveMachineItems
# 249 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_EventScript_EvolveMachine_Text_1
# 250 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 253 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_EvolveMachineItems:
# 254 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 255 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 256 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 257 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 258 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 259 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 260 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 261 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 262 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 263 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 264 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 265 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 266 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 267 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 268 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 269 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 270 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 271 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 272 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 273 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 274 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 275 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 276 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 277 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 278 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 279 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 280 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 281 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 282 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 283 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 284 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 285 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 286 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 287 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 288 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 289 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 290 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 291 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 292 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 293 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 294 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 295 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 296 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 297 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_BattleMachine_Text_0:
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

MauvilleCity_Mart_EventScript_BattleMachine_Text_1:
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Happy battling!$"

MauvilleCity_Mart_EventScript_TrainingMachine_Text_0:
# 124 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Ready to train?$"

MauvilleCity_Mart_EventScript_TrainingMachine_Text_1:
# 127 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Level up!$"

MauvilleCity_Mart_EventScript_TMMachine_Text_0:
# 198 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

MauvilleCity_Mart_EventScript_TMMachine_Text_1:
# 201 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Go get'em!$"

MauvilleCity_Mart_EventScript_EvolveMachine_Text_0:
# 246 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

MauvilleCity_Mart_EventScript_EvolveMachine_Text_1:
# 249 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Change is the best!$"
