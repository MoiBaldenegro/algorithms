/**
 * Bubble Sort Algorithm
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */

function bubbleSort(arr) {
    const n = arr.length;
    const arrCopy = [...arr];
    
    for (let i = 0; i < n; i++) {
        let swapped = false;
        
        for (let j = 0; j < n - i - 1; j++) {
            if (arrCopy[j] > arrCopy[j + 1]) {
                // Swap elements
                [arrCopy[j], arrCopy[j + 1]] = [arrCopy[j + 1], arrCopy[j]];
                swapped = true;
            }
        }
        
        // If no swapping happened, array is already sorted
        if (!swapped) break;
    }
    
    return arrCopy;
}

// Example usage
if (require.main === module) {
    const testArray = [64, 34, 25, 12, 22, 11, 90];
    console.log("Original array:", testArray);
    const sortedArray = bubbleSort(testArray);
    console.log("Sorted array:", sortedArray);
}

module.exports = bubbleSort;
