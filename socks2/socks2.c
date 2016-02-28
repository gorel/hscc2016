#include <stdio.h>

int main(int argc, char **argv) {
    char line[25];
    int red = 0;
    int green = 0;
    int blue = 0;
    int white = 0;
    int black = 0;
    int i, extra, N;

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

    extra = (red % 2) + (green % 2) + (blue % 2) + (white % 2) + (black % 2);
    printf("%d\n", extra / 2);
}
