# 1 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_MapScripts::
# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Intro:
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 12 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where do you think you're going?$"
# 13 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Defeat:
# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I failed to win!$"
# 16 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 17 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 18 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "My partner forgot the map in that\n"
# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "submarine!\p"
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "How's that for being useless?$"
