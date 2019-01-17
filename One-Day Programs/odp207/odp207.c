#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void link(struct node *a, struct node *b)
{
	a->next = b;
}