# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/FallarborTown_Mart/scripts.pory"

# 31 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 34 "data/maps/FallarborTown_Mart/scripts.pory"

# 35 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 38 "data/maps/FallarborTown_Mart/scripts.pory"

# 39 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 48 "data/maps/FallarborTown_Mart/scripts.pory"

# 49 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 51 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my SKITTY evolve or not.\p"
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this MOON STONE,\n"
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 55 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 57 "data/maps/FallarborTown_Mart/scripts.pory"

# 58 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"
# 60 "data/maps/FallarborTown_Mart/scripts.pory"

# 61 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"

FallarborTown_Mart_EventScript_BattleMachine::
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	message FallarborTown_Mart_EventScript_BattleMachine_Text_0
# 70 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_BattleMachineItems
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_BattleMachine_Text_1
# 73 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	return


	.align 2
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_BattleMachineItems:
# 77 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 78 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 79 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 80 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 81 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 82 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 83 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 84 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 85 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 86 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 87 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 88 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 89 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 90 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 91 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 92 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 93 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 94 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 95 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 96 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 97 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 98 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 99 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 100 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 101 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 102 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 103 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 104 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 105 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 106 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 107 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 108 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 109 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 110 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 111 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 112 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 113 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 114 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 115 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 116 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 117 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 118 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 119 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 120 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 121 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 122 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 123 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 124 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 125 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 126 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_TrainingMachine::
# 130 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 131 "data/maps/FallarborTown_Mart/scripts.pory"
	message FallarborTown_Mart_EventScript_TrainingMachine_Text_0
# 132 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 133 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_TrainingMachineItems
# 134 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_TrainingMachine_Text_1
# 135 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	return


	.align 2
# 138 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_TrainingMachineItems:
# 139 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 140 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 141 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 142 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 143 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 144 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 145 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 146 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 147 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_IRON
# 148 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 149 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 150 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 151 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 152 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 153 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 154 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 155 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 156 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 157 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 158 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 159 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 160 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 161 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 162 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 163 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 164 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 165 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 166 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 167 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 168 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 169 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 170 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 171 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 172 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 173 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 174 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 175 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 176 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 177 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 178 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 179 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 180 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 181 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 182 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 183 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 184 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 185 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 186 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 187 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 188 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 189 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 190 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 191 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 192 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 193 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 194 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_TMMachine::
# 198 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 199 "data/maps/FallarborTown_Mart/scripts.pory"
	message FallarborTown_Mart_EventScript_TMMachine_Text_0
# 200 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 201 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_TMMachineItems
# 202 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_TMMachine_Text_1
# 203 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	return


	.align 2
# 206 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_TMMachineItems:
# 207 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 208 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 209 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 210 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 211 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 212 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 213 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 214 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 215 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 216 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 217 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 218 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 219 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 220 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 221 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 222 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 223 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 224 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 225 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 226 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 227 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 228 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 229 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 230 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM54
# 231 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TM55
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_EvolveMachine::
# 235 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 236 "data/maps/FallarborTown_Mart/scripts.pory"
	message FallarborTown_Mart_EventScript_EvolveMachine_Text_0
# 237 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 238 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_EvolveMachineItems
# 239 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_EvolveMachine_Text_1
# 240 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	return


	.align 2
# 243 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_EvolveMachineItems:
# 244 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 245 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 246 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 247 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 248 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 249 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 250 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 251 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 252 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 253 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 254 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 255 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 256 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 257 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 258 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 259 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 260 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 261 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 262 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 263 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 264 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 265 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 266 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 267 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 268 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 269 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 270 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 271 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 272 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 273 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 274 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 275 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 276 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 277 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 278 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 279 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 280 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 281 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 282 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 283 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 284 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 285 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 286 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 287 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_BattleMachine_Text_0:
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Are you combat ready?$"

FallarborTown_Mart_EventScript_BattleMachine_Text_1:
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Happy battling!$"

FallarborTown_Mart_EventScript_TrainingMachine_Text_0:
# 131 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Ready to train?$"

FallarborTown_Mart_EventScript_TrainingMachine_Text_1:
# 134 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Level up!$"

FallarborTown_Mart_EventScript_TMMachine_Text_0:
# 199 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "What do you need to learn?$"

FallarborTown_Mart_EventScript_TMMachine_Text_1:
# 202 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Go get'em!$"

FallarborTown_Mart_EventScript_EvolveMachine_Text_0:
# 236 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "So you wanna evolve?$"

FallarborTown_Mart_EventScript_EvolveMachine_Text_1:
# 239 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Change is the best!$"
