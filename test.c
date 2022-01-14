#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    //push test
    printf("Hello, world!\n%d,%d,%d", &a, &b, *(&a - 1));
    return 0;
}