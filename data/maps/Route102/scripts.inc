# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/Route102/scripts.pory"
	end
# 8 "data/maps/Route102/scripts.pory"

# 9 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 10 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenIntro, MSGBOX_NPC
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"

# 13 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 15 "data/maps/Route102/scripts.pory"
	end
# 16 "data/maps/Route102/scripts.pory"

# 17 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 18 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 19 "data/maps/Route102/scripts.pory"
	end
# 20 "data/maps/Route102/scripts.pory"

# 21 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 22 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 23 "data/maps/Route102/scripts.pory"
	end
# 24 "data/maps/Route102/scripts.pory"

# 25 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 26 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 27 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 28 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 29 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 30 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 31 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 32 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 33 "data/maps/Route102/scripts.pory"
	release
# 34 "data/maps/Route102/scripts.pory"
	end
# 35 "data/maps/Route102/scripts.pory"

# 36 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 37 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 38 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 40 "data/maps/Route102/scripts.pory"
	release
# 41 "data/maps/Route102/scripts.pory"
	end
# 42 "data/maps/Route102/scripts.pory"

# 43 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 44 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 45 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 46 "data/maps/Route102/scripts.pory"
	release
# 47 "data/maps/Route102/scripts.pory"
	end
# 48 "data/maps/Route102/scripts.pory"

# 49 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 50 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 51 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 52 "data/maps/Route102/scripts.pory"
	release
# 53 "data/maps/Route102/scripts.pory"
	end
# 54 "data/maps/Route102/scripts.pory"

# 55 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 56 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 57 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 58 "data/maps/Route102/scripts.pory"
	release
# 59 "data/maps/Route102/scripts.pory"
	end
# 60 "data/maps/Route102/scripts.pory"

# 61 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 62 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 63 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route102/scripts.pory"
	end
# 65 "data/maps/Route102/scripts.pory"

# 66 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 67 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_NPC
# 68 "data/maps/Route102/scripts.pory"
	end
# 69 "data/maps/Route102/scripts.pory"

# 70 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 71 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 72 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route102/scripts.pory"
	end
# 74 "data/maps/Route102/scripts.pory"

# 75 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 76 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 77 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 78 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 79 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 80 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 81 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 82 "data/maps/Route102/scripts.pory"

# 83 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 84 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 85 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 86 "data/maps/Route102/scripts.pory"

# 87 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 88 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 89 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 90 "data/maps/Route102/scripts.pory"

# 91 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 92 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 93 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 94 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 95 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 96 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 97 "data/maps/Route102/scripts.pory"

# 98 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 99 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 100 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 101 "data/maps/Route102/scripts.pory"

# 102 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 103 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 104 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 105 "data/maps/Route102/scripts.pory"

# 106 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 107 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 108 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
