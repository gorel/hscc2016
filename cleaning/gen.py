import random
import sys

N = random.randint(1, 4)
M = random.randint(1, 4)
I = random.randint(1, N - 1)
J = random.randint(1, M - 1)

print("{} {} {} {}".format(N, M, I, J))
for i in range(N):
    for j in range(M):
        c = 'D'
        # "Set ~60% of spaces to "Clean"
        if i != I and j != J and random.random() < 0.6:
            c = 'C'
        sys.stdout.write(c)
    sys.stdout.write('\n')

