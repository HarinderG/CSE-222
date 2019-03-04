/*
	Harinder Gakhal
	3/1/19
	CSE 222
	Programming Assignment 4
*/

#include "main.h"

//Variables used by main() and ask()
char readIn[120], command, mode, action;
int retValChar, retValNum, num, deleted = 0;

void main(int argc, char const *argv[])
{	

	while(command != 'n')
	{
		printf("Please enter the first number.\n");
		ask();
		if (command == '?')
			synopsis();
	}
	node *root = init(num);

	ask();
	while(command != 'Q')
	{
		switch(command)
		{
			case 's':
				if (search(root, num) == 1)
					printf("FOUND\n");
				else
					printf("NOT FOUND\n");
				break;
			case 'n':
				insert(root, num);
				break;
			case 'd':
				delete(root, num);
				if(deleted == 0)
				{
					printf("NUMBER DOES NOT EXIST IN TREE\n");
				}
				else
					printf("%d REMOVED FROM TREE\n", num);
				break;
			case 'X':
				printf("NLR: ");
				printPreorder(root);
				printf("\nLNR: ");
				printInorder(root);
				printf("\nLRN: ");
				printPostorder(root);
				printf("\n");
				printf("HEIGHT: %d\n", height(root));
				printf("BALANCED: ");

				if(balanced(root) == 1)
					printf("YES\n");
				else
					printf("NO\n");
				break;
			case '?':
				synopsis();
				break;
		}
		ask();
	}
}

void ask()
{
	//Bring in and parse the user's input
	printf("Enter ? for help : ");
	fgets(readIn, 120, stdin);
	retValChar = sscanf(readIn, "%c%d", &command, &num); 	//if char is given, store in command
	retValNum = sscanf(readIn, "%d", &num);			//if int is given, store in num

	//Filter out invalid commands
	while(((retValChar == 1 && command != 'X' && command != '?' && command != 'Q') || (retValChar == 2 && command != 's' && command != 'd')) && retValNum == 0)
	{
		printf("Enter ? for help : ");
		fgets(readIn, 120, stdin);
		retValChar = sscanf(readIn, "%c%d", &command, &num);
		retValNum = sscanf(readIn, "%d", &num);
	}

	if(retValNum == 1)
		command = 'n';
}

//This will give the user a list of possible commands.
void synopsis(){
	printf("\n\nValid commands are:\n");
	printf("List of actions:\n");
	printf("   d #\tdelete # from the tree\n");
	printf("   s #\tsearch for #\n");
	printf("   X\tshow contents and analysis of tree\n");
	printf("   #\t(any number) inserts that number into the tree\n");
	printf("   ?\tgives this help message\n\n");
	printf("   Q\tQuit program.\n\n");
	printf("# may be any legal integer.\n");
	printf("> ");
}