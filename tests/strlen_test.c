#include <stdio.h>
#include "../libkr.h"

int main(){
	int i;
	char* s = "hello word!";
	i = kr_strlen(s);
	printf("string length is: %d\n", i);
	return(0);
}
