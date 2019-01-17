#include <stdio.h>

int getFirst(struct node *LL, int *error);

int main(int argc, char const *argv[]){
	int error;

	struct node linkedList[100];

	linkedList[0].data = 1440;
	linkedList[0].next = -1;
	linkedList[0].valid = 1;

	linkedList[3].data = 34;
	linkedList[3].next = -1;
	linkedList[3].valid = 1;

	printf("DATA at 3 is: %d\n", linkedList[linkedList[0].next].data);

	if(getFirst(linkedList, &error) == 0)
		printf("LINKED LIST IS EMPTY\nError: %d Return: %d\n", error, getFirst(linkedList, &error));
	else
		printf("LINKED LIST IS POPULATED\nError: %d Return: %d\n", error, getFirst(linkedList, &error));
	return 0;

}
