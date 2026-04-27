#include <stdio.h>
#include "../libkr.h"

#define SIZE 20
int main(){
	char s[SIZE];
	char t[SIZE] = "hello";
	kr_strcpy(s, t);
	printf("t is: %s\n", t);
	return(0);
}
