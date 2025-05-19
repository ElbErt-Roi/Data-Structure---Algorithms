#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, key, j;

    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6,111,222,333};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
	printf("\t***INSERTION SORT***\n");
    printf(" Sorted array:\n");
    for (int i = 0; i < size; i++)
        printf(" %d, ", arr[i]);

    return 0;
}

