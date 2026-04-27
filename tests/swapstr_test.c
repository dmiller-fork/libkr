#include <stdio.h>
#include "../libkr.h"

int main(void)
{
    char *a = "hello";
    char *b = "world";

    kr_swapstr(&a, &b);

    printf("now a is: %s and b is %s\n", a, b);
    return 0;
}
