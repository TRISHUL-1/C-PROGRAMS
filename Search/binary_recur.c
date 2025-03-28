#include <stdio.h>

// Function prototype
int binarySearch(int arr[], int target, int start, int end);

// Main function
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, target, 0, n - 1);
    
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }
    
    return 0;
}

// Recursive binary search function
int binarySearch(int arr[], int target, int start, int end) {
    if (start > end) {
        return -1; // Base case: target not found
    }
    
    int mid = start + (end - start) / 2;
    
    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] > target) {
        return binarySearch(arr, target, start, mid - 1); // Search in the left half
    } else {
        return binarySearch(arr, target, mid + 1, end); // Search in the right half
    }
}
