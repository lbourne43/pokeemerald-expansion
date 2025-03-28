#!/bin/bash

grep === frontier.mons.new > frontier.mons.consts
./frontier_mons_consts.py  > include/constants/battle_frontier_mons.h

./gen_frontier_list.py > frontier-mons.list

./frontier_load.py > src/data/battle_frontier/battle_frontier_mons.h

./frontier_trainer_mons.py > frontier_trainer_mons.h

cat frontier_trainer_mons.h frontier_trainer_consts > src/data/battle_frontier/battle_frontier_trainer_mons.h
