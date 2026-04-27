#include <stdio.h>
#include "../libkr.h"

int main(){
	char c;
	int i, nwhite, nother, ndigit[10];
	nwhite = nother = 0;
	for (i=0; i<10; i++)
		ndigit[i] = 0;
	while((c = getchar()) != EOF)
		kr_digitcount(c, ndigit, &nwhite, &nother);
	
	printf("digits =");
	for(i=0; i<10; i++)
		printf(" %d", ndigit[i]);
	printf("\nwhite space = %d, other = %d\n", nwhite, nother);
	return(0);
}
