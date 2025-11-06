/**
 * Bubble Sort Algorithm
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no swapping happened, array is already sorted
        if (!swapped) break;
    }
    
    return arr;
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> testArray = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    printArray(testArray);
    
    vector<int> sortedArray = bubbleSort(testArray);
    cout << "Sorted array: ";
    printArray(sortedArray);
    
    return 0;
}
