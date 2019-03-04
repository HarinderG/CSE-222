/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/

#include "main.h"

node *init(int num)
{
	node *newNode = malloc(sizeof(node));
	newNode->data = num;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}