/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

int insert(node *root, int num)
{
	node *newNode = init(num);

	if(root == NULL)
	{	
		root = malloc(sizeof(node));
		return 1;
	}
	else
	{
		if (root->data > num && root->left == NULL)
			root->left = newNode;
		else if (root->data < num && root->right == NULL)
			root->right = newNode;
		else if (root->data > num)
			insert(root->left, num);
		else if (root->data < num)
			insert(root->right, num);
	}
}