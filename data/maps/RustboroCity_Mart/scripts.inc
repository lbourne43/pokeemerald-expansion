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

RustboroCity_Mart_EventScript_BattleMart::
# 90 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 91 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_EventScript_BattleMart_Text_0
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_BattleMartItems
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_BattleMart_Text_1
# 96 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_BattleMartItems:
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 104 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 109 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 110 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 111 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 112 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 113 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 114 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 115 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 116 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 117 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 118 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 119 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 120 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 121 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 122 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 123 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 124 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 125 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 126 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 127 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 128 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 129 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 130 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 131 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 132 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 133 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 134 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 135 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 136 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 137 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 138 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 139 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 140 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 141 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 142 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 143 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 144 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 145 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 146 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 147 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 148 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 149 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 150 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 151 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 152 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 153 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 154 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 155 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 156 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 157 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 158 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 159 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 160 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 161 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 162 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 163 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 164 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 165 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 166 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 167 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 168 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 169 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 170 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 171 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 172 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 173 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 174 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 175 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 176 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 177 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 178 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 179 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 180 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 181 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 182 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 183 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 184 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 185 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 186 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 187 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 188 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 189 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 190 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 191 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 192 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 193 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 194 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 195 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 196 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 197 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 198 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 199 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 200 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 201 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 202 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 203 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 204 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 205 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 206 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 207 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 208 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 209 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 210 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 211 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 212 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 213 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 214 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 215 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 216 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 217 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 218 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 219 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 220 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 221 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_BattleMart_Text_0:
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

RustboroCity_Mart_EventScript_BattleMart_Text_1:
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Happy battling!$"
