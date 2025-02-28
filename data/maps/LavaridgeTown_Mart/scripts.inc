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

LavaridgeTown_Mart_EventScript_BattleMachine::
# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message LavaridgeTown_Mart_EventScript_BattleMachine_Text_0
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_BattleMachineItems
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_EventScript_BattleMachine_Text_1
# 54 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
	return


	.align 2
# 57 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_BattleMachineItems:
# 58 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 59 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 60 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 61 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 62 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 63 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 64 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 65 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 66 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 67 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 68 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 69 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 70 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 71 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 72 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 73 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 74 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 75 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 76 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 77 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 78 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 79 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 80 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 81 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 82 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 83 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 84 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 85 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 86 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 87 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 88 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 89 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 90 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 91 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 92 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 93 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 94 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 95 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 96 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 97 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 98 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 99 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 100 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 101 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 102 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 103 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 104 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 105 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 106 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 107 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_TrainingMachine::
# 111 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 112 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message LavaridgeTown_Mart_EventScript_TrainingMachine_Text_0
# 113 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 114 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_TrainingMachineItems
# 115 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_EventScript_TrainingMachine_Text_1
# 116 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
	return


	.align 2
# 119 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_TrainingMachineItems:
# 120 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 121 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 122 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 123 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 124 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 125 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 126 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 127 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 128 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 129 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 130 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 131 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 132 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 133 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 134 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 135 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 136 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 137 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 138 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 139 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 140 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 141 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 142 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 143 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 144 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 145 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 146 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 147 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 148 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 149 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 150 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 151 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 152 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 153 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 154 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 155 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 156 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 157 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 158 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 159 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 160 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 161 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 162 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 163 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 164 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 165 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 166 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 167 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 168 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 169 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 170 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 171 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 172 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 173 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 174 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 175 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_TMMachine::
# 179 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 180 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message LavaridgeTown_Mart_EventScript_TMMachine_Text_0
# 181 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 182 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_TMMachineItems
# 183 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_EventScript_TMMachine_Text_1
# 184 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
	return


	.align 2
# 187 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_TMMachineItems:
# 188 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 189 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 190 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 191 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 192 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 193 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 194 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 195 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 196 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 197 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 198 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 199 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 200 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 201 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 202 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 203 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 204 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 205 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 206 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 207 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 208 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 209 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 210 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM53
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_EvolveMachine::
# 214 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 215 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message LavaridgeTown_Mart_EventScript_EvolveMachine_Text_0
# 216 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 217 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_EvolveMachineItems
# 218 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_EventScript_EvolveMachine_Text_1
# 219 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
	return


	.align 2
# 222 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_EvolveMachineItems:
# 223 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 224 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 225 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 226 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 227 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 228 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 229 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 230 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 231 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 232 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 233 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 234 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 235 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 236 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 237 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 238 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 239 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 240 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 241 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 242 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 243 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 244 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 245 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 246 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 247 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 248 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 249 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 250 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 251 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 252 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 253 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 254 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 255 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 256 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 257 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 258 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 259 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 260 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 261 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 262 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 263 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 264 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 265 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 266 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_BattleMachine_Text_0:
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Are you combat ready?$"

LavaridgeTown_Mart_EventScript_BattleMachine_Text_1:
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Happy battling!$"

LavaridgeTown_Mart_EventScript_TrainingMachine_Text_0:
# 112 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Ready to train?$"

LavaridgeTown_Mart_EventScript_TrainingMachine_Text_1:
# 115 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Level up!$"

LavaridgeTown_Mart_EventScript_TMMachine_Text_0:
# 180 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "What do you need to learn?$"

LavaridgeTown_Mart_EventScript_TMMachine_Text_1:
# 183 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Go get'em!$"

LavaridgeTown_Mart_EventScript_EvolveMachine_Text_0:
# 215 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "So you wanna evolve?$"

LavaridgeTown_Mart_EventScript_EvolveMachine_Text_1:
# 218 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Change is the best!$"
