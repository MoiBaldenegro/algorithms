/**
 * Binary Search Algorithm
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Note: Array must be sorted
 */
public class BinarySearch {
    
    public static int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
    
    public static void main(String[] args) {
        int[] testArray = {11, 12, 22, 25, 34, 64, 90};
        int target = 25;
        
        System.out.print("Array: ");
        printArray(testArray);
        System.out.println("Searching for: " + target);
        
        int result = binarySearch(testArray, target);
        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found");
        }
    }
    
    private static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
