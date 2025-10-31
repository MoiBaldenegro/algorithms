/**
 * Linear Search Algorithm
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

function linearSearch(arr, target) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i;
        }
    }
    return -1;
}

// Example usage
if (require.main === module) {
    const testArray = [64, 34, 25, 12, 22, 11, 90];
    const target = 22;
    console.log("Array:", testArray);
    console.log("Searching for:", target);
    const result = linearSearch(testArray, target);
    if (result !== -1) {
        console.log("Element found at index:", result);
    } else {
        console.log("Element not found");
    }
}

module.exports = linearSearch;
