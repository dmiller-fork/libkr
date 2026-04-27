#include <stdio.h>
#include "../libkr.h"

int main(){
	struct tnode *root;
	char word[MAXWORD];
	word[0] = 'a';
	word[1] = '\0';
	root = NULL;

	printf("pointer root is: %p\n", root);
	root = kr_tree(root, "jump"); 
	printf("pointer root is: %p\n", root);
	kr_treeprint(root);
	return(0);
}
