#include <stdio.h>

void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;

    for (i = 0; i < size - 1; i++) {
        // Assume the current index is the minimum
        minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13,12,18};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
	printf("\t***SELECTION SORT***\n");
    printf(" Sorted array: \n");
    for (int i = 0; i < size; i++)
        printf(" %d, ", arr[i]);

    return 0;
}

