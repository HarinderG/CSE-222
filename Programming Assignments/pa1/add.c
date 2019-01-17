/*
	Harinder Gakhal
	1/14/19
	CSE 222
	Programming Assignment 1 - add
	Function expectation: Insert node into linked list.
	INPUT: An array of nodes, and number to insert.
	OUTPUT: 0 If linked list is full, otherwise 1 if successful.
*/

#include <stdio.h>
#include "main.h"

int getNode(node*);

int add(node linkedList[], int number)
{
	//Find empty spot in node array
	int emptyNode = getNode(linkedList);

	//If no empty node found
	if(getNode(linkedList) == -1)
		return 0;
	else
	{
		//Set valid and data to number.
		linkedList[emptyNode].data = number;
		linkedList[emptyNode].valid = 1;

		//First node in the list can skip the sort&add.
		if(emptyNode == 1)
		{
			linkedList[0].next = emptyNode;
			linkedList[emptyNode].next == MYNULL;
			return 1;
		}
		else
		{
			int current = 0, previous = 0;
			//Traverse the LL until you find a number greater than the number to insert.
			do{
				current = linkedList[current].next;
				if(linkedList[current].data >= number){
					//Insert node
					linkedList[emptyNode].next = linkedList[previous].next;
					linkedList[previous].next = emptyNode;
					return 1;
				}
				previous = current;
			}while(linkedList[current].next != MYNULL);
			//Otherwise add node to end of LL.
			linkedList[current].next = emptyNode;
			return 1;
		}
	}
}