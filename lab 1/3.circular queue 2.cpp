#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5

void enque(int item);
int deque();
void display();
int front=-1;
int rear=-1;
int a[MAXSIZE];
int count=0;
int main(){
	int n,i,opt;
	do{
		printf("\nEnter Your Choice: ");
		printf("\n1: Enqueue Operation: ");
		printf("\n2: Dequeue Operation: ");
		printf("\n3: Display Data Elements: ");
		printf("\n4: Exit...");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter a number to insert into the queue: ");
				scanf("%d",&n);
				enque(n);
				break;
			case 2:
				n=deque();
				printf("\nThe deleted item is %d",n);
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);		
				
				}
		}
		while(opt!=4);
		getch();
	}
		
void enque (int item)
	{
		if(count==MAXSIZE){
		
		printf("Queue is FULL");
	}else{
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
		}
	
	else
	{
		rear=(rear+1)%MAXSIZE;
	}
	a[rear]=item;
	count++;	
	}
	}
int deque()
	{
		int item;
		if(count==0)
		{
			printf("\Queue is EMPTY");
			return 0;
		}else{
			item=a[front];
			front=(front+1)%MAXSIZE;
			count--;
			return item;
		}
		
	}
void display()
	
{
	printf("The items in the Queue are: ");
	int i, j=count;
	for(i=front; j!=0; j--){
		
		printf("%d ",a[i]);
		i=(i+1)%MAXSIZE;
}

}


