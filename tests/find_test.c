#include <stdio.h>
#include "../libkr.h"

int main(int argc, char *argv[])
{
	printf("starting test:\n");
	if(argc!=2)
		printf("usage: need arg to find pattern\n");
	else
		kr_find(argv);
	return(0);
}
