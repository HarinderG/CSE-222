#include "main.h"

node* init()
{
	node* newNode = malloc(sizeof(node));
	newNode->next = NULL;
	return newNode;
}