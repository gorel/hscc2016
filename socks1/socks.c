#include <stdio.h>

int main(int argc, char **argv) {
    char line[25];
    int red = 0;
    int green = 0;
    int blue = 0;
    int white = 0;
    int black = 0;
    int i, N;

    scanf("%d\n", &N);

    for (i = 0; i < N; i++) {
        fgets(line, 20, stdin);
        if (!strcmp(line, "red\n"))
            red++;
        else if (!strcmp(line, "green\n"))
            green++;
        else if (!strcmp(line, "blue\n"))
            blue++;
        else if (!strcmp(line, "white\n"))
            white++;
        else
            black++;
    }

    printf("%d\n", red / 2);
    printf("%d\n", green / 2);
    printf("%d\n", blue / 2);
    printf("%d\n", white / 2);
    printf("%d\n", black / 2);
}
