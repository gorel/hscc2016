#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define MAX_NAME_LENGTH 30

int bobCmp(const void *a, const void *b) {
    char *x = strdup(*(char **) a);
    char *freeX = x;
    char *y = strdup(*(char **) b);
    char *freeY = y;

    char *xF = strsep(&x, " ");
    char *xL = strsep(&x, " ");
    char *yF = strsep(&y, " ");
    char *yL = strsep(&y, " ");

    int retVal = 0;

    if (strcasecmp(xF, "bob") == 0 && strcasecmp(yF, "bob") == 0) {
        retVal = strcmp(xL, yL);
    } else if (strcasecmp(xF, "bob") == 0) {
        retVal = -1;
    } else if (strcasecmp(yF, "bob") == 0) {
        retVal = 1;
    } else {
        retVal = strcmp(xL, yL);
    }

    free(freeX);
    free(freeY);
    return retVal;
}

int main(int argc, char **argv) {
    int N, M;

    scanf("%d %d\n", &N, &M);

    char **names = (char **) malloc(sizeof(char *) * N);

    for (int i = 0; i < N; i++) {
        size_t len = 0;
        names[i] = NULL;
        getline(names + i, &len, stdin);
        // Get rid of the newlines
        if (names[i][strlen(names[i]) - 1] == '\n') {
            names[i][strlen(names[i]) - 1] = '\0';
        }
    }

    qsort(names, N, sizeof(char *), bobCmp);

    for (int i = 0; i < M; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}