// COMMAND LINE UTILITY
// You have to add command line utility to add, subtract multiply two numbers First command line argumet of your  c program must be the operation.
// The next arguments bring the two numbers, For example
// Command.c add 45 4
// 49


// ***************************NOT SOLVED***********************


#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int result = 0;
    float resultDivide;

    if (argv[1] == "add")
    {
        // for (int i = 2; i < argc; i++)
        // {
        //     result = result + ((int)argv[i]);
        // }
        // printf("The sum of the numbers entered is: %d", result);
        printf("The Sum\n");
    }

    // result = 0;
    else if (argv[1] == "subtract")
    {
        // result = ((int)argv[2]) - ((int)argv[3]);
        // printf("The sum of the numbers entered is: %d", result);
        printf("The product");
    }

    else if (argv[1] == "multiply")
    {
        // for (int i = 2; i < argc; i++)
        // {
        //     result = result * ((int)argv[i]);
        // }
        // printf("The sum of the numbers entered is: %d", result);
        printf("The product");
    }

    else if (argv[1] == "divide")
    {
        // resultDivide = ((int)argv[2]) / ((int)argv[3]);
        // printf("%s/%s is: %d", argv[2], argv[3], resultDivide);
        printf("The division");
    }

    return 0;
}