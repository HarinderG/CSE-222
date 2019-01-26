/*
	Harinder Gakhal
	1/25/19
	CSE 222

	ODP210 - Add a new node between the 2nd and 3rd nodes of a list

	OVERVIEW

	For this ODP, you are to write a function named "edit2" which inserts
	a new node between the 2nd and 3rd nodes of a list.

	     ***********************************
	     * THIS LIST HAS NO SENTINEL NODE! *
	     ***********************************

	You'll be given the address of the first data node. Your function should
	create a new node and insert it into the list.

	The prototype for edit2 is:
	  void edit2(int num, struct node *ptr); // new node's data value is "num"

	It should take a linked list as follows:

	                ptr 			a 				b
	              +-----+        +-----+        +-----+
	              |     |  +---->|     |  +---->|     |
	              +-----+  |     +-----+  |     +-----+
	              |  a  |--+     |  b  |--+     |  N  |
	              +-----+        +-----+        +-----+
	                                ^              ^
	                                |              |
	and insert a new node between here    and    here

	giving the list:

	   ptr 				a 				x 				b
	  +-----+        +-----+        +-----+        +-----+
	  |     |  +---->|     |  +---->| num |  +---->|     |
	  +-----+  |     +-----+  |     +-----+  |     +-----+
	  |  a  |--+     |  x  |--+     |  b  |--+     |  N  |
	  +-----+        +-----+        +-----+        +-----+

*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void edit2(int num, struct node *ptr)
{
	struct node *newNode = malloc(sizeof(struct node));
	
	newNode->data = num;

	newNode->next = ptr->next->next;
	ptr->next->next = newNode;
}
