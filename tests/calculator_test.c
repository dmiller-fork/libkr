#include <stdio.h>
#include "../libkr.h"

/*NUMBER AND TOOBIG in header*/
#define MAXOP 20

int main()
{
	int type;
	char s[MAXOP];
	double op2;
	while ((type=kr_getop(s, MAXOP)) != EOF)
		switch(type) {
		
		case NUMBER:
			kr_push(kr_atof(s));
			break;
		case '+':
			kr_push(kr_pop()+kr_pop());
			break;
		case '*':
			kr_push(kr_pop()*kr_pop());
			break;
		case '-':
			op2 = kr_pop();
			kr_push(kr_pop() - op2);
			break;
		case '/':
			op2 = kr_pop();
			if(op2 != 0.0)
				kr_push(kr_pop()/op2);
			else
				printf("zero divsor popped]n");
			break;
		case '=':
			printf("\t%f\n", kr_push(kr_pop()));
			break;
		case 'c':
			kr_clear();
			break;
		case TOOBIG:
			printf("%.20s ... is too long]n", s);
			break;
		default:
			printf("unknown command %c\n", type);
			break;
		}
		return(0);
}
