import random

STRINGS = ["red", "blue", "green", "white", "black"]

N = random.randint(500, 1000)

print(N)
for i in range(N):
    color = random.choice(STRINGS)
    print(color)
