# 1 "data/maps/SootopolisCity_Mart/scripts.pory"

# 2 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_MapScripts::
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"

# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk::
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"

# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart:
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 23 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"

# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan::
# 29 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"

# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"

# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman::
# 43 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 50 "data/maps/SootopolisCity_Mart/scripts.pory"

# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"

# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_PPUpIsGreat:
# 57 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It raises the POWER POINTS, the PP,\n"
# 59 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "of a POKéMON move.$"
# 60 "data/maps/SootopolisCity_Mart/scripts.pory"

# 61 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_TooScaryOutside:
# 62 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
# 63 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What is happening?\p"
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "I really want to know, but it's too\n"
# 65 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "scary to go outside.$"
# 66 "data/maps/SootopolisCity_Mart/scripts.pory"

# 67 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
# 68 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know FULL RESTORE?\p"
# 69 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Full restoration of HP!\n"
# 70 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Eradication of all status problems!\p"
# 71 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It's truly an item of your dreams!$"
# 72 "data/maps/SootopolisCity_Mart/scripts.pory"

# 73 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_DidSomethingAwaken:
# 74 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
# 75 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Did something awaken?$"

SootopolisCity_Mart_EventScript_BattleMachine::
# 80 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 81 "data/maps/SootopolisCity_Mart/scripts.pory"
	message SootopolisCity_Mart_EventScript_BattleMachine_Text_0
# 82 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 83 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_BattleMachineItems
# 84 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_EventScript_BattleMachine_Text_1
# 85 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	return


	.align 2
# 88 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_BattleMachineItems:
# 89 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 90 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 91 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 92 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 93 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 94 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 95 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 96 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 97 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 98 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 99 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 100 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 101 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 102 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 103 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 104 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 105 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 106 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 107 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 108 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 109 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 110 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 111 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 112 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 113 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 114 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 115 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 116 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 117 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 118 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 119 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 120 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 121 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 122 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 123 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 124 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 125 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 126 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 127 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 128 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 129 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 130 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 131 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 132 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 133 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 134 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 135 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 136 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 137 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 138 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 139 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 140 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 141 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 142 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 143 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 144 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_TrainingMachine::
# 148 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 149 "data/maps/SootopolisCity_Mart/scripts.pory"
	message SootopolisCity_Mart_EventScript_TrainingMachine_Text_0
# 150 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 151 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_TrainingMachineItems
# 152 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_EventScript_TrainingMachine_Text_1
# 153 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	return


	.align 2
# 156 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_TrainingMachineItems:
# 157 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 158 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 159 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 160 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 161 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 162 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 163 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 164 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 165 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 166 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 167 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 168 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 169 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 170 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PP_MAX
# 171 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 172 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 173 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 174 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 175 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 176 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 177 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 178 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 179 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 180 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 181 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 182 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 183 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 184 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 185 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 186 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 187 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 188 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 189 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 190 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 191 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 192 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 193 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 194 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 195 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 196 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LAX_MINT
# 197 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 198 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 199 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MILD_MINT
# 200 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_RASH_MINT
# 201 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 202 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CALM_MINT
# 203 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 204 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 205 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 206 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 207 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 208 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 209 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 210 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 211 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 212 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 213 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 214 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 215 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 216 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 217 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_TMMachine::
# 222 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 223 "data/maps/SootopolisCity_Mart/scripts.pory"
	message SootopolisCity_Mart_EventScript_TMMachine_Text_0
# 224 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 225 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_TMMachineItems
# 226 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_EventScript_TMMachine_Text_1
# 227 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	return


	.align 2
# 230 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_TMMachineItems:
# 231 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 232 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 233 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 234 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 235 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 236 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 237 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 238 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 239 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 240 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 241 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 242 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 243 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 244 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 245 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 246 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 247 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 248 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 249 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 250 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 251 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 252 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 253 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 254 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 255 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM55
# 256 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 257 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 258 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM58
# 259 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 260 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM60
# 261 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM61
# 262 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM62
# 263 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM63
# 264 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM64
# 265 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM65
# 266 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM66
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_EvolveMachine::
# 270 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 271 "data/maps/SootopolisCity_Mart/scripts.pory"
	message SootopolisCity_Mart_EventScript_EvolveMachine_Text_0
# 272 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 273 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_EvolveMachineItems
# 274 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_EventScript_EvolveMachine_Text_1
# 275 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	return


	.align 2
# 278 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_EvolveMachineItems:
# 279 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 280 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 281 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 282 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 283 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 284 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 285 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 286 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 287 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 288 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 289 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 290 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
# 291 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 292 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 293 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 294 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 295 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 296 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_UPGRADE
# 297 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTOR
# 298 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 299 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 300 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 301 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 302 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 303 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 304 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SACHET
# 305 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 306 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 307 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 308 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 309 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 310 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 311 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 312 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 313 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 314 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 315 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 316 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 317 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 318 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 319 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 320 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 321 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 322 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_BattleMachine_Text_0:
# 81 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Are you combat ready?$"

SootopolisCity_Mart_EventScript_BattleMachine_Text_1:
# 84 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Happy battling!$"

SootopolisCity_Mart_EventScript_TrainingMachine_Text_0:
# 149 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Ready to train?$"

SootopolisCity_Mart_EventScript_TrainingMachine_Text_1:
# 152 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Level up!$"

SootopolisCity_Mart_EventScript_TMMachine_Text_0:
# 223 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What do you need to learn?$"

SootopolisCity_Mart_EventScript_TMMachine_Text_1:
# 226 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Go get'em!$"

SootopolisCity_Mart_EventScript_EvolveMachine_Text_0:
# 271 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "So you wanna evolve?$"

SootopolisCity_Mart_EventScript_EvolveMachine_Text_1:
# 274 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Change is the best!$"
