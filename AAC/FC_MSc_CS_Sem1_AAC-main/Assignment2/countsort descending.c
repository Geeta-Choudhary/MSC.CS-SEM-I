#include <stdio.h>

void countSortDescending(int A[], int size) {
    int B[size];  // Output array to store the sorted array
    int max = A[0];

    // Find the maximum element in the array
    for (int i = 1; i < size; i++) {
        if (A[i] > max) max = A[i];
    }

    int C[max + 1];  // Count array of size (max + 1) to accommodate all elements from 0 to max

    // Initialize the count array with 0
    for (int i = 0; i <= max; i++) {
        C[i] = 0;
    }

    // Store the count of each element
    for (int i = 0; i < size; i++) {
        C[A[i]]++;
    }

    // Modify the count array to store the actual position of elements
    for (int i = 1; i <= max; i++) {
        C[i] += C[i - 1];
    }

    // Build the output array for descending order
    for (int i = 0; i < size; i++) {  // Traverse from start for descending
        B[size - C[A[i]]] = A[i];
        C[A[i]] = C[A[i]] - 1;  // Decrease count for the current element
    }

    // Copy the sorted array into the original array
    for (int i = 0; i < size; i++) {
        A[i] = B[i];
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int A[size];  // Input array

    // Input the array elements
    printf("Enter the elements (non-negative only): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    // Perform Counting Sort in descending order
    countSortDescending(A, size);

    // Print the sorted array
    printf("Sorted array in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
