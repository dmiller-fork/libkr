#include <stdio.h>
#include "../libkr.h"

int main()
{
	char *s1 = "1";
	char *s2 = "2";

	int ans = kr_numcmp(s1, s2);
	if(ans == -1)
		printf("the number %s is less than %s\n", s1, s2);
	else
		printf("kr_numcp error\n");
	return(0);
}
