/*
	Harinder Gakhal
	1/29/19
	CSE 222

	ODP214 - hash function with a probe

	OVERVIEW

	For this ODP, you are to write a new function named "hash" which accepts
	a string and a probe number (int), and returns an integer.
	To calculate the hash, add the ASCII codes of each character in the string.
	THEN add the square of the probe. Then reduce the final sum mod 31.

	Here are some sample hashes:

	STRING    PROBE    HASH VALUE
	Hello       0          4
	Hello       1          5
	Hello       2          8
	Hello       3         13
	Hello      10         11


	The prototype for hash is

	  int hash(char *,int);
*/
#include <string.h>

int hash(char *str, int probe)
{
	int sum = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if(str[i] != '\n')
			sum += str[i];
	}
	sum += probe*probe;
	sum %= 31;

	return sum;
}
