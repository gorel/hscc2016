import random
import string

names = []

with open('names.txt', 'r') as f:
    for name in f:
        names.append(name.strip())

random.shuffle(names)

M = random.randint(1, 500)
N = random.randint(M, len(names))

print('{} {}'.format(N, M))

picked = random.sample(names, N)

lastNames = set()

for name in picked:
    parts = name.split()
    if (parts[1] in lastNames):
        parts[1] += ''.join([random.choice(string.ascii_lowercase) for i in range(30 - (len(parts[0]) + len(parts[1]) + 2))])
    lastNames.add(parts[1])
    # 10% chance of Bob
    if random.random() < .05:
        parts[0] = 'Bob'
    print(' '.join(parts))