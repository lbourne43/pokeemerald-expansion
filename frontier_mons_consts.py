#!/usr/bin/python3

print("#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_MONS_H")
print("#define GUARD_CONSTANTS_BATTLE_FRONTIER_MONS_H")

with open("frontier.mons.consts") as f:
    lines = f.readlines()
length = len(lines)
i = 0
for l in lines:
    mon = l.split()[1]
    print("#define %s\t\t%d" % (mon,i))
    i += 1

print("#define NUM_FRONTIER_MONS           " + str(len(lines)))
print("#endif //GUARD_CONSTANTS_BATTLE_FRONTIER_MONS_H")
