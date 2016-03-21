import random
import sys

n = random.randint(6,15)
m = n
start_d0 = random.randint(0, 2)
start_d1 = random.randint(0, 2)
end_d0 = random.randint(n - 3, n - 1)
end_d1 = random.randint(m - 3, m - 1)

print("{} {}".format(n, m))
for i in range(n):
	for j in range(m):
		if i == start_d0 and j == start_d1:
			sys.stdout.write('S')
		elif i == end_d0 and j == end_d1:
			sys.stdout.write('E')
		elif random.randint(1,10) < 7:
			sys.stdout.write('0')
		else:
			sys.stdout.write('X')
	sys.stdout.write('\n')
