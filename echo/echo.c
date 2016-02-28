#include <stdio.h>

int main(int argc, char **argv) {
    char line[50];
    int i, N;

    scanf("%d\n", &N);
    for (i = 0; i < N; i++) {
        fgets(line, 49, stdin);
        printf("%s", line);
    }
}
