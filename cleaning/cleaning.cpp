#include <iostream>

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

    std::cin >> N >> M >> I >> J;

    //read the empty newline!
    std::cin.get();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            graph[i][j] = std::cin.get();
        }
        //read newline character
        std::cin.get();
    }

    floodFill(I, J, N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cout << graph[i][j];
        }
        std::cout << std::endl;
    }
}
