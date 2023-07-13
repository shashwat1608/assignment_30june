#include <iostream>
#include <vector>

int findMin(std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return nums[left];
}

int main() {
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int minElement = findMin(nums);
    std::cout << "Minimum element: " << minElement << std::endl;

    return 0;
}

