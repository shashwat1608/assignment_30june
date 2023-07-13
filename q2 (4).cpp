
#include <iostream>
#include <cmath>

int arrangeCoins(int n) {
    // Calculate the maximum number of rows using quadratic equation
    int maxRows = (-1 + sqrt(1 + 8.0 * n)) / 2;
    return maxRows;
}

int main() {
    int n;
    std::cout << "Enter the number of coins: ";
    std::cin >> n;

    int completeRows = arrangeCoins(n);
    std::cout << "The number of complete rows in the staircase is: " << completeRows << std::endl;

    return 0;
}

