/*
 * NOTE: This solution is the same as the solution in C.
 * It is much easier to traverse the string using pointers than
 * trying to mess with C++ strings.
 * The biggest difference you will notice is the use of scanf and fgets
 * instead of std::cin.
 */

#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>

//forward declarations of functions
void fix(char *s);
int iround(double d);
int evaluate(void);
int expr(void);
int ePrime(int res);
int multi(void);
int mPrime(int res);
int primary(void);

char line[60];
char *lhs;
char *rhs;

//replace the newline character in a string with a null character
void fix(char *s) {
    int i = 0;
    while (s[i] != '\n')
        i++;
    s[i] = '\0';
}

int iround(double d) {
    return (int)(d + 0.5);
}

int evaluate(void) {
    lhs = (char *)line;
    rhs = lhs;
    //find the equal sign
    while (*rhs != '=')
        rhs++;
    *rhs = '\0';
    //move one character past it
    rhs++;

    int res = expr();
    return (atoi(lhs) == res);
}

int expr(void) {
    return ePrime(multi());
}

int ePrime(int res) {
    if (*rhs) {
        if (*rhs == '+') {
            rhs++;
            return ePrime(res + multi());
        }
        else if (*rhs == '-') {
            rhs++;
            return ePrime(res - multi());
        }
    }
    return res;
}

int multi(void) {
    return mPrime(primary());
}

int mPrime(int res) {
    if (*rhs) {
        if (*rhs == '*') {
            rhs++;
            return mPrime(res * primary());
        }
        else if (*rhs == '/') {
            rhs++;
            return mPrime(res / primary());
        }
    }
    return res;
}

int primary(void) {
    char temp[50] = {0};
    int i, res;

    if (isdigit(*rhs)) {
        i = 0;
        while (rhs[i] != '\0' && isdigit(rhs[i]))
            i++;

        strncpy(temp, rhs, i);
        rhs += i;
        return atoi(temp);
    }
    else {
        rhs++;
        res = expr();
        rhs++;
        return res;
    }
}

int main(int argc, char **argv) {
    char name[50];
    int score, nc, c, i, j, N, M;
    scanf("%d %d\n", &N, &M);

    for (i = 0; i < N; i++) {
        fgets(name, 49, stdin);
        fix(name);
        nc = 0;
        for (j = 0; j < M; j++) {
            fgets(line, 59, stdin);
            fix(line);
            if (evaluate())
                nc++;
        }
        score = iround(nc * 100.0 / M);
        printf("%s: %d%%\n", name, score);
    }
}
