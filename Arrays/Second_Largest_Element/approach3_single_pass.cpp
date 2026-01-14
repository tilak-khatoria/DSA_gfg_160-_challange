#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/**
 * Approach 3: Single Pass (Optimal Solution)
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * 
 * Algorithm:
 * 1. Maintain two variables: first (largest) and second (second largest)
 * 2. Traverse the array once and update both variables
 * 3. If current element > first: second = first, first = current
 * 4. Else if current element > second and != first: second = current
 */

int secondLargest(vector<int>& arr) {
    int n = arr.size();
    
    int first = INT_MIN;
    int second = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        // If current element is greater than first
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        // If current element is between first and second
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    // If no second largest found
    return (second == INT_MIN) ? -1 : second;
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
    
    // Test case 4
    vector<int> arr4 = {5, 5, 5};
    cout << "\nArray: ";
    for (int x : arr4) cout << x << " ";
    cout << "\nSecond Largest: " << secondLargest(arr4) << endl;
    
    return 0;
}
