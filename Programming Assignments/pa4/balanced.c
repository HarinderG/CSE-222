/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

int balanced(node *root)
{
	if (root == NULL)
	     return 1;
	 int left = height(root->left);
	 int right = height(root->right);
	 return abs(left - right) <= 1 && balanced(root->left) && balanced(root->right);
}