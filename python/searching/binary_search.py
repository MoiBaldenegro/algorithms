"""
Binary Search Algorithm
Time Complexity: O(log n)
Space Complexity: O(1)
Note: Array must be sorted
"""

def binary_search(arr, target):
    """
    Search for a target value in a sorted array using binary search.
    
    Args:
        arr: Sorted list of comparable elements
        target: Element to search for
        
    Returns:
        Index of target if found, -1 otherwise
    """
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1


if __name__ == "__main__":
    # Example usage
    test_array = [11, 12, 22, 25, 34, 64, 90]
    target = 25
    print(f"Array: {test_array}")
    print(f"Searching for: {target}")
    result = binary_search(test_array, target)
    if result != -1:
        print(f"Element found at index: {result}")
    else:
        print("Element not found")
