#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index %d has value of %s \n", i, argv[i]);
    }

    return 0;
}


// T68.exe strings entered
// The above line will count the number of arguments and return it as the value of argc
// argv[]: contains the inputted strings at different indices seperated by space
// Through above method we can design programs that can take arguments from the command line and we can process them through our program