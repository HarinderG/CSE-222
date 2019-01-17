#include <stdio.h>

struct node{
	int data;
	struct node *next;
};

void set(struct node *myNode){
	myNode->data = myNode->data * 2;
	myNode->next = NULL;
}