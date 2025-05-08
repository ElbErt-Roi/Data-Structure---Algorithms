#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	char data;
	struct node* left;
	struct node* right;
};

struct node* newNode(char data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
void preorder(struct node* root)
{
	if(root!=NULL)
	{
		printf("%c ->",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node* root)
{
 	if(root!=NULL)
	 {
	 	inorder(root->left);
	 	printf("%c ->",root->data);
	 	inorder(root->right);
	 }	
}
void postorder(struct node* root)
{
	if(root!=NULL)
	{
		
		postorder(root->left);
		postorder(root->right);
		printf("%c ->",root->data);
	}
}
int main()
{
	struct node* root=newNode('A');
	root->left=newNode('B');
	root->right=newNode('C');
	root->left->left=newNode('D');
	root->left->right=newNode('E');
	root->left->right->left=newNode('F');
	root->left->right->right=newNode('G');
	printf("Preorder traverse1:\n");
	preorder(root);
	
	printf("\nInorder traverse1:\n");
	inorder(root);
	
	printf("\nPostorder traverse1:\n");
	postorder(root);
	
}



