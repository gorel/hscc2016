import sys

def floodFill(gr, I, J):
    if I >= 0 and I < len(gr) and J >= 0 and J < len(gr[0]) and gr[I][J] == 'D':
        gr[I][J] = 'C'
        floodFill(gr, I - 1, J)
        floodFill(gr, I + 1, J)
        floodFill(gr, I, J - 1)
        floodFill(gr, I, J + 1)

line = sys.stdin.readline().strip().split()
N, M, I, J = int(line[0]), int(line[1]), int(line[2]), int(line[3])

graph = []

for i in range(N):
    graph.append(list(sys.stdin.readline().strip()))

floodFill(graph, I, J)

for i in range(N):
    print("".join(graph[i]))
