/*
    Harinder Gakhal
    3/1/19
    CSE 222
    Programming Assignment 4
*/
#include "main.h"

node *delete(node *root, int num)
{
    extern int deleted;

    if (root == NULL)
    {
        deleted = 0;
        return root;
    }

    if (num < root->data)
        root->left = delete(root->left, num);
    else if (num > root->data)
        root->right = delete(root->right, num);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            deleted = 1;
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            deleted = 1;
            return temp;
        }
  
        node *temp = smallest(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }

    deleted = 0;
    return root;
}


node *smallest(node *root)
{
    node *current = root;
  
    while (current->left != NULL)
        current = current->left;
  
    return current;
}