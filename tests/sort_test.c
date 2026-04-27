#include <stdio.h>
#include "../libkr.h"

#define LINES 100

int main()
{
	char *lineptr[LINES];
	int nlines;

	if((nlines = kr_readlines(lineptr, LINES)) > 0){
		kr_sort(lineptr, nlines);
		kr_writelines(lineptr, nlines);
	} else
		printf("input too big to sort\n");
	return(0);
}
