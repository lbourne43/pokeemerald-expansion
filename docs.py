#!/usr/bin/python3
import json
import os

ordered_locations = """
Route101
Route103
Route102
PetalburgCity
PetalburgCity_Gym
PetalburgWoods
RusturfTunnel
RustboroCity_Gym
GraniteCave_1F
GraniteCave_B1F
GraniteCave_B2F
GraniteCave_StevensRoom
DewfordTown
DewfordTown_Gym
SlateportCity
AbandonedShip_HiddenFloorCorridors
AbandonedShip_Rooms_B1F
AlteringCave1
AlteringCave2
AlteringCave3
AlteringCave4
AlteringCave5
AlteringCave6
AlteringCave7
AlteringCave8
AlteringCave9
AquaHideout
ArtisanCave_1F
ArtisanCave_B1F
CaveOfOrigin_1F
CaveOfOrigin_Entrance
DesertUnderpass
EverGrandeCity
FieryPath
FortreeCity_Gym
JaggedPass
LavaridgeTown_Gym
LilycoveCity
Magma Hideout
MagmaHideout
MagmaHideout_1F
MagmaHideout_2F_1R
MagmaHideout_2F_2R
MagmaHideout_2F_3R
MagmaHideout_3F_1R
MagmaHideout_3F_2R
MagmaHideout_3F_3R
MagmaHideout_4F
MauvilleCity_Gym
MeteorFalls_1F_1R
MeteorFalls_1F_2R
MeteorFalls_B1F_1R
MeteorFalls_B1F_2R
MeteorFalls_StevensCave
MirageTower_1F
MirageTower_2F
MirageTower_3F
MirageTower_4F
MossdeepCity
MossdeepCity_Gym
MtChimney
MtPyre
MtPyre_1F
MtPyre_2F
MtPyre_3F
MtPyre_4F
MtPyre_5F
MtPyre_6F
MtPyre_Exterior
MtPyre_Summit
MtPytre
NewMauville
NewMauville_Entrance
NewMauville_Inside
PacifidlogTown
Route104
Route105
Route106
Route107
Route108
Route109
Route110
Route111
Route111_Desert
Route112
Route113
Route114
Route115
Route116
Route117
Route118
Route119
Route120
Route121
Route122
Route123
Route124
Route125
Route126
Route127
Route128
Route129
Route13
Route130
Route131
Route132
Route133
Route134
SafariZone_North
SafariZone_Northeast
SafariZone_Northwest
SafariZone_South
SafariZone_Southeast
SafariZone_Southwest
SeafloorCavern
SeafloorCavern_Entrance
SeafloorCavern_Room1
SeafloorCavern_Room2
SeafloorCavern_Room3
SeafloorCavern_Room4
SeafloorCavern_Room5
SeafloorCavern_Room6
SeafloorCavern_Room7
SeafloorCavern_Room8
ShoalCave_LowTideEntranceRoom
ShoalCave_LowTideIceRoom
ShoalCave_LowTideInnerRoom
ShoalCave_LowTideLowerRoom
ShoalCave_LowTideStairsRoom
SkyPillar_1F
SkyPillar_3F
SkyPillar_5F
SootopolisCity
SootopolisCity_Gym
SpaceCenter
Underwater_Route124
Underwater_Route126
VictoryRoad_1F
VictoryRoad_B1F
VictoryRoad_B2F
WeatherInstitute_1F
WeatherInstitute_2F
"""

class Pokemon(object):
    def __init__(self):
        self.moves = list()
        self.item = ""
        self.species = ""
        self.species_clean = ""
        self.level = 0
        self.ability = ""
        self.gender = ""
        self.ivs = ""
        self.evs = ""
        self.forme = False

    def cleanName(self):
        species = self.species
        species = species.lower()
        species = species.replace(" ", "_")
        species = species.replace("-", "_")
        if "rotom" in species:
            species = "/".join(species.split("_", 1))
        if "ursaluna" in species and "bloodmoon" in species:
            species = "/".join(species.split("_", 1))
        if "urshifu" in species:
            species = "/".join(species.split("_", 1))
        if "toxtricity" in species:
            if "low_key" in species:
                species = "/".join(species.split("_", 1))
            else:
                species = species.split("_", 1)[0]
        if "tornadus" in species:
            if "therian" in species:
                species = "/".join(species.split("_", 1))
            else:
                species = species.split("_", 1)[0]
        if "thundurus" in species:
            if "therian" in species:
                species = "/".join(species.split("_", 1))
            else:
                species = species.split("_", 1)[0]
        if "alola" in species:
            species = "/".join(species.rsplit("_", 1))
        if "hisui" in species:
            species = "/".join(species.rsplit("_", 1))
        if "galar" in species:
            species = "/".join(species.rsplit("_", 1))
        if "paldea" in species:
            if "tauros" in species:
                species = "/".join(species.split("_", 1))
            else:
                species = "/".join(species.rsplit("_", 1))
        if "indeedee" in species:
            if "(f)" in species:
                species = "indeedee/f"
            else:
                species = "indeedee"
        return species

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
    print("<ul>")
    print("<li><a href=#%s>%s</li>" % (location, location))
    print("</ul>")
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
                print(poke.species_clean)
                if os.path.exists("graphics/pokemon/%s/anim_front_gba.png" % poke.cleanName()):
                    print("<tr><td><div class=poke-img><img src='graphics/pokemon/%s/anim_front_gba.png'></img></div>" % poke.cleanName())
                elif os.path.exists("graphics/pokemon/%s/anim_front.png" % poke.cleanName()):
                    print("<tr><td><div class=poke-img><img src='graphics/pokemon/%s/anim_front.png'></img></div>" % poke.cleanName())
                else:
                    print("<tr><td><div class=poke-img-nocrop ><img src='graphics/pokemon/%s/front.png'></img></div>" % poke.cleanName())
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
