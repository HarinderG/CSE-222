/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - print
	Function expectation: Print the linked list's data values in one line.
	INPUT: An array of nodes.
	OUTPUT: No return value, but linked list is printed in the terminal.
*/

#include <stdio.h>
#include "main.h"

void print(node linkedList[])
{
	int i = 0;
	//Traverse LL and print each data value.
	do{
		if (linkedList[0].next == MYNULL)
			printf("Linked list is EMPTY.\n");
		else
		{
			i = linkedList[i].next;
			//printf("[%3d] Data: %7d Next: %2d Valid: %d\n", i, linkedList[i].data, linkedList[i].next, linkedList[i].valid);
			printf("%d ", linkedList[i].data);
		}
	}while(linkedList[i].next != MYNULL);
	printf("\n");
}