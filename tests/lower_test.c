#include <stdio.h>
#include "../libkr.h"

int main(){
	char c = 'M';
	char m = kr_lower(c);
	printf("lowercase M is: %c\n", m);
	return(0);
}
