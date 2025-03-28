#!/usr/bin/python3

with open("frontier.mons.consts") as f:
    lines = f.readlines()

mons = list()

for l in lines:
    mon = l.split()[1]
    if mon.startswith("FRONTIER_MON_TRICK_") or mon.startswith("FRONTIER_MON_BAL_") or mon.startswith("FRONTIER_MON_SAND_") or mon.startswith("FRONTIER_MON_SUN_") or mon.startswith("FRONTIER_MON_RAIN_") or mon.startswith("FRONTIER_MON_ELEC_"):
        mon = mon[:-2]
        if mon not in mons:
            mons.append(mon)
    else:
        continue

for mon in mons:
    parts = mon.split("_")
    group = parts[2].lower()
    species = " ".join(parts[3:]).title()
    print(group, species)
