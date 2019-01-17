/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - init
	Function expectation: Set linked list to default values.
	INPUT: An array of nodes.
	OUTPUT: No return value, but linked list will be altered.
*/

#include "main.h"

void init(node myNode[])
{
	//Sentinel node
	myNode[0].data = 1440;
	myNode[0].next = MYNULL;
	myNode[0].valid = 1;

	//Set rest to default values
	for(int i = 1; i < LISTSIZE; i++)
	{
		myNode[i].data = 0;
		myNode[i].next = MYNULL;
		myNode[i].valid = 0;
	}
}