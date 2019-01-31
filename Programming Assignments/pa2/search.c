/*
	Harinder Gakhal
	1/31/19
	CSE 222
	Programming Assignment 2 - search
	Function expectation: Find if number exists in linked list.
	INPUT: Pointer to sentinel node, and number to search.
	OUTPUT: 1 will be returned if the number is found, otherise 0 is returned.
*/


#include "main.h"

int search(node*list, int number)
{
	node *newList = list->next;

	//Skip traverse if LL is empty
	if (list->next == NULL)
		return 0;
	while(newList != NULL)
	{	
		//Return 1 if number found
		if (newList->data == number)
			return 1;
		newList = newList->next;
	}
	//Otherwise return 0
	return 0;
}