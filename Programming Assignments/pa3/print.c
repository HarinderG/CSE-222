/*
	Harinder Gakhal
	2/14/19
	CSE 222
	Programming Assignment 3 - print
	Function expectation: Print queue or stack accordingly
	INPUT: Pointer to sentinel node, and char specifying list type.
	OUTPUT: No return value, but list will be printed in the terminal.
*/

#include "main.h"

void print(node* list, char c)
{
	node *newList = list->next;

	//Skip traverse if LL is empty
	if (list->next == NULL)
	{
		if(c == 's')
			printf("STACK is empty!\n");
		else if(c == 'q')
			printf("QUEUE is empty!\n");
		return;
	}

	if(c == 's')
		printf("TOS--> ");
	else if(c == 'q')
		printf("HEAD--> ");
	//Traverse LL and print each data value.
	while(newList != NULL)
	{
		printf("%d ", newList->data);
		newList = newList->next;
	}
	if(c == 'q')
		printf("<--TAIL");
	printf("\n");
}