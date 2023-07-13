#include <iostream>
#include <vector>
#include <cmath>

int distanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
    int distance = 0;
    
    for (int i = 0; i < arr1.size(); i++) {
        bool valid = true;
        
        for (int j = 0; j < arr2.size(); j++) {
            if (abs(arr1[i] - arr2[j]) <= d) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            distance++;
        }
    }
    
    return distance;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {4, 5, 6, 7, 8};
    int d = 2;
    
    int result = distanceValue(arr1, arr2, d);
    std::cout << "Distance value: " << result << std::endl;
    
    return 0;
}
