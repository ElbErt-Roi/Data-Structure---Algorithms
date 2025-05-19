#include<stdio.h>
#include<conio.h>
#include<string.h>


int partition(int a[], int l, int r);

void quicksort(int a[],int l,int r){ 
	int p;
	
	if(l<r){
	    p=partition(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}

int partition(int a[],int l,int r){
	int i,j,p,temp;
	i = l + 1; 
	j = r;
	p = a[l];
	while(i <= j){ 
		while(i <= r && a[i] <= p) i++; 
		while(a[j] > p) j--;
		if(i < j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;		
		}
	}
	
	temp = a[l];
	a[l] = a[j];
	a[j] = temp;
	
	return j;
}

int main(){
	int i,a[]={3,1,10,2,6,8,7,11};
	quicksort(a,0,6);
	printf("\t***QUICK SORT***\n");
	printf(" Sorted array:\n");
	for(i=0;i<8;i++) 
	    printf(" %d, ",a[i]); 
	getch();
	return 0;
}

