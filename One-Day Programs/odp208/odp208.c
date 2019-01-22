/*
	Harinder Gakhal
	1/22/19
	CSE 222
	ODP208

	ODP208 - Build a list of 3 data nodes and one sentinel

	OVERVIEW:
	For this ODP, you are to write a function named "build" which accepts 3
	integers, builds a linked list containing a sentinel and 3 data nodes,
	and returns a pointer to the sentinel.

	The prototype for build is:
	  struct node* build(int x, int y, int z)

	It should build a linked list as follows:

	   list
	  +-----+        +-----+        +-----+        +-----+
	  |  ?  |  +---->|  x  |  +---->|  y  |  +---->|  z  |
	  +-----+  |     +-----+  |     +-----+  |     +-----+
	  |     |--+     |     |--+     |     |--+     | NULL|
	  +-----+        +-----+        +-----+        +-----+

	and return a pointer to the sentinel node (list).
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* build(int x, int y, int z)
{
	struct node *sentinel = malloc(sizeof(struct node));
	struct node *a = malloc(sizeof(struct node));
	struct node *b = malloc(sizeof(struct node));
	struct node *c = malloc(sizeof(struct node));

	sentinel->data = 1440;
	sentinel->next = a;

	a->data = x;
	a->next = b;

	b->data = y;
	b->next = c;

	c->data = z;
	c->next = NULL;

	return sentinel;
}