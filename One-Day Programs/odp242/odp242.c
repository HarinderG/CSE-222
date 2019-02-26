/*
	Harinder Gakhal
	2/25/19
	CSE 222
	
	ODP242 - Insert a word into a trie

	OVERVIEW

	This ODP continues working with a trie.
	The structure of a trieNode is as follows:

	struct trieNode{
	  struct trieNode* letters[26];
	  int EOS;
	};

	Your goal is to write a function:

	  void addWord(struct trieNode* root,char *word);

	which accepts a single trieNode pointer, and a string named "word"
	(which is guaranteed to consist of only uppercase letters
	 between A and Z, inclusive).

	Your function should add the word to the trie. You may assume the word
	is not already present in the trie.

	To do this, begin with the first letter of the word, check that pointer in
	the root node, and if it is non-NULL, follow it to another node;
	otherwise, create a new (properly-initialized) trieNode, point to it, and continue.

	After following the pointer for the last letter, set EOS=1 in that node.
*/
#include <string.h>
#include <stdlib.h>

struct trieNode{
	struct trieNode *letters[26];
	int EOS;
};

void addWord(struct trieNode *root, char *word)
{
	struct trieNode *temp = root;

	for(int i = 0; i < strlen(word); i++)
	{	
		if(temp->letters[word[i] - 'A'] == NULL)
		{
			struct trieNode *newNode = malloc(sizeof(struct trieNode));
			temp->letters[word[i] - 'A'] = newNode;
		}
		temp = temp->letters[word[i] - 'A'];
	}
	temp->EOS = 1;
}