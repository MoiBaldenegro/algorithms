/**
 * Linear Search Algorithm
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
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
    vector<int> testArray = {64, 34, 25, 12, 22, 11, 90};
    int target = 22;
    
    cout << "Array: ";
    printArray(testArray);
    cout << "Searching for: " << target << endl;
    
    int result = linearSearch(testArray, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
