#include <stdio.h>
#include "../libkr.h"

int main(){
	int v[] = { 1, 4, 5 };
	printf("position of 4: %d\n", kr_binary(4, v, 3));
	return(0);
}
