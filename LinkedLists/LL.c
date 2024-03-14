/* WELCOME TO C PROGRAMMING SUVITH */

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int data;
	struct node *next;
}NODE;

void printlist( NODE** head);
int insertleft( NODE* head, int d);
int insertright( NODE* head, int d);
void deleteleft( NODE* head);
void deleteright( NODE* head); 

int main()
{
	NODE ** head;
	
	NODE *root =(NODE *) malloc(sizeof(NODE));
	head = &root;
	root->data = 3;
	root->next = NULL;

	
	printlist(head);
	return 0;
}

void printlist(NODE** head)
{
	NODE *temp = *head;
	
	printf("%d->",temp->data); 
}

