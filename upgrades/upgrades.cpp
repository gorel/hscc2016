#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string.h>
#include <strings.h>

bool bobCmp(std::string a, std::string b) {
    std::string xF, xL, yF, yL;
    std::istringstream as(a);
    std::istringstream bs(b);
    std::getline(as, xF, ' ');
    std::getline(as, xL, ' ');
    std::getline(bs, yF, ' ');
    std::getline(bs, yL, ' ');

    bool retVal = false;

    if (strcasecmp(xF.c_str(), "bob") == 0 && strcasecmp(yF.c_str(), "bob") == 0) {
        retVal = (strcmp(xL.c_str(), yL.c_str()) < 0);
    } else if (strcasecmp(xF.c_str(), "bob") == 0) {
        retVal = 1;
    } else if (strcasecmp(yF.c_str(), "bob") == 0) {
        retVal = 0;
    } else {
        retVal = (strcmp(xL.c_str(), yL.c_str()) < 0);
    }

    return retVal;
}

int main(int argc, char **argv) {
    int N, M;

    std::cin >> N >> M;
    // std::cout << N << " " << M;
    std::cin.ignore(10000, '\n');

    std::vector <std::string> names(N);

    for (int i = 0; i < N; i++) {
        std::getline(std::cin, names[i]);
    }

    std::stable_sort(names.begin(), names.end(), bobCmp);

    for (int i = 0; i < M; i++) {
        std::cout << names[i] << std::endl;
    }
    return 0;
}
