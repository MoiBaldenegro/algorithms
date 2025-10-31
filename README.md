# Algorithms

A collection of common algorithms implemented in different programming languages.

## Languages Supported

- **Python** - `.py` files
- **JavaScript** - `.js` files  
- **Java** - `.java` files
- **C++** - `.cpp` files

## Directory Structure

```
algorithms/
├── python/
│   ├── sorting/
│   │   ├── bubble_sort.py
│   │   ├── quick_sort.py
│   │   └── merge_sort.py
│   └── searching/
│       ├── binary_search.py
│       └── linear_search.py
├── javascript/
│   ├── sorting/
│   │   ├── bubble_sort.js
│   │   └── quick_sort.js
│   └── searching/
│       ├── binary_search.js
│       └── linear_search.js
├── java/
│   ├── sorting/
│   │   ├── BubbleSort.java
│   │   └── QuickSort.java
│   └── searching/
│       ├── BinarySearch.java
│       └── LinearSearch.java
└── cpp/
    ├── sorting/
    │   ├── bubble_sort.cpp
    │   └── quick_sort.cpp
    └── searching/
        ├── binary_search.cpp
        └── linear_search.cpp
```

## Algorithms Implemented

### Sorting Algorithms

#### Bubble Sort
- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)
- **Description:** Simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.

#### Quick Sort
- **Time Complexity:** O(n log n) average, O(n²) worst case
- **Space Complexity:** O(log n)
- **Description:** Efficient, in-place sorting algorithm that uses divide-and-conquer strategy to sort elements.

#### Merge Sort
- **Time Complexity:** O(n log n)
- **Space Complexity:** O(n)
- **Description:** Efficient, stable sorting algorithm that uses divide-and-conquer strategy by dividing the array into halves, sorting them and merging them back.

### Searching Algorithms

#### Linear Search
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
- **Description:** Simple search algorithm that checks every element in the list until the target is found or the list ends.

#### Binary Search
- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)
- **Description:** Efficient search algorithm for sorted arrays that repeatedly divides the search interval in half.

## How to Run

### Python
```bash
python python/sorting/bubble_sort.py
python python/searching/binary_search.py
```

### JavaScript
```bash
node javascript/sorting/bubble_sort.js
node javascript/searching/binary_search.js
```

### Java
```bash
cd java/sorting
javac BubbleSort.java
java BubbleSort

cd java/searching
javac BinarySearch.java
java BinarySearch
```

### C++
```bash
cd cpp/sorting
g++ bubble_sort.cpp -o bubble_sort
./bubble_sort

cd cpp/searching
g++ binary_search.cpp -o binary_search
./binary_search
```

## Contributing

Feel free to add more algorithms in any programming language. When adding new algorithms:

1. Follow the existing directory structure
2. Include time and space complexity in comments
3. Add example usage in the main function/block
4. Update this README with the new algorithm details

## License

This is an educational repository for learning algorithms in different programming languages.
