import sys

line = sys.stdin.readline().strip().split()
N, M = int(line[0]), int(line[1])

names = []

for i in range(N):
    names.append(sys.stdin.readline().strip())


def bobCmp(x, y):
    if x[0] == 'bob' and y[0] == 'bob':
        return cmp(x[1], y[1])
    elif x[0] == 'bob': return -1
    elif y[0] == 'bob': return 1
    else: return cmp(x[1], y[1])

# Need to use sys.stdout.write instead of print because print is a statement not a function in python 2
map(lambda x: sys.stdout.write(x + '\n'), sorted(names, key=lambda x: x.lower().split(), cmp=bobCmp)[:M])