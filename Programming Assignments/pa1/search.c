/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - search
	Function expectation: Find if number exists in linked list.
	INPUT: An array of nodes, and number to search.
	OUTPUT: 1 will be returned if the number is found, otherise 0 is returned.
*/

#include <stdio.h>
#include "main.h"

int search(node linkedList[], int number)
{
	//Traverse the linked list until you hit the last node
	int i = 0;
	while(linkedList[i].next != MYNULL)
	{
		i = linkedList[i].next;

		//If number found, return 1
		if(linkedList[i].data == number)
			return 1;
	}
	//Otherwise return 0
	return 0;
}