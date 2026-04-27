#include <stdio.h>
#include "../libkr.h"

int main()
{
	char *string = "hello world";
	int hash = kr_hash(string);
	printf("should be a number between 0 and 100: %d\n", hash);
	return(0);
}
