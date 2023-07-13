#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(const std::vector<int>& nums) {
    std::vector<int> result(nums.size());
    int left = 0;
    int right = nums.size() - 1;
    int idx = nums.size() - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[idx--] = leftSquare;
            left++;
        } else {
            result[idx--] = rightSquare;
            right--;
        }
    }

    return result;
}

int main() {
    // Example usage
    std::vector<int> nums = {-4, -2, -1, 0, 1, 3, 5};
    std::vector<int> result = sortedSquares(nums);

    std::cout << "Sorted squares: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
