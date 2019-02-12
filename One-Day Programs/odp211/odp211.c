/*
	Harinder Gakhal
	2/11/19
	CSE 222

	ODP211 - Build a small 3-node tree

	OVERVIEW

	For this ODP, you are to define a struct tnode as follows:

	  struct tnode{
	    int data;
	    struct tnode *left;
	    struct tnode *right;
	  };

	and then make a function named

	  struct tnode* small(int root,int left,int right)

	that builds a 3-node tree as follows:

	 - the root should contain the value passed in the first argument (root)
	 - the left node should contain the value passed in the second argument
	 - the right node should contain the value passed in the third argument
	 - the root should point the the left and right nodes (in the obvious way)
	 - all other nodes' pointers should be NULL

	Return the address of the root as the function's value.
*/
#include <stdlib.h>

struct tnode{
  int data;
  struct tnode *left;
  struct tnode *right;
};

struct tnode *small(int root,int left,int right)
{
	struct tnode *a = malloc(sizeof(struct tnode));
	struct tnode *b = malloc(sizeof(struct tnode));
	struct tnode *c = malloc(sizeof(struct tnode));

	a->data = root;
	b->data = right;
	c->data = left;

	a->right = b;
	a->left = c;

	b->right = NULL;
	b->left = NULL;

	c->right = NULL;
	c->left = NULL;

	return a;
}