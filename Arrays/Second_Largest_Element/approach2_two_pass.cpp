#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/**
 * Approach 2: Two Pass Solution
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * 
 * Algorithm:
 * 1. First pass: Find the largest element
 * 2. Second pass: Find the largest element smaller than the maximum
 */

int secondLargest(vector<int>& arr) {
    int n = arr.size();
    
    // First pass: Find the largest element
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Second pass: Find second largest
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    
    // If no second largest found
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
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
    
    // Test case 3
    vector<int> arr3 = {10, 5, 8, 12, 15, 9};
    cout << "\nArray: ";
    for (int x : arr3) cout << x << " ";
    cout << "\nSecond Largest: " << secondLargest(arr3) << endl;
    
    return 0;
}
