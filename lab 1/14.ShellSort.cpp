#include<stdio.h>
void shellSort(int a[], int n){
	int interval, i;
	for(interval = n / 2; interval > 0; interval /= 2){
		for(i = interval; i<n;i++){
			int temp = a[i];
			int j;
			for(j = i; j >= interval && a[j-interval] > temp; j-=interval){
				a[j] = a[j-interval];
			}
			a[j] = temp;
		}
	}
}

int main(){
	int i, a[] = {43,113,443,7,27,53,123,31};
	int size = sizeof(a)/sizeof(a[0]);
	shellSort(a, size);
	printf("\t***SHELL SORT***\n");
	printf(" Sorted array: \n");
	for(i=0;i<size;i++)
		printf(" %d, ",a[i]);
	return 0;
}
