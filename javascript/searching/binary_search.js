/**
 * Binary Search Algorithm
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Note: Array must be sorted
 */

function binarySearch(arr, target) {
    let left = 0;
    let right = arr.length - 1;
    
    while (left <= right) {
        const mid = Math.floor((left + right) / 2);
        
        if (arr[mid] === target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

// Example usage
if (require.main === module) {
    const testArray = [11, 12, 22, 25, 34, 64, 90];
    const target = 25;
    console.log("Array:", testArray);
    console.log("Searching for:", target);
    const result = binarySearch(testArray, target);
    if (result !== -1) {
        console.log("Element found at index:", result);
    } else {
        console.log("Element not found");
    }
}

module.exports = binarySearch;
