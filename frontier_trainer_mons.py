#!/usr/bin/python3

def clean(inp):
    inp = inp.strip()
    inp = inp.upper()
    inp = inp.replace(" ", "_")
    inp = inp.replace("-", "_")
    return inp

with open("frontier_trainer_defs") as f:
    lines = f.readlines()

minus_one = False

for l in lines:
    l = l.strip()
    if l.startswith("sun"):
        for i in range(1,6):
            print("    FRONTIER_MON_SUN_" + clean(l.split(" ", 1)[-1]) + "_" + str(i) + ", \\")
        minus_one = True
    elif l.startswith("rain"):
        for i in range(1,6):
            print("    FRONTIER_MON_RAIN_" + clean(l.split(" ", 1)[-1]) + "_" + str(i) + ", \\")
        minus_one = True
    elif l.startswith("trick"):
        for i in range(1,6):
            print("    FRONTIER_MON_TRICK_" + clean(l.split(" ", 1)[-1]) + "_" + str(i) + ", \\")
        minus_one = True
    elif l.startswith("sand"):
        for i in range(1,6):
            print("    FRONTIER_MON_SAND_" + clean(l.split(" ", 1)[-1]) + "_" + str(i) + ", \\")
        minus_one = True
    elif l.startswith("bal"):
        for i in range(1,6):
            print("    FRONTIER_MON_BAL_" + clean(l.split(" ", 1)[-1]) + "_" + str(i) + ", \\")
        minus_one = True
    elif l.startswith("elec"):
        for i in range(1,6):
            print("    FRONTIER_MON_ELEC_" + clean(l.split(" ", 1)[-1]) + "_" + str(i) + ", \\")
        minus_one = True
    else:
        if minus_one:
            print("    -1")
            print("")
        print(l)
        minus_one = False
