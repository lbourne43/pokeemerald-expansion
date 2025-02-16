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
	message RustboroCity_Mart_EventScript_BattleMart_Text_0
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_BattleMartItems
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_EventScript_BattleMart_Text_1
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 98 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_BattleMartItems:
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 104 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 109 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 110 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 111 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 112 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 113 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 114 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 115 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 116 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 117 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 118 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 119 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 120 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 121 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 122 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 123 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BELT
# 124 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_LENS
# 125 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_BAND
# 126 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 127 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 128 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHARCOAL
# 129 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 130 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAGNET
# 131 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 132 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 133 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 134 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POISON_BARB
# 135 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 136 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 137 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 138 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 139 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HARD_STONE
# 140 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 141 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 142 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 143 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 144 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 145 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 146 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 147 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 148 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 149 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 150 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 151 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 152 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 153 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 154 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 155 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 156 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 157 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 158 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 159 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 160 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 161 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 162 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 163 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 164 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 165 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 166 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 167 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 168 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 169 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 170 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 171 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 172 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 173 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 174 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 175 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 176 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 177 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 178 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 179 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POWER_HERB
# 180 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 181 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 182 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_METRONOME
# 183 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
# 184 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 185 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 186 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 187 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 188 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 189 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 190 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 191 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 192 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 193 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EVIOLITE
# 194 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 195 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 196 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 197 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 198 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RING_TARGET
# 199 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 200 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 201 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 202 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 203 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 204 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 205 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 206 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 207 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 208 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_BattleMart_Text_0:
# 91 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Are you battle-ready?$"

RustboroCity_Mart_EventScript_BattleMart_Text_1:
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Happy battling!$"
