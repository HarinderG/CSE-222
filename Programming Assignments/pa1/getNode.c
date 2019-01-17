/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - getNode
	Function expectation: Find node not in use.
	INPUT: An array of nodes.
	OUTPUT: Index is returned if empty node is found, otherwise MYNULL is returned.
*/

#include "main.h"

int getNode(node linkedList[]){
	//Search the whole LL array
	for (int i = 1; i < LISTSIZE; ++i)
	{
		//If empty node found, return the index value.
		if (linkedList[i].valid == 0)
			return i;
	}
	//Otherwise not found.
	return MYNULL;
}