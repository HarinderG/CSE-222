#include <stdlib.h>
#include <stdio.h>

//Node structure
typedef struct node node;
struct node{
	int data;
	node *next;
};

//Function prototypes used in pa2
node *init();
void print(node * list, char c);
int search(node *list, int number);
int pushQueue(node *list, int number);
int pushStack(node *list, int number);
int pop(node *list);
void synopsis();
void freeList(node *list);
void ask();