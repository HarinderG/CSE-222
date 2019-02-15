/*
	Harinder Gakhal
	2/14/19
	CSE 222
	Programming Assignment 3 - freeList
	Function expectation: Free all nodes from memeory.
	INPUT: Pointer to sentinel node
*/

#include "main.h"

void freeList(node *list)
{
	node *current = list->next;
	node *previous = list;

	//If LL is empty, free sentinel node.
	if (list->next == NULL)
		free(list);
	else
	{
		//Go through all nodes
		while(current != NULL)
		{
			free(previous);
			previous = current;
			current = current->next;
		}
		free(previous);//free last node
	}
}