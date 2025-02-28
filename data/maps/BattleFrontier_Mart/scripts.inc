# 1 "data/maps/BattleFrontier_Mart/scripts.pory"

# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
.set LOCALID_OLD_WOMAN, 2
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"

# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts::
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"

# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Clerk::
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_Mart_Pokemart
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"

# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
	.align 2
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart:
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 29 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemartlistend
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"

# 34 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan::
# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"

# 38 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman::
# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_Mart/scripts.pory"

# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy::
# 47 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 48 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_Mart/scripts.pory"

# 50 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson:
# 51 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
# 52 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "grandson.\p"
# 53 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "But since we're here, we thought\n"
# 54 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "we should get some souvenirs.$"
# 55 "data/maps/BattleFrontier_Mart/scripts.pory"

# 56 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift:
# 57 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
# 58 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Wouldn't this make a nice gift?\p"
# 59 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It's…PRO…TE…IN?\n"
# 60 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It sounds delicious, doesn't it?$"
# 61 "data/maps/BattleFrontier_Mart/scripts.pory"

# 62 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
# 63 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the BATTLE FRONTIER's\n"
# 64 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "facilities don't allow the use of items\l"
# 65 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "during battles.\p"
# 66 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "That rule makes things tougher than\n"
# 67 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "they already are!$"

BattleFrontier_Mart_EventScript_BattleMachine::
# 71 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 72 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_BattleMachine_Text_0
# 73 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 74 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_BattleMachineItems
# 75 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_BattleMachine_Text_1
# 76 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 79 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_BattleMachineItems:
# 80 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 81 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 82 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 83 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 84 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 85 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 86 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 87 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 88 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 89 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 90 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 91 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 92 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 93 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 94 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 95 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 96 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 97 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 98 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 99 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 100 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 101 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 102 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 103 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 104 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 105 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 106 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 107 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 108 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 109 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 110 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 111 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 112 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 113 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 114 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 115 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 116 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 117 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 118 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 119 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 120 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 121 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 122 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 123 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 124 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 125 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 126 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 127 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 128 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 129 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_TrainingMachine::
# 133 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 134 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_TrainingMachine_Text_0
# 135 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 136 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_TrainingMachineItems
# 137 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_TrainingMachine_Text_1
# 138 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 141 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_TrainingMachineItems:
# 142 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 143 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 144 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 145 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 146 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 147 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 148 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 149 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 150 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 151 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 152 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 153 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 154 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 155 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 156 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 157 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 158 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 159 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 160 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 161 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 162 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 163 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 164 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 165 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 166 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 167 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 168 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 169 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 170 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 171 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 172 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 173 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 174 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 175 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 176 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 177 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 178 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 179 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 180 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 181 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 182 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 183 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 184 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 185 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 186 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 187 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 188 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 189 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 190 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 191 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 192 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 193 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 194 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 195 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 196 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 197 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_TMMachine::
# 201 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 202 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_TMMachine_Text_0
# 203 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 204 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_TMMachineItems
# 205 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_TMMachine_Text_1
# 206 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 209 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_TMMachineItems:
# 210 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 211 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 212 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 213 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 214 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 215 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 216 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 217 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 218 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 219 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 220 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 221 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 222 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 223 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 224 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 225 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 226 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 227 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 228 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 229 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 230 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM51
# 231 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM52
# 232 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM53
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_EvolveMachine::
# 236 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 237 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_EvolveMachine_Text_0
# 238 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 239 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_EvolveMachineItems
# 240 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_EvolveMachine_Text_1
# 241 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 244 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_EvolveMachineItems:
# 245 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 246 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 247 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 248 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 249 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 250 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 251 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 252 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 253 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 254 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 255 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 256 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 257 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 258 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 259 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 260 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 261 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 262 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 263 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 264 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 265 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 266 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 267 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 268 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 269 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 270 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 271 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 272 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 273 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 274 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 275 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 276 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 277 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 278 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 279 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 280 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 281 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 282 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 283 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 284 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 285 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 286 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 287 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 288 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_BattleMachine_Text_0:
# 72 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Are you combat ready?$"

BattleFrontier_Mart_EventScript_BattleMachine_Text_1:
# 75 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Happy battling!$"

BattleFrontier_Mart_EventScript_TrainingMachine_Text_0:
# 134 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Ready to train?$"

BattleFrontier_Mart_EventScript_TrainingMachine_Text_1:
# 137 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Level up!$"

BattleFrontier_Mart_EventScript_TMMachine_Text_0:
# 202 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "What do you need to learn?$"

BattleFrontier_Mart_EventScript_TMMachine_Text_1:
# 205 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Go get'em!$"

BattleFrontier_Mart_EventScript_EvolveMachine_Text_0:
# 237 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "So you wanna evolve?$"

BattleFrontier_Mart_EventScript_EvolveMachine_Text_1:
# 240 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Change is the best!$"
