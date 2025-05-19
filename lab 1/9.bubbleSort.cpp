#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11,55,7,27};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);
	printf("\t***BUBBLE SORT***\n");
    printf(" Sorted array: \n");
    for (int i = 0; i < size; i++)
        printf(" %d, ", arr[i]);

    return 0;
}

