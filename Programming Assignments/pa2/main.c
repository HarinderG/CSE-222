/*
	Harinder Gakhal
	1/31/19
	CSE 222
	Programming Assignment 2 - main
	This main function will allower the user to 
	create, alter, and display the linked list.
*/

#include "main.h"

void main(int argc, char const *argv[])
{
	node *list = init();

	//Initialize variables
	char readIn[20];
	char command;
	int number, retVal;

	//Program starts, and will loop until the user enters x (exit);
	while(command != 'x')
	{
		//Bring in and parse the user's input
		printf("Enter command.\n");
		fgets(readIn, 20, stdin);
		retVal = sscanf(readIn, "%c%d", &command, &number);

		//Filter out invalid commands.
		while((retVal != 2 || (command != 'i' && command != 's' && command != 'd')) && (retVal != 1 || (command != 'p' && command != 'x')))
		{
			synopsis();
			fgets(readIn, 20, stdin);
			retVal = sscanf(readIn, "%c%d", &command, &number); 
		}

		//Perform action according to the command given
		switch(command)
		{
			case 'i':
				if(search(list, number) == 1)
					printf("NODE ALREADY IN LIST\n");
				else if(add(list, number) == 0)
					printf("OUT OF MEMORY\n");
				else
					printf("SUCCESS\n");
				break;
			case 'p':
				print(list);
				break;
			case 's':
				if(search(list, number) == 1)
					printf("FOUND\n");
				else
					printf("NOT FOUND\n"); 
				break;
			case 'd':
				if(search(list, number) == 0)
					printf("NODE NOT FOUND\n");
				else
					delete(list, number);
				break;
		}

	}

	//Free all nodes in the list once user exits program.
	freeList(list);
}

//This will give the user a list of possible commands.
void synopsis(){
	printf("\n\nPlease enter a valid command in the following format:\n");
	printf("[action] [num]\n\n");
	printf("List of actions:\n");
	printf("   i\tInsert a number to the linked list.\n");
	printf("   p\t*Print the linked list.\n");
	printf("   s\tSearch for the given number in the linked list.\n");
	printf("   d\tDelete the node containing the given number in the linked list.\n");
	printf("   x\t*Exit program.\n\n");
	printf("num may be any legal integer.\n");
	printf("* these functions do not need [num].\n\n");
	printf("Enter command.\n");
}