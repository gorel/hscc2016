#include <iostream>

int main(int argc, char **argv) {
    std::string line;
    int N;
    std::cin >> N;

    //read the newline first!
    std::getline(std::cin, line);

    for (int i = 0; i < N; i++) {
        std::getline(std::cin, line);
        std::cout << line << std::endl;
    }
}
