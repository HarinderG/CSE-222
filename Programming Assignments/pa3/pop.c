/*
	Harinder Gakhal
	2/14/19
	CSE 222
	Programming Assignment 3 - pop
	Function expectation: Remove top of stack/head of queue.
	INPUT: Pointer to sentinel node.
	OUTPUT: 1 is returned if the pop is sucessful, otherwise return 0 if stack/queue is empty.
*/

#include "main.h"

int pop(node*list)
{
	node *temp = list->next;

	//if LL is empty
	if(list->next == NULL)
		return 0;
	else
	{
		list->next = list->next->next;	//Sentinel will skip first node
		printf("%d\n", temp->data);		//display number thats been removed
		free(temp);						//delete tos/head
		return 1;
	}
}