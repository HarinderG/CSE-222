/*
	Harinder Gakhal
	2/11/19
	CSE 222

	ODP212 - add a node to a one-node tree

	OVERVIEW

	For this ODP, you are to define a struct tnode as follows:

	  struct tnode{
	    int data;
	    struct tnode *left;
	    struct tnode *right;
	  };

	and then make a function named

	  struct tnode* add(struct tnode *root, int n);

	that creates a new node with the value n, and then adds it to the left
	or right side of root (left if n < root->data, right if n > root->data).

	Return the address of the root as the function's value.
*/
#include <stdlib.h>

struct tnode{
  int data;
  struct tnode *left;
  struct tnode *right;
};

struct tnode *add(struct tnode *root, int n)
{
	struct tnode *newNode = malloc(sizeof(struct tnode));
	newNode->data = n;
	newNode->right = NULL;
	newNode->left = NULL;

	if (n < root->data)
		root->left = newNode;
	else if (n > root->data)
		root->right = newNode;

	return root;
}