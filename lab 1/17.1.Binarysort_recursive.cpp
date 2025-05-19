#include <stdio.h>
#include<conio.h>

int binarySearch(int a[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            return mid;
        } else if (a[mid] > key) {
            return binarySearch(a, low, mid - 1, key);
        } else {
            return binarySearch(a, mid + 1, high, key);
        }
    }
    return -1;
}

int main(void) {
    int a[] = {2, 3, 4, 7, 10, 27, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int key,i;

    printf(" Enter the value of key to search:\n");
    scanf(" %d", &key);
    printf("\t***BINARY SEARCH RECURSIVE***\n");
    for(i=0;i<a[i];++i)
		printf(" %d, ",a[i]);
		printf("\n");

    int result = binarySearch(a, 0, n - 1, key);
    if (result == -1){
	
    	
        printf(" Element is not present in array\n");
    }else{
	
    	
        printf(" Element is present at index %d\n", result);
}
    return 0;
}

