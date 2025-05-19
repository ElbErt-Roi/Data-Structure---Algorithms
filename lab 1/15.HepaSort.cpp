#include <stdio.h>
#include <conio.h>

// Declare swap function before use
void swap(int* a, int* b);

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;   // Corrected index
    int right = 2 * i + 2;  // Corrected index

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        swap(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    int i;

    // Build heap (rearrange array)
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Extract elements from heap one by one
    for (i = n - 1; i > 0; i--) {
        swap(&a[0], &a[i]);        // Move current root to end
        heapify(a, i, 0);          // call max heapify on the reduced heap
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i;
    int arr[] = {5, 3, 17, 10, 8, 1, 6, 22, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, size);
	printf("\t***HEAP SORT***\n");
    printf(" Sorted array:\n");
    for (i = 0; i < size; i++)
        printf(" %d, ", arr[i]);

    printf("\n");
    getch();
    return 0;
}

