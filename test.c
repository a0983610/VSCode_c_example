#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;

    printf("Hello, world!\n%d,%d,%d", &a, &b, *(&a - 1));
    return 0;
}