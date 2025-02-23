# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/SlateportCity_Mart/scripts.pory"

# 28 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 31 "data/maps/SlateportCity_Mart/scripts.pory"

# 32 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 35 "data/maps/SlateportCity_Mart/scripts.pory"

# 36 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 39 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 40 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a POKéMON MART.$"
# 41 "data/maps/SlateportCity_Mart/scripts.pory"

# 42 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 43 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
# 44 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching POKéMON.\p"
# 45 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 46 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive POKéMON…$"

SlateportCity_Mart_EventScript_BattleMart::
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	message SlateportCity_Mart_EventScript_BattleMart_Text_0
# 52 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_BattleMartItems
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_EventScript_BattleMart_Text_1
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	return


	.align 2
# 58 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_BattleMartItems:
# 59 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 60 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 61 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 62 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 63 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 64 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 65 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 66 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 67 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 68 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 69 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 70 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 71 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 72 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 73 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 74 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 75 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 76 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 77 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 78 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 79 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 80 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 81 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 82 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 83 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 84 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 85 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 86 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 87 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 88 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 89 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 90 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 91 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 92 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 93 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 94 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 95 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 96 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 97 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 98 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 99 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 100 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 101 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 102 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 103 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 104 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 105 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 106 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 107 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 108 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 109 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 110 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 111 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 112 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 113 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 114 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 115 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 116 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 117 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 118 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 119 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 120 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 121 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 122 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 123 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 124 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 125 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 126 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 127 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 128 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 129 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 130 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 131 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 132 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 133 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 134 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 135 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 136 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 137 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 138 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 139 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 140 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 141 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 142 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 143 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 144 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 145 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 146 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 147 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 148 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 149 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 150 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 151 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 152 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 153 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 154 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 155 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 156 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 157 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 158 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 159 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 160 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 161 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 162 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 163 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 164 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 165 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 166 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 167 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 168 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 169 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 170 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 171 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 172 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 173 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 174 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 175 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 176 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 177 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 178 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 179 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 180 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 181 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_BattleMart_Text_0:
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

SlateportCity_Mart_EventScript_BattleMart_Text_1:
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Happy battling!$"
