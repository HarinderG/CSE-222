#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};


struct node* newnode(int data)
{
	struct node* mNode = malloc(sizeof(struct node));
	mNode->data = data;
	mNode->next = NULL;

	return mNode;
}