#include <stdio.h>
#include "../libkr.h"

int main(){
	char a = 'a';
	char b = '0';
	char c = '$';
	char x;
	if((x = kr_type(a)) == LETTER)
		printf("variable a is letter: %c\n", a);
	if((x = kr_type(b)) == DIGIT)
		printf("variable b is digit: %c\n", b);
	if((x = kr_type(c)) != DIGIT && x != LETTER)
		printf("variable c is not digit or letter: %c\n", c);
	return(0);
}
