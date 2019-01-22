#include "main.h"

int search(node*list, int number)
{
	node *newNode = list->next;

	if (newNode == NULL)
		return 0;
	while(newNode != NULL)
	{
		if(newNode->data == number)
			return 1;
		newNode = newNode->next;
	}
}