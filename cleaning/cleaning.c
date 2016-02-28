#include <stdio.h>

char graph[25][25];

void floodFill(int I, int J, int N, int M) {
    if (I >= 0 && I < N && J >= 0 && J < M && graph[I][J] == 'D') {
        graph[I][J] = 'C';
        floodFill(I - 1, J, N, M);
        floodFill(I + 1, J, N, M);
        floodFill(I, J - 1, N, M);
        floodFill(I, J + 1, N, M);
    }
}

int main(int argc, char **argv) {
    int N, M, I, J;
    int i, j;

    scanf("%d %d %d %d\n", &N, &M, &I, &J);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            graph[i][j] = getchar();
        }
        //read newline character
        getchar();
    }

    floodFill(I, J, N, M);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%c", graph[i][j]);
        }
        printf("\n");
    }
}
