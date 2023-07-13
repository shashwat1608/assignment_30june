#include <iostream>
#include <vector>

std::vector<std::vector<int>> convertTo2DArray(std::vector<int>& original, int m, int n) {
    int size = original.size();
    if (size != m * n) {
        // If the size of the original array doesn't match the dimensions of the 2D array
        // Return an empty 2D array
        return {};
    }

    std::vector<std::vector<int>> result(m, std::vector<int>(n));

    for (int i = 0; i < size; i++) {
        int row = i / n;  // Calculate the row index
        int col = i % n;  // Calculate the column index
        result[row][col] = original[i];
    }

    return result;
}

int main() {
    std::vector<int> original = {1, 2, 3, 4, 5, 6};
    int m = 2;
    int n = 3;

    std::vector<std::vector<int>> result = convertTo2DArray(original, m, n);

    if (result.empty()) {
        std::cout << "Impossible to create a 2D array." << std::endl;
    } else {
        std::cout << "2D Array:" << std::endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << result[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
