import random

names = []

with open('names.txt', 'r') as f:
    for name in f:
        names.append(name.strip())

random.shuffle(names)

M = random.randint(1, 500)
N = random.randint(M, len(names))

print('{} {}'.format(N, M))

picked = random.sample(names, N)

for name in picked:
    # 10% chance of Bob
    if random.random() < .05:
        parts = name.split()
        parts[0] = 'Bob'
        name = ' '.join(parts)
    print name