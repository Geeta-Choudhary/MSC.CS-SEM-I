#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;  // Key found, return index
        else if (arr[mid] < key)
            low = mid + 1;  // Search in the right half
        else
            high = mid - 1;  // Search in the left half
    }

    return -1;  // Key not found
}

int main() {
    int size, key;

    // Taking array size from user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Taking array elements from user
    printf("Enter %d elements in ascending order: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the key to search from user
    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);

    if (result != -1)
        printf("Number found at index %d.\n", result);
    else
        printf("Number not found.\n");

    return 0;
}
