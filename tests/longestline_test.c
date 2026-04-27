#include <stdio.h>
#include "../libkr.h"

#define MAXLINE 1000

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char save[MAXLINE];

	max = 0;
	while((len = kr_getline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			kr_copy(line, save);
		}
	if(max > 0)
		printf("%s", save);
	return(0);
}
