#include "main.h"

node *init();
void print(node* list);
int search(node*list, int number);

int main(int argc, char const *argv[])
{
	node *list = init();
	node *nextNode = init();
	nextNode->data = 999;
	list->next = nextNode;
	print(list);
	int retVal = search(list, 999);

	if (retVal == 1)
	{
		printf("found\n");
	}
	else
		printf("not found\n");
	return 0;
}