#include<stdio.h>
#include<conio.h>
int binarySearch(int a[],int low,int high,int key){
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==key)
		return mid;
		else if (a[mid]>key)
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
}
int main(){
	int a[]={2,3,4,7,10,27,40};
	int n=sizeof(a)/sizeof(a[0]);
	int key,i;
	printf(" Enter the value of key to search\n");
	scanf(" %d",&key);
	 printf("\t***BINARY SEARCH***\n");
	 for(i=0;i<a[i];++i)
		printf(" %d, ",a[i]);
		printf("\n");
	
	int result=binarySearch(a,0,n-1,key);
	if(result==-1){
			printf(" Element is not present in array");
	}else{
		printf(" Element is present at index %d",result);
}
	return 0;
}
