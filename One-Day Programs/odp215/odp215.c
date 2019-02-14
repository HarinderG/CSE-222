/*
	Harinder Gakhal
	2/13/19
	CSE 222

	ODP215 - find the largest node in a tree's left sub-tree

	OVERVIEW

	For this ODP, you are to write a function named "largest" which accepts
	a pointer to a tree (its root) and returns the largest data value
	in the left sub-tree. You may assume the left sub-tree always exists, i.e.,
	root->left is never NULL.

	Use the algorithm discussed in class (start at the root of the left
	sub-tree, then move as far right as possible to find the largest node).

	The tree is comprised of nodes with the following structure:

	struct node{
	  int data;
	  struct node* left;
	  struct node* right;
	};

	(REMEMBER that the order of these fields is important!)

	The prototype for largest is

	  int largest(struct node *root);
*/
#include <stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

int largest(struct node *root)
{	
	root = root->left;
	while(root->right != NULL)
	{
		if(root->right == NULL)
			return root->data;
		root = root->right;
	}
	return root->data;
}