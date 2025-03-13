#!/usr/bin/python3

import glob
import json

gens = glob.glob("src/data/pokemon/species_info/gen_*_families.h")

mons = dict()

mon_struct = dict({
    "name": "",
    "type": False,
    "type2": False,
    "baseHP": 0,
    "baseAtk": 0,
    "baseDef": 0,
    "baseSpA": 0,
    "baseSpD": 0,
    "baseSpe": 0,
    "evolves": False
})
species = False
for gen in gens:
    with open(gen) as f:
        lines = f.readlines()

    for l in lines:
        l = l.strip()
        if l.startswith("[SPECIES_") and l[-1] == '=':
            species = l[9:-3]
            species_key = species.lower()
            species_clean = species.replace("_", " ").title()
            mons[species_key] = mon_struct.copy()
            mons[species_key]['name'] = species_clean
        if l.startswith(".types"):
            types = l[19:-2]
            if "," in types:
                types = types.split(",")
                mons[species_key]['type'] = types[0].strip("( )")[5:]
                mons[species_key]['type2'] = types[1].strip("( )")[5:]
            else:
                mons[species_key]['type'] = types[5:].strip()

        if l.startswith(".baseHP"):
            mons[species_key]['baseHP'] = l.split("=")[-1].strip("\\ ,")
        if l.startswith(".baseAttack"):
            mons[species_key]['baseAtk'] = l.split("=")[-1].strip("\\ ,")
        if l.startswith(".baseDefense"):
            mons[species_key]['baseDef'] = l.split("=")[-1].strip("\\ ,")
        if l.startswith(".baseSpAttack"):
            mons[species_key]['baseSpA'] = l.split("=")[-1].strip("\\ ,")
        if l.startswith(".baseSpDefense"):
            mons[species_key]['baseSpD'] = l.split("=")[-1].strip("\\ ,")
        if l.startswith(".baseSpeed"):
            mons[species_key]['baseSpe'] = l.split("=")[-1].strip("\\ ,")


        if l.startswith(".evolutions"):
            mons[species_key]['evolves'] = True


with open("poke.json", "w") as f:
    f.write(json.dumps(mons, indent=4))

"""
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_Attack = 3,
"""
