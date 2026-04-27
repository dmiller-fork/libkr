#include <stdio.h>
#include "../libkr.h"

int main(){
	struct tnode t = {
		.word = "jump",
		.count = 1,
		.left = NULL,
		.right = NULL
	};

	kr_treeprint(&t);
	return(0);
}
