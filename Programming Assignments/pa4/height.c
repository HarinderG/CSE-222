/*
    Harinder Gakhal
    3/1/19
    CSE 222
    Programming Assignment 4
*/
#include "main.h"

int height(node *root) 
{ 
    if (root==NULL) 
        return 0; 
    else
    { 
        int leftSide = height(root->left); 
        int rightSide = height(root->right); 

        if (leftSide > rightSide) 
            return(++leftSide); 
        else
        	return(++rightSide); 
    } 
}  