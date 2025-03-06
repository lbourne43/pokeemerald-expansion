# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"

# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"

# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"

# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"

# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"

# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"

# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your POKéMON!$"
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"

# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps POKéMON away, so it's\l"
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"

# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "POKéMON, it will lose HP until it faints.\l"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"

PetalburgCity_Mart_EventScript_BattleMachine::
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	message PetalburgCity_Mart_EventScript_BattleMachine_Text_0
# 89 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_BattleMachineItems
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_EventScript_BattleMachine_Text_1
# 92 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	return


	.align 2
# 95 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_BattleMachineItems:
# 96 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 97 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 98 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 99 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 100 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 101 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 102 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 103 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 104 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 105 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 106 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 107 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 108 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 109 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 110 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 111 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 112 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 113 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 114 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 115 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 116 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 117 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 118 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 119 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 120 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 121 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 122 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 123 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 124 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 125 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 126 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 127 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 128 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 129 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 130 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 131 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 132 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 133 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 134 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 135 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 136 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 137 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 138 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 139 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 140 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 141 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 142 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 143 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 144 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 145 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_TrainingMachine::
# 149 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 150 "data/maps/PetalburgCity_Mart/scripts.pory"
	message PetalburgCity_Mart_EventScript_TrainingMachine_Text_0
# 151 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 152 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_TrainingMachineItems
# 153 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_EventScript_TrainingMachine_Text_1
# 154 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	return


	.align 2
# 157 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_TrainingMachineItems:
# 158 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 159 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 160 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 161 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 162 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 163 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 164 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 165 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 166 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 167 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 168 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 169 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 170 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 171 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 172 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 173 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 174 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 175 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 176 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 177 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 178 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 179 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 180 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 181 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 182 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 183 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 184 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 185 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 186 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 187 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 188 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 189 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 190 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 191 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 192 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 193 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 194 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 195 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 196 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 197 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 198 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 199 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 200 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 201 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 202 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 203 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 204 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 205 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 206 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 207 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 208 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 209 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 210 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 211 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 212 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 213 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_TMMachine::
# 217 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 218 "data/maps/PetalburgCity_Mart/scripts.pory"
	message PetalburgCity_Mart_EventScript_TMMachine_Text_0
# 219 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 220 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_TMMachineItems
# 221 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_EventScript_TMMachine_Text_1
# 222 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	return


	.align 2
# 225 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_TMMachineItems:
# 226 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 227 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 228 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 229 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 230 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 231 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 232 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 233 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 234 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 235 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 236 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 237 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 238 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 239 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 240 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 241 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 242 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 243 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 244 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 245 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 246 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 247 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 248 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 249 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 250 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM55
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_EvolveMachine::
# 254 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 255 "data/maps/PetalburgCity_Mart/scripts.pory"
	message PetalburgCity_Mart_EventScript_EvolveMachine_Text_0
# 256 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 257 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_EvolveMachineItems
# 258 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_EventScript_EvolveMachine_Text_1
# 259 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	return


	.align 2
# 262 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_EvolveMachineItems:
# 263 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 264 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 265 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 266 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 267 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 268 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 269 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 270 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 271 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 272 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 273 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 274 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 275 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 276 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 277 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 278 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 279 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 280 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 281 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 282 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 283 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 284 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 285 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 286 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 287 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 288 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 289 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 290 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 291 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 292 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 293 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 294 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 295 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 296 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 297 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 298 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 299 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 300 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 301 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 302 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 303 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 304 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 305 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 306 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_BattleMachine_Text_0:
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

PetalburgCity_Mart_EventScript_BattleMachine_Text_1:
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Happy battling!$"

PetalburgCity_Mart_EventScript_TrainingMachine_Text_0:
# 150 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Ready to train?$"

PetalburgCity_Mart_EventScript_TrainingMachine_Text_1:
# 153 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Level up!$"

PetalburgCity_Mart_EventScript_TMMachine_Text_0:
# 218 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

PetalburgCity_Mart_EventScript_TMMachine_Text_1:
# 221 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Go get'em!$"

PetalburgCity_Mart_EventScript_EvolveMachine_Text_0:
# 255 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

PetalburgCity_Mart_EventScript_EvolveMachine_Text_1:
# 258 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Change is the best!$"
