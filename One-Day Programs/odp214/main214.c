#include <stdio.h>

int hash(char *str, int probe);

int main(int argc, char const *argv[])
{
	char readin[] = {"Hello"};
	//fgets(readin, 100, stdin);
	hash(readin, 10);
	return 0;
}