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

MauvilleCity_Mart_EventScript_BattleMart::
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	message MauvilleCity_Mart_EventScript_BattleMart_Text_0
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_BattleMartItems
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_EventScript_BattleMart_Text_1
# 60 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	return


	.align 2
# 63 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_BattleMartItems:
# 64 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 65 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 66 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 67 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 68 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 69 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 70 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 71 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 72 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 73 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 74 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 75 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 76 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 77 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 78 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 79 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 80 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 81 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 82 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 83 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 84 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 85 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 86 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 87 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 88 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 89 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 90 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 91 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 92 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 93 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 94 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 95 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 96 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 97 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 98 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 99 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 100 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 101 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 102 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 103 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 104 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 105 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 106 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 107 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 108 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 109 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 110 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 111 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 112 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 113 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 114 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 115 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 116 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 117 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 118 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 119 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 120 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 121 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 122 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 123 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 124 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 125 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 126 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 127 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 128 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 129 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 130 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 131 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 132 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 133 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 134 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 135 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 136 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 137 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 138 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 139 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 140 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 141 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 142 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 143 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 144 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 145 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 146 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 147 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 148 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 149 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 150 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 151 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 152 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 153 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 154 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 155 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 156 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 157 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 158 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 159 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 160 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 161 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 162 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 163 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 164 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 165 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 166 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 167 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 168 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 169 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 170 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 171 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 172 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 173 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 174 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 175 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 176 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 177 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 178 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 179 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 180 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 181 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 182 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 183 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 184 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 185 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 186 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_BattleMart_Text_0:
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

MauvilleCity_Mart_EventScript_BattleMart_Text_1:
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Happy battling!$"
