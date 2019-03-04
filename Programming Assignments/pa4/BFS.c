/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/
#include "main.h"

void BFS(node *root)
{	
	list *qList = malloc(sizeof(list));
	qList->data = NULL;
	qList->next = NULL;

	pushQueue(qList, root);
	while(qList->next != NULL)
	{	
		printf("%d, ", qList->next->data->data);
		if(qList->next->data->left != NULL)
			pushQueue(qList, qList->next->data->left);
		if (qList->next->data->right != NULL)
			pushQueue(qList, qList->next->data->right);
		pop(qList);
	}
}

int pushQueue(list *blist, node *data)
{
	list *newNode = malloc(sizeof(list));
	newNode->data = data;
	newNode->next = NULL;
	list *current = blist;
	//Out of memory
	if(newNode == NULL)
		return 0;
	while(current != NULL)
	{	
		//Go to end of linked list.
		if(current->next == NULL)
		{
			//add node
			current->next = newNode;
			return 1;
		}
		current = current->next;
	}
}

int pop(list *alist)
{
	list *temp = alist->next;

	//if LL is empty
	if(alist->next == NULL)
		return 0;
	else
	{
		alist->next = alist->next->next;	//Sentinel will skip first node
		free(temp->data);							//delete tos/head
		free(temp);
		return 1;
	}
}

void printq(list* plist)
{
	list *newList = plist->next;

	//Skip traverse if LL is empty
	if (plist->next == NULL)
	{
		printf("QUEUE is empty!\n");
		return;
	}

	printf("HEAD--> ");
	//Traverse LL and print each data value.
	while(newList != NULL)
	{
			printf("%d ", newList->data->data);
		newList = newList->next;
	}
	printf("<--TAIL");
	printf("\n");
}

void freeList(list *iList)
{
	list *current = iList->next;
	list *previous = iList;

	//If LL is empty, free sentinel node.
	if (iList->next == NULL)
		free(iList);
	else
	{
		//Go through all nodes
		while(current != NULL)
		{
			free(previous);
			previous = current;
			current = current->next;
		}
		free(previous);//free last node
	}
}