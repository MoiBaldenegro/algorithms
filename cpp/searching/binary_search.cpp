/**
 * Binary Search Algorithm
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Note: Array must be sorted
 */

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> testArray = {11, 12, 22, 25, 34, 64, 90};
    int target = 25;
    
    cout << "Array: ";
    printArray(testArray);
    cout << "Searching for: " << target << endl;
    
    int result = binarySearch(testArray, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
