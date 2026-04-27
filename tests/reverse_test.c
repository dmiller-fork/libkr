#include <stdio.h>
#include "../libkr.h"

int main(){
	char hello[10] = "hello";
	kr_reverse(hello);
	hello[9] = '\0';
	printf("%s\n", hello);
	return(0);
}
