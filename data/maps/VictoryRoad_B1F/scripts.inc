# 1 "data/maps/VictoryRoad_B1F/scripts.pory"

# 2 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_MapScripts::
# 3 "data/maps/VictoryRoad_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B1F/scripts.pory"

# 5 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Samuel::
# 6 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
# 7 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 9 "data/maps/VictoryRoad_B1F/scripts.pory"

# 10 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Michelle::
# 11 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
# 12 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_B1F/scripts.pory"

# 15 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Halle::
# 16 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
# 17 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 19 "data/maps/VictoryRoad_B1F/scripts.pory"

# 20 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelIntro:
# 21 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The thought that I'm getting closer to\n"
# 22 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the POKéMON LEAGUE…\p"
# 23 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I'm getting stage fright…$"
# 24 "data/maps/VictoryRoad_B1F/scripts.pory"

# 25 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelDefeat:
# 26 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I couldn't do a thing…$"
# 27 "data/maps/VictoryRoad_B1F/scripts.pory"

# 28 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelPostBattle:
# 29 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The POKéMON LEAGUE became distant\n"
# 30 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "again… What a letdown…$"
# 31 "data/maps/VictoryRoad_B1F/scripts.pory"

# 32 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleIntro:
# 33 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "This isn't the goal. It's only a place\n"
# 34 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "on the way to the POKéMON LEAGUE.$"
# 35 "data/maps/VictoryRoad_B1F/scripts.pory"

# 36 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleDefeat:
# 37 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "That's the way!$"
# 38 "data/maps/VictoryRoad_B1F/scripts.pory"

# 39 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichellePostBattle:
# 40 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "You'll do fine, for sure!\n"
# 41 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your POKéMON are all eager to go!$"
# 42 "data/maps/VictoryRoad_B1F/scripts.pory"

# 43 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleIntro:
# 44 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Okay, no need to get your back up!\n"
# 45 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Relax, let's take it easy!$"
# 46 "data/maps/VictoryRoad_B1F/scripts.pory"

# 47 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleDefeat:
# 48 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Whoa!\n"
# 49 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Wonderful!$"
# 50 "data/maps/VictoryRoad_B1F/scripts.pory"

# 51 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HallePostBattle:
# 52 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Sure, this is VICTORY ROAD.\p"
# 53 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "But it's not all that different from\n"
# 54 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the path you've taken so far.\p"
# 55 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Try to enjoy things the rest of\n"
# 56 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the way!$"
