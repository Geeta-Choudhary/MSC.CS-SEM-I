#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 1000

void insertionsort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[MAX_SIZE], n, i;

    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n); // Get the size of the array

    // Input validation
    if (n <= 0 || n > MAX_SIZE)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }

    srand(time(0));
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    printf("Original array\n");
    printArray(arr, n);

    insertionsort(arr, n);
    printf("\nSorted array:\n");
    printArray(arr, n);

    return 0;
}