/*
	Harinder Gakhal
	1/24/19
	CSE 222
	ODP209

	ODP209 - Edit a linked list of 3 nodes

	OVERVIEW

	For this ODP, you are to write a function named "edit" which removes
	the middle node of a 3-node linked list.

	     ***********************************
	     * THIS LIST HAS NO SENTINEL NODE! *
	     ***********************************

	You'll be given the address of the first data node. Your function should
	delete the following (second/middle) node.

	The prototype for edit is:
	  void edit(struct node *ptr);

	It should take a linked list as follows:

	    ptr
	  +-----+        +-----+        +-----+
	  |  ?  |  +---->|  ?  |  +---->|  ?  |
	  +-----+  |     +-----+  |     +-----+
	  |     |--+     |     |--+     | NULL|
	  +-----+        +-----+        +-----+

	                    ^
	                    |
	        and remove this node.

*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void edit(struct node *ptr)
{
	ptr->next = ptr->next->next;
}







