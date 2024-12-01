#include <iostream>
#include <iomanip>

int main() {
    int rows = 6;

    for (int i = 1; i <= rows; ++i) {
        std::cout << std::string(rows - i, ' ');
        std::cout << std::string(2 * i - 1, '*') << '\n';
    }

    return 0;
}
