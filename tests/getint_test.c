#include <stdio.h>
#include "../libkr.h"

int main(){ /* same as atoi but for pointers instead of strings*/
	int value;
	int* output_ptr  = &value;
	int i = kr_getint(output_ptr); 
	printf("the return signal is 10 indicated the \\n character called line feed: %d\n", i);
	printf("integer is: %d\n", *output_ptr);
	return(0);
}
