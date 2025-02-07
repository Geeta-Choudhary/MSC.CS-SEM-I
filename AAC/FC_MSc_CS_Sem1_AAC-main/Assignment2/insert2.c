#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE 1000

// Insertion sort function
void insertionsort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i]; // Store the current element as key
        j = i - 1;

        // Shift elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;
        }
        arr[j + 1] = key;  // Insert the key at its correct position
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE], n, i;

    // Ask user for the number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input validation for number of elements
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Initialize the random number generator
    srand(time(0));

    // Generate random numbers and fill the array
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Random values between 0 and 99
    }

    // Print the original unsorted array
    printf("Original array:\n");
    printArray(arr, n);

    // Perform insertion sort
    insertionsort(arr, n);

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
