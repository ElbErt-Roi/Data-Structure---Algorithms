#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *next;
};
//typedef struct Node node;
struct Node *front=NULL;
struct Node *rear=NULL;

void enqu(int num);
void dequ();
void display();

int main(){
	
	int ch,n,num;
	while(1){
		printf("\nEnter your Choice:");
		printf("\n1. Enqueue:");
		printf("\n2. Dequeue");
		printf("\n3. Display");
		printf("\n4. Exit");
		scanf("%d",&ch);
	
	switch(ch)	{

	case 1:
		printf("Enter Date to Enque into stack...");
		scanf("%d",&num);
		enqu(num);
		break;
	
	case 2:
		dequ();
		break;
		
	case 3:
		display();
		break;
		
	case 4:
		exit(0);
}
}
getch();
return 0;
}

void  enqu(int num){
	
struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->info=num;
	if(front==NULL){
		front=newnode;
		rear=newnode;
		front->next=NULL;
		rear->next=NULL;
		
	}else{
		rear->next=newnode;
		rear=newnode;
		rear->next=NULL;
		
	}
	printf("%d is enqueue int to stack..",num);
}
void dequ(){
struct Node *temp;
	if(front==NULL)
	printf("**QUEUE IS FULL**");
	
	else{
		temp=front;
		front=front->next;
		printf("Dequeued element is %d",temp->info);
		free(temp);
		
	}
}
void display(){
	
struct Node *temp;
	if(front==NULL)
	printf("**QUAUE IS FULL**");
	else{
		temp=front;
		printf("ELEMENT ARE: \n");
		while(temp!=rear){
			printf("%d-->",temp->info);
			temp=temp->next;
		}
		printf("%d-->",temp->info);
	}
}
