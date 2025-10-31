"""
Merge Sort Algorithm
Time Complexity: O(n log n)
Space Complexity: O(n)
"""

def merge_sort(arr):
    """
    Sort an array using merge sort algorithm.
    
    Args:
        arr: List of comparable elements
        
    Returns:
        Sorted list
    """
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    
    return merge(left, right)


def merge(left, right):
    """
    Merge two sorted arrays into one sorted array.
    
    Args:
        left: Sorted list
        right: Sorted list
        
    Returns:
        Merged sorted list
    """
    result = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    result.extend(left[i:])
    result.extend(right[j:])
    
    return result


if __name__ == "__main__":
    # Example usage
    test_array = [64, 34, 25, 12, 22, 11, 90]
    print(f"Original array: {test_array}")
    sorted_array = merge_sort(test_array)
    print(f"Sorted array: {sorted_array}")
