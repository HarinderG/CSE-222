/*
	Harinder Gakhal
	1/31/19
	CSE 222
	Programming Assignment 2 - print
	Function expectation: Print the linked list's data values in one line.
	INPUT: Pointer to sentinel node.
	OUTPUT: No return value, but linked list is printed in the terminal.
*/

#include "main.h"

void print(node* list)
{
	node *newList = list->next;

	//Skip traverse if LL is empty
	if (list->next == NULL)
		printf("Linked list is EMPTY.\n");
	//Traverse LL and print each data value.
	while(newList != NULL)
	{
		printf("%d ", newList->data);
		newList = newList->next;
	}
	printf("\n");
}