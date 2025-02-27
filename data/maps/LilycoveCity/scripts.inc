# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 14 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LilycoveCity/scripts.pory"
	end
# 17 "data/maps/LilycoveCity/scripts.pory"

# 18 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 20 "data/maps/LilycoveCity/scripts.pory"
	end
# 21 "data/maps/LilycoveCity/scripts.pory"

# 22 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	return
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 44 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 45 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity/scripts.pory"
	release
# 55 "data/maps/LilycoveCity/scripts.pory"
	end
# 56 "data/maps/LilycoveCity/scripts.pory"

# 57 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 58 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 62 "data/maps/LilycoveCity/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity/scripts.pory"
	release
# 72 "data/maps/LilycoveCity/scripts.pory"
	end
# 73 "data/maps/LilycoveCity/scripts.pory"

# 74 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 87 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity/scripts.pory"
	release
# 89 "data/maps/LilycoveCity/scripts.pory"
	end
# 90 "data/maps/LilycoveCity/scripts.pory"

# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 92 "data/maps/LilycoveCity/scripts.pory"
	lock
# 93 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 94 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 117 "data/maps/LilycoveCity/scripts.pory"
	lock
# 118 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 119 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity/scripts.pory"
	release
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 138 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 150 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 164 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 165 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 177 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity/scripts.pory"
	end
# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 188 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 200 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 201 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 204 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 207 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 209 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 214 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 215 "data/maps/LilycoveCity/scripts.pory"
	end
# 216 "data/maps/LilycoveCity/scripts.pory"

# 217 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 218 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 219 "data/maps/LilycoveCity/scripts.pory"
	end
# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 222 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 223 "data/maps/LilycoveCity/scripts.pory"
	end
# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 226 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 227 "data/maps/LilycoveCity/scripts.pory"
	end
# 228 "data/maps/LilycoveCity/scripts.pory"

# 229 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 230 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 231 "data/maps/LilycoveCity/scripts.pory"
	end
# 232 "data/maps/LilycoveCity/scripts.pory"

# 233 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 234 "data/maps/LilycoveCity/scripts.pory"
	lock
# 235 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 236 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 237 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 238 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 239 "data/maps/LilycoveCity/scripts.pory"
	end
# 240 "data/maps/LilycoveCity/scripts.pory"

# 241 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 242 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 243 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 244 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 245 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 246 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 247 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 248 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 249 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 250 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 251 "data/maps/LilycoveCity/scripts.pory"
	end
# 252 "data/maps/LilycoveCity/scripts.pory"

# 253 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 254 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 255 "data/maps/LilycoveCity/scripts.pory"
	return
# 256 "data/maps/LilycoveCity/scripts.pory"

# 257 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 258 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 259 "data/maps/LilycoveCity/scripts.pory"
	return
# 260 "data/maps/LilycoveCity/scripts.pory"

# 261 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 262 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 263 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 264 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 265 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/LilycoveCity/scripts.pory"
	release
# 267 "data/maps/LilycoveCity/scripts.pory"
	end
# 268 "data/maps/LilycoveCity/scripts.pory"

# 269 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 270 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 271 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 272 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 273 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 274 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 275 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 276 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 277 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 278 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 279 "data/maps/LilycoveCity/scripts.pory"
	end
# 280 "data/maps/LilycoveCity/scripts.pory"

# 281 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 282 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 283 "data/maps/LilycoveCity/scripts.pory"
	return
# 284 "data/maps/LilycoveCity/scripts.pory"

# 285 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 286 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 287 "data/maps/LilycoveCity/scripts.pory"
	return
# 288 "data/maps/LilycoveCity/scripts.pory"

# 289 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 290 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 291 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 292 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 293 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 294 "data/maps/LilycoveCity/scripts.pory"
	release
# 295 "data/maps/LilycoveCity/scripts.pory"
	end
# 296 "data/maps/LilycoveCity/scripts.pory"

# 297 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 298 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 299 "data/maps/LilycoveCity/scripts.pory"
        goto LilycoveCity_EventScript_MayGiveMudkip
# 300 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 301 "data/maps/LilycoveCity/scripts.pory"
	end
# 302 "data/maps/LilycoveCity/scripts.pory"

# 303 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 304 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 305 "data/maps/LilycoveCity/scripts.pory"
        goto LilycoveCity_EventScript_MayGiveTreecko
# 306 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 307 "data/maps/LilycoveCity/scripts.pory"
	end
# 308 "data/maps/LilycoveCity/scripts.pory"

# 309 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 310 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 311 "data/maps/LilycoveCity/scripts.pory"
        goto LilycoveCity_EventScript_MayGiveTorchic
# 312 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 313 "data/maps/LilycoveCity/scripts.pory"
	end
# 314 "data/maps/LilycoveCity/scripts.pory"

# 315 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 316 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 317 "data/maps/LilycoveCity/scripts.pory"
        goto LilycoveCity_EventScript_BrendanGiveMudkip
# 318 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 319 "data/maps/LilycoveCity/scripts.pory"
	end
# 320 "data/maps/LilycoveCity/scripts.pory"

# 321 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 322 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 323 "data/maps/LilycoveCity/scripts.pory"
        goto LilycoveCity_EventScript_BrendanGiveTreecko
# 324 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 325 "data/maps/LilycoveCity/scripts.pory"
	end
# 326 "data/maps/LilycoveCity/scripts.pory"

# 327 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 328 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 329 "data/maps/LilycoveCity/scripts.pory"
        goto LilycoveCity_EventScript_BrendanGiveTorchic
# 330 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 331 "data/maps/LilycoveCity/scripts.pory"
	end
# 332 "data/maps/LilycoveCity/scripts.pory"

# 333 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 334 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 335 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 336 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 337 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 338 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 339 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 340 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 341 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 342 "data/maps/LilycoveCity/scripts.pory"
	end
# 343 "data/maps/LilycoveCity/scripts.pory"

# 344 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 345 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 346 "data/maps/LilycoveCity/scripts.pory"
	return
# 347 "data/maps/LilycoveCity/scripts.pory"

# 348 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 349 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 350 "data/maps/LilycoveCity/scripts.pory"
	return
# 351 "data/maps/LilycoveCity/scripts.pory"

# 352 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 353 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 354 "data/maps/LilycoveCity/scripts.pory"
	return
# 355 "data/maps/LilycoveCity/scripts.pory"

# 356 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 357 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 358 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 359 "data/maps/LilycoveCity/scripts.pory"
	return
# 360 "data/maps/LilycoveCity/scripts.pory"

# 361 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 362 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 363 "data/maps/LilycoveCity/scripts.pory"
	return
# 364 "data/maps/LilycoveCity/scripts.pory"

# 365 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 366 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 367 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 368 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 369 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 370 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 371 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 372 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 373 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 374 "data/maps/LilycoveCity/scripts.pory"
	end
# 375 "data/maps/LilycoveCity/scripts.pory"

# 376 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 377 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 378 "data/maps/LilycoveCity/scripts.pory"
	return
# 379 "data/maps/LilycoveCity/scripts.pory"

# 380 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 381 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 382 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity/scripts.pory"
	return
# 384 "data/maps/LilycoveCity/scripts.pory"

# 385 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 386 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 387 "data/maps/LilycoveCity/scripts.pory"
	return
# 388 "data/maps/LilycoveCity/scripts.pory"

# 389 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 390 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 391 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 392 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 393 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 394 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 395 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 396 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 397 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 398 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 399 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 400 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 401 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 402 "data/maps/LilycoveCity/scripts.pory"
	release
# 403 "data/maps/LilycoveCity/scripts.pory"
	end
# 404 "data/maps/LilycoveCity/scripts.pory"

# 405 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 406 "data/maps/LilycoveCity/scripts.pory"
	lock
# 407 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 408 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 409 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 410 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 411 "data/maps/LilycoveCity/scripts.pory"
	release
# 412 "data/maps/LilycoveCity/scripts.pory"
	end
# 413 "data/maps/LilycoveCity/scripts.pory"

# 414 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 415 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 416 "data/maps/LilycoveCity/scripts.pory"
	return
# 417 "data/maps/LilycoveCity/scripts.pory"

# 418 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 419 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 420 "data/maps/LilycoveCity/scripts.pory"
	return
# 421 "data/maps/LilycoveCity/scripts.pory"

# 422 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 434 "data/maps/LilycoveCity/scripts.pory"

# 435 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 440 "data/maps/LilycoveCity/scripts.pory"

# 441 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 444 "data/maps/LilycoveCity/scripts.pory"

# 445 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 448 "data/maps/LilycoveCity/scripts.pory"

# 449 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 455 "data/maps/LilycoveCity/scripts.pory"

# 456 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 462 "data/maps/LilycoveCity/scripts.pory"

# 463 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 471 "data/maps/LilycoveCity/scripts.pory"

# 472 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 481 "data/maps/LilycoveCity/scripts.pory"

# 482 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 491 "data/maps/LilycoveCity/scripts.pory"

# 492 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 499 "data/maps/LilycoveCity/scripts.pory"

# 500 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 503 "data/maps/LilycoveCity/scripts.pory"

# 504 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 507 "data/maps/LilycoveCity/scripts.pory"

# 508 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 511 "data/maps/LilycoveCity/scripts.pory"

# 512 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 517 "data/maps/LilycoveCity/scripts.pory"

# 518 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 524 "data/maps/LilycoveCity/scripts.pory"

# 525 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 531 "data/maps/LilycoveCity/scripts.pory"

# 532 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 540 "data/maps/LilycoveCity/scripts.pory"

# 541 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 554 "data/maps/LilycoveCity/scripts.pory"

# 555 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 561 "data/maps/LilycoveCity/scripts.pory"

# 562 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 569 "data/maps/LilycoveCity/scripts.pory"

# 570 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 575 "data/maps/LilycoveCity/scripts.pory"

# 576 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 580 "data/maps/LilycoveCity/scripts.pory"

# 581 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 582 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 584 "data/maps/LilycoveCity/scripts.pory"

# 585 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 589 "data/maps/LilycoveCity/scripts.pory"

# 590 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 596 "data/maps/LilycoveCity/scripts.pory"

# 597 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 600 "data/maps/LilycoveCity/scripts.pory"

# 601 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 606 "data/maps/LilycoveCity/scripts.pory"

# 607 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 613 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 614 "data/maps/LilycoveCity/scripts.pory"

# 615 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 620 "data/maps/LilycoveCity/scripts.pory"

# 621 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 627 "data/maps/LilycoveCity/scripts.pory"

# 628 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 634 "data/maps/LilycoveCity/scripts.pory"

# 635 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 638 "data/maps/LilycoveCity/scripts.pory"

# 639 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 645 "data/maps/LilycoveCity/scripts.pory"

# 646 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 651 "data/maps/LilycoveCity/scripts.pory"

# 652 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 657 "data/maps/LilycoveCity/scripts.pory"

# 658 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 668 "data/maps/LilycoveCity/scripts.pory"

# 669 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 675 "data/maps/LilycoveCity/scripts.pory"

# 676 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 680 "data/maps/LilycoveCity/scripts.pory"

# 681 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 684 "data/maps/LilycoveCity/scripts.pory"

# 685 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 689 "data/maps/LilycoveCity/scripts.pory"

# 690 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 694 "data/maps/LilycoveCity/scripts.pory"

# 695 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 699 "data/maps/LilycoveCity/scripts.pory"

# 700 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 705 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 706 "data/maps/LilycoveCity/scripts.pory"

# 707 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 711 "data/maps/LilycoveCity/scripts.pory"

# 712 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 716 "data/maps/LilycoveCity/scripts.pory"

# 717 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 721 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 723 "data/maps/LilycoveCity/scripts.pory"

# 724 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 727 "data/maps/LilycoveCity/scripts.pory"

# 728 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 731 "data/maps/LilycoveCity/scripts.pory"

# 732 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 737 "data/maps/LilycoveCity/scripts.pory"

# 738 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 743 "data/maps/LilycoveCity/scripts.pory"

# 744 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 748 "data/maps/LilycoveCity/scripts.pory"

# 749 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 750 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 753 "data/maps/LilycoveCity/scripts.pory"

# 754 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 761 "data/maps/LilycoveCity/scripts.pory"

# 762 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 765 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 766 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 767 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_Mom::
# 771 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 773 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MOM_GEN7, LilycoveCity_EventScript_Mom_1
# 777 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 778 "data/maps/LilycoveCity/scripts.pory"
	message LilycoveCity_EventScript_Mom_Text_1
# 779 "data/maps/LilycoveCity/scripts.pory"
	multichoice 25, 5, MOM_GEN7_STARTER, 0
# 780 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 781 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_EventScript_Mom_5
# 784 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_EventScript_Mom_6
# 787 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LilycoveCity_EventScript_Mom_7
LilycoveCity_EventScript_Mom_4:
# 790 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Mom_Text_2
# 791 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 792 "data/maps/LilycoveCity/scripts.pory"
	release
	return

LilycoveCity_EventScript_Mom_1:
# 774 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Mom_Text_0, MSGBOX_NPC
# 775 "data/maps/LilycoveCity/scripts.pory"
	closemessage
	return

LilycoveCity_EventScript_Mom_5:
# 782 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_MomGiveGrassStarter
	goto LilycoveCity_EventScript_Mom_4

LilycoveCity_EventScript_Mom_6:
# 785 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_MomGiveFireStarter
	goto LilycoveCity_EventScript_Mom_4

LilycoveCity_EventScript_Mom_7:
# 788 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_MomGiveWaterStarter
	goto LilycoveCity_EventScript_Mom_4


LilycoveCity_MomGiveGrassStarter::
# 797 "data/maps/LilycoveCity/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 798 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_0, MSGBOX_YESNO
# 799 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_MomGiveGrassStarter_2
# 817 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 818 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_Mom_NotChosen
LilycoveCity_MomGiveGrassStarter_1:
# 820 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 821 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_MomGiveGrassStarter_2:
# 800 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_LUCKY_EGG
# 801 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_MomGiveGrassStarter_5
# 806 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_MomGiveGrassStarter_6
# 813 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 814 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3
	goto LilycoveCity_MomGiveGrassStarter_1

LilycoveCity_MomGiveGrassStarter_5:
# 802 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 803 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_1
# 804 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
# 805 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MOM_GEN7
	goto LilycoveCity_MomGiveGrassStarter_1

LilycoveCity_MomGiveGrassStarter_6:
# 807 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 808 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_1
# 809 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknameBoxMon
# 810 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_2
# 811 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MOM_GEN7
	goto LilycoveCity_MomGiveGrassStarter_1


LilycoveCity_MomGiveFireStarter::
# 826 "data/maps/LilycoveCity/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 827 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveFireStarter_Text_0, MSGBOX_YESNO
# 828 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_MomGiveFireStarter_2
# 846 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 847 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_Mom_NotChosen
LilycoveCity_MomGiveFireStarter_1:
# 849 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 850 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_MomGiveFireStarter_2:
# 829 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_LUCKY_EGG
# 830 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_MomGiveFireStarter_5
# 835 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_MomGiveFireStarter_6
# 842 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 843 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3
	goto LilycoveCity_MomGiveFireStarter_1

LilycoveCity_MomGiveFireStarter_5:
# 831 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 832 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveFireStarter_Text_1
# 833 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
# 834 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MOM_GEN7
	goto LilycoveCity_MomGiveFireStarter_1

LilycoveCity_MomGiveFireStarter_6:
# 836 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 837 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveFireStarter_Text_1
# 838 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknameBoxMon
# 839 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveFireStarter_Text_2
# 840 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MOM_GEN7
	goto LilycoveCity_MomGiveFireStarter_1


LilycoveCity_MomGiveWaterStarter::
# 855 "data/maps/LilycoveCity/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 856 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveWaterStarter_Text_0, MSGBOX_YESNO
# 857 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_MomGiveWaterStarter_2
# 875 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 876 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_Mom_NotChosen
LilycoveCity_MomGiveWaterStarter_1:
# 878 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 879 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_MomGiveWaterStarter_2:
# 858 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_POPPLIO, 5, ITEM_LUCKY_EGG
# 859 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_MomGiveWaterStarter_5
# 864 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_MomGiveWaterStarter_6
# 871 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 872 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3
	goto LilycoveCity_MomGiveWaterStarter_1

LilycoveCity_MomGiveWaterStarter_5:
# 860 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 861 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveWaterStarter_Text_1
# 862 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
# 863 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MOM_GEN7
	goto LilycoveCity_MomGiveWaterStarter_1

LilycoveCity_MomGiveWaterStarter_6:
# 865 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 866 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveWaterStarter_Text_1
# 867 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknameBoxMon
# 868 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveWaterStarter_Text_2
# 869 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MOM_GEN7
	goto LilycoveCity_MomGiveWaterStarter_1


LilycoveCity_NicknamePartyMon::
# 884 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 885 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 886 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_NicknamePartyMon_1
	return

LilycoveCity_NicknamePartyMon_1:
# 887 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 888 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


LilycoveCity_NicknameBoxMon::
# 893 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_NicknameBoxMon_Text_0, MSGBOX_YESNO
# 894 "data/maps/LilycoveCity/scripts.pory"
	hidemonpic
# 895 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_NicknameBoxMon_1
	return

LilycoveCity_NicknameBoxMon_1:
# 896 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


LilycoveCity_Mom_NotChosen::
# 901 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Mom_NotChosen_Text_0, MSGBOX_NPC
# 902 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_Mom
	return


LilycoveCity_EventScript_MayGiveTorchic::
# 907 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_0, MSGBOX_NPC
# 908 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 909 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_EventScript_MayGiveTorchic_2
# 913 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_EventScript_MayGiveTorchic_3
# 919 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3, MSGBOX_NPC
LilycoveCity_EventScript_MayGiveTorchic_1:
# 921 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DefeatedMay
	return

LilycoveCity_EventScript_MayGiveTorchic_2:
# 910 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 911 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_1, MSGBOX_NPC
# 912 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
	goto LilycoveCity_EventScript_MayGiveTorchic_1

LilycoveCity_EventScript_MayGiveTorchic_3:
# 914 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 915 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_1, MSGBOX_NPC
# 916 "data/maps/LilycoveCity/scripts.pory"
	call MauvilleCity_NicknameBoxMon
# 917 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_2, MSGBOX_NPC
	goto LilycoveCity_EventScript_MayGiveTorchic_1


LilycoveCity_EventScript_BrendanGiveTorchic::
# 925 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_0, MSGBOX_NPC
# 926 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 927 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_EventScript_BrendanGiveTorchic_2
# 931 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_EventScript_BrendanGiveTorchic_3
# 937 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3, MSGBOX_NPC
LilycoveCity_EventScript_BrendanGiveTorchic_1:
# 939 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DefeatedBrendan
	return

LilycoveCity_EventScript_BrendanGiveTorchic_2:
# 928 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 929 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_1, MSGBOX_NPC
# 930 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
	goto LilycoveCity_EventScript_BrendanGiveTorchic_1

LilycoveCity_EventScript_BrendanGiveTorchic_3:
# 932 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 933 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_1, MSGBOX_NPC
# 934 "data/maps/LilycoveCity/scripts.pory"
	call MauvilleCity_NicknameBoxMon
# 935 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTorchic_Text_2, MSGBOX_NPC
	goto LilycoveCity_EventScript_BrendanGiveTorchic_1


LilycoveCity_EventScript_MayGiveMudkip::
# 943 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_0, MSGBOX_NPC
# 944 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 945 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_EventScript_MayGiveMudkip_2
# 949 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_EventScript_MayGiveMudkip_3
# 955 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3, MSGBOX_NPC
LilycoveCity_EventScript_MayGiveMudkip_1:
# 957 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DefeatedMay
	return

LilycoveCity_EventScript_MayGiveMudkip_2:
# 946 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 947 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_1, MSGBOX_NPC
# 948 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
	goto LilycoveCity_EventScript_MayGiveMudkip_1

LilycoveCity_EventScript_MayGiveMudkip_3:
# 950 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 951 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_1, MSGBOX_NPC
# 952 "data/maps/LilycoveCity/scripts.pory"
	call MauvilleCity_NicknameBoxMon
# 953 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_2, MSGBOX_NPC
	goto LilycoveCity_EventScript_MayGiveMudkip_1


LilycoveCity_EventScript_BrendanGiveMudkip::
# 961 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_0, MSGBOX_NPC
# 962 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 963 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_EventScript_BrendanGiveMudkip_2
# 967 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_EventScript_BrendanGiveMudkip_3
# 973 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3, MSGBOX_NPC
LilycoveCity_EventScript_BrendanGiveMudkip_1:
# 975 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DefeatedBrendan
	return

LilycoveCity_EventScript_BrendanGiveMudkip_2:
# 964 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 965 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_1, MSGBOX_NPC
# 966 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
	goto LilycoveCity_EventScript_BrendanGiveMudkip_1

LilycoveCity_EventScript_BrendanGiveMudkip_3:
# 968 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 969 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_1, MSGBOX_NPC
# 970 "data/maps/LilycoveCity/scripts.pory"
	call MauvilleCity_NicknameBoxMon
# 971 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveMudkip_Text_2, MSGBOX_NPC
	goto LilycoveCity_EventScript_BrendanGiveMudkip_1


LilycoveCity_EventScript_MayGiveTreecko::
# 979 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_0, MSGBOX_NPC
# 980 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 981 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_EventScript_MayGiveTreecko_2
# 985 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_EventScript_MayGiveTreecko_3
# 991 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3, MSGBOX_NPC
LilycoveCity_EventScript_MayGiveTreecko_1:
# 993 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DefeatedMay
	return

LilycoveCity_EventScript_MayGiveTreecko_2:
# 982 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 983 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_1, MSGBOX_NPC
# 984 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
	goto LilycoveCity_EventScript_MayGiveTreecko_1

LilycoveCity_EventScript_MayGiveTreecko_3:
# 986 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 987 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_1, MSGBOX_NPC
# 988 "data/maps/LilycoveCity/scripts.pory"
	call MauvilleCity_NicknameBoxMon
# 989 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_2, MSGBOX_NPC
	goto LilycoveCity_EventScript_MayGiveTreecko_1


LilycoveCity_EventScript_BrendanGiveTreecko::
# 997 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_0, MSGBOX_NPC
# 998 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 999 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_EventScript_BrendanGiveTreecko_2
# 1003 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_EventScript_BrendanGiveTreecko_3
# 1009 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_MomGiveGrassStarter_Text_3, MSGBOX_NPC
LilycoveCity_EventScript_BrendanGiveTreecko_1:
# 1011 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DefeatedBrendan
	return

LilycoveCity_EventScript_BrendanGiveTreecko_2:
# 1000 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1001 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_1, MSGBOX_NPC
# 1002 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_NicknamePartyMon
	goto LilycoveCity_EventScript_BrendanGiveTreecko_1

LilycoveCity_EventScript_BrendanGiveTreecko_3:
# 1004 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1005 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_1, MSGBOX_NPC
# 1006 "data/maps/LilycoveCity/scripts.pory"
	call MauvilleCity_NicknameBoxMon
# 1007 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_MayGiveTreecko_Text_2, MSGBOX_NPC
	goto LilycoveCity_EventScript_BrendanGiveTreecko_1


LilycoveCity_EventScript_Mom_Text_0:
# 774 "data/maps/LilycoveCity/scripts.pory"
	.string "I hope your Pokemon are doing OK!$"

LilycoveCity_EventScript_Mom_Text_1:
# 778 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you want a pokemon?$"

LilycoveCity_EventScript_Mom_Text_2:
# 790 "data/maps/LilycoveCity/scripts.pory"
	.string "Come back if you change your mind.$"

LilycoveCity_MomGiveGrassStarter_Text_0:
# 798 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you want this Rowlet?$"

LilycoveCity_MomGiveGrassStarter_Text_1:
# 803 "data/maps/LilycoveCity/scripts.pory"
	.string "Received Rowlet!$"

LilycoveCity_MomGiveGrassStarter_Text_2:
# 810 "data/maps/LilycoveCity/scripts.pory"
	.string "Transferred Rowlet to PC$"

LilycoveCity_MomGiveGrassStarter_Text_3:
# 814 "data/maps/LilycoveCity/scripts.pory"
	.string "No more room.$"

LilycoveCity_MomGiveFireStarter_Text_0:
# 827 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you want this Litten?$"

LilycoveCity_MomGiveFireStarter_Text_1:
# 832 "data/maps/LilycoveCity/scripts.pory"
	.string "Received Litten!$"

LilycoveCity_MomGiveFireStarter_Text_2:
# 839 "data/maps/LilycoveCity/scripts.pory"
	.string "Transferred Litten to PC$"

LilycoveCity_MomGiveWaterStarter_Text_0:
# 856 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you want this Popplio?$"

LilycoveCity_MomGiveWaterStarter_Text_1:
# 861 "data/maps/LilycoveCity/scripts.pory"
	.string "Received Popplio!$"

LilycoveCity_MomGiveWaterStarter_Text_2:
# 868 "data/maps/LilycoveCity/scripts.pory"
	.string "Transferred Popplio to PC$"

LilycoveCity_NicknamePartyMon_Text_0:
# 885 "data/maps/LilycoveCity/scripts.pory"
	.string "Give it a nickname?$"

LilycoveCity_NicknameBoxMon_Text_0:
# 893 "data/maps/LilycoveCity/scripts.pory"
	.string "Give a nickname?$"

LilycoveCity_Mom_NotChosen_Text_0:
# 901 "data/maps/LilycoveCity/scripts.pory"
	.string "You did not choose a Pokemon!$"

LilycoveCity_EventScript_MayGiveTorchic_Text_0:
# 907 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh! I nearly forgot, I hatched this\n"
	.string "Torchic for you!$"

LilycoveCity_EventScript_MayGiveTorchic_Text_1:
# 911 "data/maps/LilycoveCity/scripts.pory"
	.string "Received Torchic!$"

LilycoveCity_EventScript_MayGiveTorchic_Text_2:
# 917 "data/maps/LilycoveCity/scripts.pory"
	.string "Transferred Torchic to PC$"

LilycoveCity_EventScript_MayGiveMudkip_Text_0:
# 943 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh! I nearly forgot, I hatched this\n"
	.string "Mudkip for you!$"

LilycoveCity_EventScript_MayGiveMudkip_Text_1:
# 947 "data/maps/LilycoveCity/scripts.pory"
	.string "Received Mudkip!$"

LilycoveCity_EventScript_MayGiveMudkip_Text_2:
# 953 "data/maps/LilycoveCity/scripts.pory"
	.string "Transferred Mudkip to PC$"

LilycoveCity_EventScript_MayGiveTreecko_Text_0:
# 979 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh! I nearly forgot, I hatched this\n"
	.string "Treecko for you!$"

LilycoveCity_EventScript_MayGiveTreecko_Text_1:
# 983 "data/maps/LilycoveCity/scripts.pory"
	.string "Received Treecko!$"

LilycoveCity_EventScript_MayGiveTreecko_Text_2:
# 989 "data/maps/LilycoveCity/scripts.pory"
	.string "Transferred Treecko to PC$"
