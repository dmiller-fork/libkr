#include <stdio.h>
#include "../libkr.h"

int main()
{
	char *def = "hello world";
	char *name = "start";
	struct nlist *pointer = kr_install(name, def);
	printf("should be a pointer: %p\n", pointer);
	printf("print the hash table: \n");
	kr_hashprint();
	return(0);
}
