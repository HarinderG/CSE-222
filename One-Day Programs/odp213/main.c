#include <stdio.h>

int hash(char *str);

int main(int argc, char const *argv[])
{
	char readin[100];
	fgets(readin, 100, stdin);
	hash(readin);
	return 0;
}