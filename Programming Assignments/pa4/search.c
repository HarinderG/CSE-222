/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

int search(node *root, int num)
{
	if(root == NULL)
		return 0;
	if (root->data > num)
		search(root->left, num);
	else if (root->data < num)
		search(root->right, num);
	else if (root->data == num)
		return 1;
	else
		return 0;
}