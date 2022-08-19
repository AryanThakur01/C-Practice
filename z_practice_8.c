#include <stdio.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    
    char array[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};

    puts(array);

    strrev(array);

    puts(array);


    return 0;
}