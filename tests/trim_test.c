#include <stdio.h>
#include "../libkr.h"

#define MAXLINE 1000

int main(){
	int n;
	char line[MAXLINE];

	while((n=kr_getline(line, MAXLINE))>0){
		kr_trim(line);
		printf("%s<<<\n", line);
	}
	return(0);
}
