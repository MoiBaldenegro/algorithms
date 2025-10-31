/**
 * Quick Sort Algorithm
 * Time Complexity: O(n log n) average, O(n^2) worst case
 * Space Complexity: O(log n)
 */

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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
    
    quickSort(testArray, 0, testArray.size() - 1);
    cout << "Sorted array: ";
    printArray(testArray);
    
    return 0;
}
