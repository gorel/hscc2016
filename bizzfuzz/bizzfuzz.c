#include <stdio.h>
int main(int argc, char **argv) {
    int i;
    for (i = 1; i < 101; i++) {
        if (i % 4 == 0)
            printf("Bizz");
        if (i % 7 == 0)
            printf("Fuzz");
        if (i % 4 && i % 7)
            printf("%d", i);
        printf("\n");
    }
}
