#!/usr/bin/python3

import json

ENCOUNTER_FILE = "src/data/wild_encounters.json"

with open(ENCOUNTER_FILE) as f:
    content = f.read()

data = json.loads(content)['wild_encounter_groups'][0]['encounters']

for m in data:
    #print(m['map'])
    print()
    print(m['base_label'][1:])
    if 'land_mons' in m:
        print("Grass:")
        for mon in m['land_mons']['mons']:
            print("* %s-%s %s" % (mon['min_level'], mon['max_level'], mon['species'][8:].title()))

    if 'rock_smash_mons' in m:
        print("Rock Smash:")
        for mon in m['rock_smash_mons']['mons']:
            print("* %s-%s %s" % (mon['min_level'], mon['max_level'], mon['species'][8:].title()))

    if 'water_mons' in m:
        print("Surf:")
        for mon in m['water_mons']['mons']:
            print("* %s-%s %s" % (mon['min_level'], mon['max_level'], mon['species'][8:].title()))

    if 'fishing_mons' in m:
        print("Fishing:")
        for mon in m['fishing_mons']['mons']:
            print("* %s-%s %s" % (mon['min_level'], mon['max_level'], mon['species'][8:].title()))

