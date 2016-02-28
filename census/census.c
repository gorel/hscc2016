#include <stdio.h>

int main(int argc, char **argv) {
    int ages[100] = {0};
    int i, x, N;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &x);
        ages[x]++;
    }

    for (i = 1; i < 100; i++)
        printf("%d\n", ages[i]);
}
