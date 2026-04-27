#include <stdio.h>
#include "../libkr.h"

#define MAXWORD 20

int main()
{
	int t;
	char word[MAXWORD];

	while((t = kr_getword(word, MAXWORD)) != EOF)
		if(t==LETTER)
			printf("the word is: %s\n", word);
		else
			printf("not a word: %c\n", t);
	return(0);
}
