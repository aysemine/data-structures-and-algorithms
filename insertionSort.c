#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        printf("Current Key: %d\n", key);
        printf("Array Before Sorting: ");
        printArray(arr, n);

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        printf("Array After Sorting: ");
        printArray(arr, n);
        printf("\n");
    }
}

int main() {
    int arr[] = {7, 3, 5, 8, 2, 9, 4, 15, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    
    printf("Sorted Array: ");
    printArray(arr, n);
    printf("Best Case: O(n)
        Worst Case: O(n^2)
        Average Case: O(n^2) ");

    return 0;
}
