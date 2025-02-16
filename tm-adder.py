#!/usr/bin/python3

import re
import tempfile
import os, sys

LEARNSET_FILE = "src/data/pokemon/level_up_learnsets/gen_9.h"
TEACHABLE_LEARNSET_FILE = "src/data/pokemon/teachable_learnsets.h.tmp"
ITEMS_FILE = "src/data/items.h"
TMS_FILE = "include/constants/tms_hms.h"

def givePokeTeachableMove(move, poke):
    new_lines = list()
    length = 500000
    with open(TEACHABLE_LEARNSET_FILE) as f:
        lines = f.readlines()

    length = len(lines)
    added_line = False
    reg = re.compile("\\s*static const u16 s%sTeachableLearnset" % poke)
    for l in lines:
        if not added_line:
            if reg.match(l) is not None:
                new_lines.append(l)
                new_lines.append("    " + move + ",\n")
                added_line = True
                continue
        new_lines.append(l)

    with open(TEACHABLE_LEARNSET_FILE, "w") as f:
        f.write("".join(new_lines))
        #os.system("diff " + TEACHABLE_LEARNSET_FILE+".tmp" + " " + TEACHABLE_LEARNSET_FILE)
    # confirm ok then copy over TEACHABLE_LEARNSET_FILE


def addTM(num, move, pokes):
    # add to tms file
    # add to items file
    # add to relevant pokes teachable learnset file
    for poke in pokes:
        givePokeTeachableMove(move, poke)

def getPokemonLevelUpLearnsets():
    pokes = {}
    found_mon = False
    with open(LEARNSET_FILE) as f:
        lines = f.readlines()

    for l in lines:
        l = l.strip()
        if not found_mon and l.startswith("static const struct LevelUpMove s"):
            found_mon = True
            poke = l.split("LevelUp")[1][6:]
            pokes[poke] = list()
        if found_mon:
            if l.startswith("LEVEL_UP_MOVE"):
                lvl, move = l[14:-2].split(",")
                pokes[poke].append({"lvl": lvl.strip(), "move": move.strip()})
            if l.startswith("LEVEL_UP_END"):
                found_mon = False
    return pokes

def getNaturalLearners(move, pokes):
    learners = dict()
    for poke in pokes.keys():
        for level_up_move in pokes[poke]:
            if move == level_up_move['move']:
                learners[poke] = level_up_move['lvl']
    return learners


def getNextTM():
    with open(ITEMS_FILE) as f:
        lines = f.readlines()
    
    found_tm = False
    tm_name = ""
    item_name = ""
    for l in lines:
        l = l.strip()
        if not found_tm:
            if l.startswith("[ITEM_TM"):
                found_tm = True
                item_name = l
        else:
            if l.startswith("[ITEM_") and not l.startswith("[ITEM_TM"):
                found_tm = False
                print(l)
                continue
            if l.startswith(".name"):
                tm_name = l
            if l.startswith(".description"):
                if l.startswith(".description = sQuestionMarksDesc"):
                    break
                else:
                    found_tm = False
    tm = item_name[item_name.find("[")+1:item_name.find("]")]
    return tm

next_tm = getNextTM()
pokes = getPokemonLevelUpLearnsets()
tm_move = input("Move? ").upper()
tm_move = tm_move.strip()
tm_move = tm_move.replace(" ", "_")
if not tm_move.startswith("MOVE_"):
    tm_move = "MOVE_" + tm_move

lvlup_learners = getNaturalLearners(tm_move, pokes)
print("The following Pokemon learn %s levelling up: " % tm_move)
for poke in lvlup_learners.keys():
    print("lvl", lvlup_learners[poke].ljust(3), poke)

who_else = input("Who else? ")
learners = who_else.split(",") + list(lvlup_learners.keys())

bad_learners = list()

clean_learners = list()
for learner in learners:
    learner.strip()
    learner = learner.replace(" ", "")
    learner = learner.replace("-", "")
    if learner.startswith("Hisuian"):
        learner = learner[len("Hisuian"):]+"Hisui"
    if learner.startswith("Galarian"):
        learner = learner[len("Galarian"):]+"Galar"
    if learner.startswith("Alolan"):
        learner = learner[len("Alolan"):]+"Alola"
    if learner not in pokes.keys():
        bad_learners.append(learner)
    elif learner not in clean_learners:
        clean_learners.append(learner)

learners = clean_learners
print("The following Pokemon will learn",tm_move, "via %s - %s:" % (next_tm, tm_move))
for learner in learners:
    print('-', learner)

if bad_learners:
    print("\nWARNING! The following Pokemon could not be found:")
    for bl in bad_learners:
        print('-',bl)

go = False
while not go:
    answer = input("Ok to proceed? [y/N] ").lower().strip()
    if answer == "y":
        addTM(1, tm_move, learners)
        break
    elif answer == "n":
        break
