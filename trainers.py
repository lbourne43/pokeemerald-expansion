#!/usr/bin/python3

class Pokemon(object):
    def __init__(self):
        self.moves = list()
        self.item = ""
        self.species = ""
        self.level = 0
        self.ability = ""
        self.gender = ""
        self.ivs = ""

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

TRAINERS_FILE = "src/data/trainers.party"

with open(TRAINERS_FILE) as f:
    lines = f.readlines()

trainers = list()
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
            trainer.location = l.split(": ")[-1][0:-3]

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

for tr in trainers:
    print(tr.name)
    print(tr.trainer_class)
    print(tr.ai)
    print(tr.location)
    for poke in tr.pokes:
        print(poke.level, poke.species)
        print(poke.ivs)
        for m in poke.moves:
            print(m)
    
