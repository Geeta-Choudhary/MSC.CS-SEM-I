#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE 1000

// selection sort function
void selectionsort(int arr[], int n) {
    int i,j,min_index,temp;
    for (i = 0; i < n-1; i++) {
        min_index= i; // Store the current element as key
        for (j =i+1; j <n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }

        temp = arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
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

    // Perform selection sort
    selectionsort(arr, n);

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
