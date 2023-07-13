#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> findDuplicates(std::vector<int>& nums) {
    std::vector<int> duplicates;

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            duplicates.push_back(index + 1);
        } else {
            nums[index] = -nums[index];
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        nums[i] = abs(nums[i]);
    }

    return duplicates;
}

int main() {
    int n;
    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> duplicates = findDuplicates(nums);

    std::cout << "Duplicates in the array: ";
    for (int num : duplicates) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
