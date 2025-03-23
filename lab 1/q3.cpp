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
		if(front==0 && rear == MAXSIZE-1){
		
		printf("Queue is FULL");
	}else{
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
		}
		else if (front==0 && rear==MAXSIZE-1)
		rear=0;
		else
		rear++;
		a[rear]=item;
	}
	}
int deque()
	{
		int item;
		if(front==-1 && front==-1)
		{
			printf("\Queue is EMPTY");
			return -1;
		}
		item=a[front];
		if(front==rear)
		front=rear=-1;
		else if(front==MAXSIZE-1)
		front=0;
		else
		front++;
		return item;
		
	}
void display()
{
	printf("The items in the Queue are: ");
	int i;
	if(front<rear){
		for(i=front;i<rear;i++){
			printf("%d ",a[i]);
		}
	}
	else{
		for(i=front;i<=MAXSIZE-1;i++){
			printf("%d ",a[i]);
		}
		for(i=0;i<=rear;i++){
			printf("%d ",a[i]);
	}
	}

}


