/*
	Harinder Gakhal
	1/31/19
	CSE 222
	Programming Assignment 2 - add
	Function expectation: Insert node into linked list.
	INPUT: Pointer to sentinel node, and number to insert.
	OUTPUT: 0 If system is out of memory, otherwise 1 if successful.
*/

#include "main.h"

int add(node*list, int num)
{
	node *newNode = init();
	newNode->data = num;
	newNode->next = NULL;

	node *current = list->next;
	node *previous = list;

	//Out of memory
	if(newNode == NULL)
		return 0;
	//If LL is empty
	if (list->next == NULL)
	{
		list->next = newNode;
		return 1;
	}
	//Traverse the LL until you find a number greater than the number to insert.
	while(current != NULL)
	{
		if (current->data >= num)
		{
			newNode->next = current;
			previous->next = newNode;
			return 1;
		}
		previous = current;
		current = current->next;
	}
	//Otherwise add node to end of LL.
	previous->next = newNode;
	return 1;
}