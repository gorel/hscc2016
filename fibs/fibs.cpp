#include <iostream>
int main(int argc, char **argv) {
    for (int i = 1; i < 101; i++) {
        if (i % 2 == 0)
            std::cout << "Fibs";
        if (i % 5 == 0)
            std::cout << "Jubs";
        if (i % 9 == 0)
            std::cout << "Magoo";
        if (i % 2 && i % 5 && i % 9)
            std::cout << i;
        std::cout << std::endl;
    }
}
