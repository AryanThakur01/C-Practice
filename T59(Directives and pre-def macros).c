// DIRECTIVES AND PREDEFINED MACROS

#include <stdio.h>
#include "T54(Dangling pointer).c"        //this will bring the contents of T54.c
#define pi 3.14
#define square(a) a*a

int main()
{
    int var = 0;
    printf("This is me\n");

    int* ptr = functionDangling();  //this wont throw error because we have included contents  of T54.c
    printf("%x\n", ptr);

    float var2 = pi;
    printf("The value of pi is: %f\n", pi);

    printf("The are of the square is; %d", square(20));

    return 0;
}