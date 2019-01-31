#include <stdlib.h>
#include <stdio.h>

//Node structure
typedef struct node node;
struct node{
	int data;
	node *next;
};

//Functions prototypes used in pa2
node *init();
void print(node * list);
int search(node *list, int number);
int add(node *list, int number);
int delete(node *list, int number);
void synopsis();
void freeList(node *list);