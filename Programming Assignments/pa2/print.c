#include "main.h"

void print(node* list)
{
	node *newList = list->next;

	if (newList == NULL)
		printf("Linked list is EMPTY.\n");
	while(newList != NULL)
	{
		printf("%d ", newList->data);
		newList = newList->next;
	}
	printf("\n");
}