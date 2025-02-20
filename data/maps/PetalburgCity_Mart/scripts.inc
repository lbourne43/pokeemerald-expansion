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

PetalburgCity_Mart_EventScript_BattleMart::
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	message PetalburgCity_Mart_EventScript_BattleMart_Text_0
# 89 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_BattleMartItems
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_EventScript_BattleMart_Text_1
# 92 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	return


	.align 2
# 95 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_BattleMartItems:
# 96 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 97 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 98 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 99 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 100 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 101 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 102 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 103 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 104 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 105 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 106 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 107 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 108 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 109 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 110 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 111 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 112 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 113 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 114 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 115 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 116 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 117 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 118 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 119 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 120 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 121 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 122 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 123 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 124 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 125 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 126 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 127 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 128 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 129 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 130 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 131 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 132 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 133 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 134 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 135 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 136 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 137 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 138 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 139 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 140 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 141 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 142 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 143 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 144 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 145 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 146 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 147 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 148 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 149 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 150 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 151 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 152 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 153 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 154 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 155 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 156 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 157 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 158 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 159 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 160 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 161 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 162 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 163 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 164 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 165 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 166 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 167 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 168 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 169 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 170 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 171 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 172 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 173 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 174 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 175 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 176 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 177 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 178 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 179 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 180 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 181 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 182 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 183 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 184 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 185 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 186 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 187 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 188 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 189 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 190 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 191 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 192 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 193 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 194 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 195 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 196 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 197 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 198 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 199 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 200 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 201 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 202 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 203 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 204 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 205 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 206 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 207 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 208 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 209 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 210 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 211 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 212 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 213 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 214 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_BattleMart_Text_0:
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

PetalburgCity_Mart_EventScript_BattleMart_Text_1:
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Happy battling!$"
