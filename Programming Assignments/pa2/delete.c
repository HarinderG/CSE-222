/*
	Harinder Gakhal
	1/31/19
	CSE 222
	Programming Assignment 2 - delete
	Function expectation: Remove node from linked list.
	INPUT: Pointer to sentinel node, and number to delete.
	OUTPUT: 1 is returned if the deletion is sucessful, otherwise return 0 if number does not exist in linked list.
*/

#include "main.h"

int delete(node*list, int num)
{
	//Check if number is in LL.
	if (search(list, num) == 0)
		return 0;

	node *current = list->next;
	node *previous = list;

	//Traverse LL until number is found.
	while(current != NULL)
	{
		if(current->data == num)
		{
			//Remove node from LL.
			if(current->next != NULL)
				previous->next = current->next;
			else
				previous->next = NULL;
			free(current);
			return 1;
		}
		previous = current;
		current = current->next;		
	}
}