"""
Linear Search Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
"""

def linear_search(arr, target):
    """
    Search for a target value in an array using linear search.
    
    Args:
        arr: List of comparable elements
        target: Element to search for
        
    Returns:
        Index of target if found, -1 otherwise
    """
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1


if __name__ == "__main__":
    # Example usage
    test_array = [64, 34, 25, 12, 22, 11, 90]
    target = 22
    print(f"Array: {test_array}")
    print(f"Searching for: {target}")
    result = linear_search(test_array, target)
    if result != -1:
        print(f"Element found at index: {result}")
    else:
        print("Element not found")
