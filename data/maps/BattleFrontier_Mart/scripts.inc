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
# 130 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 131 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 132 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 133 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 134 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 135 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_TrainingMachine::
# 139 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 140 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_TrainingMachine_Text_0
# 141 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 142 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_TrainingMachineItems
# 143 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_TrainingMachine_Text_1
# 144 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 147 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_TrainingMachineItems:
# 148 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 149 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 150 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 151 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 152 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 153 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 154 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 155 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 156 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 157 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 158 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 159 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 160 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 161 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 162 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 163 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 164 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 165 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 166 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 167 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 168 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 169 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 170 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 171 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 172 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 173 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 174 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 175 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 176 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 177 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 178 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 179 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 180 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 181 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 182 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 183 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 184 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 185 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 186 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 187 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 188 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 189 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 190 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 191 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 192 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 193 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 194 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 195 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 196 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 197 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 198 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 199 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 200 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 201 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 202 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 203 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 204 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 205 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 206 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 207 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 208 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 209 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 210 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 211 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 212 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 213 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 214 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 215 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 216 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 217 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 218 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 219 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 220 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 221 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 222 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 223 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 224 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 225 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_TMMachine::
# 229 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 230 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_TMMachine_Text_0
# 231 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 232 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_TMMachineItems
# 233 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_TMMachine_Text_1
# 234 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 237 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_TMMachineItems:
# 238 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 239 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 240 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 241 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 242 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 243 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 244 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 245 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 246 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 247 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 248 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 249 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 250 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 251 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 252 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 253 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 254 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 255 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 256 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 257 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 258 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM51
# 259 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM52
# 260 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM53
# 261 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM54
# 262 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM55
# 263 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM56
# 264 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM57
# 265 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM58
# 266 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM59
# 267 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM60
# 268 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM61
# 269 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM62
# 270 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM63
# 271 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM64
# 272 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM65
# 273 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_EvolveMachine::
# 277 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 278 "data/maps/BattleFrontier_Mart/scripts.pory"
	message BattleFrontier_Mart_EventScript_EvolveMachine_Text_0
# 279 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 280 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_EvolveMachineItems
# 281 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_EvolveMachine_Text_1
# 282 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	return


	.align 2
# 285 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_EvolveMachineItems:
# 286 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 287 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 288 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 289 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 290 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 291 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 292 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 293 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 294 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 295 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 296 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 297 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 298 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 299 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 300 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 301 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 302 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 303 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 304 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 305 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 306 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 307 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 308 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 309 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 310 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 311 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 312 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 313 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 314 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 315 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 316 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 317 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 318 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 319 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 320 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 321 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 322 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 323 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 324 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 325 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 326 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 327 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 328 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 329 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_BattleMachine_Text_0:
# 72 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Are you combat ready?$"

BattleFrontier_Mart_EventScript_BattleMachine_Text_1:
# 75 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Happy battling!$"

BattleFrontier_Mart_EventScript_TrainingMachine_Text_0:
# 140 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Ready to train?$"

BattleFrontier_Mart_EventScript_TrainingMachine_Text_1:
# 143 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Level up!$"

BattleFrontier_Mart_EventScript_TMMachine_Text_0:
# 230 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "What do you need to learn?$"

BattleFrontier_Mart_EventScript_TMMachine_Text_1:
# 233 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Go get'em!$"

BattleFrontier_Mart_EventScript_EvolveMachine_Text_0:
# 278 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "So you wanna evolve?$"

BattleFrontier_Mart_EventScript_EvolveMachine_Text_1:
# 281 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Change is the best!$"
