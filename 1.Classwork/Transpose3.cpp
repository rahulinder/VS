#include <iostream>
#include <vector>

int main() {
    const int rows = 8;
    const int cols = 3;

    int matrix[rows][cols] = {0};
    int r, c, val;


    for (int i = 0; i < 8; ++i) {
        std::cin >> r >> c >> val;

        matrix[r][c] = val;
        
    }

    std::cout << "\nFilled matrix values:" << std::endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}