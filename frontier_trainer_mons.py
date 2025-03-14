#!/usr/bin/python3

with open("frontier_trainer_defs") as f:
    lines = f.readlines()

minus_one = False

for l in lines:
    l = l.strip()
    if l.startswith("sun"):
        print("    FRONTIER_MON_SUN_" + l.split(" ", 1)[-1] + ", \\")
    elif l.startswith("rain"):
        print("    FRONTIER_MON_RAIN_" + l.split(" ", 1)[-1] + ", \\")
    elif l.startswith("trick"):
        print("    FRONTIER_MON_TRICK_" + l.split(" ", 1)[-1] + ", \\")
    elif l.startswith("sand"):
        print("    FRONTIER_MON_SAND_" + l.split(" ", 1)[-1] + ", \\")
    elif l.startswith("bal"):
        print("    FRONTIER_MON_BAL_" + l.split(" ", 1)[-1] + ", \\")
    elif l.startswith("elec"):
        print("    FRONTIER_MON_ELEC_" + l.split(" ", 1)[-1] + ", \\")
    else:
        if minus_one:
            print("    -1")
            print("")
        print(l)
        minus_one = True
