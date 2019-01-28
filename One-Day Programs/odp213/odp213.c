/*
	Harinder Gakhal
	1/28/19
	CSE 222

	ODP213 - hash a string to an integer

	OVERVIEW

	For this ODP, you are to write a function named "hash" which accepts
	a string and returns an integer. To calculate the hash, add the ASCII codes
	of each character in the string. Then reduce the final sum mod 31.

	Note that to add the ASCII codes, you can simply add each character
	(i.e. buffer[i]) to a running integer sum. Use "%" for reducing the sum.

	Here are some sample hashes:

	A: 3
	(A has an ASCII value of 65, and 65%31=3)

	ABC: 12
	(A, B and C have ASCII codes of 65, 66 and 67. 65+66+67=198 and 198%31=12)

	HELLO: 0
	Hello: 4
	HELLP: 1
	HELLN: 30

	Be careful in your testing: strings you read with fgets have a \n appended
	to the end, which will change the hash value.


	The prototype for hash is

	  int hash(char *);
*/

#include <string.h>
#include <stdio.h>

int hash(char *str)
{
	int sum = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if(str[i] != '\n')
			sum += str[i];
	}
	sum %= 31;

	return sum;
}