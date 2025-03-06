# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Mart/scripts.pory"

# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Mart/scripts.pory"

# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 33 "data/maps/RustboroCity_Mart/scripts.pory"

# 34 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 39 "data/maps/RustboroCity_Mart/scripts.pory"

# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 55 "data/maps/RustboroCity_Mart/scripts.pory"

# 56 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 58 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 59 "data/maps/RustboroCity_Mart/scripts.pory"

# 60 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 62 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Mart/scripts.pory"

# 64 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 65 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 66 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Mart/scripts.pory"

# 68 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 70 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 71 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 73 "data/maps/RustboroCity_Mart/scripts.pory"

# 74 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
# 76 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 78 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 79 "data/maps/RustboroCity_Mart/scripts.pory"

# 80 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 82 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 83 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 84 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"

RustboroCity_Mart_EventScript_BattleMachine::
# 90 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 91 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_EventScript_BattleMachine_Text_0
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_BattleMachineItems
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_BattleMachine_Text_1
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 98 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_BattleMachineItems:
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 104 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 109 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 110 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 111 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 112 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 113 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 114 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 115 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 116 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 117 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 118 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 119 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 120 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 121 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 122 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 123 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 124 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 125 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 126 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 127 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 128 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 129 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 130 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 131 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 132 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 133 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 134 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 135 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 136 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 137 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 138 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 139 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 140 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 141 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 142 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 143 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 144 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 145 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 146 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 147 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 148 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_TrainingMachine::
# 152 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 153 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_EventScript_TrainingMachine_Text_0
# 154 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 155 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_TrainingMachineItems
# 156 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_TrainingMachine_Text_1
# 157 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 160 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_TrainingMachineItems:
# 161 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 162 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 163 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 164 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 165 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 166 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 167 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 168 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 169 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 170 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 171 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 172 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 173 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 174 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 175 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 176 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 177 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 178 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 179 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 180 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 181 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 182 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 183 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 184 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 185 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 186 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 187 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 188 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 189 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 190 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 191 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 192 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 193 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 194 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 195 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 196 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 197 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 198 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 199 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 200 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 201 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 202 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 203 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 204 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 205 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 206 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 207 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 208 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 209 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 210 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 211 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 212 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 213 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 214 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 215 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 216 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_TMMachine::
# 220 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 221 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_EventScript_TMMachine_Text_0
# 222 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 223 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_TMMachineItems
# 224 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_TMMachine_Text_1
# 225 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 228 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_TMMachineItems:
# 229 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 230 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 231 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 232 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 233 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 234 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 235 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 236 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 237 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 238 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 239 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 240 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 241 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 242 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 243 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 244 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 245 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 246 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 247 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 248 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 249 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 250 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 251 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 252 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 253 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM55
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_EvolveMachine::
# 257 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 258 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_EventScript_EvolveMachine_Text_0
# 259 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 260 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_EvolveMachineItems
# 261 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_EvolveMachine_Text_1
# 262 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 265 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_EvolveMachineItems:
# 266 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 267 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 268 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 269 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 270 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 271 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 272 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 273 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 274 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 275 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 276 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 277 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 278 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 279 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 280 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 281 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 282 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 283 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 284 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 285 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 286 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 287 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 288 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 289 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 290 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 291 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 292 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 293 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 294 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 295 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 296 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 297 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 298 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 299 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 300 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 301 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 302 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 303 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 304 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 305 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 306 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 307 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 308 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 309 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_BattleMachine_Text_0:
# 91 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

RustboroCity_Mart_EventScript_BattleMachine_Text_1:
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Happy battling!$"

RustboroCity_Mart_EventScript_TrainingMachine_Text_0:
# 153 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Ready to train?$"

RustboroCity_Mart_EventScript_TrainingMachine_Text_1:
# 156 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Level up!$"

RustboroCity_Mart_EventScript_TMMachine_Text_0:
# 221 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

RustboroCity_Mart_EventScript_TMMachine_Text_1:
# 224 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Go get'em!$"

RustboroCity_Mart_EventScript_EvolveMachine_Text_0:
# 258 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

RustboroCity_Mart_EventScript_EvolveMachine_Text_1:
# 261 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Change is the best!$"
