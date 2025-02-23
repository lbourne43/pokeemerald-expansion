# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown/scripts.pory"

# 7 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 8 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown/scripts.pory"

# 11 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 12 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 13 "data/maps/PacifidlogTown/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown/scripts.pory"

# 15 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 16 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 17 "data/maps/PacifidlogTown/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown/scripts.pory"

# 19 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 20 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown/scripts.pory"

# 23 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 28 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/PacifidlogTown/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown/scripts.pory"

# 31 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 32 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 33 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 34 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 35 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 36 "data/maps/PacifidlogTown/scripts.pory"

# 37 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 38 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 41 "data/maps/PacifidlogTown/scripts.pory"

# 42 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 50 "data/maps/PacifidlogTown/scripts.pory"

# 51 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"

PacifidlogTown_EventScript_Mom::
# 58 "data/maps/PacifidlogTown/scripts.pory"
	lockall
# 60 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_MOM_GEN9, PacifidlogTown_EventScript_Mom_1
# 64 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 65 "data/maps/PacifidlogTown/scripts.pory"
	message PacifidlogTown_EventScript_Mom_Text_1
# 66 "data/maps/PacifidlogTown/scripts.pory"
	multichoice 25, 5, MOM_GEN9_STARTER, 0
# 67 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 68 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_EventScript_Mom_5
# 71 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PacifidlogTown_EventScript_Mom_6
# 74 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PacifidlogTown_EventScript_Mom_7
PacifidlogTown_EventScript_Mom_4:
# 77 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_Mom_Text_2
# 78 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 79 "data/maps/PacifidlogTown/scripts.pory"
	release
	return

PacifidlogTown_EventScript_Mom_1:
# 61 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_Mom_Text_0, MSGBOX_NPC
# 62 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
	return

PacifidlogTown_EventScript_Mom_5:
# 69 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_MomGiveGrassStarter
	goto PacifidlogTown_EventScript_Mom_4

PacifidlogTown_EventScript_Mom_6:
# 72 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_MomGiveFireStarter
	goto PacifidlogTown_EventScript_Mom_4

PacifidlogTown_EventScript_Mom_7:
# 75 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_MomGiveWaterStarter
	goto PacifidlogTown_EventScript_Mom_4


PacifidlogTown_MomGiveGrassStarter::
# 84 "data/maps/PacifidlogTown/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 85 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_0, MSGBOX_YESNO
# 86 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_MomGiveGrassStarter_2
# 104 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 105 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_Mom_NotChosen
PacifidlogTown_MomGiveGrassStarter_1:
# 107 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 108 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_MomGiveGrassStarter_2:
# 87 "data/maps/PacifidlogTown/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5, ITEM_LUCKY_EGG
# 88 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_MomGiveGrassStarter_5
# 93 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_MomGiveGrassStarter_6
# 100 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 101 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_3
	goto PacifidlogTown_MomGiveGrassStarter_1

PacifidlogTown_MomGiveGrassStarter_5:
# 89 "data/maps/PacifidlogTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_1
# 91 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_NicknamePartyMon
# 92 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_MOM_GEN9
	goto PacifidlogTown_MomGiveGrassStarter_1

PacifidlogTown_MomGiveGrassStarter_6:
# 94 "data/maps/PacifidlogTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_1
# 96 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_NicknameBoxMon
# 97 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_2
# 98 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_MOM_GEN9
	goto PacifidlogTown_MomGiveGrassStarter_1


PacifidlogTown_MomGiveFireStarter::
# 113 "data/maps/PacifidlogTown/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 114 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveFireStarter_Text_0, MSGBOX_YESNO
# 115 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_MomGiveFireStarter_2
# 133 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 134 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_Mom_NotChosen
PacifidlogTown_MomGiveFireStarter_1:
# 136 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 137 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_MomGiveFireStarter_2:
# 116 "data/maps/PacifidlogTown/scripts.pory"
	givemon SPECIES_FUECOCO, 5, ITEM_LUCKY_EGG
# 117 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_MomGiveFireStarter_5
# 122 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_MomGiveFireStarter_6
# 129 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 130 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_3
	goto PacifidlogTown_MomGiveFireStarter_1

PacifidlogTown_MomGiveFireStarter_5:
# 118 "data/maps/PacifidlogTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveFireStarter_Text_1
# 120 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_NicknamePartyMon
# 121 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_MOM_GEN9
	goto PacifidlogTown_MomGiveFireStarter_1

PacifidlogTown_MomGiveFireStarter_6:
# 123 "data/maps/PacifidlogTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveFireStarter_Text_1
# 125 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_NicknameBoxMon
# 126 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveFireStarter_Text_2
# 127 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_MOM_GEN9
	goto PacifidlogTown_MomGiveFireStarter_1


PacifidlogTown_MomGiveWaterStarter::
# 142 "data/maps/PacifidlogTown/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 143 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveWaterStarter_Text_0, MSGBOX_YESNO
# 144 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_MomGiveWaterStarter_2
# 162 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 163 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_Mom_NotChosen
PacifidlogTown_MomGiveWaterStarter_1:
# 165 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 166 "data/maps/PacifidlogTown/scripts.pory"
	releaseall
	end

PacifidlogTown_MomGiveWaterStarter_2:
# 145 "data/maps/PacifidlogTown/scripts.pory"
	givemon SPECIES_QUAXLY, 5, ITEM_LUCKY_EGG
# 146 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_MomGiveWaterStarter_5
# 151 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_MomGiveWaterStarter_6
# 158 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 159 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveGrassStarter_Text_3
	goto PacifidlogTown_MomGiveWaterStarter_1

PacifidlogTown_MomGiveWaterStarter_5:
# 147 "data/maps/PacifidlogTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveWaterStarter_Text_1
# 149 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_NicknamePartyMon
# 150 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_MOM_GEN9
	goto PacifidlogTown_MomGiveWaterStarter_1

PacifidlogTown_MomGiveWaterStarter_6:
# 152 "data/maps/PacifidlogTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveWaterStarter_Text_1
# 154 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_NicknameBoxMon
# 155 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_MomGiveWaterStarter_Text_2
# 156 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_MOM_GEN9
	goto PacifidlogTown_MomGiveWaterStarter_1


PacifidlogTown_NicknamePartyMon::
# 171 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 172 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 173 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_NicknamePartyMon_1
	return

PacifidlogTown_NicknamePartyMon_1:
# 174 "data/maps/PacifidlogTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 175 "data/maps/PacifidlogTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


PacifidlogTown_NicknameBoxMon::
# 180 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_NicknameBoxMon_Text_0, MSGBOX_YESNO
# 181 "data/maps/PacifidlogTown/scripts.pory"
	hidemonpic
# 182 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_NicknameBoxMon_1
	return

PacifidlogTown_NicknameBoxMon_1:
# 183 "data/maps/PacifidlogTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


PacifidlogTown_Mom_NotChosen::
# 188 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Mom_NotChosen_Text_0, MSGBOX_NPC
# 189 "data/maps/PacifidlogTown/scripts.pory"
	call PacifidlogTown_EventScript_Mom
	return


PacifidlogTown_EventScript_Mom_Text_0:
# 61 "data/maps/PacifidlogTown/scripts.pory"
	.string "I hope your Pokemon are doing OK!$"

PacifidlogTown_EventScript_Mom_Text_1:
# 65 "data/maps/PacifidlogTown/scripts.pory"
	.string "Do you want a pokemon?$"

PacifidlogTown_EventScript_Mom_Text_2:
# 77 "data/maps/PacifidlogTown/scripts.pory"
	.string "Come back if you change your mind.$"

PacifidlogTown_MomGiveGrassStarter_Text_0:
# 85 "data/maps/PacifidlogTown/scripts.pory"
	.string "Do you want this Sprigatito?$"

PacifidlogTown_MomGiveGrassStarter_Text_1:
# 90 "data/maps/PacifidlogTown/scripts.pory"
	.string "Received Sprigatito!$"

PacifidlogTown_MomGiveGrassStarter_Text_2:
# 97 "data/maps/PacifidlogTown/scripts.pory"
	.string "Transferred Sprigatito to PC$"

PacifidlogTown_MomGiveGrassStarter_Text_3:
# 101 "data/maps/PacifidlogTown/scripts.pory"
	.string "No more room.$"

PacifidlogTown_MomGiveFireStarter_Text_0:
# 114 "data/maps/PacifidlogTown/scripts.pory"
	.string "Do you want this Fuecoco?$"

PacifidlogTown_MomGiveFireStarter_Text_1:
# 119 "data/maps/PacifidlogTown/scripts.pory"
	.string "Received Fuecoco!$"

PacifidlogTown_MomGiveFireStarter_Text_2:
# 126 "data/maps/PacifidlogTown/scripts.pory"
	.string "Transferred Fuecoco to PC$"

PacifidlogTown_MomGiveWaterStarter_Text_0:
# 143 "data/maps/PacifidlogTown/scripts.pory"
	.string "Do you want this Quaxly?$"

PacifidlogTown_MomGiveWaterStarter_Text_1:
# 148 "data/maps/PacifidlogTown/scripts.pory"
	.string "Received Quaxly!$"

PacifidlogTown_MomGiveWaterStarter_Text_2:
# 155 "data/maps/PacifidlogTown/scripts.pory"
	.string "Transferred Quaxly to PC$"

PacifidlogTown_NicknamePartyMon_Text_0:
# 172 "data/maps/PacifidlogTown/scripts.pory"
	.string "Give it a nickname?$"

PacifidlogTown_NicknameBoxMon_Text_0:
# 180 "data/maps/PacifidlogTown/scripts.pory"
	.string "Give a nickname?$"

PacifidlogTown_Mom_NotChosen_Text_0:
# 188 "data/maps/PacifidlogTown/scripts.pory"
	.string "You did not choose a Pokemon!$"
