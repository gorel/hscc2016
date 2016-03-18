import sys

n = int(sys.stdin.readline())
people = [0 for i in range(n)]
total = 0

for i in xrange(n):
    people[i] = int(sys.stdin.readline())
    total += people[i]

for i in range(n):
    percent = int(round(100 * people[i] / float(total), 0))
    print(str(percent) + "%")
