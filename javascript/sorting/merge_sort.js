/**
 * Merge Sort Algorithm
 * Time Complexity: O(n log n)
 * Space Complexity: O(n)
 */

function mergeSort(arr) {
    if (arr.length <= 1) {
        return arr;
    }
    
    const mid = Math.floor(arr.length / 2);
    const left = mergeSort(arr.slice(0, mid));
    const right = mergeSort(arr.slice(mid));
    
    return merge(left, right);
}

function merge(left, right) {
    const result = [];
    let i = 0;
    let j = 0;
    
    while (i < left.length && j < right.length) {
        if (left[i] <= right[j]) {
            result.push(left[i]);
            i++;
        } else {
            result.push(right[j]);
            j++;
        }
    }
    
    return result.concat(left.slice(i)).concat(right.slice(j));
}

// Example usage
if (require.main === module) {
    const testArray = [64, 34, 25, 12, 22, 11, 90];
    console.log("Original array:", testArray);
    const sortedArray = mergeSort(testArray);
    console.log("Sorted array:", sortedArray);
}

module.exports = mergeSort;
