#include <iostream>
int main(int argc, char **argv) {
    for (int i = 1; i < 101; i++) {
        if (i % 4 == 0)
            std::cout << "Bizz";
        if (i % 7 == 0)
            std::cout << "Fuzz";
        if (i % 4 && i % 7)
            std::cout << i;
        std::cout << std::endl;
    }
}
