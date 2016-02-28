import sys

line = sys.stdin.readline().strip().split()
N, M = int(line[0]), int(line[1])

for i in range(N):
    name = sys.stdin.readline().strip()
    num_correct = 0
    for j in range(M):
        line = sys.stdin.readline().strip().replace('=', '==')
        correct = eval(line)
        if correct:
            num_correct += 1
    score = int(round(num_correct * 100.0 / M))
    print("{}: {}%".format(name, score))
