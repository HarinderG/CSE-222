/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node{
	int data;
	struct node* left;
	struct node* right;
};

typedef struct list list;
struct list{
	struct node *data;
	struct list *next;
};

void printInorder(node *root);
void printPostorder(node *root);
void printPreorder(node *root);
void BFS(node *root);
int insert(node *root, int num);
node *init(int num);
int search(node *root, int num);
node *smallest(node *root);
node *delete(node *root, int num);
int height(node *root);
int pushQueue(list *list, node *data);
int pop(list *list);
void printq(list *qlist);
int balanced(node *root);
void freeList(list *qList);
void ask();
void synopsis();