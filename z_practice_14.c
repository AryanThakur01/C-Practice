#include <stdio.h>
#include "z_practice_14.h"

int main()
{
    printf("%f\n", pi);
    printf("%d\n", square(3));
    printf("%d\n", cube(3));
    #ifdef greetings
    printf("Hello Everyone This is how we can use ifdef\n");
    #endif
    #ifndef greets
    printf("Hello user this is how we can use ifndef\n");
    #endif
    #if google
    printf("This is the usage of #if");
    #endif
    return 0;
}