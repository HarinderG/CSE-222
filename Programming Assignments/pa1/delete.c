/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - delete
	Function expectation: Remove node from linked list.
	INPUT: An array of nodes, and number to delete.
	OUTPUT: 1 is returned if the deletion is sucessful, otherwise return 0 if number does not exist in linked list.
*/

#include "main.h"

int search(node *, int number);
void releaseNode(node *, int number);

int delete(node linkedList[], int number)
{
	//Check if number is in LL.
	if(search(linkedList, number) == 0)
		return 0;
	else
	{
		int previous = 0, current = 0;
		//Traverse LL until number is found.
		while(linkedList[current].next != MYNULL)
		{
			current = linkedList[current].next;
			if(linkedList[current].data == number)
			{
				//Remove node from LL.
				releaseNode(linkedList, number);
				linkedList[previous].next = linkedList[current].next;
				linkedList[current].next = MYNULL;
				return 1;
			}
			previous = current;
		}
	}
}