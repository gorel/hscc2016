#include <stdio.h>
int main(int argc, char **argv) {
    int i;
    for (i = 1; i < 101; i++) {
        if (i % 2 == 0)
            printf("Fibs");
        if (i % 5 == 0)
            printf("Jubs");
        if (i % 9 == 0)
            printf("Magoo");
        if (i % 2 && i % 5 && i % 9)
            printf("%d", i);
        printf("\n");
    }
}
