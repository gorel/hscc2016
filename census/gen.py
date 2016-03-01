import random

# 10 million
N = 10 * 1000 * 1000

print(N)
for i in xrange(N):
    print(random.randint(1, 99))
