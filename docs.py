#!/usr/bin/python3
import json

class Pokemon(object):
    def __init__(self):
        self.moves = list()
        self.item = ""
        self.species = ""
        self.level = 0
        self.ability = ""
        self.gender = ""
        self.ivs = ""
        self.evs = ""

class Trainer(object):
    def __init__(self):
        self.name = ""
        self.trainer_class = ""
        self.pokes = list()
        self.ai = list()
        self.double = False
        self.items = list()
        self.pic = ""
        self.gender = ""
        self.music = ""
        self.location = ""

class EncounterPokemon(object):
    def __init__(self, species, min_level, max_level):
        self.species = species
        self.min_level = min_level
        self.max_level = max_level

TRAINERS_FILE = "src/data/trainers.party"
ENCOUNTER_FILE = "src/data/wild_encounters.json"

with open(ENCOUNTER_FILE) as f:
    content = f.read()

data = json.loads(content)['wild_encounter_groups'][0]['encounters']

encounters_by_location = dict()

for m in data:
    loc = m['base_label'][1:].strip()
    encounters_by_location[loc] = dict()
    if 'land_mons' in m:
        encounters_by_location[loc]['land_mons'] = list()
        for mon in m['land_mons']['mons']:
            encounters_by_location[loc]['land_mons'].append(EncounterPokemon(mon['species'][8:].title(), mon['min_level'], mon['max_level']))

    if 'rock_smash_mons' in m:
        encounters_by_location[loc]['rock_smash_mons'] = list()
        for mon in m['rock_smash_mons']['mons']:
            encounters_by_location[loc]['rock_smash_mons'].append(EncounterPokemon(mon['species'][8:].title(), mon['min_level'], mon['min_level']))

    if 'water_mons' in m:
        encounters_by_location[loc]['water_mons'] = list()
        for mon in m['water_mons']['mons']:
            encounters_by_location[loc]['water_mons'].append(EncounterPokemon(mon['species'][8:].title(), mon['min_level'], mon['min_level']))

    if 'fishing_mons' in m:
        encounters_by_location[loc]['fishing_mons'] = list()
        for mon in m['fishing_mons']['mons']:
            encounters_by_location[loc]['fishing_mons'].append(EncounterPokemon(mon['species'][8:].title(), mon['min_level'], mon['min_level']))


with open(TRAINERS_FILE) as f:
    lines = f.readlines()

trainers = list()
trainers_by_location = dict()
trainers_by_name = dict()
start_found = False
trainer = None
poke = None
moves = False

i = 0
for l in lines:
    i += 1
    if start_found:
        l = l.strip()
        if l == '':
            continue
        if l.startswith("=== TRAINER"):
            if trainer is not None:
                if poke is not None:
                    trainer.pokes.append(poke)
                trainers.append(trainer)
                if trainer.location:
                    if trainer.location not in trainers_by_location:
                        trainers_by_location[trainer.location] = list()
                    trainers_by_location[trainer.location].append(trainer)
                    trainers_by_name[trainer.name] = trainer
                    
            trainer = Trainer()
            poke = None
            trainer.name = l[12:-4].title().replace("_", " ")

        elif l.startswith("Class: "):
            trainer.trainer_class = l.split(": ")[1].strip()
        elif l.startswith("AI: "):
            if "/" in l:
                trainer.ai = [x.strip() for x in l.split(": ")[1].split("/")]
            else:
                trainer.ai = [l.split(": ")[1].strip()]
        elif l.startswith("Gender: "):
            trainer.gender = l.split(": ")[1].strip()
        elif l.startswith("Music: "):
            trainer.music = l.split(": ")[1].strip()
        elif l.startswith("Pic: "):
            trainer.pic = l.split(": ")[1].strip()
        elif l.startswith("Double Battle: "):
            double = l.split(": ")[1].strip()
            trainer.double = bool(double.lower() == "yes")
        elif l.startswith("/* Location: "):
            trainer.location = l.split(": ")[-1][0:-3].strip()

        elif l.startswith("- "):
            poke.moves.append(l[2:])
        elif l.startswith("Level: "):
            poke.level = int(l.split(": ")[1])
        elif l.startswith("IVs: "):
            poke.ivs = l.split(": ")[1]
        elif ":" not in l and l.strip():
            if poke is not None:
                trainer.pokes.append(poke)
            poke = Pokemon()
            if "@" in l:
                species, item = l.split("@")
                poke.species = species.strip()
                poke.item = item.strip()
            else:
                poke.species = l.strip()
        # find mons starting from first non whitespace line with no :

    elif l.startswith("/*NETTUX SCRIPT BEGIN HERE*/"):
        start_found = True
        continue

trainers_by_location = dict(sorted(trainers_by_location.items()))





print("<!docytpe html>")
print("<html>")
print("<head>")
print("</head>")
print("""<style>
.poke-img {
    overflow: hidden;
    width: 64px;
    height: 64px;
}
.poke-img img {
    width: 64px;
    height: 128px;
}

</style>
""")
print("<body>")
for location in sorted(list(set(list(trainers_by_location.keys()) + list(encounters_by_location.keys())))):
    print("<h2 id='%s'>%s</h2>" % (location, location))
    if location in encounters_by_location:
        enc = encounters_by_location[location]
        if 'land_mons'in enc:
            print("<h3>Grass:</h3>")
            print("<table>")
            for mon in enc['land_mons']:
                print("<tr><td>%s</td><td>%d - %d</td></tr>" % (mon.species, mon.min_level, mon.max_level))
            print("</table>")
        if 'rock_smash_mons'in enc:
            print("<h3>Rock Smash:</h3>")
            print("<table>")
            for mon in enc['rock_smash_mons']:
                print("<tr><td>%s</td><td>%d - %d</td></tr>" % (mon.species, mon.min_level, mon.max_level))
            print("</table>")
        if 'water_mons'in enc:
            print("<h3>Surfing:</h3>")
            print("<table>")
            for mon in enc['water_mons']:
                print("<tr><td>%s</td><td>%d - %d</td></tr>" % (mon.species, mon.min_level, mon.max_level))
            print("</table>")
        if 'fishing_mons'in enc:
            print("<h3>Fishing:</h3>")
            print("<table>")
            for mon in enc['fishing_mons']:
                print("<tr><td>%s</td><td>%d - %d</td></tr>" % (mon.species, mon.min_level, mon.max_level))
            print("</table>")
        print("<hr/>")

    if location in trainers_by_location:
        for tr in trainers_by_location[location]:
            print("<table id='%s'>" % tr.name)
            print("<tr><td>%s</td><td><strong>%s</strong></td>" % (tr.trainer_class, tr.name))
            print("<tr><td>AI:</td><td>%s<td></tr>" % (", ".join(tr.ai)))
    
            for poke in tr.pokes:
                print("<tr><td>%s</td><td>Level %s</td></tr>" % (poke.species, poke.level))
                if poke.ability:
                    print ("<tr><td>Ability:</td><td>%s</td></tr>" % poke.ability)
                if poke.item:
                    print ("<tr><td>Item:</td><td>%s</td></tr>" % poke.item)
                if poke.ivs:
                    print ("<tr><td>IVs:<td>%s</td></tr>" % poke.ivs)
                if poke.evs:
                    print ("<tr><td>IVs:<td>%s</td></tr>" % poke.ivs)
                print("<tr><td><div class=poke-img><img src='graphics/pokemon/%s/anim_front.png'></img></div>" % poke.species.lower())
                if poke.moves:
                    print("<td><ul>")
                    for m in poke.moves:
                        print("<li>%s</li>" %m)
                    print("</ul>")
                print("</td></tr>")
        print("</table>")
        print("<hr/>")

print("</body>")
print("</html>")
