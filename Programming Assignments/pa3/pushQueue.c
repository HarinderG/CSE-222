/*
	Harinder Gakhal
	2/14/19
	CSE 222
	Programming Assignment 3 - pushQueue
	Function expectation: Push new node into queue.
	INPUT: Pointer to sentinel node, and number to push.
	OUTPUT: 0 If system is out of memory, otherwise 1 if successful.
*/

#include "main.h"

int pushQueue(node*list, int num)
{
	node *newNode = init();
	newNode->data = num;
	node *current = list;

	//Out of memory
	if(newNode == NULL)
		return 0;
	while(current != NULL)
	{	
		//Go to end of linked list.
		if(current->next == NULL)
		{
			//add node
			current->next = newNode;
			return 1;
		}
		current = current->next;
	}
}