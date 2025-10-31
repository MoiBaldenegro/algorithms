/**
 * Bubble Sort Algorithm
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */
public class BubbleSort {
    
    public static int[] bubbleSort(int[] arr) {
        int n = arr.length;
        int[] arrCopy = arr.clone();
        
        for (int i = 0; i < n; i++) {
            boolean swapped = false;
            
            for (int j = 0; j < n - i - 1; j++) {
                if (arrCopy[j] > arrCopy[j + 1]) {
                    // Swap elements
                    int temp = arrCopy[j];
                    arrCopy[j] = arrCopy[j + 1];
                    arrCopy[j + 1] = temp;
                    swapped = true;
                }
            }
            
            // If no swapping happened, array is already sorted
            if (!swapped) break;
        }
        
        return arrCopy;
    }
    
    public static void main(String[] args) {
        int[] testArray = {64, 34, 25, 12, 22, 11, 90};
        System.out.print("Original array: ");
        printArray(testArray);
        
        int[] sortedArray = bubbleSort(testArray);
        System.out.print("Sorted array: ");
        printArray(sortedArray);
    }
    
    private static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
