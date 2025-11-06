/**
 * Merge Sort Algorithm
 * Time Complexity: O(n log n)
 * Space Complexity: O(n)
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(const vector<int>& left, const vector<int>& right) {
    vector<int> result;
    int i = 0, j = 0;
    
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }
    
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }
    
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }
    
    return result;
}

vector<int> mergeSort(const vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }
    
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    
    left = mergeSort(left);
    right = mergeSort(right);
    
    return merge(left, right);
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
    
    vector<int> sortedArray = mergeSort(testArray);
    cout << "Sorted array: ";
    printArray(sortedArray);
    
    return 0;
}
