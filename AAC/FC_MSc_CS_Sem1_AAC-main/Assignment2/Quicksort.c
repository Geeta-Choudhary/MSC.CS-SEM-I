#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE 1000

// QuickSort Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot element
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;  // Increment index of smaller element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap the pivot element with the element at i+1
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  // Return the partition index
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Get the partition index

        // Recursively sort the two halves
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
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

    // Perform quick sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
