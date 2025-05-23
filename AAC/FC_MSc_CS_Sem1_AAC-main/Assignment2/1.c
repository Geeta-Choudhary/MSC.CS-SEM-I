#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000

// Function prototypes
void bubbleSort(int arr[], int n); 
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void heapSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void copyArray(int src[], int dest[], int n);
void printArray(int arr[], int n); 

int main() {
    int arr[MAX_SIZE], n;

    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input validation
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Generate random array
    srand(time(0));  // Seed random number generator
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10; // Random numbers between 0 and 9999
    }

    // Print unsorted array
    printf("Original array:\n");
    printArray(arr, n);

    // Bubble Sort
    int arr1[MAX_SIZE];
    copyArray(arr, arr1, n);
    clock_t start = clock();  // Start timing for Bubble Sort
    bubbleSort(arr1, n);
    clock_t end = clock();  // End timing
    double bubbleSortTime = (double)(end - start) / CLOCKS_PER_SEC;  // Calculate time in seconds
    printf("\nBubble Sort time: %.4f seconds\n", bubbleSortTime);
    printArray(arr1, n);

    // Selection Sort
    int arr2[MAX_SIZE];
    copyArray(arr, arr2, n);
    start = clock();  // Start timing for Selection Sort
    selectionSort(arr2, n);
    end = clock();  // End timing
    double selectionSortTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nSelection Sort time: %.4f seconds\n", selectionSortTime);
    printArray(arr2, n);

    // Insertion Sort
    int arr3[MAX_SIZE];
    copyArray(arr, arr3, n);
    start = clock();  // Start timing for Insertion Sort
    insertionSort(arr3, n);
    end = clock();  // End timing
    double insertionSortTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nInsertion Sort time: %.4f seconds\n", insertionSortTime);
    printArray(arr3, n);

    // Heap Sort
    int arr4[MAX_SIZE];
    copyArray(arr, arr4, n);
    start = clock();  // Start timing for Heap Sort
    heapSort(arr4, n);
    end = clock();  // End timing
    double heapSortTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nHeap Sort time: %.4f seconds\n", heapSortTime);
    printArray(arr4, n);

    return 0;
}

// Bubble Sort implementation
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort implementation
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Insertion Sort implementation
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Heap Sort implementation
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}
 
// Function to copy an array
void copyArray(int src[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
