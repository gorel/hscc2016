#include <iostream>

int main(int argc, char **argv) {
    std::string line;
    int red = 0;
    int green = 0;
    int blue = 0;
    int white = 0;
    int black = 0;
    int N;
    std::cin >> N;

    //read the empty newline first!
    std::getline(std::cin, line);
    for (int i = 0; i < N; i++) {
        std::getline(std::cin, line);
        if (line.compare("red") == 0)
            red++;
        else if (line.compare("green") == 0)
            green++;
        else if (line.compare("blue") == 0)
            blue++;
        else if (line.compare("white") == 0)
            white++;
        else
            black++;
    }

    std::cout << red / 2 << std::endl;
    std::cout << green / 2 << std::endl;
    std::cout << blue / 2 << std::endl;
    std::cout << white / 2 << std::endl;
    std::cout << black / 2 << std::endl;
}
