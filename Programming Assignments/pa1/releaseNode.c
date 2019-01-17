/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - releaseNode
	Function expectation: Set node to 'not in use'.
	INPUT: Node array and data value to release.
	OUTPUT: No return value, but linked list will be altered.
*/

#include "main.h"

void releaseNode(node linkedList[], int number)
{
	int i = 0;
	//Traverse LL
	while(linkedList[i].next != MYNULL)
	{
		i = linkedList[i].next;
		//If number is found, set valid to 0
		if(linkedList[i].data == number)
		{
			linkedList[i].valid = 0;
		}
	}
}