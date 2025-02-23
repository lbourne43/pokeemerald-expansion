# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts::
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk::
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Mart/scripts.pory"

# 15 "data/maps/FortreeCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart:
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WOOD_MAIL
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemartlistend
# 28 "data/maps/FortreeCity_Mart/scripts.pory"

# 29 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman::
# 30 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 31 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 32 "data/maps/FortreeCity_Mart/scripts.pory"

# 33 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl::
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 35 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 36 "data/maps/FortreeCity_Mart/scripts.pory"

# 37 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy::
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 39 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 40 "data/maps/FortreeCity_Mart/scripts.pory"

# 41 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter:
# 42 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "SUPER REPEL lasts a long time,\n"
# 43 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "and it gets the job done.\p"
# 44 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "It's much better than an ordinary\n"
# 45 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "REPEL.$"
# 46 "data/maps/FortreeCity_Mart/scripts.pory"

# 47 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems:
# 48 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I always stock up on more items than\n"
# 49 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I'm sure I'll need.\p"
# 50 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "You never know what might happen.\n"
# 51 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Better to be safe than sorry!$"
# 52 "data/maps/FortreeCity_Mart/scripts.pory"

# 53 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow:
# 54 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\n"
# 55 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "immediately by one level.$"

FortreeCity_Mart_EventScript_BattleMart::
# 59 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 60 "data/maps/FortreeCity_Mart/scripts.pory"
	message FortreeCity_Mart_EventScript_BattleMart_Text_0
# 61 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 62 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_BattleMartItems
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_EventScript_BattleMart_Text_1
# 64 "data/maps/FortreeCity_Mart/scripts.pory"
	release
	return


	.align 2
# 67 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_BattleMartItems:
# 68 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 69 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 70 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 71 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 72 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 73 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 74 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 75 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 76 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 77 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 78 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 79 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 80 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 81 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 82 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 83 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 84 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 85 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 86 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 87 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 88 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 89 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 90 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 91 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 92 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 93 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 94 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 95 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 96 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 97 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 98 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 99 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 100 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 101 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 102 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 103 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 104 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 105 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 106 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 107 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 108 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 109 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 110 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 111 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 112 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 113 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 114 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 115 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 116 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 117 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 118 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 119 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 120 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 121 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 122 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 123 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 124 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 125 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 126 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 127 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 128 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 129 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 130 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 131 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 132 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 133 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 134 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 135 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 136 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 137 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 138 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 139 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 140 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 141 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 142 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 143 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 144 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 145 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 146 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 147 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 148 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 149 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 150 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 151 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 152 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 153 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 154 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 155 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 156 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 157 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 158 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 159 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 160 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 161 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 162 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 163 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 164 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 165 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 166 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 167 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 168 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 169 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 170 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 171 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 172 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 173 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 174 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 175 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 176 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 177 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 178 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 179 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 180 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 181 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 182 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 183 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 184 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 185 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 186 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 187 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 188 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 189 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 190 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_BattleMart_Text_0:
# 60 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

FortreeCity_Mart_EventScript_BattleMart_Text_1:
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Happy battling!$"
