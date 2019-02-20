/*
	Harinder Gakhal
	2/20/19
	CSE 222
	
	ODP240 - Search a trieNode for a single letter

	OVERVIEW

	These next few ODPs will deal with Tries.
	They will use a structure of a trieNode as follows:

	struct trieNode{
		struct trieNode* letters[26];
	 	int EOS;
	};

	the letters[] array consists of 26 pointers, which may be NULL or non-null.
	letters[0] corresponds to the letter 'A'
	letters[1] corresponds to the letter 'B' and so on
	letters[25] corresponds to the letter 'Z'
	EOS is an integer flag (which isn't used for this ODP).

	Your goal is to write a function:

	  int findTrieLetter(struct trieNode* root,char c)

	which accepts a single trieNode pointer, and a letter c
	(which is guaranteed to be an uppercase letter between A and Z, inclusive).

	NOTE: You may assume c is coded using its ASCII code: make your life easier and
	don't write 26 if-statements :)

	Your function should check the corresponding pointer in the letters[] array of root,
	and return:
	   0 if that pointer is NULL
	   1 is that pointer is not NULL
*/
#include <stdlib.h>

struct trieNode{
	struct trieNode* letters[26];
	int EOS;
};

int findTrieLetter(struct trieNode* root, char c)
{
	if(root->letters[c-'A'] == NULL)
		return 0;
	else
		return 1;
}