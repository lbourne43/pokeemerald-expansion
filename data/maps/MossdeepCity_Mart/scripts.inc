# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"

# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"

# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"

# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"

# 40 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic:
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "REVIVE is fantastic!\p"
# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Give it to a fainted POKéMON,\n"
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "and the POKéMON will arise.\p"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "But be careful, REVIVE doesn't restore\n"
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the used-up PP of moves.$"
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"

# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest:
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\p"
# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Out of all the REPEL sprays, it lasts\n"
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the longest.$"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"

# 52 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare:
# 53 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\n"
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BALLS that are only made in MOSSDEEP.\p"
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A NET BALL is effective against\n"
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BUG-type and WATER-type POKéMON.\p"
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A DIVE BALL works best on POKéMON\n"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "at the bottom of the sea.$"

MossdeepCity_Mart_EventScript_BattleMart::
# 62 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	message MossdeepCity_Mart_EventScript_BattleMart_Text_0
# 64 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 65 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_BattleMartItems
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_BattleMart_Text_1
# 67 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
	return


	.align 2
# 70 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_BattleMartItems:
# 71 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 72 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 73 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 74 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 75 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 76 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 77 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 78 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 79 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 80 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 81 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 82 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 83 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 84 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 85 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 86 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 87 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 88 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 89 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 90 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 91 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 92 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 93 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 94 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 95 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 96 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 97 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 98 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 99 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 100 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 101 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 102 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 103 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 104 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 105 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 106 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 107 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 108 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 109 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 110 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 111 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 112 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 113 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 114 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 115 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 116 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 117 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 118 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 119 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 120 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 121 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 122 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 123 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 124 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 125 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 126 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 127 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 128 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 129 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 130 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 131 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 132 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 133 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 134 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 135 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 136 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 137 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 138 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 139 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 140 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 141 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 142 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 143 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 144 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 145 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 146 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 147 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 148 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 149 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 150 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 151 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 152 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 153 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 154 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 155 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 156 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 157 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 158 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 159 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 160 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 161 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 162 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 163 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 164 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 165 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 166 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 167 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 168 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 169 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 170 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 171 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 172 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 173 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 174 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 175 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 176 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 177 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 178 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 179 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 180 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 181 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 182 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 183 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 184 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 185 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 186 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 187 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 188 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 189 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 190 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 191 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 192 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 193 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

MossdeepCity_Mart_EventScript_BattleMart_Text_0:
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

MossdeepCity_Mart_EventScript_BattleMart_Text_1:
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Happy battling!$"
