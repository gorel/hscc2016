import sys

red = 0
green = 0
blue = 0
white = 0
black = 0

N = int(sys.stdin.readline())
for i in range(N):
    line = sys.stdin.readline().strip()
    if line == 'red':
        red += 1
    elif line == 'green':
        green += 1
    elif line == 'blue':
        blue += 1
    elif line == 'white':
        white += 1
    else:
        black += 1

extra = (red % 2) + (green % 2) + (blue % 2) + (white % 2) + (black % 2)
print(extra / 2)
