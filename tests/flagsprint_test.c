#include <stdio.h>
#include "../libkr.h"

int main()
{
	struct flags f = {0};
	f.is_extern = 1;
	kr_flagsprint(&f);
	return(0);
}
	
