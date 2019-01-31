/*
	Harinder Gakhal
	1/31/19
	CSE 222
	Programming Assignment 2 - init
	Function expectation: Create new sentinel node.
	OUTPUT: Return pointer of new node.
*/

#include "main.h"

node *init()
{
	node *newNode = malloc(sizeof(node));
	newNode->data = 1440;
	newNode->next = NULL;
	return newNode;
}