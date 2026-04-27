#include <stdio.h>
#include "../libkr.h"

int main(){
	char str[20] = "2.111\0 1.2222\0";
	char *ptr[2] = {&str[0], &str[6]};
	//printf("hello: %s, world: %s\n", ptr[0], ptr[1]);
	kr_sortby(ptr, 2, kr_numcmp, kr_swapstr);
	for(int i = 0; i < 2; i++)
		printf("number: %s\n", ptr[i]);
	return(0);
}
	
