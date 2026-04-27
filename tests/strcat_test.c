#include <stdio.h>
#include "../libkr.h"

int main(){
	char s[1000];
	s[0] = '\0';
	char t[] = "add this and that";
	kr_strcat(s, t);
	printf("strcat: %s\n", s); 
	return(0);
}
