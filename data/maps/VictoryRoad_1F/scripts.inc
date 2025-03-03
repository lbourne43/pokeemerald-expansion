# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_WALLY_ENTRANCE, 3
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 7 "data/maps/VictoryRoad_1F/scripts.pory"

# 8 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 3, VictoryRoad_1F_EventScript_SetEntranceWallyPos3
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 13 "data/maps/VictoryRoad_1F/scripts.pory"

# 14 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 31, 4
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_UP
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 18 "data/maps/VictoryRoad_1F/scripts.pory"

# 19 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 31, 4
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 23 "data/maps/VictoryRoad_1F/scripts.pory"

# 24 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos3::
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 31, 4
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 28 "data/maps/VictoryRoad_1F/scripts.pory"

# 29 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 37 "data/maps/VictoryRoad_1F/scripts.pory"

# 38 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 46 "data/maps/VictoryRoad_1F/scripts.pory"

# 47 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger3::
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 3
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer3
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 55 "data/maps/VictoryRoad_1F/scripts.pory"

# 56 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyLeavePlayer
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 71 "data/maps/VictoryRoad_1F/scripts.pory"

# 72 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyLeavePlayer:
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 85 "data/maps/VictoryRoad_1F/scripts.pory"

# 86 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 95 "data/maps/VictoryRoad_1F/scripts.pory"

# 96 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 104 "data/maps/VictoryRoad_1F/scripts.pory"

# 105 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer3:
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_down
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 114 "data/maps/VictoryRoad_1F/scripts.pory"

# 115 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 117 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 119 "data/maps/VictoryRoad_1F/scripts.pory"

# 120 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 122 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 127 "data/maps/VictoryRoad_1F/scripts.pory"

# 128 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 132 "data/maps/VictoryRoad_1F/scripts.pory"

# 133 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 137 "data/maps/VictoryRoad_1F/scripts.pory"

# 138 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 142 "data/maps/VictoryRoad_1F/scripts.pory"

# 143 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 147 "data/maps/VictoryRoad_1F/scripts.pory"

# 148 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 150 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 152 "data/maps/VictoryRoad_1F/scripts.pory"

# 153 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you're surprised to see me here!\p"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I made it all the way here, and it's\n"
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all thanks to you!\p"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, losing to you that time\n"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "made me stronger!\p"
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But I'm not going to lose anymore!\p"
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to win! For the POKéMON who\n"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gave me courage and strength!\p"
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 164 "data/maps/VictoryRoad_1F/scripts.pory"

# 165 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 168 "data/maps/VictoryRoad_1F/scripts.pory"

# 169 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, but one of these days, I'll\l"
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "catch up to you!$"
# 173 "data/maps/VictoryRoad_1F/scripts.pory"

# 174 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 179 "data/maps/VictoryRoad_1F/scripts.pory"

# 180 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"

# 184 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 187 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the POKéMON LEAGUE!$"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"

# 190 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 191 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 193 "data/maps/VictoryRoad_1F/scripts.pory"

# 194 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 197 "data/maps/VictoryRoad_1F/scripts.pory"

# 198 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"

# 203 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"

# 207 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"

# 210 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 211 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 213 "data/maps/VictoryRoad_1F/scripts.pory"

# 214 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 217 "data/maps/VictoryRoad_1F/scripts.pory"

# 218 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"

# 222 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 224 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 225 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the POKéMON CHAMPION.\p"
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 227 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 228 "data/maps/VictoryRoad_1F/scripts.pory"

# 229 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 230 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"

# 233 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 235 "data/maps/VictoryRoad_1F/scripts.pory"

# 236 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"
