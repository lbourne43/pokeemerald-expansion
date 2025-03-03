#include "global.h"
#include "random.h"
#include "event_data.h"
#include "battle_setup.h"
#include "gym_leader_rematch.h"

static void UpdateGymLeaderRematchFromArray(const u16 *data, size_t size, u32 maxRematch);
#if FREE_MATCH_CALL == FALSE
static s32 GetRematchIndex(u32 trainerIdx);
#endif //FREE_MATCH_CALL

static const u16 GymLeaderRematches_AfterNewMauville[] = {
    REMATCH_ROXANNE,
    REMATCH_BRAWLY,
    REMATCH_WATTSON,
    REMATCH_FLANNERY,
    REMATCH_NORMAN,
    REMATCH_WINONA,
    REMATCH_TATE_AND_LIZA,
    REMATCH_JUAN
};

static const u16 GymLeaderRematches_BeforeNewMauville[] = {
    REMATCH_ROXANNE,
    REMATCH_BRAWLY,
    // Wattson isn't available at this time
    REMATCH_FLANNERY,
    REMATCH_NORMAN,
    REMATCH_WINONA,
    REMATCH_TATE_AND_LIZA,
    REMATCH_JUAN
};

void UpdateGymLeaderRematch(void)
{
// nettux always allow gym leader rematches
//    if (FlagGet(FLAG_SYS_GAME_CLEAR) && (Random() % 100) <= 30)
//    {
        if (FlagGet(FLAG_WATTSON_REMATCH_AVAILABLE))
            UpdateGymLeaderRematchFromArray(GymLeaderRematches_AfterNewMauville, ARRAY_COUNT(GymLeaderRematches_AfterNewMauville), 5);
        else
            UpdateGymLeaderRematchFromArray(GymLeaderRematches_BeforeNewMauville, ARRAY_COUNT(GymLeaderRematches_BeforeNewMauville), 5);
//    }
}

static void UpdateGymLeaderRematchFromArray(const u16 *data, size_t size, u32 maxRematch)
{
#if FREE_MATCH_CALL == FALSE
    s32 whichLeader = 0;
    s32 lowestRematchIndex = 5;
    u32 i;
    s32 rematchIndex;

    // check for available rematches that haven't already been triggered
    for (i = 0; i < size; i++)
    {
        if (!gSaveBlock1Ptr->trainerRematches[data[i]])
        {
            // fixed value depending on badges owned
            rematchIndex = GetRematchIndex(data[i]);
            if (lowestRematchIndex > rematchIndex)
                lowestRematchIndex = rematchIndex;
            whichLeader++;
        }
    }

    // found at least one rematch below the cap
    if (whichLeader != 0 && lowestRematchIndex <= maxRematch) {
        for (i = 0; i < size; i++)
        {
            if (!gSaveBlock1Ptr->trainerRematches[data[i]])
            {
                rematchIndex = GetRematchIndex(data[i]);
		// enable the rematch
		// TODO filter based on badges here to avoid rematches on leaders we didn't beat yet
		if (data[i] == REMATCH_ROXANNE && FlagGet(FLAG_BADGE01_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_BRAWLY && FlagGet(FLAG_BADGE02_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_WATTSON && FlagGet(FLAG_BADGE03_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_FLANNERY && FlagGet(FLAG_BADGE04_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_NORMAN && FlagGet(FLAG_BADGE05_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_WINONA && FlagGet(FLAG_BADGE06_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_TATE_AND_LIZA && FlagGet(FLAG_BADGE07_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);
		if (data[i] == REMATCH_JUAN && FlagGet(FLAG_BADGE08_GET))
                    gSaveBlock1Ptr->trainerRematches[data[i]] = rematchIndex;
		    if (HasTrainerBeenFought(gRematchTable[data[i]].trainerIds[rematchIndex]) && rematchIndex)
			ClearTrainerFlag(gRematchTable[data[i]].trainerIds[rematchIndex]);

            }
        }
    }

    /* OLD CODE
    // found at least one rematch below the cap
    if (whichLeader != 0 && lowestRematchIndex <= maxRematch)
    {
        whichLeader = 0;
        for (i = 0; i < size; i++)
        {
            if (!gSaveBlock1Ptr->trainerRematches[data[i]])
            {
                rematchIndex = GetRematchIndex(data[i]);
		// should always be true because this is controlled by which badges you have now
                if (rematchIndex == lowestRematchIndex)
                    whichLeader++;
            }
        }
	// whichLeader now equals the number of rematches at the lowest index. For us this will always
	// be all available rematches
        if (whichLeader != 0)
        {
	    // choose a random number betwen 0 and the number of available rematches (at the lowest index)???
            whichLeader = Random() % whichLeader;
            for (i = 0; i < size; i++)
            {
                if (!gSaveBlock1Ptr->trainerRematches[data[i]])
                {
                    rematchIndex = GetRematchIndex(data[i]);
                    if (rematchIndex == lowestRematchIndex)
                    {
                        if (whichLeader == 0)
                        {
                            gSaveBlock1Ptr->trainerRematches[data[i]] = lowestRematchIndex;
                            break;
                        }
                        whichLeader--;
                    }
                }
            }
        }
    }
    */
#endif //FREE_MATCH_CALL
}

#if FREE_MATCH_CALL == FALSE
static s32 GetRematchIndex(u32 trainerIdx)
{
    s32 i;
    i = 0;
    if (FlagGet(FLAG_BADGE01_GET)) {
        i = 1;
    }
    if (FlagGet(FLAG_BADGE05_GET)) {
        i = 2;
    }
    if (FlagGet(FLAG_BADGE08_GET)) {
        i = 3;
    }
    if (FlagGet(FLAG_SYS_GAME_CLEAR)) {
        i = 4;
    }
    return i;

    // old code below
    /*
    for (i = 0; i < 5; i++)
    {
        if (!HasTrainerBeenFought(gRematchTable[trainerIdx].trainerIds[i]))
        {
	    // nettux should handle badge based rematches here
            return i;
        }
    }
    return 5;
    */
}
#endif //FREE_MATCH_CALL
