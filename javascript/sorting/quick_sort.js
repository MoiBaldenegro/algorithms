/**
 * Quick Sort Algorithm
 * Time Complexity: O(n log n) average, O(n^2) worst case
 * Space Complexity: O(log n)
 */

function quickSort(arr) {
    if (arr.length <= 1) {
        return arr;
    }
    
    const pivot = arr[Math.floor(arr.length / 2)];
    const left = arr.filter(x => x < pivot);
    const middle = arr.filter(x => x === pivot);
    const right = arr.filter(x => x > pivot);
    
    return [...quickSort(left), ...middle, ...quickSort(right)];
}

// Example usage
if (require.main === module) {
    const testArray = [64, 34, 25, 12, 22, 11, 90];
    console.log("Original array:", testArray);
    const sortedArray = quickSort(testArray);
    console.log("Sorted array:", sortedArray);
}

module.exports = quickSort;
