#include <stdio.h>
#include "../libkr.h"

int main()
{
	struct tnode *t = kr_talloc();
	printf("node t has been allocated at %p\n", t);
	return(0);
}
	
