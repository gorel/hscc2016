#include <iostream>

int main(int argc, char **argv) {
    int ages[100] = {0};
    int x, N;

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> x;
        ages[x]++;
    }

    for (int i = 1; i < 100; i++)
        std::cout << ages[i] << std::endl;
}
