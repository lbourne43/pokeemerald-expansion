#!/usr/bin/python3

def clean(text):
    return text.strip().upper().replace(" ", "_").replace("-", "_")


with open("frontier.mons") as f:
    lines = f.readlines()

poke_struct = {
    "name": "FRONTIER_MON_",
    "species": "",
    "evs": "",
    "nature": "",
    "item": ""
    }


"""
=== FRONTIER_MON_AERODACTYL_1 ===
Aerodactyl @ Kings Rock
Nature: Adamant
EVs: Hp 170 / Atk 170 / Def 0 / SpA 170 / SpD 0 / Spe 0
- Ancient Power
- Dragon Breath
- Aerial Ace
- Roar

"""

data = list()

for l in lines:
    l = l.strip()
    if l.startswith("==="):
        poke = poke_struct.copy()
        poke['name'] = l.split()[1]
    elif "@" in l:
        poke['species'], poke['item'] = l.split("@")
        poke['species'] = poke['species'].strip()
        poke['item'] = poke['item'].strip()
    elif l.startswith("-"):
        if 'moves' not in poke:
            poke['moves'] = list()
        poke['moves'].append(l[1:].strip())
        if (len(poke['moves']) == 4):
            data.append(poke)
    elif l.startswith("EVs:"):
        evs = l.split()
        poke['evs'] = {"Hp": 0, "Atk": 0, "Def": 0, "SpA": 0, "SpD": 0, "Spe": 0}
        poke['evs']['HP'] = int(evs[1])
        poke['evs']['Atk'] = int(evs[4])
        poke['evs']['Def'] = int(evs[7])
        poke['evs']['SpA'] = int(evs[10])
        poke['evs']['SpD'] = int(evs[13])
        poke['evs']['Spe'] = int(evs[16])
    elif l.startswith("Nature"):
        poke['nature'] = l.split(":")[-1].strip()
    elif l.startswith("Ability"):
        poke['ability'] = l.split(":")[-1].strip()

"""
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
"""
print("""const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{""")
for mon in data:
    print("    [%s] = {" % clean(mon['name'])) 
    print("        .species = SPECIES_%s," % clean(mon['species']))
    print("        .moves = {MOVE_%s, MOVE_%s, MOVE_%s, MOVE_%s}," % (clean(mon['moves'][0]), clean(mon['moves'][1]), clean(mon['moves'][2]), clean(mon['moves'][3])))
    print("        .heldItem = ITEM_%s," % clean(mon['item']))
    evs = mon['evs']
    print('        .ev = TRAINER_PARTY_EVS(%d, %d, %d, %d, %d, %d),' % (evs['HP'], evs['Atk'], evs['Def'], evs['SpA'], evs['SpD'], evs['Spe']))
    print('        .nature = NATURE_%s' % clean(mon['nature']))
    print('        .ability = ABILITY_%s' % clean(mon['nature']))
    print('    },')
    print()

print("};")
