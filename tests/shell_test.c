#include <stdio.h>
#include "../libkr.h"

int main(){

	int nums[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int length = 10;
	kr_shell(nums, length);
	printf("sorted: ");
	for(int i = 0; i < length; i++)
		printf("%d ", nums[i]);
	printf("\n");
	return(0);
}
