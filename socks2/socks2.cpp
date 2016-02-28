#include <iostream>

int main(int argc, char **argv) {
    std::string line;
    int red = 0;
    int green = 0;
    int blue = 0;
    int white = 0;
    int black = 0;
    int extra, N;
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

    extra = (red % 2) + (green % 2) + (blue % 2) + (white % 2) + (black % 2);
    std::cout << extra / 2 << std::endl;
}
