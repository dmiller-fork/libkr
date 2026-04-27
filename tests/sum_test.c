#include <stdio.h>
#include "../libkr.h"

#define MAXLINE 100

int main()
{
	double sum=0;
	char line[MAXLINE];
	while(kr_getline(line, MAXLINE) > 0)
		printf("\t%.2f\n",sum+=kr_atof(line));
	return(0);
}
