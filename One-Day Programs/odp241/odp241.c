/*
	Harinder Gakhal
	2/21/19
	CSE 222
	
	ODP241 - Search a trieNode for a word

	OVERVIEW

	This ODP continues working with a trie.
	The structure of a trieNode is as follows:

	struct trieNode{
	  struct trieNode* letters[26];
	  int EOS;
	};

	Your goal is to write a function:

	  int findWord(struct trieNode* root,char *word);

	which accepts a single trieNode pointer, and a string named "word"
	(which is guaranteed to consist of only uppercase letters
	 between A and Z, inclusive).

	Your function should check to see if the complete word is stored in the trie,
	and return:
	   1 if the word IS found
	   0 if the word is not found

	To do this, begin with the first letter of the word, check that pointer in
	the root node, and if it is non-NULL, follow it to another node;
	take the second letter of the word, check *that* pointer, and if not NULL,
	follow it to another node; check the 3rd letter's pointer; and so on.

	After following the pointer for the last letter, see if EOS=1 in that node.
	If so, then the word is found!

	If not -- or if any of the pointers you try to follow are NULL -- then the word
	is not found.
*/
#include <string.h>

struct trieNode{
	struct trieNode *letters[26];
	int EOS;
};

int findWord(struct trieNode *root, char *word)
{
	struct trieNode *temp = root;
	int len = strlen(word);

	for(int i = 0; i < len; i++)
	{	
		if(temp->letters[word[i] - 'A'] == NULL)
			return 0;
		else
			temp = temp->letters[word[i] - 'A'];
	}
	if (temp->EOS == 1)
		return 1;
}