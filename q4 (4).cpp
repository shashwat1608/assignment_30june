#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::vector<int>> findDistinctNumbers(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> set2(nums2.begin(), nums2.end());

    std::vector<int> distinctNums1;
    std::vector<int> distinctNums2;

    for (int num : nums1) {
        if (set2.find(num) == set2.end()) {
            distinctNums1.push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.find(num) == set1.end()) {
            distinctNums2.push_back(num);
        }
    }

    return {distinctNums1, distinctNums2};
}

int main() {
    // Example usage
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {4, 5, 6, 7, 8};

    std::vector<std::vector<int>> answer = findDistinctNumbers(nums1, nums2);

    std::cout << "Distinct numbers in nums1 not present in nums2: ";
    for (int num : answer[0]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Distinct numbers in nums2 not present in nums1: ";
    for (int num : answer[1]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
