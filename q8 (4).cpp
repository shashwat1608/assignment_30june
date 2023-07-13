#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

std::vector<int> findOriginalArray(std::vector<int>& changed) {
    std::vector<int> original;

    // Check if the size of changed is odd
    if (changed.size() % 2 != 0) {
        return original; // Return an empty array
    }

    // Sort the array in ascending order
    std::sort(changed.begin(), changed.end());

    // Create a map to keep track of the frequency of each number in changed
    std::unordered_map<int, int> freq;

    for (int num : changed) {
        freq[num]++;
    }

    // Iterate over the sorted array
    for (int num : changed) {
        // Check if the number has occurred at least once
        if (freq[num] > 0) {
            // Check if the doubled value of num exists in the map
            if (freq[2 * num] > 0) {
                // Add num to the original array
                original.push_back(num);

                // Decrement the frequency of num and 2 * num
                freq[num]--;
                freq[2 * num]--;
            } else {
                return std::vector<int>(); // Return an empty array
            }
        }
    }

    return original;
}

int main() {
    std::vector<int> changed = {2, 4, 8, 16};

    std::vector<int> original = findOriginalArray(changed);

    if (original.empty()) {
        std::cout << "Empty array";
    } else {
        std::cout << "Original array: ";
        for (int num : original) {
            std::cout << num << " ";
        }
    }

    return 0;
}
