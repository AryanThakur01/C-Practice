#include <stdio.h>

void add_sub(int *a, int *b)
{
    int temp = *a;
    *a = temp + *b;
    *b = temp - *b;
}

int main()
{
    int a = 4, b = 3;
    add_sub(&a, &b);

    printf("the value of a is %d and the value of b is %d", a, b);
}