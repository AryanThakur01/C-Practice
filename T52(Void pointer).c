// VOID POINTER

#include <stdio.h>

int main()
{
    int a = 3324;
    float b = 843.321;
    void *ptr;

    ptr = &a;
    printf("The value of a is: %d\n", *( (int*)ptr ) );

    ptr = &b;
    printf("The value of a is: %f\n", *( (float*)ptr ) );

    return 0;
}