# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 10 "data/maps/FallarborTown/scripts.pory"
	end
# 11 "data/maps/FallarborTown/scripts.pory"

# 12 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 13 "data/maps/FallarborTown/scripts.pory"
	lock
# 14 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown/scripts.pory"
	release
# 18 "data/maps/FallarborTown/scripts.pory"
	end
# 19 "data/maps/FallarborTown/scripts.pory"

# 20 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown/scripts.pory"
	release
# 23 "data/maps/FallarborTown/scripts.pory"
	end
# 24 "data/maps/FallarborTown/scripts.pory"

# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 27 "data/maps/FallarborTown/scripts.pory"
	end
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 30 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 31 "data/maps/FallarborTown/scripts.pory"
	end
# 32 "data/maps/FallarborTown/scripts.pory"

# 33 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 34 "data/maps/FallarborTown/scripts.pory"
	lock
# 35 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 36 "data/maps/FallarborTown/scripts.pory"
	waitse
# 37 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 40 "data/maps/FallarborTown/scripts.pory"
	release
# 41 "data/maps/FallarborTown/scripts.pory"
	end
# 42 "data/maps/FallarborTown/scripts.pory"

# 43 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 44 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 45 "data/maps/FallarborTown/scripts.pory"
	end
# 46 "data/maps/FallarborTown/scripts.pory"

# 47 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 52 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 53 "data/maps/FallarborTown/scripts.pory"
	end
# 54 "data/maps/FallarborTown/scripts.pory"

# 55 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 60 "data/maps/FallarborTown/scripts.pory"

# 61 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 66 "data/maps/FallarborTown/scripts.pory"

# 67 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 68 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 71 "data/maps/FallarborTown/scripts.pory"

# 72 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 73 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 74 "data/maps/FallarborTown/scripts.pory"

# 75 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 76 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 84 "data/maps/FallarborTown/scripts.pory"

# 85 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 86 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 87 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 88 "data/maps/FallarborTown/scripts.pory"

# 89 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 90 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 91 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 92 "data/maps/FallarborTown/scripts.pory"

# 93 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 94 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 95 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_EventScript_Mom::
# 101 "data/maps/FallarborTown/scripts.pory"
	lockall
# 103 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_MOM_GEN4, FallarborTown_EventScript_Mom_1
# 107 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 108 "data/maps/FallarborTown/scripts.pory"
	message FallarborTown_EventScript_Mom_Text_1
# 109 "data/maps/FallarborTown/scripts.pory"
	multichoice 25, 5, MOM_GEN4_STARTER, 0
# 110 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 111 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_EventScript_Mom_5
# 114 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_EventScript_Mom_6
# 117 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FallarborTown_EventScript_Mom_7
FallarborTown_EventScript_Mom_4:
# 120 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_Mom_Text_2
# 121 "data/maps/FallarborTown/scripts.pory"
	waitmessage
# 122 "data/maps/FallarborTown/scripts.pory"
	release
	return

FallarborTown_EventScript_Mom_1:
# 104 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_Mom_Text_0, MSGBOX_NPC
# 105 "data/maps/FallarborTown/scripts.pory"
	closemessage
	return

FallarborTown_EventScript_Mom_5:
# 112 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_MomGiveGrassStarter
	goto FallarborTown_EventScript_Mom_4

FallarborTown_EventScript_Mom_6:
# 115 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_MomGiveFireStarter
	goto FallarborTown_EventScript_Mom_4

FallarborTown_EventScript_Mom_7:
# 118 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_MomGiveWaterStarter
	goto FallarborTown_EventScript_Mom_4


FallarborTown_MomGiveGrassStarter::
# 127 "data/maps/FallarborTown/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 128 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_0, MSGBOX_YESNO
# 129 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_MomGiveGrassStarter_2
# 147 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 148 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_Mom_NotChosen
FallarborTown_MomGiveGrassStarter_1:
# 150 "data/maps/FallarborTown/scripts.pory"
	waitmessage
# 151 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

FallarborTown_MomGiveGrassStarter_2:
# 130 "data/maps/FallarborTown/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_LUCKY_EGG
# 131 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FallarborTown_MomGiveGrassStarter_5
# 136 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FallarborTown_MomGiveGrassStarter_6
# 143 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 144 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_3
	goto FallarborTown_MomGiveGrassStarter_1

FallarborTown_MomGiveGrassStarter_5:
# 132 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_1
# 134 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_NicknamePartyMon
# 135 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MOM_GEN4
	goto FallarborTown_MomGiveGrassStarter_1

FallarborTown_MomGiveGrassStarter_6:
# 137 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 138 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_1
# 139 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_NicknameBoxMon
# 140 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_2
# 141 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MOM_GEN4
	goto FallarborTown_MomGiveGrassStarter_1


FallarborTown_MomGiveFireStarter::
# 156 "data/maps/FallarborTown/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 157 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveFireStarter_Text_0, MSGBOX_YESNO
# 158 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_MomGiveFireStarter_2
# 176 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 177 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_Mom_NotChosen
FallarborTown_MomGiveFireStarter_1:
# 179 "data/maps/FallarborTown/scripts.pory"
	waitmessage
# 180 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

FallarborTown_MomGiveFireStarter_2:
# 159 "data/maps/FallarborTown/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5, ITEM_LUCKY_EGG
# 160 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FallarborTown_MomGiveFireStarter_5
# 165 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FallarborTown_MomGiveFireStarter_6
# 172 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 173 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_3
	goto FallarborTown_MomGiveFireStarter_1

FallarborTown_MomGiveFireStarter_5:
# 161 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveFireStarter_Text_1
# 163 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_NicknamePartyMon
# 164 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MOM_GEN4
	goto FallarborTown_MomGiveFireStarter_1

FallarborTown_MomGiveFireStarter_6:
# 166 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveFireStarter_Text_1
# 168 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_NicknameBoxMon
# 169 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveFireStarter_Text_2
# 170 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MOM_GEN4
	goto FallarborTown_MomGiveFireStarter_1


FallarborTown_MomGiveWaterStarter::
# 185 "data/maps/FallarborTown/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 186 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveWaterStarter_Text_0, MSGBOX_YESNO
# 187 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_MomGiveWaterStarter_2
# 205 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 206 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_Mom_NotChosen
FallarborTown_MomGiveWaterStarter_1:
# 208 "data/maps/FallarborTown/scripts.pory"
	waitmessage
# 209 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

FallarborTown_MomGiveWaterStarter_2:
# 188 "data/maps/FallarborTown/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_LUCKY_EGG
# 189 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FallarborTown_MomGiveWaterStarter_5
# 194 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FallarborTown_MomGiveWaterStarter_6
# 201 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 202 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveGrassStarter_Text_3
	goto FallarborTown_MomGiveWaterStarter_1

FallarborTown_MomGiveWaterStarter_5:
# 190 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 191 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveWaterStarter_Text_1
# 192 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_NicknamePartyMon
# 193 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MOM_GEN4
	goto FallarborTown_MomGiveWaterStarter_1

FallarborTown_MomGiveWaterStarter_6:
# 195 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveWaterStarter_Text_1
# 197 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_NicknameBoxMon
# 198 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_MomGiveWaterStarter_Text_2
# 199 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MOM_GEN4
	goto FallarborTown_MomGiveWaterStarter_1


FallarborTown_NicknamePartyMon::
# 214 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 215 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 216 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_NicknamePartyMon_1
	return

FallarborTown_NicknamePartyMon_1:
# 217 "data/maps/FallarborTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 218 "data/maps/FallarborTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


FallarborTown_NicknameBoxMon::
# 223 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_NicknameBoxMon_Text_0, MSGBOX_YESNO
# 224 "data/maps/FallarborTown/scripts.pory"
	hidemonpic
# 225 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_NicknameBoxMon_1
	return

FallarborTown_NicknameBoxMon_1:
# 226 "data/maps/FallarborTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


FallarborTown_Mom_NotChosen::
# 231 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Mom_NotChosen_Text_0, MSGBOX_NPC
# 232 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_EventScript_Mom
	return


FallarborTown_EventScript_Mom_Text_0:
# 104 "data/maps/FallarborTown/scripts.pory"
	.string "I hope your Pokemon are doing OK!$"

FallarborTown_EventScript_Mom_Text_1:
# 108 "data/maps/FallarborTown/scripts.pory"
	.string "Do you want a pokemon?$"

FallarborTown_EventScript_Mom_Text_2:
# 120 "data/maps/FallarborTown/scripts.pory"
	.string "Come back if you change your mind.$"

FallarborTown_MomGiveGrassStarter_Text_0:
# 128 "data/maps/FallarborTown/scripts.pory"
	.string "Do you want this Turtwig?$"

FallarborTown_MomGiveGrassStarter_Text_1:
# 133 "data/maps/FallarborTown/scripts.pory"
	.string "Received Turtwig!$"

FallarborTown_MomGiveGrassStarter_Text_2:
# 140 "data/maps/FallarborTown/scripts.pory"
	.string "Transferred Turtwig to PC$"

FallarborTown_MomGiveGrassStarter_Text_3:
# 144 "data/maps/FallarborTown/scripts.pory"
	.string "No more room.$"

FallarborTown_MomGiveFireStarter_Text_0:
# 157 "data/maps/FallarborTown/scripts.pory"
	.string "Do you want this Chimchar?$"

FallarborTown_MomGiveFireStarter_Text_1:
# 162 "data/maps/FallarborTown/scripts.pory"
	.string "Received Chimchar!$"

FallarborTown_MomGiveFireStarter_Text_2:
# 169 "data/maps/FallarborTown/scripts.pory"
	.string "Transferred Chimchar to PC$"

FallarborTown_MomGiveWaterStarter_Text_0:
# 186 "data/maps/FallarborTown/scripts.pory"
	.string "Do you want this Piplup?$"

FallarborTown_MomGiveWaterStarter_Text_1:
# 191 "data/maps/FallarborTown/scripts.pory"
	.string "Received Piplup!$"

FallarborTown_MomGiveWaterStarter_Text_2:
# 198 "data/maps/FallarborTown/scripts.pory"
	.string "Transferred Piplup to PC$"

FallarborTown_NicknamePartyMon_Text_0:
# 215 "data/maps/FallarborTown/scripts.pory"
	.string "Give it a nickname?$"

FallarborTown_NicknameBoxMon_Text_0:
# 223 "data/maps/FallarborTown/scripts.pory"
	.string "Give a nickname?$"

FallarborTown_Mom_NotChosen_Text_0:
# 231 "data/maps/FallarborTown/scripts.pory"
	.string "You did not choose a Pokemon!$"
