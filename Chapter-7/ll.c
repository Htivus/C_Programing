/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node* link;
};

typedef struct node NODE;

void display ( NODE* root);
NODE* addroot ( NODE* root, char c);

int main()
{
	printf("Linked list in c\n");
	
	NODE* root = (NODE*)malloc(sizeof(NODE));

	char c;

	while((c=getchar()) != EOF)
	{
		root = addroot(root,c);
	}

	printf("The list: \n");
	
	display(root);

	return 0;
}

void display( NODE* root)
{
	NODE* current = root;
	
	while ( current != NULL ) 
	{
		printf("%c",current->data);
		current = current->link;
	}
	printf("\n");
}

NODE* addroot( NODE* root, char c)
{
	NODE* newnode = (NODE*)malloc(sizeof(NODE));
	newnode->data = c;
	newnode->link = NULL;

	if(root == NULL)
		return newnode;
	
	NODE* temp = root;

	while (temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = newnode;
	
	return root;
}
