import sys

N = int(sys.stdin.readline())
ages = [0 for i in range(100)]

for i in range(N):
    citizen = int(sys.stdin.readline())
    ages[citizen] += 1

for i in range(1, 100):
    print(ages[i])