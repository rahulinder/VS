#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {10, 20, 20, 10, 30, 40, 40, 10};
    
    std::cout << "Original Array: ";
    for(int val : arr) std::cout << val << " ";
    std::cout << std::endl;

    std::sort(arr.begin(), arr.end());
    
    // std::unique moves duplicates to the end and returns an iterator to the new end
    int distinct_count = std::unique(arr.begin(), arr.end()) - arr.begin();
    
    std::cout << "Total number of distinct elements: " << distinct_count << std::endl;
    return 0;
}
