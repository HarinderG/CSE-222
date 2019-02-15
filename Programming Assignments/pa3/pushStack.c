/*
	Harinder Gakhal
	2/14/19
	CSE 222
	Programming Assignment 3 - pushStack
	Function expectation: Push new node into stack.
	INPUT: Pointer to sentinel node, and number to push.
	OUTPUT: 0 If system is out of memory, otherwise 1 if successful.
*/

#include "main.h"

int pushStack(node *list, int num)
{
	node *newNode = init();
	newNode->data = num;

	node *current = list;

	//Out of memory
	if(newNode == NULL)
		return 0;
	else
	{
		//Add node to TOS
		newNode->next = list->next;
		list->next = newNode;
		return 1;
	}
}