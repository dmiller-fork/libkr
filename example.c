/*
function-owned static pattern, the function uses static storage and returns a pointer to it. The memory persists across calls but is shared and not thread-safe. Use it for simple, fixed-size results when allocation overhead or API simplicity matters. See [pg 80] for explanation of static memory, but I don't think it is explains the idea well enough, so see the example below, for a better understanding.
*/

#include <stdio.h>

int *get_vals(void) {
    static int vals[3] = {1,2,3};
	/*
	for(int i = 0; i < 3; i++)
		vals[i]++;
	*/
    return vals;
}

int main(){
	int* vals = get_vals();
	printf("%d %d %d\n", vals[0], vals[1], vals[2]);
	return(0);
}

//if you want two functions to have access to vals[], then you have to move `static int vals[3] = {1,2,3};` outside the function.
