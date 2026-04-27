#include <stdio.h>
#include "../libkr.h"

int main()
{	
	char s[] = "this is a test";
	kr_squeeze(s, 's');
	printf("new string without s: %s\n", s);
	return(0);
}
