#include <stdio.h>
#include "../libkr.h"

int main(){
	char* s = "test";
	char* p = kr_strsave(s);
	printf("p is on the alloc stack: %s\n", p);
	kr_free(p);
	return(0);
}
	
