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

LavaridgeTown_Mart_EventScript_BattleMart::
# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message LavaridgeTown_Mart_EventScript_BattleMart_Text_0
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_BattleMartItems
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_EventScript_BattleMart_Text_1
# 54 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
	return


	.align 2
# 57 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_BattleMartItems:
# 58 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 59 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 60 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 61 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 62 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 63 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 64 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 65 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 66 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 67 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 68 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 69 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 70 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 71 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 72 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 73 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 74 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 75 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 76 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 77 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 78 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM51
# 79 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM52
# 80 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TM53
# 81 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 82 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 83 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 84 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 85 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 86 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 87 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 88 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 89 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 90 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 91 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 92 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 93 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 94 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 95 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 96 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 97 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 98 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 99 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 100 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 101 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 102 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 103 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 104 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 105 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 106 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 107 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 108 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 109 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 110 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 111 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 112 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 113 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 114 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 115 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 116 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 117 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 118 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 119 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 120 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 121 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 122 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 123 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 124 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 125 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 126 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 127 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 128 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 129 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 130 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 131 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 132 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 133 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 134 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 135 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 136 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 137 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 138 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 139 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 140 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 141 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 142 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 143 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 144 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 145 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 146 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 147 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 148 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 149 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 150 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 151 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 152 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 153 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 154 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 155 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 156 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 157 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 158 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 159 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 160 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 161 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 162 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 163 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 164 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 165 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 166 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 167 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 168 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 169 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 170 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 171 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 172 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 173 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 174 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 175 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 176 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 177 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 178 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 179 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 180 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_BattleMart_Text_0:
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Are you battle-ready?$"

LavaridgeTown_Mart_EventScript_BattleMart_Text_1:
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Happy battling!$"
