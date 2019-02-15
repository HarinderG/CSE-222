/*
	Harinder Gakhal
	2/14/19
	CSE 222
	Programming Assignment 3 - main
	This program demonstrates the use of a stack and a queue.
	The main function allows the user to push, pop and print the two
	types of lists.
*/

#include "main.h"

//Variables used by main() and ask()
char readIn[120], command, mode, action;
int retValChar, retValNum, num;

int main(int argc, char const *argv[])
{
	node *stackList = init();
	node *queueList = init();
	mode = 's';//set default mode

	while(mode != 'Q')//run program until user quits.
	{	
		if(mode == 's')
			printf("You are in STACK mode.\n");//show user what mode they are in.

		while(mode == 's')//run stack mode until user switched out of it.
		{
			switch(action)
			{
				case 'p'://pop
					if(pop(stackList) == 0)
						printf("STACK is empty!\n");
					break;
				case 's'://print stack
					print(stackList, 's');
					break;
				case 'u'://push
					if(pushStack(stackList, num) == 0)
						printf("OUT OF MEMORY!\n");
					break;
			}
			ask();
		}

		if(mode == 'q')
			printf("You are in QUEUE mode.\n");

		while(mode == 'q')//run queue mode
		{
			switch(action)
			{
				case 'p'://pop
					if(pop(queueList) == 0)
						printf("QUEUE is empty!\n");
					break;
				case 'q'://print queue
					print(queueList, 'q');
					break;
				case 'u'://push
					if(pushQueue(queueList, num) == 0)
						printf("OUT OF MEMORY!\n");
					break;	
			}
			ask();
		}
	}

	//Free all nodes in queue/stack once user exits program.
	freeList(stackList);
	freeList(queueList);
}

//This will ask the user for a legal command.
void ask()
{
	//Bring in and parse the user's input
	printf("> ");
	fgets(readIn, 120, stdin);
	retValChar = sscanf(readIn, "%c", &command); 	//if char is given, store in command
	retValNum = sscanf(readIn, "%d", &num);			//if int is given, store in num

	//Filter out invalid commands
	while((command != 'p' && command != 'q' && command != 's' && command != 'Q') && retValNum == 0)
	{
		synopsis();
		fgets(readIn, 120, stdin);
		retValChar = sscanf(readIn, "%c", &command);
		retValNum = sscanf(readIn, "%d", &num);
	}

	//assign values to mode and action
	if(retValNum == 0 && (command == 'q' || command == 's' || command == 'Q'))
		mode = command;
	if(retValNum == 0 && (command == 'p' || command == 's' || command == 'q'))
		action = command;
	if(retValNum == 1)
		action = 'u';
}

//This will give the user a list of possible commands.
void synopsis(){
	printf("\n\nPlease enter a valid command:\n");
	printf("List of actions:\n");
	printf("   #\tInsert # into stack or queue.\n");
	printf("   p\tRemove top of stack/head of queue and display.\n");
	printf("   q\tSelect QUEUE mode and display queue.\n");
	printf("   s\tselect STACK mode and display stack.\n");
	printf("   Q\tQuit program.\n\n");
	printf("# may be any legal integer.\n");
	printf("> ");
}