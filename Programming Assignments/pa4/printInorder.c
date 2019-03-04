/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

void printInorder(node *root) 
{
	if (root == NULL)
		return; 
	printInorder(root->left);
	printf("%d, ", root->data); 
	printInorder(root->right); 
}