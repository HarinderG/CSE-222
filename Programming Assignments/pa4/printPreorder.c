/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

void printPreorder(node *root) 
{ 
	if (root == NULL)
		return;
	printf("%d, ", root->data);
	printPreorder(root->left);  
	printPreorder(root->right);  
} 