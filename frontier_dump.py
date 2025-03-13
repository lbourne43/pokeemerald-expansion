#!/usr/bin/python3


with open("src/data/battle_frontier/battle_frontier_mons.h") as f:
    lines = f.readlines()

poke_struct = {
    "name": "FRONTIER_MON_",
    "species": "",
    "moves": "",
    "evs": "",
    "nature": "",
    "item": ""
    }

data = list()

for l in lines:
    l = l.strip()
    if l.startswith("[FRONTIER_MON_"):
        poke = poke_struct.copy()
        poke['name'] = l.split("]")[0][1:]
    elif l.startswith(".species"):
        poke['species'] = l.split("=")[-1].strip()[8:-1].title()
    elif l.startswith(".moves"):
        poke['moves'] = list()
        moves = l.split("=")[-1].strip()[1:-2].split(",")
        for m in moves:
            poke['moves'].append(m.strip()[5:].title().replace("_", " "))
    elif l.startswith(".heldItem"):
        poke['item'] = l.split("=")[-1].strip()[5:-1].title().replace("_", " ")
    elif l.startswith(".ev"):
        evstring = l.split("=")[-1].strip()[18:-2]
        evs = evstring.split(',')
        poke['evs'] = {"Hp": 0, "Atk": 0, "Def": 0, "SpA": 0, "SpD": 0, "Spe": 0}
        poke['evs']['HP'] = int(evs[0])
        poke['evs']['Atk'] = int(evs[1])
        poke['evs']['Def'] = int(evs[2])
        poke['evs']['SpA'] = int(evs[3])
        poke['evs']['SpD'] = int(evs[4])
        poke['evs']['Spe'] = int(evs[5])
    elif l.startswith(".nature"):
        poke['nature'] = l.split("=")[-1].strip()[7:].title()
    elif l.strip() in ("}", "},"):
        # clean ITEM_ poke
        data.append(poke)

for mon in data:
    print('===', mon['name'], '===')
    print(mon['species'], '@', mon['item'])
    print('Nature:', mon['nature'])
    evs = mon['evs']
    print('EVs:', '%d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe' % (evs['Hp'], evs['Atk'], evs['Def'], evs['SpA'], evs['SpD'], evs['Spe']))
    for m in mon['moves']:
        print('-', m)
    print()
