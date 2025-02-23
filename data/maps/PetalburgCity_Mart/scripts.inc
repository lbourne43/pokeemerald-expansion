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
	.2byte ITEM_TM_BULLET_SEED
# 97 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 98 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 99 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 100 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 101 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 102 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 103 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 104 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 105 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 106 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 107 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 108 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 109 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 110 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 111 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 112 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 113 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 114 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 115 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 116 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 117 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 118 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 119 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 120 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 121 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 122 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 123 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 124 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 125 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 126 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 127 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 128 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 129 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 130 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 131 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 132 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 133 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 134 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 135 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 136 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 137 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 138 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 139 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 140 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 141 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 142 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 143 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 144 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 145 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 146 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 147 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 148 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 149 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 150 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 151 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 152 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 153 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 154 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 155 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 156 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 157 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 158 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 159 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 160 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 161 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 162 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 163 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 164 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 165 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 166 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 167 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 168 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 169 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 170 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 171 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 172 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 173 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 174 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 175 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 176 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 177 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 178 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 179 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 180 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 181 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 182 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 183 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 184 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 185 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 186 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 187 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 188 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 189 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 190 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 191 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 192 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 193 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 194 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 195 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 196 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 197 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 198 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 199 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 200 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 201 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 202 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 203 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 204 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 205 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 206 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 207 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 208 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 209 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 210 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 211 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 212 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 213 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 214 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 215 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 216 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 217 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 218 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_BattleMart_Text_0:
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

PetalburgCity_Mart_EventScript_BattleMart_Text_1:
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Happy battling!$"
