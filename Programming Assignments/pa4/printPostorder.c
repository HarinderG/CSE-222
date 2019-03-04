/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

void printPostorder(node *root) 
{
	if (root == NULL)
		return; 
	printPostorder(root->left); 
	printPostorder(root->right);
	printf("%d, ", root->data); 
}