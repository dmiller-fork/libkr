#include <stdio.h>
#include "../libkr.h"

#define MAXLINE 1000

int main() /*find all lines matching pattern*/
{
	char line[MAXLINE];

	while(kr_getline(line, MAXLINE) > 0)
		if(kr_index(line,"the")>=0)
			printf("%s", line);
	return(0);
}
