#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;

    int *i2;
    while (i < 459)
    {
        printf("welcome to codeWithHarry");
        i2 = malloc(3444 * sizeof(int));
        if (i % 100)
        {
            getchar();
            free(i2);                   //Withut this we will encounter a situation of memory leak
        }
        i++;
    }

    return 0;
}