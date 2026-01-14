#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Approach 1: Sorting
 * Time Complexity: O(n log n)
 * Space Complexity: O(1)
 * 
 * Algorithm:
 * 1. Sort the array in descending order
 * 2. Find the first element that is different from the largest element
 */

int secondLargest(vector<int>& arr) {
    int n = arr.size();
    
    // Sort in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    
    // Find the second largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            return arr[i];
        }
    }
    
    // If no second largest found
    return -1;
}

int main() {
    // Test case 1
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    cout << "Array: ";
    for (int x : arr1) cout << x << " ";
    cout << "\nSecond Largest: " << secondLargest(arr1) << endl;
    
    // Test case 2
    vector<int> arr2 = {10, 10};
    cout << "\nArray: ";
    for (int x : arr2) cout << x << " ";
    cout << "\nSecond Largest: " << secondLargest(arr2) << endl;
    
    return 0;
}
