#include <stdio.h>
#include "../libkr.h"

#define SIZE 1000
int main(){
	char s[SIZE] = "hello";
	char t[SIZE] = "world";
	printf("strcmp(s, t), negative if t is later alpha: %d\n", kr_strcmp(s,t));
	return(0);
}
